#include <iostream>
#include <string>
using namespace std;
int main() {
    
    int* dynamicInteger = new int;

    string* dynamicString = new string;

    // Prompt user 
    cout << "Enter an integer value: ";
    cin >> *dynamicInteger;
   
    cout << "Enter a string value: ";
    cin.ignore();
    getline(cin, *dynamicString);

    // Output the dynamically allocated values
    cout << "Dynamically allocated integer value: "<< *dynamicInteger << endl;
    cout << "Dynamically allocated string value: " << *dynamicString << std::endl;

    // Clean up memory
    delete dynamicInteger;
    delete dynamicString;

    return 0;
}
