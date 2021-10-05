#include <stdio.h>
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"

typedef enum STATUS {ERROR, EXIT, NORMAL} status;

status display_menu();

int main()
{
  while(1)
  {
    int status = display_menu();

    if (status == ERROR) {
      printf("Error: invalid input");
      break;
    } else if (status == EXIT)
    {
      printf("exiting...");
      break;
    }
  }

  return 0;
}

status display_menu()
{
  printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("Enter 0: Calculate area of rectangle\n");
  printf("Enter 1: Calculate area of triangle\n");
  printf("Enter 2: Calculate area of circle\n");
  printf("Enter 3: Exit\n");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");


  int user_input;
  
  scanf("%d", &user_input);

  float dimensions[2];
  float area;

  if (user_input == 0)
  {
    get_rectangle_inputs(dimensions);
    
    area = calculate_rectangle_area(dimensions[0], dimensions[1]);
    printf("Area of rectangle: %f", area);
  }
  else if (user_input == 1)
  {
    get_triangle_inputs(dimensions);
    
    area = calculate_triangle_area(dimensions[0], dimensions[1]);

    printf("Area of triangle: %f", area);
  }
  else if (user_input == 2)
  {
    get_circle_inputs(dimensions);
    
    area = calculate_circle_area(dimensions[0]);

    printf("Area of circle: %f", area);
  }
  else if (user_input == 3)
  {
    return EXIT;
  }
  else
  {
    return ERROR;
  }

  return NORMAL;
}

