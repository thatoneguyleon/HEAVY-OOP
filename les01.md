# les01
huiswerk voor les OOP

huiswerk les 01:
bekijk het filmpje van het eindproduct en doe voor jezelf de OO analyse nog eens:
-welke objecten spelen volgens jouw een rol?
-wat zijn de attributen(variabelen) van die objecten?
-wat voor gedrag moeten die objecten hebben?

maak C++ classes voor de objecten die je bedacht hebt.

Je hoeft de methodes nier hte implementeren - geef ze alleen een naam, en commentaar wat ze zouden moeten doen.

declareer wel de attributem(variabelen) die je nodig denkt te hebben.

//
//
Antwoord:
//
opdracht 1:

OO analyse: 

Objecten: Cirkels

Atributen: beginlocatie, kleur 
(klopt dit?)

Methodes(gedrag): richting, bewegingssnelheid, grootte veranderingssnelheid, object vernietiging        (klopt dit? vooral grootte weet                                                                                                         ik niet)

relaties: hoe sneller een object object beweegd, hoe sneller deze ook groeit en krimpt.

//
opdracht 2:

Class: 

	orb

attributes:

	color, location

methodes(gedrag):

	size, movementspeed, direction

//
opdracht 3:

C++ classes

class Circle {

	private:
  
		int radius;
    
		float MovementSpeed;
    
		float SizeSpeed
 
 
	public:
  
		Circle(int w,int h);                      (grootte)
    
    void setMovementSpeed(float a);
    
    void setSizeSpeed(float a);
    
    int area();                               (omgeving)
    
    col( c, d, e);                            (kleur)
    
    
	void draw();
  
}


Circle::Circle(int r) {

	radius = r;
  
}


int Circle::area() {

	return 2*PI*radius;
  
}


void Circle::draw() {

	ofDrawCircle(...);
  
}
