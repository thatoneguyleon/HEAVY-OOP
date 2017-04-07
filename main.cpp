#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}

//opdrachten
//lifespan maken. particle destroyed verloop van tijd.
	//maak de lifespan random tussen 2 waardes
//continu emitten wanneer je op knop drukt. nog een keer drukken stopt emitter.
//emitter laten bewegen
	//in een cirkel laten bewegen
//outerColor weghalen
//speed random tussen 2 waardes, deze speed veranderd nadat hij geemit is niet meer.
//particles in bepaalde richting laten bewegen


//vragen
//mijn speed veranderd soms. hoe komt dit?
//ik heb geen idee hoe ik lifespan kan implementeren.
//ik snap die hele vector niet.
//ik snap die hele push back niet.
//hoe zorg je dat je continu emit?
//hoe zorg ik dat particles worden geemit wanneer ik op een toets druk?
//wat moet ik bij ofApp.cpp onder void update bij emitter.move invullen?