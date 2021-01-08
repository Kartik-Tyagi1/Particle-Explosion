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


}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

} /* namespace kartikspace */
