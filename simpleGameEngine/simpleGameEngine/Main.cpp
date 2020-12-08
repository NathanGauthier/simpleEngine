#include <SDL.h>
#include "Game.h"
int main(int argc, char** argv)
{
	bool isGameInit = Game::instance().initialize();
	if (isGameInit)
	{
		Game::instance().load();
		Game::instance().loop();
		Game::instance().unload();

	}
	Game::instance().close();
	return 0;
}















































/*
int main(int argc, char** argv)
{
	
	const int WINDOW_WIDTH = 800;
	const int WINDOW_HEIGHT = 800;

	SDL_Window* window = nullptr;
	SDL_Init(SDL_INIT_VIDEO);
	window = SDL_CreateWindow("Simple game engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);

	SDL_Delay(2000);
	SDL_DestroyWindow(window);
	SDL_Quit();

	
	
	
	
	
	
	
	
	
	return 0;
}*/