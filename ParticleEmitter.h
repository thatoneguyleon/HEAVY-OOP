#pragma once
#include "particle.h"

class ParticleEmitter {
	public:

		void setOrigin(int x, int y);
		void setColours(ofColor innerColour);

		Particle* emit();

	protected:
		int originX;
		int originY;
		ofColor inner;
};

