#include "beta-cube-library.h"
#include <math.h>

Cube cube = Cube();
Color test;
bool notred = false;
bool notgreen = false;
bool notblue = false;
void setup(){
	cube.begin();
	cube.background(Color(rand() % 255 +1, rand() % 255 +1, rand() % 255 +1));
}

void loop(){
	for(int x=0;x<cube.size;x++){
		for(int y=0;y<cube.size;y++){
			for(int z=0;z<cube.size;z++){
				test=cube.getVoxel(x,y,z);
				if(test.red>0){
					test.red--;
				}
				else{
					notred = true;
				}
				if(test.green>0){
					 test.green--;
				}
				else{
					notgreen = true;
				}
				if(test.blue>0){
					test.blue--;
				}
				else{
					notblue = true;
				}
				cube.setVoxel(x,y,z, test);   
				if(notred == true && notgreen == true && notblue == true){
					test = Color(rand() % 255 +1, rand() % 255 +1, rand() % 255 +1);
					notred = false;
					notblue = false;
					notgreen = false;
					cube.background(test);
				} 
			}
		}
	}
	// if(notred == true && notgreen == true && notblue == true){
	// 	test = Color(rand() % 255 +1, rand() % 255 +1, rand() % 255 +1);
	// 	notred = false;
	// 	notblue = false;
	// 	notgreen = false;
	// 	cube.background(test);
	// }
	delay(10);
	cube.show();  //send the data to the cube
	
}
