/***************************************************\
| Assignmet#2                                       |
| 			                	    |
| Author:Wasim G Aswad		           	    |
| Student ID: 17193559                              |
| Last Change:15/11/2019    			    |
|					            |
\***************************************************/

#ifndef THREEDIMENSIONAL_H
#define THREEDIMENSIONAL_H 

// using a multi defines to helps for the some calculations
#define PI 3.1415926  
#define R2 radius * radius 
#define R3 radius * radius * radius
#define S2M side * side
#define S3M side * side * side 
#define S3P side1 + side2 + side3

double cubeVolume (double side); 
double cubeArea (double side);
double rectangularArea(double length, double height, double width);
double rectangularVolume(double length, double height, double width);
double sphereArea(double radius);
double sphereVolume(double radius);
double rightCircularCylinderArea(double radius, double height);
double rightCircularCylinderVolume(double radius, double height);

#endif
