#include <stdio.h>
#include <math.h>

float* get_circle_inputs(float* dimensions)
{
  printf("Enter radius: ");
  scanf("%f", &dimensions[0]);

  return dimensions;
}

float calculate_circle_area(float radius)
{
  return M_PI * (pow(radius, 2.0));
}