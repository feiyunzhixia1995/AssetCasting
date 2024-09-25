// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once


// engine header
#include "Interfaces/ITargetPlatformManagerModule.h"
#include "Interfaces/ITargetPlatform.h"
#include "Templates/SharedPointer.h"
#include "IDetailsView.h"
#include "PropertyEditorModule.h"
#include "Widgets/Text/SMultiLineEditableText.h"
#include "IStructureDetailsView.h"
#include "Interfaces/ITargetPlatform.h"
#include "Templates/SharedPointer.h"
#include "IDetailsView.h"

#include "PropertyEditorModule.h"

#include "Widgets/Text/SMultiLineEditableText.h"
#include <Widgets/SCompoundWidget.h>

#include "StaticMeshPakSettings.h"
/**
 * Implements the cooked platforms panel.
 */
class ASceneCapture2D;
class AStaticMeshActor;
class SStaticMeshPakWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SStaticMeshPakWidget) { }
	SLATE_END_ARGS()
public:
	/**
	 * Constructs the widget.
	 *
	 * @param InArgs The Slate argument list.
	 */
	void Construct(	const FArguments& InArgs);

	void CreateExportFilterListView();

private:

	TSharedPtr<IStructureDetailsView> SettingsView;

	TSharedPtr<FStaticMeshPakSettings> PakSetting;


	TSharedPtr<SEditableTextBox> StartInput;

	TSharedPtr<SEditableTextBox> EndInput;

	TSharedPtr<SVerticalBox> PreviewBox;

	TSharedPtr<STextBlock> LogBox;

	int32 Start = 0;
	int32 End = 0;
	int32 Current = 0;
	int32 PreviewCount = 0;

	FOutPutJsonData allCombineData;

	ASceneCapture2D* SceneCaptureActor;
	AStaticMeshActor* PreviewActor;

	UPROPERTY()
	TArray<FSlateBrush*> PreviewBrushs;

public :

	FPakSettings* GetPakSetting() { return PakSetting.Get(); }


	UFUNCTION()
	FReply OnConfirmClicked();

	UFUNCTION()
	FReply OnPreviewClicked();

	UFUNCTION()
	FReply OnInputComfirmClicked(const int32& _start, const int32& _end);

	UFUNCTION()
	EActiveTimerReturnType  OnTimerTick(double InCurrentTime, float InDeltaTime);

	void CreatePreviewWindow();

	UFUNCTION()
	FReply GetCurrentLevelInfo();
};