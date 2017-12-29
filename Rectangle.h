/***
 * Prototype pattern 
 * 
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<iostream>
#include "Shape.h"

class Rectangle : public Shape
{
public:
    Rectangle(std::string type, int id );
    virtual ~Rectangle();

    virtual void draw();

    virtual std::unique_ptr<Shape> clone();
};

#endif