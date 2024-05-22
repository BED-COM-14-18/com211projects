#include<iostream>

using namespace std;

int main()
{ int a = 21;             // 60 = 0011 110
   int c;
  
   c = a;                      // 12 = 0000 1100
  cout<<"Line 1 - value of c is : "<<c<<endl;
  
  
  c += a ;                      // 61= 0011 1101
  cout<<"Line 2 - value of c is : "<<c<<endl;
  
  
  c -= a;                      // 49 = 0011 0001
  cout<<"Line 3 - value of c is : "<<c<<endl;
  
  
  c /= a ;                    // -60 = 1100 0011
  cout<<"Line 4 - value of c is : "<<c<<endl;

  
  c = 200;                    // 240 = 1111 0000
  cout<<"Line 5 - value of c is : "<<c<<endl;
  
  
  c %= a;                   // 15 = 0000 1111
  cout<<"Line 6 - value of c is : "<<c<<endl;

  c <<= 2;
  cout<<"Line 7 - value of c is : "<<c<<endl;
  
  c >>= 2;
  cout<<"Line 8 - value of c is : "<<c<<endl;

  return 0;
}