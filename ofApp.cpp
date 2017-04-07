#include "ofApp.h"

void ofApp::setup(){
	ofSetBackgroundColor(ofColor::black);

	emitter = ParticleEmitter();

	emitter.init();

	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = emitter.emit();
	}
	
	//particles.erase(i);??
}

//is dit de speed? 
void ofApp::update(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->move();
	}
	emitter.move(particles);			//wat moet ik hier invullen. 'Particle* particles' kan niet en 'particles' kan niet.
}

//is dit de hoeveelheid particles of de grootte?
void ofApp::draw(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->draw();
	}

	emitter.draw();
}

void ofApp::keyPressed(int key){
	for (int i = 0; i < MAX_PARTICLES; i++) {

	}
}
