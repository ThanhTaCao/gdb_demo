/***
 * Prototype pattern 
 * 
 */

#include "ShapeCache.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include <memory>

ShapeCache::ShapeCache()
{
    m_cached[CIRCLE_TYPE]       = std::make_unique<Circle>("circle", 1);
    m_cached[SQUARE_TYPE]       = std::make_unique<Square>("square", 2);
    m_cached[RECTANGLE_TYPE]    = std::make_unique<Rectangle>("rectangle", 3);   
}

ShapeCache::~ShapeCache()
{

}

std::unique_ptr<Shape> ShapeCache::createShape(ShapeType type)
{
    return m_cached[type]->clone();
}