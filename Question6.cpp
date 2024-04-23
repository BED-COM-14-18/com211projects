// advance approaches to test file programm 

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cctype>
#include<iterator>

// Function to count vowels
int countVowels(const std::string &text) {
    int vowels = 0;
    for (char ch : text) {
        switch (std::tolower(ch)) {
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
int countWords(const std::string &text) {
          std::istringstream iss(text);
          return std::distance(std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>());
}

// Function to reverse the string
std::string reverseString(const std::string &text) {
    std::string reversed = text;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to capitalize the second letter of each word
std::string capitalizeSecondLetter(std::string text) {
    bool capitalizeNext = false;
    for (char &ch : text) {
        if (capitalizeNext && std::isalpha(ch)) {
            ch = std::toupper(ch);
            capitalizeNext = false;
        }
        if (ch == ' ') {
            capitalizeNext = true;
        }
    }
    return text;
}

int main() {
    std::string fileData;
    
   std::ifstream myFile("advancedText.txt");
   

    // Check if file opened successfully
  if (!myFile.is_open()) {
   std::cout << "Could not open the file." << std::endl;
   return 1;
    }

   // Read the contents of the file into fileData
    std::getline(myFile, fileData);
    myFile.close();

    // Output the number of vowels
    std::cout << "Number of vowels: " << countVowels(fileData) << std::endl;

    // Output the number of words
    std::cout << "Number of words: " << countWords(fileData) << std::endl;

    // Output the reversed string
    std::cout << "Reversed statement: " << reverseString(fileData) << std::endl;

    // Output the statement with the second letter of each word capitalized
    std::cout << "Capitalized statement: " << capitalizeSecondLetter(fileData) << std::endl; 

    return 0;
}
