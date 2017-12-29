
/***
 * 
 * 
 */

#include "ShapeCache.h"
#include "Shape.h"

int main (int argc, char** argv)
{

    ShapeCache shapes;

    auto shape = shapes.createShape(CIRCLE_TYPE);
    shape->draw();

    shape = shapes.createShape(SQUARE_TYPE);
    shape->draw();

    shape = shapes.createShape(RECTANGLE_TYPE);
    shape->draw();

    return 0;
}