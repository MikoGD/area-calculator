#include <stdio.h>

float calculate_triangle_area(float base, float height)
{
  return base * height * 0.5;
}

float* get_triangle_inputs(float* dimensions)
{
  printf("Enter base: ");
  // sscanf("%f", &length);
  scanf("%f", &dimensions[0]);

  printf("Enter height: ");
  // sscanf("%f", &width);
  scanf("%f", &dimensions[1]);

  return dimensions;
}