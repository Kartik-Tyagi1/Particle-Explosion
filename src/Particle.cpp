/*
 * Particle.cpp
 *
 *  Created on: Jan 8, 2021
 *      Author: kartiktyagi
 */

#include "Particle.h"
#include <math.h>
#include <stdlib.h>

namespace kartikspace {

Particle::Particle(): m_x(0), m_y(0) {

	init();

}

void Particle::init(){

	m_x = 0;
	m_y = 0;

	// Get the particles to move in a circle so we use polar coordinates
	m_direction = (2 * M_PI * rand())/RAND_MAX;
	m_speed = (0.001 * rand())/RAND_MAX;

}


Particle::~Particle() {
	// TODO Auto-generated destructor stub
}


void Particle::Update(int interval){

	m_direction += interval * 0.0003;

	double xspeed = m_speed * cos(m_direction);
	double yspeed = m_speed * sin(m_direction);

	m_x += xspeed * interval;
	m_y += yspeed * interval;

	/*
	 * We multiply the speed by the interval to ensure the the amount we move each particle by
	 * is proportional to the amount of time that has passed since we last moved the particle
	 *
	 * Could be jerky on slow machines
	 */


	// Following allows regeneration of particles that leave the screen area
	if(m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1){
		init();
	}


}

} /* namespace kartikspace */
