#include "Screen.h"

Graphics::Screen::Screen(std::pair<int, int> screenSize)
	: screenSize(screenSize) {}

Graphics::Screen::~Screen() {}

void Graphics::Screen::draw()
{
	int const numberOfScreenCharacters = screenSize.first * screenSize.second;
	for (int i = 0; i <= numberOfScreenCharacters; i++)
	{
		std::cout << i << std::endl;
	}
	system("pause");
}
