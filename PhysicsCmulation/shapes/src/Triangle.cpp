#include "../include/Triangle.h"


double shapes::Triangle::GetArea() {
    double s;
    double a = points[0]->GetDistanceTo(points[1]);
    double b = points[0]->GetDistanceTo(points[2]);
    double c = points[1]->GetDistanceTo(points[2]);

    s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}