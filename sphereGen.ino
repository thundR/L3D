#include "beta-cube-library.h"
#include <math.h>

Cube cube = Cube();
float thick = 1;
int coords[3];
Color colors[6];

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
	for(int x=0;x<7;x++){
		colors[x] = generateColor();
	}
	for(int x=0;x<3;x++){
		coords[x] = rand() % 7;
	}
	for(float x= 0.0f;x<22;x+=0.6f){
		int diff = 0;
		for(int y=0;y<7;y++){
			if(y <= 5){
				cube.shell(Point(coords[0],coords[1],coords[2]), x-diff, thick, colors[y]);
			}
			else{
				cube.shell(Point(coords[0],coords[1],coords[2]), x-diff, thick, Color(0,0,0));
			}
			diff += 2;
		}
		cube.show();
	}
}

void loop(){
	sphere();
	cube.background(Color(0,0,0));
	cube.show();
}
