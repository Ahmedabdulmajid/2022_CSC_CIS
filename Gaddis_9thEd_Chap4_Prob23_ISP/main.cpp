


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
    
    //Initialize or input i.e. set variable values
    cout << "ISP Bill" <<endl;
    cout << "Input Package and Hours" << endl;
    //Map inputs -> outputs
    if ((package == "A") || (package == "B") || (package == "C")) {
        cin >> time;
        // Time validition
    if (time <= 744) {
        // Package A 
    if (package == "A") {
    if (time > 10) {
        price = 9.95 + (time - 10) * 2;
    } else {
        price = 9.95;
        // Package B
        else if (package == "B") {
            if (time > 20) {
                price = 14.95 + (time - 20) * 2;
    } else {
                price = 14.95;
                // package C
            } else {
                price = 19.95;
            } else {
                cout << "Invalid number og hours!";
            } else {
                cout << "Invalid package!";
            }
        }
    }
    }    
    }
    }
    
    //Display the outputs
    cout << "Bill = $ " << price;

    //Exit stage right or left!
    return 0;
}