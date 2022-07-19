


//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
double calculate_inflation(double, double);
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
   double yearAgo_price;
   double currentYear_price;
   double inflation_Rate;
   char again;

 do{
      cout << "Enter the item price one year ago (or zero to quit) : " << endl;
      cin >> yearAgo_price;

      cout << "Enter the item price today: " << endl;
      cin >> currentYear_price;

       cout.setf(ios::fixed)
       cout.setf(iOS::showpoint);
       cout.precision(2);

       inflation_rate=calculate_inflation(yearAgo_price, currentYear_price);
       cout << "The inflation rate is " << (inflation_rate*100) << " percent." << endl;

       cout << "Do you want to continue (Y/N)?" << endl;
       cin >> again;

      }while((again =='Y') || (again =='y'));

          return 0;
}

   double calculate_inflation (double yearAgo_price, double currentYear_price)
   {
      return ((currentYear_price-yearAgo_price)/ yearAgo_price);
   }
    //Declare Variables
    
    /
}