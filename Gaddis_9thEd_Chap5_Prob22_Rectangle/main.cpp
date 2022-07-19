



//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int user_integer;

   // cout << "Enter a positive integer no greater than 15: ";
    while(!(cin >> user_integer) || 
            user_integer > 15    || 
            user_integer < 1
         )
    {
        cout << "Error. A positive integer no \n"
             << "greater than 15 must be entered: ";
        cin.clear();
        cin.ignore(1200, '\n');
    }
    
    for (int i = 0; i < user_integer; i++)
    {
        for (int j = 0; j < user_integer; j++)
        {
            cout << "X";
        }
            cout << endl;
    }
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}