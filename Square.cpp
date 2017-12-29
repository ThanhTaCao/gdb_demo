/***
 * Prototype pattern 
 * 
 */

#include "Square.h"
#include <memory>

Square::Square(std::string type, int id )
{
    m_type = type;
    m_id = id;
}
Square::~Square()
{

}

void Square::draw()
{
    std::cout << "draw Square" << std::endl;
}

std::unique_ptr<Shape> Square::clone()
{
    return std::make_unique<Square>(*this);
}