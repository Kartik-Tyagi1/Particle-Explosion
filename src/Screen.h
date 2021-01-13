/*
 * Screen.h
 *
 *  Created on: Nov 6, 2020
 *      Author: kartiktyagi
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL.h>

namespace kartikspace {

class Screen {
public:
	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer1;
	Uint32 *m_buffer2;

public:
	Screen();
	bool init();
	bool processEvents();
	void Update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	void close();
	void clear();
	void boxBlur();

};

} /* namespace kartikspace */

#endif /* SCREEN_H_ */
