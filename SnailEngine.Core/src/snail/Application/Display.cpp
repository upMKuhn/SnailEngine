#include "Display.h"

namespace Snail {

	void onWindowResized(GLFWwindow*, int width, int height);

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

bool Display::isClosed() const
{
	return glfwWindowShouldClose(this->window) == 1;
}

void Display::clear()  const {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void Display::update() const
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

	glfwSetWindowSizeCallback(window, onWindowResized);

	return true;
}
	
void onWindowResized(GLFWwindow*, int width, int height)
{
	glViewport(0, 0, width, height);
}

}
