#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_locations[] = FOOD_LOCATIONS;
  Point organism_location[] = ORGANISM_LOCATIONS;
  Point closest_location = {0, 0};
  Point current_location;
  int points_length = 5;
  FOR_LOOP(0, points_length)
  {
    current_location = organism_location[index];
    get_closest_food(food_locations, points_length, current_location, &closest_location);
    printf("Location of organism: [%d %d],  Closest food target : [%d %d]\n", current_location.x, current_location.y, closest_location.x, closest_location.y);
  }
  return 0;
}