#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_points[] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  Point current_location;
  Point closest_location;
  scanf("%d %d", &current_location.x, &current_location.y);
  printf("Location of organism: [%d %d]\n", current_location.x, current_location.y);
  get_closest_food(food_points, 5, current_location, &closest_location);
  return 0;
}