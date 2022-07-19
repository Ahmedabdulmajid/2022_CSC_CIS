

#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string inputOne, inputTwo;
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program to examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>InputOne >>InputTwo;
    
    //Map inputs -> outputs
    if(inputOne == "Taurus" or inputOne == "Virgo" or inputOne == "Capricorn")
    {
        if(inputTwo == "Taurus" or inputTwo == "Virgo" or inputTwo == "Capricorn")
                cout << inputOne << " and " inputTwo << "are compatible Earth signs.";
        else 
                cout << inputOne << " and " inputTwo << "are not compatible Earth signs.";
        
    }else if(inputOne == "Aries" or inputOne == "Leo" or inputOne == "Sagittarius")
    {
        if(inputOne == "Aries" or inputOne == "Leo" or inputOne == "Sagittarius")
                cout << inputOne << " and " 
        
        
        
    }
    return 0;
}
