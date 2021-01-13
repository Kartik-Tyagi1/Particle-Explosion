/*
 * Swarm.cpp
 *
 *  Created on: Jan 8, 2021
 *      Author: kartiktyagi
 */

#include "Swarm.h"

namespace kartikspace {

Swarm::Swarm(): lastTime(0) {
	m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
	delete [] m_pParticles;
}

void Swarm::update(int elapsed_time){

	int interval = elapsed_time - lastTime;

	// This is a lower case update. This uses the Update from the particle.h to move the particles
	for(int i = 0; i < NPARTICLES; i++){
		m_pParticles[i].Update(interval);
	}

	lastTime = elapsed_time;

	/*
	 * We will find the amount of time between each iteration of the loop
	 * This ensures that the program will run at the same speed on each machine
	 * Instead of the machine just going as fast as possible, we will manage the update time
	 */
	//
}

} /* namespace kartikspace */
