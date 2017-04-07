#include "ParticleEmitter.h"

void ParticleEmitter::init() {
	innerColor = ofColor(245, 108, 39, 500);
	radius = 10;
	movementRadius = 200;
	speed = -0.5;
//	location.x = ofGetWidth() / 2; //beginlocatie horizontaal?
//	location.y = ofGetHeight() / 2; //beginlocatie verticaal?
}

Particle* ParticleEmitter::emit() {
	Particle* newParticle;
	newParticle = new Particle();
	newParticle->init(location);
	return newParticle;
}

void ParticleEmitter::setOrigin(int x, int y) {
	originX = x;
	originY = y;
}

void ParticleEmitter::draw() {
	ofSetColor(innerColor);
	ofDrawCircle(location, radius);
}

void ParticleEmitter::setColours(ofColor innerColour) {
	inner = innerColour;
}

void ParticleEmitter::move(Particle* *particles) {
	location.x = sin(ofGetElapsedTimeMillis()*speed / 150)*movementRadius + ofGetWidth() / 2;
	location.y = cos(ofGetElapsedTimeMillis()*speed / 150)*movementRadius + ofGetHeight() / 2;
	
	delay++;

	if (delay > 60)
	{
		particleCounter++;

		if (particleCounter > MAX_PARTICLES-1) {
			particleCounter = 0;
		}

		particles[particleCounter]->init(location);

		delay = 0;
	}
}