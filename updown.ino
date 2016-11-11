#include "beta-cube-library.h"
#include <math.h>

Cube cube = Cube();
Color test;
bool up = false;
float r = 0;
float g = 40;
float b = 0;
float targetR = 0;
float targetG = 40;
float targetB = 0;
void setup(){
	cube.begin();
}

void loop(){
	if(up == false){
		if(r > 0){
			r--;
		}
		if(g > 0){
			g--;
		}
		if(b > 0){
			b--;
		}
		test = Color(r,g,b);
		if(r == 0 && g == 0 && b == 0){
			up = true;
			targetR = rand() % 30;
			targetG = rand() % 30;
			targetB = rand() % 30;
		}
	}
	else{
		if(r < targetR){
			r++;
		}
		if(g < targetG){
			g++;
		}
		if(b < targetB){
			b++;
		}
		if(r == targetR && g == targetG && b == targetB){
			up = false;
		}
	}
	cube.background(Color(r,g,b));
	delay(10);
	cube.show();  //send the data to the cube
}
