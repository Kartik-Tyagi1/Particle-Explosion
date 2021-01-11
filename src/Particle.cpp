/*
 * Particle.cpp
 *
 *  Created on: Jan 8, 2021
 *      Author: kartiktyagi
 */

#include "Particle.h"
#include <stdlib.h>

namespace kartikspace {

Particle::Particle() {

	// Generates coordinates between -1 and 1
	m_x = ((2.0 * rand())/RAND_MAX) - 1;
	m_y = ((2.0 * rand())/RAND_MAX) - 1;

	m_xspeed = 0.005 * (((2.0 * rand())/RAND_MAX) - 1);
	m_yspeed = 0.005 * (((2.0 * rand())/RAND_MAX) - 1);


}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}


void Particle::Update(){

	m_x += m_xspeed;
	m_y += m_yspeed;

	// The following if statements prevent the particles from leaving the screen

	if(m_x <= -1.0 || m_x >= 1.0){
		m_xspeed = -m_xspeed;
	}

	if(m_y <= -1.0 || m_y >= 1.0){
			m_yspeed = -m_yspeed;
	}


}

} /* namespace kartikspace */
