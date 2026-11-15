//
// Created by vladosik on 11/14/26.
//
#pragma once

class Point {
    int x;
    int y;
    public:
    Point();
    Point(int x, int y);
    int getX() const;
    void setX(int val);
    int getY() const;
    void setY(int val);
    void print() const;
    Point operator+(const Point& obj);
    Point operator-(const Point &obj);
    bool operator==(const Point &obj) const;
    bool operator!=(const Point &obj) const;
    Point operator-() const;
    Point &operator++();
    Point operator++(int);
    explicit  operator int();

};


