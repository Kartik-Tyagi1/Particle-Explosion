/*
 * main.cpp
 *
 *  Created on: Nov 3, 2020
 *      Author: kartiktyagi
 */
#include <iostream>
#include <SDL.h>
#include <math.h>
#include <stdlib.h>
#include "Screen.h"
#include "Swarm.h"
using namespace std;
using namespace kartikspace;

int main() {

	srand(time(NULL));

	Screen screen;

	if(screen.init() == false){
		cout << "Error initializing SDL" << endl;
	}

	Swarm swarm;

	int half_screen_width = screen.SCREEN_WIDTH/2;
	int half_screen_height = screen.SCREEN_HEIGHT/2;


	while(true){
		// UPDATE PARTICLES
		// DRAW PARTICLES

		// We want to colors to wax and wane and we can do this using the sin function
		// it moves from -1 to 1 but we can change it to get to our desired values

		// Unsigned is for security just in case we put in a value that is greater than 255
		int elapsed_time = SDL_GetTicks();

		swarm.update(elapsed_time);

		unsigned char green = (unsigned char)((1 + sin(elapsed_time * 0.001)) * 128);
		unsigned char red = (unsigned char)((1 + sin(elapsed_time * 0.002)) * 128);
		unsigned char blue = (unsigned char)((1 + sin(elapsed_time * 0.003)) * 128);

		const Particle * const pParticles = swarm.getParticles();

		for(int i = 0; i < Swarm::NPARTICLES; i++){
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * half_screen_width;

			// We want to get the animation to be in a circle so we have to adjust the location of the y
			// Because the screen is not a square in dimension

			int y = particle.m_y * half_screen_width + half_screen_height;

			screen.setPixel(x,y,red,green,blue);


		}

		screen.boxBlur();

		// Draw on the screen
		screen.Update();

		// Check for events
		if(screen.processEvents() == false){
			break;
		}
	}


	screen.close();



	return 0;
}




