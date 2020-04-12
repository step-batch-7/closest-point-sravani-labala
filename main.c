#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_points[] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  Point organism_location[] = {{18, 86}, {97, 27}, {69, 7}, {10, 94}, {36, 27}};
  Point closest_location, current_location;
  int points_length = 5;
  FOR_LOOP(0, points_length)
  {
    current_location = organism_location[i];
    get_closest_food(food_points, points_length, current_location, &closest_location);
    printf("Location of organism: [%d %d],  Closest food target : [%d %d]\n", current_location.x, current_location.y, closest_location.x, closest_location.y);
  }
  return 0;
}