/***
 * Prototype pattern 
 * 
 */

#ifndef SHAPE_H
#define SHAPE_H

#include<iostream>

class Shape {
public:

    Shape();
    virtual ~Shape();

    virtual void draw() = 0;

    virtual std::unique_ptr<Shape> clone() = 0;
protected:
    int m_id;
    std::string m_type;
};

#endif