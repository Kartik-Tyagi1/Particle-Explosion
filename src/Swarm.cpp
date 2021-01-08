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

} /* namespace kartikspace */
