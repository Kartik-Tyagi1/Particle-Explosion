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
	const static int NPARTICLES = 3000;

private:
	Particle *  m_pParticles;
	int lastTime;


public:
	Swarm();
	virtual ~Swarm();
	const Particle * const getParticles() { return m_pParticles; };
	void update(int elapsed_time);

};

} /* namespace kartikspace */

#endif /* SWARM_H_ */
