/***
 * Prototype pattern 
 * 
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include<iostream>
#include "Shape.h"

class Circle : public Shape
{
public:
    Circle(std::string type, int id );
    virtual ~Circle();

    virtual void draw();

    virtual std::unique_ptr<Shape> clone();
};

#endif