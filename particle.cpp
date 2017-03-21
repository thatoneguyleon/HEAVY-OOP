#include "particle.h"



Particle::Particle(){

}

void Particle::init() {
	radius = ofRandom(5, 20);
	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() / 2;

	speed.x = ofRandom(-2, 2);
	speed.y = ofRandom(-2, 2);

	//kleur van de particle
//	outerColor = ofColor(250, 241, 155, 15);//grote basiskleur
//	innerColor = ofColor(242, 169, 51, 127);//core basiskleur, RGB + transpirantie 
}

void Particle::setRandomColor() {
	float random = ofRandom(10);
	if (random > 3 && random < 7) {
			setColors(ofColor(242, 239, 143, 15), ofColor(252, 245, 35, 127)); // momenteel lichtgeel en donkergeel
		}
		else if (random >= 7) {
			setColors(ofColor(242, 157, 114, 15), ofColor(245, 108, 39, 127)); // momenteel lichtrood en donkerrood
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
	outerColor = outer;
	innerColor = inner;
}