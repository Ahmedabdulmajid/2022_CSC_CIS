



/System Libraries
#include <iomanip>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    float liters1,miles1,liters2,miles2,mpg1,mpg2,gal1,gal2,effCar;
    int count;
    char quit;
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    while (quit=='y')
    {
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liters1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles1;
        cout<<"miles per gallon: ";
        gal1=liters1*GALLONS;
        mpg1=miles1/gal1;
        cout<<fixed<<setprecision(2)<<mpg1<<endl<<endl;
        
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liters2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles2;
        cout<<"miles per gallon: ";
        gal2=liters2*GALLONS;
        mpg2=miles2/gal2;
        cout<<fixed<<setprecision(2)<<mpg2<<endl<<endl;
        
        if (mpg1>mpg2)
        cout<<"Car 1 is more fuel efficient"<<endl<<endl;
        
        else 
        cout<<"Car 2 is more fuel efficient"<<endl<<endl;
        
        cout<<"Again:"<<endl;
        cin>>quit;
        if (quit=='y')
        cout<<endl;
        
    }
    

    return 0;
}
