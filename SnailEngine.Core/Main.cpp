#include "Snail.h"
#include <FileIO\FileIO.h>
#include <Snail\Math\Math.h>
int main()
{
	using namespace Snail;

	Display window(960, 540, "MyWindow");

	glClearColor(0.2f, 0.3f, 0.3f, 1);

	std::cout << glGetString(GL_VERSION) << std::endl;

	Math::Vec2 a(1, 2);
	Math::Vec2 b(1, 2);
	Math::Vec2 c = a + b;

	while (!window.isClosed()) {
		window.clear();

		glBegin(GL_TRIANGLES);
		glVertex2d(-0.5f, -0.5f);
		glVertex2d(0.0f, 0.5f);
		glVertex2d(0.5f, -0.5f);
		glEnd();
		window.update();
	}

	system("PAUSE");
	return 0;
}
