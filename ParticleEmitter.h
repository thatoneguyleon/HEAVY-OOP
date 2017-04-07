#pragma once
#include "particle.h"

#define MAX_PARTICLES 50

class ParticleEmitter {
	public:

		void setOrigin(int x, int y);
		void draw();
		void setColours(ofColor innerColour);
		Particle* emit();
		void init();
		void move(Particle* particles[]);
		int particleCounter;
		int delay;

		ofColor innerColor;

		ofPoint location;
		int radius;

		double speed;
		int movementRadius;


	protected:
		int originX;
		int originY;
		ofColor inner;
};

