#pragma once
#include "Module.h"
#include "Globals.h"
#include "glmath.h"

class ModuleImGui : public Module {
public:
	ModuleImGui(Application* app, bool start_enabled = true);
	~ModuleImGui();

	bool Init();
	update_status PreUpdate(float dt);
	update_status Update(float dt);
	update_status PostUpdate(float dt);
	bool CleanUp();

	void UI();
private:
	// Booleans to activate menus that are not shown
	// about -> Information about the engine
	// showcase -> Imgui Demo window
	bool about = false, showcase = false;

	//Booleans to change the properties of our window
	bool fullscreen, resizable, borderless, fullDesktop;

	//Bool to set Vsync
	bool vsync;
};