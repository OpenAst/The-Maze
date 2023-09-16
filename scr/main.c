#include <..std

/**
 * main - main game loop
 *
 *
 * Return: always 0
 */

int mainint(int argc, int* argv[])
{
	//Initialize SDL
	if (SDL_INIT(SDL_INIT_EVERYTHING) != 0)
	{
		printf("SDL Inititalization failed! %s\n", SDL_GetError());
		return 1;
	}

	//Create a wondow and render
	SDL_Window* window = SDL_CreateWindow("3D GAME", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
	SDL_Renderer* renderer = SDL_CreatRenderer(window, 1, SDL_RENDERER_ACCELERATED);

	//gAME LOOP
	int success = 1;

	while (success) {
		//Handle events
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				success = 0;
			}
		}

		//SDL_RendereClear(renderer);
		SDL_RenderClear(renderer);

		//Render your game objects and world here
