/***
 * Prototype pattern 
 * 
 */

#ifndef SHAPECACHE_H
#define SHAPECACHE_H

#include<iostream>
#include<unordered_map>

class Shape;

enum ShapeType {
    CIRCLE_TYPE,
    SQUARE_TYPE,
    RECTANGLE_TYPE
};

class ShapeCache
{
public:
    ShapeCache();
    ~ShapeCache();

    // static void loadCache();

    // static Shape getShape(std::string shapeId);
    std::unique_ptr<Shape> createShape(ShapeType type);
private:
    // static std::map< std::string, Shape > cached;
    std::unordered_map<ShapeType, std::unique_ptr<Shape>, std::hash<int>> m_cached;
};

#endif