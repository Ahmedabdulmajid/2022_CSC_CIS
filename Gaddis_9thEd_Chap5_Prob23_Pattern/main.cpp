/*
 * 
 * 
 * 
 
#include <iomanip>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypeslen

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int num,
        len=0,
        ht=0;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
   Display the outputs
    cin>>num;
    while (ht<num)
    {
        while (len<=ht)
        {
            cout<<"+";
            len++;
            
        }
        len=0;
        ht++;
        cout<<"\n"<<endl;
    }
    while (ht>0)
    {
        
        while (len<ht)
        {
            cout<<"+";
            len++;
        }
        if (len==1)break;
        len=0;
        ht--;
        cout<<"\n"<<endl;
        
        
    }
        //Exit stage right or left!
    return 0;
}