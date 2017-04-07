#include "particle.h"

//particles.erase(i);

Particle::Particle(){
}

void Particle::init(int x, int y) {
	radius = ofRandom(5, 20); //wat doet dit?
	location.x = ofGetWidth() / 2; //beginlocatie horizontaal?
	location.y = ofGetHeight() / 2; //beginlocatie verticaal?

//aantal particles
	float random = ofRandom(40);

// snelheid van de particle
	speed.x = ofRandom(-0.1, 0.1);
	speed.y = ofRandom(-0.1, 0.1);

//	kleur van de particle
	if (random < 10) {
		setColors(ofColor(252, 245, 35, 500)); //geel
	}

	else if (random >= 10 && random < 20) {
		setColors(ofColor(245, 108, 39, 500)); //donkerrood
	}
	
	else if (random >= 20 && random < 30) {
		setColors( ofColor(242, 169, 51, 500)); //donkergeel
	}

	else if (random >= 30) {
		setColors(ofColor(250, 241, 155, 500));
	}

	//levensduur van de particles
//	lifetime = 10;
}

void Particle::move() {
	location = location + speed;
	lifetime++;
}

void Particle::draw() {
	ofSetColor(innerColor);
	ofDrawCircle(location, radius);

//	if (lifetime > 500) {
//		particles.erase(i);
//	}
}

void Particle::setColors( ofColor inner) {
	innerColor = inner;//core basiskleur, RGB + transpirantie 
}