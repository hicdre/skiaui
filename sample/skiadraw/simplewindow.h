#pragma once

class SimpleWindow 
	: public SkOSWindow 
{
public:
	SimpleWindow(void* hwnd, int argc, char** argv);
	virtual ~SimpleWindow();
};