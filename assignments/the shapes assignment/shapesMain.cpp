#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace shapes;
using namespace std;

void theRecursive();

int main() {
  int selection;
  double sideLength;
  double base, height;
  double radius;
  // square object
  Square square(sideLength);
  double area1 = Area::calculateSquareArea(square);

  // triangle object
  Triangle triangle(base, height);
  double area2 = Area::calculateTriangleArea(triangle);

  // cicle object
   Circle circle(radius);
   double area3 = Area::calculateCircleArea(circle);

  while(selection != 4){
      if(selection > 4){
            cout<<"your input was:"<<selection<<" which is an invalid input please enter a valid input"<<endl;
            cin>>selection;
      }    
        else
        {
          // switch
         switch(selection)
         {
            case 0: cout<<"you have entered an invalid input"; theRecursive(); break;
            case 1: 
                    cout << "Enter side length of the square: ";
                    cin >> sideLength;
                    cout << "Area of the square: " << area1 << endl;theRecursive(); break;
            case 2: 
                     cout << "Enter base of the triangle: ";
                     cin >> base;
                     cout << "Enter height of the triangle: ";
                     cin >> height;
                     cout << "Area of the triangle: " << area2 <<endl;theRecursive();break;
            case 3: 
                    cout << "Enter radius of the circle: ";
                    cin >> radius;
                    cout << "Area of the circle: " << area3 <<endl;theRecursive(); break;
            case 4: exit(4); break;
            default: cout<<"";
         }
        }
     }
    return 0;
  }

   void theRecursive(){
       int selection;
          // console output selection
     cout<<"\n** Shape Area Calculator **\n";
     cout<<"1. Calculate area of a Square\n";
     cout<<"2. Calculate area of a Triangle\n";
     cout<<"3. Calculate area of a Circle\n";
     cout<<"4. Quit\n";
     cout<<"Enter selection: \n";
     cin>> selection;  
       
   }
