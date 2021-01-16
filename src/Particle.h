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

private:
	double m_speed;
	double m_direction;

private:
	void init();

public:
	Particle();
	virtual ~Particle();
	void Update(int interval);
};

} /* namespace kartikspace */

#endif /* PARTICLE_H_ */
