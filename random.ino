#include "beta-cube-library.h"
#include <math.h>

Cube cube = Cube();
Color test;
bool notred = false;
bool notgreen = false;
bool notblue = false;
int randomish;
void setup(){
	cube.begin();
	cube.background(Color(0,0,0));
}

void loop(){
	randomish = rand() % 1000;
	if(randomish % 2 == 0){
		for(int x=0;x<cube.size;x++){
			for(int y=0;y<cube.size;y++){
				for(int z=0;z<cube.size;z++){
					cube.setVoxel(x,y,z, Color(rand() % 20 +1, rand() % 20 +1, rand() % 20 +1));   
					cube.show();
				}
			}
		}
	}
	else{
		for(int z=0;z<cube.size;z++){
			for(int x=0;x<cube.size;x++){
				for(int y=0;y<cube.size;y++){
					cube.setVoxel(x,y,z, Color(rand() % 20 +1, rand() % 20 +1, rand() % 20 +1));   
					cube.show();
				}
			}
		}
	}
	cube.background(Color(0,0,0));
	// if(notred == true && notgreen == true && notblue == true){
	// 	test = Color(rand() % 255 +1, rand() % 255 +1, rand() % 255 +1);
	// 	notred = false;
	// 	notblue = false;
	// 	notgreen = false;
	// 	cube.background(test);
	// }	
}
