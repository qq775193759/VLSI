#ifndef LINEMAKER_H
#define LINEMAKER_H

#include <line.h>
#include <qvector.h>

class LineMaker
{
public:
    int current_direction;
    int last_direction;
    int probe_flag;
    int current_ok_flag;
    int last_ok_flag;

    Point current_point;

    QVector<Line> line_stack;
    Point init_point;
    Point terminal_point;

    LineMaker(Point init, Point term);
    Point getNextPoint();
    int isArrive();
    int Try();//iterate
};

#endif // LINEMAKER_H
