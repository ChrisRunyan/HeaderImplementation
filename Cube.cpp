/*
 *Short Assignment: Header & Implementation
 *Cube.cpp
 *Created: 03/21/2017
 *Author: Christopher A Runyan
 */
#include "Cube.h"

Cube::Cube(double a)
  : side(a)
{}

void Cube::setSide(double a){
  side=a;
}

double Cube::getVolume(){
  return side*side*side;
}

double Cube::getSurfaceArea(){
  return 6*side*side;
}
