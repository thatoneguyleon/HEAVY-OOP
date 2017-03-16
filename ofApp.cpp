#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(ofColor::black);

	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = new Particle();
		particles[i]->init();
	}

}

//--------------------------------------------------------------
//is dit de speed?
void ofApp::update(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->move();
	}
}

//--------------------------------------------------------------
//is dit de hoeveelheid particles of de grootte?
void ofApp::draw(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = new Particle();
		particles[i]->init();
		setRandomColor(particles[i]);
	}
}

//waarom staat hier een deel en ergens anders nog een deel met een andere kleur?

void ofApp::setRandomColor(Particle* particle) {
	float random = ofRandom(10);
	if (random > 3 && random < 7) {
		particle->setColors(ofColor(242, 239, 143, 15), ofColor(252, 245, 35, 127)); // momenteel lichtgeel en donkergeel
	}
	else if (random >= 7) {
		particle->setColors(ofColor(242, 157, 114, 15), ofColor(245, 108, 39, 127)); // momenteel lichtrood en donkerrood
	}
}
