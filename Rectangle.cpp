/***
 * Prototype pattern 
 * 
 */

#include "Rectangle.h"
#include <memory>

Rectangle::Rectangle(std::string type, int id )
{
    m_type = type;
    m_id = id;
}
Rectangle::~Rectangle()
{

}

void Rectangle::draw()
{
    std::cout << "draw rectangle" << std::endl;
}

std::unique_ptr<Shape> Rectangle::clone()
{
    return std::make_unique<Rectangle>(*this);
}