#include "point.h"
#include <math.h>

double get_distance(Point a, Point b)
{
  return sqrt(((a.x - b.x) * (a.x - b.x)) + ((a.y - b.y) * (a.y - b.y)));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  double short_distance = get_distance(current_location, food_points[0]);
  double distance;
  *closest_food_location = food_points[0];
  for (int i = 0; i < points_length; i++)
  {
    distance = get_distance(current_location, food_points[i]);
    if (distance < short_distance)
    {
      short_distance = distance;
      *closest_food_location = food_points[i];
    }
  }
}
