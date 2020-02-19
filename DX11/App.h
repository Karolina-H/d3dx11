#pragma once
#include "Window.h"
#include "kTimer.h"

class App
{
public:
	App();
	// master frame / message loop
	int Go();
private:
	void DoFrame();
private:
	Window wnd;
	kTimer timer;
};