/*
 * Swarm.h
 *
 *  Created on: Jan 8, 2021
 *      Author: kartiktyagi
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace kartikspace {

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	Particle *  m_pParticles;


public:
	Swarm();
	virtual ~Swarm();
	const Particle * const getParticles() { return m_pParticles; };

};

} /* namespace kartikspace */

#endif /* SWARM_H_ */
