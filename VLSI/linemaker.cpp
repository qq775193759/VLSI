#include "linemaker.h"
#include <qdebug.h>


LineMaker::LineMaker(Point init, Point term)
{
    init_point = init;
    terminal_point = term;
    current_point = init_point;

    current_direction = 0;
}

int LineMaker::Try()
{
    if(isArrive()) return 1;
    current_point = getNextPoint();
    qDebug()<<current_point.x<<current_point.y;
    Line new_line(current_point, current_point);
    line_stack.push_back(new_line);
    if( Try() ) return 1;
    return 0;
}

Point LineMaker::getNextPoint()
{
    if(current_direction == 0)
    {
        current_direction = 1;
        return Point(terminal_point.x, current_point.y);
    }
    else if(current_direction == 1)
    {
        current_direction = 0;
        return Point(current_point.x, terminal_point.y);
    }
}

int LineMaker::isArrive()
{
    if((current_point.x == terminal_point.x) && (current_point.y == terminal_point.y))
        return 1;
    return 0;
}
