#include <iostream>+6
#pragma once
namespace Graphics
{
	class Screen
	{
		std::pair<int, int> screenSize;
	public:
		Screen(std::pair<int, int> screenSize);
		~Screen();
		void draw();
	};
}

