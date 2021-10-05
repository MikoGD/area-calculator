#include <stdio.h>

float calculate_rectangle_area(float length, float width)
{
  return length * width;
}

float* get_rectangle_inputs(float* dimensions)
{
  printf("Enter length: ");
  scanf("%f", &dimensions[0]);

  printf("Enter width: ");
  scanf("%f", &dimensions[1]);

  return dimensions;
}