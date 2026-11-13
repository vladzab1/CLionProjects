//
// Created by vladosik on 11/7/26.
//
#pragma once

class Product {
    static int counter;
    int id =0;
    char *name = nullptr;
    double price = 0;
public:
    Product();
    Product(const char* name, double price);
    Product(const Product &obj);
    int getId() const;
    const char* getName() const;
    void setName(const char* val);
    double getPrice() const;
    void setPrice(double val);
    void print() const;
    static int getCounter();
    ~Product();

};

