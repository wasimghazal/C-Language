/***************************************************\
| Assignmet#2                                       |
| 			                	    |
| Author:Wasim G Aswad		           	    |
| Student ID: 17193559                              |
| Last Change:15/11/2019    			    |
|					            |
\***************************************************/

#include "ThreeDimensional.h"

double cubeVolume (double side){ //6 to find the volume of the cube
double Volume = S3M;
return Volume;
}

double cubeArea (double side){  //6 to find the area of the cube
double Area = 6 * ( cubeVolume (side) * cubeVolume (side) );
return Area;
}

double rectangularArea(double length, double height, double width){ //7 to find the area of the rectangular
double Area = (2 * length * height) + (2 * length * width) + (2 * height * width);
return Area;
}

double rectangularVolume(double length, double height, double width){//7 to find the volume of the rectangular
double Volume = length * height * width;
return Volume;
}

double sphereArea(double radius){ //8 to find the area of the sphere
double Area = 4 * PI * R2;
return Area;
}

double sphereVolume(double radius){ //8 to find the volume of the sphere
double Volume = (4 * PI * R3) / 3;
return Volume;
}

double rightCircularCylinderArea(double radius, double height){  //9 to find the area of the Right Circular Cylinder
double Area = (2 * PI * radius * height ) + (2 * PI * R2);
return Area;
}

double rightCircularCylinderVolume(double radius, double height){ //9 to find the volume of the Right Circular Cylinder
double Volume = PI * R2 * height;
return Volume;
}

