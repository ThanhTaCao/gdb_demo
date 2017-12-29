/***
 * Prototype pattern 
 * 
 */

#ifndef SQUARE_H
#define SQUARE_H

#include<iostream>
#include "Shape.h"

class Square : public Shape
{
public:
    Square(std::string type, int id );
    virtual ~Square();

    void draw();

    virtual std::unique_ptr<Shape> clone();
};

#endif