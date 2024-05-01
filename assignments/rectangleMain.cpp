# pragma once
#include"rectangle.h"
#include<iostream>

using namespace std;

int main(){
  // initialing an object r_ngle(rectangle)
  rectangle r_ngle;
  float length;
  float width;
  // prompt user from console
  cout<<"Enter the length of the rectangle: "<<endl;
  cin>> length;
  cout<<"Enter the width of the ractangle: "<<endl;
  cin>>width;

  // using the accessor methods
  r_ngle.setlength(length);
  r_ngle.setwidth(width);

  // out put the area
  cout<<"the area of the rectangle having length "<<length<<" and width "<<width<<" is: "<<r_ngle.area()const<<endl;

  return 0;
}