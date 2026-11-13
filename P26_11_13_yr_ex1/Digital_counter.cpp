//
// Created by vladosik on 11/13/26.
//

#include "Digital_counter.h"

Digital_counter::Digital_counter() {
    startNum = 0;
    endNum = 10;
    counter = startNum;
}

Digital_counter::Digital_counter(int start, int end) {
    if (end > start) {
        startNum = start;
        endNum = end;
    } else if (end < start) {
        startNum = end;
        endNum = start;
    } else {
        startNum = start;
        endNum = end;
    }
    counter = startNum;
}

void Digital_counter::addNumToCounter() {
    if (counter < endNum-1) {
        counter++;
    } else if(counter == endNum-1) {
        counter = startNum;
    }
}

int Digital_counter::getNumFromCounter() {
    return counter;
}

int Digital_counter::getStartNum() {
    return startNum;
}

int Digital_counter::getEndNum() {
    return endNum;
}

void Digital_counter::setStartNum(int start) {
    if (start < endNum) {
        startNum = start;
        if (counter < startNum) {
            counter = startNum;
        }
    }
}

void Digital_counter::setEndNum(int end) {
    if (end > startNum) {
        endNum = end;
        if (counter >= endNum) {
            counter = startNum;
        }
    }
}

