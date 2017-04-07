#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleEmitter.h"

//aantal particles die tegelijk word emit
#define MAX_PARTICLES 50

//#define MAX_TIME 150

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);
	
	private:
		Particle* particles[MAX_PARTICLES];

		ParticleEmitter emitter;
};