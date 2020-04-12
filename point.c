#include "point.h"
#include <math.h>

double get_distance(Point a, Point b)
{
  return sqrt(((a.x - b.x) * (a.x - b.x)) + ((a.y - b.y) * (a.y - b.y)));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
}
