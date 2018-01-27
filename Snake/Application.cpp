#include <iostream>
#include "Application.hpp"
#include "Game.hpp"

Application::Application() {}

Application::~Application() {}

void Application::run()
{
	Game game;
	game.run();
}
