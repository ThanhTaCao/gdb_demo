/***
 * Prototype pattern 
 * 
 */

#include "Circle.h"
#include <memory>

Circle::Circle(std::string type, int id )
{
    m_type = type;
    m_id = id;
}
Circle::~Circle()
{

}

void Circle::draw()
{
    std::cout << "draw Circle" << std::endl;
}

std::unique_ptr<Shape> Circle::clone()
{
    return std::make_unique<Circle> (*this);
}