  

#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char p1, p2;
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Plyer 1 and Player 2 Choices"<<endl
    cin>> p1 >> p2;
    
    //Map inputs -> outputs
    
    if(p1 == p2)
           cout<<"Nobody wins"<<endl;
    if( (p1 == "P" && p2 == "P") || (p1 == "P" && p2 == "P") )
           cout<<"Nobody wins";
    if( (p1 == "S" && p2 == "S") || (p1 == "S" && p2 == "s") )
           cout<<"Nobody wins";
    if( (p1 == "R" && p2 == "r") || (p1 == "R" && p2 == "r") )    
           cout<<"Nobody wins"<< endl;
           
    if( (p1 == "P" || p1 == "p") && (p2 == "R" || p2 == "r") )
           cout<<"Paper covers rock.";
    if( (p1 == "R"))
     
    //Display the outputs

    //Exit stage right or left!
    return 0;
}