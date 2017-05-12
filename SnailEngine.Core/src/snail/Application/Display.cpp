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
	
	assert(initGLFW() && initGLEW());

	this->window = glfwCreateWindow(this->width, this->height, this->title, NULL, NULL);

	if (!this->window) {
		std::cout << "Failed to create window!" << std::endl;
		return false;
	}

	glfwMakeContextCurrent(this->window);
	glfwSetWindowSizeCallback(window, onWindowResized);

	return true;
}
	

bool Snail::Display::initGLFW()
{
	int initResult = glfwInit();
	if (!initResult)
		std::cout << "Failed to init GLFW! Error: " << initResult << std::endl;
	return initResult;
}

bool Snail::Display::initGLEW()
{
	GLenum initResult = glewInit();
	bool initOk = initResult != GLEW_OK;
	if (!initOk)
		std::cout << "Error GLEW init failed: " << initResult << std::endl;
	return initOk;
}


void onWindowResized(GLFWwindow*, int width, int height)
{
	glViewport(0, 0, width, height);
}

}
