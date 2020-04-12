#include "point.h"
#include <math.h>

double get_distance(Point a, Point b)
{
  return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
  // return hypot(a.x - b.x, a.y - b.y);
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  double short_distance = get_distance(current_location, food_points[0]);
  double distance;
  *closest_food_location = food_points[0];
  FOR_LOOP(0, points_length)
  {
    distance = get_distance(current_location, food_points[i]);
    if (distance < short_distance)
    {
      short_distance = distance;
      *closest_food_location = food_points[i];
    }
  }
}
