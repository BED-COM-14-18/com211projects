// advance approaches to test file programm 

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cctype>
#include<iterator>
  
  using namespace std;

// Function to count vowels
int countVowels(const string& text) {
    int vowels = 0;
    for (char ch : text) {
        switch (tolower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowels;
        };
    }
    return vowels;
}

// Function to count words
int countWords(const string& text) {
          istringstream iss(text);
          return distance(istream_iterator<string>(iss),istream_iterator<string>());
}

// Function to reverse the string
string reverseString(const string& text) {
    string reversed = text;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(string text) {
    bool capitalizeNext = false;
    for (char &ch : text) {
        if (capitalizeNext && isalpha(ch)) {
            ch = toupper(ch);
            capitalizeNext = false;
        }
        if (ch == ' ') {
            capitalizeNext = true;
        }
    }
    return text;
}

int main() {
    string fileData;
    
   ifstream myFile("advancedText.txt");
   

    // Check if file opened successfully
  if (!myFile.is_open()) {
   cout << "Could not open the file." << endl;
   return 1;
    }

   // Read the contents of the file into fileData
    getline(myFile, fileData);
    myFile.close();

    // Output the number of vowels
    cout << "Number of vowels: " << countVowels(fileData) <<endl;

    // Output the number of words
    cout << "Number of words: " << countWords(fileData) <<endl;

    // Output the reversed string
    cout << "Reversed statement: " << reverseString(fileData) <<endl;

    // Output the statement with the second letter of each word capitalized
    cout << "Capitalized statement: " << capitalizeSecondLetter(fileData) <<endl; 

    return 0;
}
