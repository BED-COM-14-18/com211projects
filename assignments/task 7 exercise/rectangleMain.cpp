#include "rectangle.h"
#include <iostream>

using namespace std;

int main(){
  float length;
  float width;
  float new_L;
  float new_W;

  // initializing an object r_ngle(rectangle)
  rectangle r_ngle;
  

  // prompt user from console
  cout<<"Enter the length of the rectangle: "<<endl;
  cin>> length;
  
  cout<<"Enter the width of the ractangle: "<<endl;
  cin>>width;

  // using the accessor methods
  r_ngle.setlength(length);
  r_ngle.setwidth(width);

  // out put the area
  cout<<"the area of the rectangle having length "<<length<<" and width "<<width<<" is: "<<r_ngle.area()<<endl;

  // another object to be initialize variable through overload constructor
  rectangle r_ngle2(new_L,new_W);

  // prompt user from console
  cout<<"Enter the length of the rectangle 2: "<<endl;
  cin>> new_L;
  cout<<"Enter the width of the ractangle 2: "<<endl;
  cin>>new_W;
  // out put on the console
  cout<<"the area of the rectangle 2 having length "<<new_L<<" and width "<<new_W<<" is: "<<r_ngle2.area()<<endl;

  return 0;
}