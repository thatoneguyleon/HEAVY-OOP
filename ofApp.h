#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleEmitter.h"

//waarvoor is dit?
#define MAX_PARTICLES 50

class ofApp : public ofBaseApp{

	public:
		void setup();

		void update();

		void draw();

		void keyPressed(int key);

	private:
		Particle* particles[MAX_PARTICLES];

};