#ifndef LINE_H
#define LINE_H

#include <point.h>

class Line
{
public:
    int direction;
    Point start_point;
    Point end_point;


    Line(Point st, Point en);
    Line();
    void getDirection();
};


#endif // LINE_H
