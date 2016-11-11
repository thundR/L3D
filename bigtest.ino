#include "beta-cube-library.h"
#include <math.h>

Cube cube = Cube();
Color test;
Color test2;
Color test3;
bool notred = false;
bool notgreen = false;
bool notblue = false;
int a,b,c,d,e,f;
float radius = 5;
float thick = 1;
void setup(){
	cube.begin();
	cube.background(Color(0,0,0));
}

Color generateColor(){
	Color color;
	int rgb = rand() % 6 + 1;
	if(rgb == 1){
		color = Color(rand() % 20 +10, 0, 0);
	}
	if(rgb == 2){
		color = Color(0, rand() % 20 +10, 0);	
	}
	if(rgb == 3){
		color = Color(0, 0, rand() % 20 +10);
	}
	if(rgb == 4){
		color = Color(rand() % 20 +10, rand() % 20 +10, 0);
	}
	if(rgb == 5){
		color = Color(0, rand() % 20 +10, rand() % 20 +10);	
	}
	if(rgb == 6){
		color = Color(rand() % 20 +10, 0, rand() % 20 +10);
	}
	return color;
}

void sphere(){
	Color color1 = generateColor();
	Color color2 = generateColor();
	Color color3 = generateColor();
	Color color4 = generateColor();
	for(float x= 0.0f;x<10;x+=0.4f){
		cube.shell(Point(3.5f,3.5f,3.5f), x, thick, color1);
		cube.shell(Point(3.5f,3.5f,3.5f), x-2, thick, color2);
		cube.shell(Point(3.5f,3.5f,3.5f), x-4, thick, color3);
		cube.shell(Point(3.5f,3.5f,3.5f), x-6, thick, color4);
		cube.show();
	}

}
void loop(){
	sphere();

}
