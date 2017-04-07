#include "ofApp.h"

void ofApp::setup(){
	ofSetBackgroundColor(ofColor::black);

	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = emitter.emit();
	}

	//particles.erase(i);??
	//emitter1 en 2 defineren.
}

//is dit de speed? 
void ofApp::update(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->move();
	}
}

//is dit de hoeveelheid particles of de grootte?
void ofApp::draw(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->draw();
	}
}

//hoe zorg je dat je continu emit?
//hoe zorg ik dat particles worden geemit wanneer ik op een toets druk?
void ofApp::keyPressed(int key){
	for (int i = 0; i < MAX_PARTICLES; i++) {
	}
}