#include <iostream>
#include "Mother.cpp"  // works in if included .cpp  not .h extension in my laptop
#include "Daughter.cpp" // works in if included .cpp not .h  extension in my laptop
#include "Son.cpp"     // works in if included .cpp  not .h extension in my laptop

using namespace std;

int main () 
{
    Daughter theDaughter(1);
    Son theSon(2);
    
    return 0;
}
