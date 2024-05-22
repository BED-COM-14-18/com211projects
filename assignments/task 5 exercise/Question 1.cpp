// checking expiration day of subscription using if else selection statements
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    // getting the random integer number
    int dayUntilExpiration = rand() % 12;
    
    if ( dayUntilExpiration <= 10){
        cout<<"Your subscription will expire soon. Please renew! "<<endl;
    }
    else if ( dayUntilExpiration <= 5){
        cout<<"your subscription expires in "<< dayUntilExpiration<<"\n"<<"Renew now and save 10%!";
    }
    else if ( dayUntilExpiration == 1){
        cout<<"Your subscription expires within a day! \n"<<"Renew now and save 20%!";
    }
    else if ( dayUntilExpiration == 0){
        cout<<"Your subscription has expired."<<endl;
    }
    else 
        cout<<"You have an activesubscription"<<endl;
    
   return 0;
}