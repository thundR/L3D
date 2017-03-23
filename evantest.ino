#include "beta-cube-library.h"

Cube cube = Cube();

void setup() {
    /*
    Color red = Color(204, 58, 38);
    Color green = Color(82, 204, 38);
    Color blue = Color(0,0,15);
    Color orange = Color(15,0,0);
    Color yellow = Color(15,0,0);
    Color white = Color(15,0,0);
    */
    cube.begin();

    cube.background(Color(10,10,30));
    for( int x = 0; x < 8; x++ ) {
        for( int y = 0; y < 2; y++ ) {
            for( int z = 0; z < 8; z++ ) {
                cube.setVoxel(x, y, z, Color(10,0,0));
            }
        }
    }
    cube.show();

}


void loop() {


    cube.show();
}
/*
Color helper(Color color) {
    color.r = color.r / 8.0;
    color.g = color.g / 8.0;
    color.b = color.b / 8.0;
    return color;
}
*/
