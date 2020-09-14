/***************************************************\
| Assignmet#2                                       |
| 			                	    |
| Author:Wasim G Aswad		           	    |
| Student ID: 17193559                              |
| Last Change:15/11/2019    			    |
|					            |
\***************************************************/

#ifndef TWODIMENSIONAL_H 
#define TWODIMENSIONAL_H 


// using a multi defines to helps for the some calculations
#define PI 3.1415926
#define R2 radius * radius
#define R3 radius * radius * radius
#define S2M side * side
#define S3M side * side * side 
#define S3P side1 + side2 + side3

double squareArea(double side);
double squarePerimeter(double side);
double rectangleArea(double length , double width);
double rectanglePerimeter(double length , double width);
double circleArea(double radius);
double circleCircumference(double radius);
double triangleArea(double base,double height);
double trianglePerimeter(double side1, double side2, double side3);
double parallelogramArea(double base,double height);
double parallelogramPerimeter(double base, double sideA);

#endif
