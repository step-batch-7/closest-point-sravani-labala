#include <math.h>
#include "point.h"

double get_distance(Point a, Point b)
{
  return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  double distance;
  double short_distance = get_distance(current_location, food_points[0]);
  *closest_food_location = food_points[0];
  FOR_LOOP(1, points_length)
  {
    distance = get_distance(current_location, food_points[index]);
    if (distance < short_distance)
    {
      short_distance = distance;
      *closest_food_location = food_points[index];
    }
  }
}
