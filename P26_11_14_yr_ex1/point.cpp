//
// Created by vladosik on 11/14/26.
//

#include "point.h"
#include <iostream>


Point::Point() {
    x = y = 0;
}
Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setY(int val) {
    y = val;
}

void Point::print() const {
    std::cout << x << ", " << y << std::endl;
}

Point Point::operator+(const Point &obj) {
    return Point(x + obj.x, y + obj.y);
}

Point Point::operator-(const Point &obj) {
    return Point(x - obj.x, y - obj.y);
}

bool Point::operator==(const Point &obj) const {
    return x == obj.x && y == obj.y;
}

bool Point::operator!=(const Point &obj) const {
    return x != obj.x || y != obj.y;
}

Point Point::operator-() const {
    return Point(-x, -y);
}

Point & Point::operator++() {
    x++;
    y++;
    return *this;
}

Point Point::operator++(int) {
    Point tmp = *this;

    x++;
    y++;
    return tmp;
}

Point::operator int() {
    return x+y;
}

