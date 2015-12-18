#include "line.h"

Line::Line(Point st, Point en)
{
    start_point = st;
    end_point = en;
    getDirection();
}

Line::Line(){}

void Line::getDirection()
{
    if(start_point.x == end_point.x)
    {
        direction = 1;//
    }
    else if(start_point.y == end_point.y)
    {
        direction = 0;//
    }
    else
    {
        direction = -1;
    }
}
