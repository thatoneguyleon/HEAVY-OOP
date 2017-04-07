#pragma once

# include "ofMain.h"
class Particle {

private:
	ofPoint location;
	int radius;
	ofColor color;
	ofVec2f speed;
	long lifetime;

	ofColor innerColor;

public:
	Particle(); //constructor
	
	void init(ofPoint startLocation);
	void move();
	void draw();
	void setColors(ofColor inner);
};

