/*
 * Swarm.cpp
 *
 *  Created on: Jan 8, 2021
 *      Author: kartiktyagi
 */

#include "Swarm.h"

namespace kartikspace {

Swarm::Swarm() {
	m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
	delete [] m_pParticles;
}

void Swarm::update(){
	// This is a lowercase update. This uses the Update from the particle.h to move the particles
	for(int i = 0; i < NPARTICLES; i++){
		m_pParticles[i].Update();
	}
}

} /* namespace kartikspace */
