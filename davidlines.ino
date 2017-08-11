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

void line(){
	Color colors[20];
	int random = (rand() % 20 + 1);
	for(int x= 0;x<random;x++){
		colors[x] = generateColor();
		cube.line(rand() % 7, rand() % 7, rand() % 7, rand() % 7, rand() % 7, rand() % 7, colors[x]);
		cube.show();
		delay(20);
	}
	delay(100);
	cube.background(Color(0,0,0));
	cube.show();

}

void loop(){
	line();

}
