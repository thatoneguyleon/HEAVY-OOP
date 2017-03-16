#include "particle.h"



particle::particle(){

}

void particle::init() {
	radius = ofRandom(5, 20);
	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() / 2;

	speed.x = ofRandom(-2, 2);
	speed.y = ofRandom(-2, 2);

	innerColor = ofColor(31, 127, 255, 127); //RGB + transpirantie
	outerColor = ofColor(128, 255, 255, 15);

}

void particle::move() {
	location = location + speed;

}

void particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(location, radius * 2);
	
	ofSetColor(innerColor);
	ofDrawCircle(location, radius);
}