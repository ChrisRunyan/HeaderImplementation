/*
 *Short Assignment: Header & Implementation
 *Cube.h
 *Created: 03/21/2017
 *Author: Christopher A Runyan
 */
#ifndef CUBE_H
#define CUBE_H

class Cube{
 private: 
  double side;
 public:
  Cube(double a);
  void setSide(double a);
  double getVolume();
  double getSurfaceArea();
};

#endif /* CUBE_H_ */


