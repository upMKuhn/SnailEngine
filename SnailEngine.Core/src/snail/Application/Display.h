#pragma once

#include "snail\snail.h"

namespace Snail {
	
	class SN_API Display
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
		bool initGLFW();
		bool initGLEW();
	};

}