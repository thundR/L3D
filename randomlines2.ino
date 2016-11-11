#include "beta-cube-library.h"
#include <math.h>

Cube cube = Cube();
Color test;
bool notred = false;
bool notgreen = false;
bool notblue = false;
int a,b,c,d,e,f;
void setup(){
	cube.begin();
	cube.background(Color(0,0,0));
}

void loop(){
	a = rand() % 8;
	b = rand() % 8;
	c = rand() % 8;
	d = rand() % 8;
	e = rand() % 8;
	f = rand() % 8;
	cube.line(a,b,c,d,e,f,Color(rand() % 20 +1, rand() % 20 +1, rand() % 20 +1));   
	cube.line(a,b,c,d,e,f,Color(rand() % 20 +1, rand() % 20 +1, rand() % 20 +1));
	cube.line(a,b,c,d,e,f,Color(rand() % 20 +1, rand() % 20 +1, rand() % 20 +1));
	cube.line(a,b,c,d,e,f,Color(rand() % 20 +1, rand() % 20 +1, rand() % 20 +1));
	cube.line(a,b,c,d,e,f,Color(rand() % 20 +1, rand() % 20 +1, rand() % 20 +1));
	cube.line(a,b,c,d,e,f,Color(rand() % 20 +1, rand() % 20 +1, rand() % 20 +1));
	cube.line(a,b,c,d,e,f,Color(rand() % 20 +1, rand() % 20 +1, rand() % 20 +1));
	cube.line(a,b,c,d,e,f,Color(rand() % 20 +1, rand() % 20 +1, rand() % 20 +1));
	cube.background(Color(0,0,0));
	// if(notred == true && notgreen == true && notblue == true){
	// 	test = Color(rand() % 255 +1, rand() % 255 +1, rand() % 255 +1);
	// 	notred = false;
	// 	notblue = false;
	// 	notgreen = false;
	// 	cube.background(test);
	// }	
}
