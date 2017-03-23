#include "particle.h"

//particles.erase(i);

Particle::Particle(){

}

void Particle::init(int x, int y) {
	radius = ofRandom(5, 20);
	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() / 2;
	float random = ofRandom(20); //aantal particles

// snelheid van de particle
	speed.x = ofRandom(-0.1, 0.1);
	speed.y = ofRandom(-0.1, 0.1);

//	kleur van de particle
	if (random < 7) {
		setColors(ofColor(242, 239, 143, 15), ofColor(252, 245, 35, 127)); // momenteel lichtgeel en donkergeel
	}
	else if (random >= 7 && random < 15) {
		setColors(ofColor(242, 157, 114, 15), ofColor(245, 108, 39, 127)); // momenteel lichtrood en donkerrood
	}
	else if (random >= 15) {
		setColors(ofColor(250, 241, 155, 15), ofColor(242, 169, 51, 127));
	}
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
	outerColor = outer; //grote basiskleur
	innerColor = inner;//core basiskleur, RGB + transpirantie 
}