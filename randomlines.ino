#include "beta-cube-library.h"
#include <math.h>

Cube cube = Cube();
Color test;
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
					cube.line(x,y,z,cube.size-4,cube.size-4,cube.size-4,Color(rand() % 20 +1, rand() % 20 +1, rand() % 20 +1));   
					cube.show();
				}
			}
		}
	}
	else{
		for(int z=0;z<cube.size;z++){
			for(int x=0;x<cube.size;x++){
				for(int y=0;y<cube.size;y++){
					cube.line(x,y,z,cube.size-4,cube.size-4,cube.size-4,Color(rand() % 20 +1, rand() % 20 +1, rand() % 20 +1));   
					cube.show();
				}
			}
		}
	}
	cube.background(Color(0,0,0));
}
