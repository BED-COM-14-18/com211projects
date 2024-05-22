#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // create and open file 
    ofstream Myfile;
    Myfile.open("example.txt", ios::in | ios::trunc); 
    if(Myfile.is_open()){
     Myfile<<"this is a line.\n ";  
    Myfile<<"this is another line.\n ";
    } else{
      cout<<"Unable to open file";
    }

  return 0;
}