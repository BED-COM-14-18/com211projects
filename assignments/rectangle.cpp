# pragma once
#include "rectangle.h"
// implementing the costructor, destroctur and  the declared member function in rectangle class

rectangle::rectangle():length (0), width (0){}

rectangle::~rectangle(){}

void rectangle::setlength(float l){
  length = l;
      
}
void rectangle::setwidth(float w){
  width = w;

}
float rectangle::getlength()const{
  return length;
} 
float rectangle::getwidth()const{
  return width;
} 

float rectangle::area()const{
      float Area = length * width;
      return Area;
}
