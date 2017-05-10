#include "Display.h"

namespace Snail {


Display::Display(int width, int height, const char* title)
{
	this->width = width;
	this->height = height;
	this->title = title;
	this->init();
}

Display::~Display()
{
	glfwTerminate();
}

bool Display::isClosed()
{
	return glfwWindowShouldClose(this->window);
}

void Display::update()
{
	glfwPollEvents();
	glfwSwapBuffers(window);
}

bool Display::init()
{
	if (!glfwInit()) {
		std::cout << "Failed to init GLFW!" << std::endl;
		return false;
	}
	this->window = glfwCreateWindow(this->width, this->height, this->title, NULL, NULL);

	if (!this->window) {
		std::cout << "Failed to create window!" << std::endl;
		return false;
	}
	glfwMakeContextCurrent(this->window);
	return true;
}

}