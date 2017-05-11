#pragma once

#include "snail\snail.h"

namespace Snail {
	
SN_API class Display
{
private:
	int width;
	int height;
	const char* title;
	GLFWwindow* window;
public:
	Display(int width, int height, const char* title);
	~Display();

	bool isClosed() const;
	void clear() const;
	void update() const;
private:
	bool init();
};

}