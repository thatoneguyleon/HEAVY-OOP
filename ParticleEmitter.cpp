#include "ParticleEmitter.h"

Particle* ParticleEmitter::emit() {
	Particle* newParticle;
	newParticle = new Particle();
	newParticle->init(originX, originY);

	return newParticle;
}

void ParticleEmitter::setOrigin(int x, int y) {
	originX = x;
	originY = y;
}

void ParticleEmitter::setColours(ofColor innerColour, ofColor outerColor) {
	inner = innerColour;
	outer = outerColor;
}


//ParticleEmitter::ParticleEmitter()
//{
//}


//ParticleEmitter::~ParticleEmitter()
//{
//}
