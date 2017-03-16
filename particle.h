#pragma once

# include "ofMain.h"
class particle {

private:
	ofPoint location;
	int radius;
	ofColor color;
	ofVec2f speed;
	long lifetime;

	ofColor innerColor;
	ofColor outerColor;

public:
	particle(); //constructor
	
	void init();
	void move();
	void draw();



};

