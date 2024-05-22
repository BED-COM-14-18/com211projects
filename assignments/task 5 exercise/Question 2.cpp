// checking expiration day of subscription using switch selection statement
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
     // getting random integer number
    int dayUntilExpiration = rand() % 12;
    // switch statement 
    switch (dayUntilExpiration)
    {
        case 0:
               cout<<"Your subscription has expired."<<endl;
               break;
   
        case 1:      
              cout<<"Your subscription expires within a day! \n"<<"Renew now and save 20%!";
              break;     
        case 2:
              cout<<"your subscription expires in "<< dayUntilExpiration<<"\n"<<"Renew now and save 10%!";                 
              break;
    
        case 3:
              cout<<"your subscription expires in "<< dayUntilExpiration<<"\n"<<"Renew now and save 10%!";                 
              break;
        case 4:
              cout<<"your subscription expires in "<< dayUntilExpiration<<"\n"<<"Renew now and save 10%!";                 
              break;
        case 5:
              cout<<"your subscription expires in "<< dayUntilExpiration<<"\n"<<"Renew now and save 10%!";                 
              break;
        case 6:
              cout<<"Your subscription will expire soon. Please renew! "<<endl;
              break;
        case 7:
              cout<<"Your subscription will expire soon. Please renew! "<<endl;
              break;
        case 8:
              cout<<"Your subscription will expire soon. Please renew! "<<endl;
              break;
        case 9:
              cout<<"Your subscription will expire soon. Please renew! "<<endl;
              break;
        case 10:
               cout<<"Your subscription will expire soon. Please renew! "<<endl;
               break;                   
 
        default:
               cout<<"You have an activesubscription"<<endl;
    }            
    return 0;
}