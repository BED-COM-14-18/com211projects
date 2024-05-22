 // trying to find a letter from list of words in an array and print word when found
 #include<iostream>
#include<string>

using namespace std;

int main() {
     // declare and initialising an array
      string codes [] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
     // the target letter to search
     char target = 'B'; 
     // Number of words in the array
     int size = sizeof(codes) / sizeof(codes[0]); 
     // for loop
      for(int i = 0; i < size; ++i) 
      {
          string word = codes [i];
              // nested for loop
              for(int k = 0; k < word.length(); ++k) {
                  // if statement
                  if(word[k] == target) 
                  {
                      cout << word << "  contains the letter '" << target << "'\n";
                      break; 
                  }
        }     
    }
    return 0;
}