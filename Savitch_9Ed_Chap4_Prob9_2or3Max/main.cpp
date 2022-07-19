



/System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!

    //Set the random number seed
    
    //Declare Variables
    int max2(int x,int y);
int max3(int n,int m,int o); //function prototype

int main()
{
    int x,y,z,ans;
	cout < <" Input x, y, z:";
	cin>> x >> y >> z;
	ans = max3(x, y, z); // Function is called
	cout < <"Answer is: " < <ans < <endl;

    return 0;
}
int max2(int x, int y){
int result;
		if ( x > y ) //if “x” is bigger than “y”
			result =x; //output x
		else
			result = y; //if not bigger than “y” output “y”
		return result;
}

int max3(int x, int y, int z){
int result;
	result=max2(x,max2(y,z));
	return result;
}
    