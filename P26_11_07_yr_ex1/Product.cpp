//
// Created by vladosik on 11/7/26.
//
#include <cstring>
#include <iostream>
#include "Product.h"


int Product::counter = 0;

Product::Product() {
    name = nullptr;
    price = 0;
    id = ++counter;
}

Product::Product(const char* name, double price) {
    Product::name = new char[strlen(name)+1]{};
    strcpy(Product::name, name);
    this->price = price;
    id = ++counter;
    counter;
}

Product::Product(const Product &obj) {
    id = obj.id;
    price = obj.price;
    if (obj.name) {
        name  = new char[strlen(obj.name)+1]{};
        strcpy(name, obj.name);
    }
}

int Product::getId() const{
    return id;
}

const char * Product::getName() const{
    return name;
}

void Product::setName(const char *val) {
    delete[] name;
    name = new char[strlen(val)+1]{};
    strcpy(name, val);
}

double Product::getPrice() const{
    return price;
}

void Product::setPrice(double val) {
    price = val;
}

void Product::print() const{
    std::cout << "Id : " << id << ", Name: "<< name << ", Price: " << price << std::endl;
}
int Product::getCounter() {
    return counter;
}
Product::~Product() {
    std::cout << "~Product()" << std::endl;
    delete[] name;
}
