

//System Libraries
#include <iostream> 
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    int arabic, n1000s,n100s,n10s,n1s; 
    
    //Declare Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>arabic;
    
    n1000s=arabic/1000;
    n100s=(arabic-n1000s*1000)/100;
    n10s=arabic%100/10;
    n1s=arabic%10;
    
    //Initialize or input i.e. set variable values
    if ((arabic >=1000) && (arabic <=3000)){
        cout << arabic << "is equal to";
    } else {
        cout<<arabic<< "is Out of Range!"
    }

    //Exit stage right or left!
    return 0;
}