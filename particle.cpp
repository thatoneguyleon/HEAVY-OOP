#include "particle.h"



Particle::Particle(){

}

void Particle::init() {
	radius = ofRandom(5, 20);
	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() / 2;

	speed.x = ofRandom(-2, 2);
	speed.y = ofRandom(-2, 2);


	outerColor = ofColor(250, 241, 155, 15);//grote basiskleur
	innerColor = ofColor(242, 169, 51, 127);//core basiskleur, RGB + transpirantie 

}

void Particle::move() {
	location = location + speed;

}

void Particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(location, radius * 2);
	
	ofSetColor(innerColor);
	ofDrawCircle(location, radius);
}

void Particle::setColors(ofColor outer, ofColor inner) {
	outerColor = outer;
	innerColor = inner;
}