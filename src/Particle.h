/*
 * Particle.h
 *
 *  Created on: Jan 8, 2021
 *      Author: kartiktyagi
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace kartikspace {

struct Particle {

	double m_x;
	double m_y;

public:
	Particle();
	virtual ~Particle();
};

} /* namespace kartikspace */

#endif /* PARTICLE_H_ */
