#include "beta-cube-library.h"
#include <math.h>

Cube cube = Cube();
Color test;
bool up = false;
int r = 0;
int g = 255;
int b = 0;
int targetR = 0;
int targetG = 200;
int targetB = 200;
void setup(){
	cube.begin();
	cube.background(Color(targetR, targetG, targetB));
}

void loop(){
	// if(up == false){
	// 	if(r > 0){
	// 		r--;
	// 	}
	// 	if(g > 0){
	// 		g--;
	// 	}
	// 	if(b > 0){
	// 		b--;
	// 	}
	// 	test = Color(r,g,b);
	// 	if(r == 0 && g == 0 && b == 0){
	// 		up = true;
	// 	}
	// }
	// else{
	// 	if(r < targetR){
	// 		r++;
	// 	}
	// 	if(g < targetG){
	// 		g++;
	// 	}
	// 	if(b < targetB){
	// 		b++;
	// 	}
	// 	if(r == targetR && g == targetG && b == targetB){
	// 		up = false;
	// 	}
	// }

	cube.background(Color(0, 0, 0));
	delay(300);
	cube.show();  //send the data to the cube
}
