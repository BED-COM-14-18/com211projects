// programm that prompts user to choose/select shape of which area will be calculated after
#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>

using namespace std;

// function to calculate area of a square
double square( double lngth){
    double  area1;
    // prompt user to enter the length of square
     cout<<"enter the length of the square: "<<endl;
     cin>>lngth;
     // Area
     area1 = lngth * lngth;
     cout<<" the area of square given such dimensions is: "<<area1<<endl;
    return area1;
}
// function to calculate area of the rectangle
double rectangle( double width, double length){
      double area2;
    // prompt user to enter width
    cout<<"enter the width of the rectangle:  "<<endl;
    cin>>width;
    // prompt user to enter length
    cout<<"enter the length of the rectangle: "<< endl;
    cin>>length;
    // area of rectangle
    area2 = width * length;
    cout<<" the area of rectangle given such dimensions is: "<<area2<<endl;
    return area2;
} 
// function to calculate area of the triangle

double triangle( double base, double height){
    double area3 = 0;
    // prompt user to enter  base
    cout<<"enter the base of the triangle:  "<<endl;
    cin>>base;
    // prompt user to enter height
    cout<<"enter the height of the triangle: "<< endl;
    cin>>height;
    // area of triangle
    area3 = (0.5 * base ) * height;
    cout<<" the area of triangle given such dimensions is: "<<area3<<endl;
    
    return area3;
}
  //method to ensure that option 4 must be choosen for the programm to exit
   int theRecursive(){
       int selection;
          // console output selection
     cout<<"please select the area of the shape to calculate\n";
     cout<<"1. Square\n";
     cout<<"2. Rectangle\n";
     cout<<"3. Triangle\n";
     cout<<"4. Quit Program\n\n";
     cout<<"Enter selection: \n";
     cin>> selection;  
       
   }
// main function
int main(){
    int selection;
    double x;
    double y;
    // console output selection
     cout<<"please select the area of the shape to calculate\n";
     cout<<"1. Square\n";
     cout<<"2. Rectangle\n";
     cout<<"3. Triangle\n";
     cout<<"4. Quit Program\n\n";
     cout<<"Enter selection: \n";
     cin>> selection;
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
            case 1: square(x);theRecursive(); break;
            case 2: rectangle(x,y); theRecursive();break;
            case 3: triangle(x,y);theRecursive(); break;
            case 4: exit(4); break;
            default: cout<<"";
         };
        }  
     }
    return 0;
}