#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include "constants.h"
#include "Texture2D.h"
#include "Commons.h"
#include <iostream>
using namespace std;

//globals
SDL_Window* g_window = nullptr;
SDL_Renderer* g_renderer = nullptr;
Texture2D* g_texture = nullptr;
//function prototypes
bool InitSDL();
void CloseSDl();
bool update();
//void Render();
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
			//Render(Vector2D(0,0), SDL_RendererFlip::SDL_FLIP_NONE, 0);
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
			g_texture = new Texture2D(g_renderer);
			if (!g_texture->LoadFromFile("Images/test.bmp"))
			{
				return false;
			}
			if (g_texture == nullptr)
			{
				return false;
			}
		}
		else
		{
			cout << "Renderer could not initialise. ERROR: " << SDL_GetError();
			return false;
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
	
}

void CloseSDl()
{
//	SDL_DestroyWindow(g_window);
//	g_window = nullptr;
//	
//	//clear the texture
//	FreeTexture();
//	//release the renderer
	SDL_DestroyRenderer(g_renderer);
	g_renderer = nullptr;
	IMG_Quit();
	SDL_Quit();
	// release the texture
	delete g_texture;
	g_texture = nullptr;
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

void Texture2D::Render(Vector2D new_position, SDL_RendererFlip flip, double angle)
{
	//clear the screen
	SDL_SetRenderDrawColor(g_renderer, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderClear(g_renderer);

	g_texture->Render(Vector2D(), SDL_FLIP_NONE);

	////set where to render the texture
	//SDL_Rect renderLocation = { 0,0,SCREEN_WIDTH,SCREEN_HEIGHT };
	//SDL_RenderCopyEx(g_renderer, g_texture, NULL, &renderLocation, 0, NULL, SDL_FLIP_NONE);
	//update the screen
	SDL_RenderPresent(g_renderer);

}



//void FreeTexture()
//{
//	//check if texture exists before removing it
//	if (g_texture != nullptr)
//	{
//		SDL_DestroyTexture(g_texture);
//		g_texture = nullptr;
//	}
//}
