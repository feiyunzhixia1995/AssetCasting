// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IStructureDetailsView.h"

#include "Modules/ModuleManager.h"

class SPakWidget;
class SStaticMeshPakWidget;

class FVTMHotUpdateEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:

	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

	TSharedRef<class SDockTab> OnSpawnPluginTabStaticMesh(const class FSpawnTabArgs& SpawnTabArgs);
private:

	void ExtendMenuByFExtend();

	void AddMenuExtension(FMenuBuilder& Builder);
	void AddStaticMeshMenuExtension(FMenuBuilder& Builder);


	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddStaticMeshToolbarExtension(FToolBarBuilder& Builder);

	/** 在已有拓展点生成一个菜单按钮 */
	void MakeExistingMainMenuEntry(FMenuBuilder& MenuBuilder);
	/** 在已有拓展点生成菜单按钮的调用事件 */
	void ExistingMainMenuEntryAction();

	/** 生成一个ToolBar按钮 */
	void MakeToolBarEntry(FToolBarBuilder& ToolBarBuilder);
	/** 在ToolBar按钮点击时触发事件 */
	void ToolBarEntryAction();

	TSharedRef<SWidget> HandlePickingModeContextMenu();
	TSharedRef<SWidget> HandlePickingModeContextMenuStaticMesh();
	void PluginButtonClicked(const int32& _type);

public:
	//下载地址textbox
	TSharedPtr<SEditableTextBox> DownloadURLSettingTextBox;

	//输出地址textbox
	TSharedPtr<SEditableTextBox> OutPutSettingTextBox;

	TSharedPtr<SPakWidget> PakWidget;

	TSharedPtr<SStaticMeshPakWidget> PakWidgetStaticMesh;

	TSharedPtr<SDockTab> DockTab;

	bool bIsSingleFile = false;


};
