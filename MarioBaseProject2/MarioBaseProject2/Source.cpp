#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include "constants.h"
#include <iostream>
using namespace std;

//globals
SDL_Window* g_window = nullptr;
SDL_Renderer* g_renderer = nullptr;
SDL_Texture* g_texture = nullptr;
//function prototypes
bool InitSDL();
void CloseSDl();
bool update();
void Render();
SDL_Texture* LoadTextureFromFile(string path);
void FreeTexture();

int main(int argc, char* args[])
{
	if (InitSDL())
	{
		//flag to check is we wish to quit
		bool quit = false;
		//game loop
		while (!quit)
		{
			quit = update();
		}
	}
	CloseSDl();
	return 0;
}

bool InitSDL()
{
	//setup SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		cout << "SDL did not initialise. ERROR: : " << SDL_GetError();
		return false;
	}
	else
	{
		//setup passed so create window
		g_window = SDL_CreateWindow("Games Engine Creation", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		g_renderer = SDL_CreateRenderer(g_window, -1, SDL_RENDERER_ACCELERATED);
		if (g_renderer != nullptr)
		{
			//init PNG loading
			int imageFlags = IMG_INIT_PNG;
			if (!(IMG_Init(imageFlags) & imageFlags))
			{
				cout << "SDL_Image could not initialise. ERROR: " << IMG_GetError();
				return false;
			}
		else
		{
			cout << "Renderer could not initialise. ERROR: " << SDL_GetError();
			return false;
		}
		}
		//did the window get created?
		if (g_window == nullptr)
		{
			//window failed
			cout << "Window was not created. ERROR: " << SDL_GetError();
			return false;
		}
		else
		{
			return true;
		}
	}
	SDL_DestroyWindow(g_window);
	g_window = nullptr;
	IMG_Quit();
	SDL_Quit();
}

void CloseSDl()
{

}
bool update()
{
	//event handler
	SDL_Event e;
	//getevents
	SDL_PollEvent(&e);
	//handle the events
	switch (e.type)
	{
		//click the X to quit
	case SDL_QUIT:
		return true;
		break;
	}
	return false;
}
void render()
{
	//clear the screen
	SDL_SetRenderDrawColor(g_renderer, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderClear(g_renderer);
	//set where to render the texture
	SDL_Rect renderLocation = { 0,0,SCREEN_WIDTH,SCREEN_HEIGHT };
	SDL_RenderCopyEx(g_renderer, g_texture, NULL, &renderLocation, 0, NULL, SDL_FLIP_NONE);
	//update the screen
	SDL_RenderPresent(g_renderer);

}

SDL_Texture* LoadTextureFromFile(string path)
{
	//remove memory used for a pervious texture
	FreeTexture();
	SDL_Texture* p_texture = nullptr;
	//load the image
	SDL_Surface* p_surface = IMG_Load(path.c_str());
	if (p_surface != nullptr)
	{
		 
	}
}
