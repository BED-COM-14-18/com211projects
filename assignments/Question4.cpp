// a programm prompting a user to entered integer between a range 5 and 10

#include<iostream> 
#include<limits>

using namespace std;

int main(){ 
   int x;
   cout<<"Enter an integer value between 5 and 10 "<< endl;
   cin >>x;
   // while loop
   while( x < 5 || x > 10){
      // if wrong number is entered With different datatype
      if(cin.fail())
      {
         cout<<"Sorry, you entered an invalid number. Please try again"<<endl;
         break; 
         return (cin >> x);  
         
      }
      // number outside range
      else if( x < 5 || x > 10)
      {
          cout<<"you entered "<< x <<". please enter number between 5 and 10 "<<endl;
          cin>>x;
      }
      else
          break;
   }
   
   cout<<"the input value ("<<x<< ") has been accepted.";
   
  return 0;
  }
  