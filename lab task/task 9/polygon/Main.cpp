#include <iostream>
#include "Polygon.cpp"
 
#include "Rectangle.cpp"  // works in if included .cpp not .h extension in my laptop

#include "Triangle.cpp"   // works in if included .cpp not .h extension in my laptop

using namespace std;

int main() {
 Rectangle rect;
 Triangle trgl;
 rect.SetValues(4,5);
 trgl.SetValues (4,5);
 cout << rect.Area() << '\n';
 cout << trgl.Area() << '\n';
 return 0;
}
