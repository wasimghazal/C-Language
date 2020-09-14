/***************************************************\
| Assignmet#2                                       |
| 			                	    |
| Author:Wasim G Aswad		           	    |
| Student ID: 17193559                              |
| Last Change:15/11/2019    			    |
|					            |
|###################################################|
|                  # Explanation #                  |
|                  ###############                  |
|This program performs some calculations for two    |
|and three dimensional calculate such as 	    |
|(area , perimeter and volume) of:		    |
|1. Square , 2. Rectangle , 3. Circle, 4. Triangle  |
|5. Parallelogram, 6. Cube, 7. Rectangular Prism    |
|8. Sphere and 9. Right Circular Cylinder.          |
|by two ways enter a user or a default number of    |
|values	where it is 5,00.			    |
\***************************************************/
// to compile we use 
// gcc -Wall -ggdb -std=c11 -o Assignment#2 Assignment#2.c ThreeDimensional.c TwoDimensional.c

#include <stdlib.h>
#include <stdio.h>
#include "TwoDimensional.h"
#include "ThreeDimensional.h"
#include <stdbool.h>
//#define D 5                   //the default value if the user choose the second option

int
main ()
{
  double D = 5.00;		//the default value if the user choose the second option
  bool Default;
  int input;
  bool menu = true;
  bool infinityLoop = true;

// the infinityLoop be sure not exit the program until the user choose exit
  while (infinityLoop)
    {

      // the menu loop will activeit one start the program and if the user
      // shooce (10 back).
      while (menu)
	{
	  printf ("\n+++++++++++++++++++++++++++++++++++++++++++++++++++");
	  printf ("\nPlease select one of the option proivide below:\n");
	  printf ("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	  printf ("1.\tChoose the value of the Input.\n");
	  printf ("2.\tDefault value, where it is (%.2f).\n", D);
	  printf ("\n0.\tExit.\n");
	  scanf ("%i", &input);	// enter value to choose 
	  if (input == 1)
	    {			// choice the value of the Input
	      menu = false;	// to broke the menu loop   
	      Default = false;	// decactive the Default option
	      break;
	    }
	  else if (input == 2)
	    {			// default value
	      menu = false;	// to broke the menu loop
	      Default = true;	// active the Default option
	      break;
	    }
	  else
	    {			
	      exit (0); // exit the program if the user choose any another input
	    }


	}// finish the first loop
      // the program will contunie show the menu until the user choose
      // (10 back) where it will change the value of the (menu = true) 
      while (!menu)
	{
	  printf ("\n+++++++++++++++++++++++++++++++++++++++++++++++++++");
	  printf ("\nPlease select one of the option provided below:\n");
	  printf ("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	  printf ("\t2D Shapes.\t");
	  printf ("\t3D Shapes.\n");
	  printf ("\t===========\t\t===========\n");
	  printf ("\t1.  Square.\t");
	  printf ("\t6.  Cube.\n");
	  printf ("\t2.  Rectangle\t");
	  printf ("\t7.  Rectangular Prism.\n");
	  printf ("\t3.  Circle.\t");
	  printf ("\t8.  Sphere.\n");
	  printf ("\t4.  Triangle.\t");
	  printf ("\t9.  Right Circular Cylinder.\n");
	  printf ("\t5.  Parallelogram.\t");
	  printf ("\n\n\t\t\t10. Back.\n");
	  printf ("\t\t\t0.  Exit.\n");
	  scanf ("%i", &input);

	  if (input == 0)
	    {			
	      exit (0); // exit the program if the user choose 0
	    }
	  else if (input == 10)
	    {			// if the user choose 10 it will go back to the first loop
	      menu = true;	// change the value of the (menu = true) to break the loop
	      break;		// break the loop
	    }
	  // If the user chooses the second option, they do not 
	  // need to enter any values to do the calculation 
	  if (Default)
	    {
	      if (input == 1)
		{		// Square calculation with the default value
		  printf ("\nIf the side value of the Square = 5\n");
		  printf ("Square area = %.2f\t", squareArea (D));
		  printf ("Square perimeter = %.2f\n", squarePerimeter (D));
		}
	      else if (input == 2)
		{		// Rectangle calculation with the default value
		  printf ("\nIf the length value of the Rectangle = %.2f\n",
			  D);
		  printf ("\nand the width value of the Rectangle = %.2f\n",
			  D);
		  printf ("Rectangle area = %.2f\t", rectangleArea (D, D));
		  printf ("Rectangle perimeter = %.2f\n",
			  rectanglePerimeter (10, 5));
		}
	      else if (input == 3)
		{		// Circle calculation with the default value
		  printf ("\nIf the radius value of the Circle = %.2f\n", D);
		  printf ("Circle area = %.2f\t", circleArea (D));
		  printf ("Circle circumference = %.2f\n",
			  circleCircumference (D));
		}
	      else if (input == 4)
		{		// Triangle calculation with the default value.
		  printf
		    ("\nIf the base, height and sides values of the triangle all = %.2f\n",
		     D);
		  printf ("Triangle area = %.2f\t", triangleArea (D, D));
		  printf ("Triangle perimeter = %.2f\n",
			  trianglePerimeter (D, D, D));
		}
	      else if (input == 5)
		{		// Parallelogram calculation with the default value.
		  printf ("\nIf the base value of the Parallelogram = %.2f\n",
			  D);
		  printf
		    ("\nIf the height value of the Parallelogram = %.2f\n",
		     D);
		  printf ("\nIf the side value of the Parallelogram = %.2f\n",
			  D);
		  printf ("Parallelogram area = %.2f\t",
			  parallelogramArea (D, D));
		  printf ("Parallelogram perimeter = %.2f\n",
			  parallelogramPerimeter (D, D));
		}
	      else if (input == 6)
		{		// Cube calculation with the default value.
		  printf ("\nIf the side value of the Cube = %.2f\n", D);
		  printf ("Cube area = %.2f\t", cubeArea (D));
		  printf ("Cube volume = %.2f\n", cubeVolume (D));
		}
	      else if (input == 7)
		{		// Rectangular Prism calculation with the default value.
		  printf
		    ("\nIf the values of length, height and widthof the Rectangular Prism = %.2f\n",
		     D);
		  printf ("Rectangular Prism area = %.2f\t",
			  rectangularArea (D, D, D));
		  printf ("Rectangular Prism volume = %.2f\n",
			  rectangularVolume (D, D, D));
		}
	      else if (input == 8)
		{		// Sphere calculation with the default value
		  printf ("\nIf the radius value of the Sphere = %.2f\n", D);
		  printf ("Sphere area = %.2f\t", sphereArea (D));
		  printf ("Sphere volume = %.2f\n", sphereVolume (D));
		}
	      else if (input == 9)
		{		// Right Circular Cylinder calculation with the default value
		  printf
		    ("\nIf the radius value of the Right Circular Cylinder= %.2f\n",
		     D);
		  printf
		    ("\nand the height value of the Right Circular Cylinder= %.2f\n",
		     D);
		  printf ("Right Circular Cylinder area = %.2f\t",
			  rightCircularCylinderArea (D, D));
		  printf ("Right Circular Cylinder volume = %.2f\n",
			  rightCircularCylinderVolume (D, D));
		}
	      else
		{
		  exit (0); // exit the program if the user choose any another input
		}
	      // If the user chooses the first option, they 
	      // need to enter some values to do the calculation      
	    }
	  else
	    {
	      if (input == 1)
		{		// Square calculation without the default value
		  printf ("\nPlease enter the side value of the Square ");
		  double side;
		  scanf ("%lf", &side);
		  printf ("Square area = %.2f\t", squareArea (side));
		  printf ("Square perimeter = %.2f\n",
			  squarePerimeter (side));
		}
	      else if (input == 2)
		{		// Rectangle calculation without the default value
		  printf
		    ("\nPlease enter the length value of the Rectangle ");
		  double length;
		  scanf ("%lf", &length);	// enter value for length
		  printf ("\nPlease enter the width value of the Rectangle ");
		  double width;
		  scanf ("%lf", &width);	// enter value for width
		  printf ("Rectangle area = %.2f\t",
			  rectangleArea (length, width));
		  printf ("Rectangle perimeter = %.2f\n",
			  rectanglePerimeter (length, width));
		}
	      else if (input == 3)
		{		// Circle calculation without the default value
		  printf ("\nPlease enter the radius value of the Circle ");
		  double radius;
		  scanf ("%lf", &radius);	// enter value for radius
		  printf ("Circle area = %.2f\t", circleArea (radius));
		  printf ("Circle circumference = %.2f\n",
			  circleCircumference (radius));
		}
	      else if (input == 4)
		{		// Triangle calculation without the default value
		  printf ("\nPlease enter the base value of the triangle ");
		  double base;
		  scanf ("%lf", &base);	// enter value for base
		  printf ("\nPlease enter the height value of the triangle ");
		  double height;
		  scanf ("%lf", &height);	// enter value for height
		  printf
		    ("\nPlease enter the first side value of the triangle ");
		  double side1;
		  scanf ("%lf", &side1);	// enter value for first side
		  printf
		    ("\nPlease enter the second side value of the triangle ");
		  double side2;
		  scanf ("%lf", &side2);	// enter value for second side
		  printf
		    ("\nPlease enter the thied side value of the triangle ");
		  double side3;
		  scanf ("%lf", &side3);	// enter value for third side
		  printf ("Parallelogram  area = %.2f\t",
			  triangleArea (base, height));
		  printf ("Parallelogram perimeter = %.2f\n",
			  trianglePerimeter (side1, side2, side3));
		}
	      else if (input == 5)
		{		// Parallelogram calculation without the default value
		  printf
		    ("\nPlease enter the base value of the Parallelogram ");
		  double base;
		  scanf ("%lf", &base);	// enter value for base
		  printf
		    ("\nPlease enter the height value of the Parallelogram ");
		  double height;
		  scanf ("%lf", &height);	// enter value for height
		  printf
		    ("\nPlease enter the side value of the Parallelogram ");
		  double side;
		  scanf ("%lf", &side);	// enter value for side
		  printf ("Parallelogram  area = %.2f\t",
			  parallelogramArea (base, height));
		  printf ("Parallelogram perimeter = %.2f\n",
			  parallelogramPerimeter (base, side));
		}
	      else if (input == 6)
		{		// Cube calculation without the default value
		  printf ("\nPlease enter the side value of the Cube ");
		  double side;
		  scanf ("%lf", &side);	// enter value for side
		  printf ("Cube area = %.2f\t", cubeArea (side));
		  printf ("Cube volume = %.2f\n", cubeVolume (side));
		}
	      else if (input == 7)
		{		// Rectangular Prism calculation without the default value
		  printf
		    ("\nPlease enter the length value of the Parallelogram ");
		  double length;
		  scanf ("%lf", &length);	// enter value for length
		  printf
		    ("\nPlease enter the height value of the Parallelogram ");
		  double height;
		  scanf ("%lf", &height);	// enter value for height
		  printf
		    ("\nPlease enter the width value of the Parallelogram ");
		  double width;
		  scanf ("%lf", &width);	// enter value for width
		  printf ("Parallelogram  area = %.2f\t",
			  rectangularArea (length, height, width));
		  printf ("Parallelogram perimeter = %.2f\n",
			  rectangularVolume (length, height, width));
		}
	      else if (input == 8)
		{		// Sphere calculation without the default value
		  printf ("\nPlease enter the radius value of the Sphere ");
		  double radius;
		  scanf ("%lf", &radius);	// enter value for radius
		  printf ("Sphere area = %.2f\t", sphereArea (radius));
		  printf ("Sphere volume = %.2f\n", sphereVolume (radius));
		}
	      else if (input == 9)
		{		// Right Circular Cylinder calculation without the default value
		  printf
		    ("\nPlease enter the radius value of the Right Circular Cylinder");
		  double radius;
		  scanf ("%lf", &radius);	// enter value for radius
		  printf
		    ("\nPlease enter the height value of the Right Circular Cylinder");
		  double height;
		  scanf ("%lf", &height);	// enter value for height
		  printf ("Right Circular Cylinder area = %.2f\t",
			  rightCircularCylinderArea (radius, height));
		  printf ("Right Circular Cylinder volume = %.2f\n",
			  rightCircularCylinderVolume (radius, height));
		}
	      else
		{
		  exit (0); // exit the program if the user choose any another input

		}		// finish the if statment

	    }			// finish the mune loop

	} /* finish the first menu where give the option to the user 
      		to enter the value or to be default*/

    }// finish the infinity loop here
  return EXIT_SUCCESS;
}

