#include <iostream>
#include <SDL.h>

int main(int argc, char* argv[])
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	}

	//Erstelle neues Fenster mit Bezeichner Test, an Position 100/50, mit den Maßen 640/480 und irgendein konfuses Flag
	SDL_Window* window = SDL_CreateWindow("Test", 100, 50, 640, 480, SDL_WINDOW_SHOWN);

	//Creating a renderer on SDL_Window "window"
	SDL_Renderer* renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_ACCELERATED);


	//TODO: Bild importieren



	SDL_Event e;
	double i = 0;
	while (true) 
	{
		while (SDL_PollEvent(&e)) 
		{
		
		
		}




		SDL_RenderClear(renderer);
		i += 0.001;
		
		
		SDL_SetRenderDrawColor(renderer, (sin(i) + 1) / 2 * 255, 0, 0, 255);
		SDL_RenderPresent(renderer);
	
	
	}

	SDL_Quit();
	return 0;
}