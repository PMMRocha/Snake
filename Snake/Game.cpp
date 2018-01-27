#include "Game.hpp"
#include "Screen.h"


Game::Game() {}

Game::~Game() {}

void Game::run()
{
	Graphics::Screen screen(std::make_pair(20, 20));
	screen.draw();
}
