


#include <iostream>  //Input/Output Library
using namespace std;


//Constant definition
const double GALLONS_PER_LITER = 0.264179;
//Function definition
double convert_MilesPerGallon1(double miles1, double liters1);
double convert_MilesPerGallon2(double liters2, double miles2);

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Pr//ototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int liters1, liters2;
	double miles1, miles2;
	char repeat;
	do
		//Allow user to read in liters and miles to calculate MPG multipule times
	{
		cout << "Please input how many liters of gasoline is in vehicle 1:\n";
		cin >> liters1;
		
		cout << "Please input how many liters of gasoline is in vehicle 2:\n";
		cin >> liters2;

		cout << "Please input the distance in miles vehicle 1 traveled:\n";
		cin >> miles1;

		cout << "Please input the distance in miles vehicle 2 traveled:\n";
		cin >> miles2;
		
		//display results
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "Consuming " << liters1 << " liters of fuel to travel "
			<< miles1 << " miles, means you are getting "
			<< convert_MilesPerGallon1( miles1,  liters1)
			<< " miles per gallon." << endl;

		cout << "Vehicle 1's MPG is: " << convert_MilesPerGallon1(miles1, liters1) << endl;
		double MPG1 = convert_MilesPerGallon1(miles1, liters1);
		cout << "Consuming " << liters2 << " liters of fuel to travel "
			<< miles2 << " miles, means you are getting "
			<< convert_MilesPerGallon2(liters2, miles2)
			<< " miles per gallon." << endl;

		cout << "Vehicle 2's MPG is is: " << convert_MilesPerGallon2(liters2, miles2) << endl;
		double MPG2 = convert_MilesPerGallon2(liters2, miles2);
		if (MPG1 > MPG2) {
			cout << "Vehicle 1 has the best fuel efficiency.\n";
		}
		else if (MPG1 < MPG2) {
			cout << "Vehicle 2 has the best fuel efficiency.\n";
		}
		else if (MPG1 == MPG2) {
			cout << "Both are equal, unable to determine which has the better fuel effinciency.\n";
		}
		else if (MPG1 == 0 && MPG2 == 0) {
			cout << "Neither vehicle moved, unable to determine which has the better fuel effinciency.\n";
		}
			//Ask user if program should be repeated
		cout << "Would you like to repeat the process?\n";
		cout << "Please enter: [Y/N]\n";
		cin >> repeat;
		//End Loop
	} while (repeat == 'Y' || repeat == 'y');
	system("pause");
	return 0;
}
//Function Definition
    double convert_MilesPerGallon1(double miles1, double liters1) {
	//Function Call
	double MPG1;
		MPG1 = miles1 / (liters1 * GALLONS_PER_LITER);
		
		return MPG1;
}
double convert_MilesPerGallon2(double liters2, double miles2) {
	double MPG2;
		MPG2 = miles2 / (liters2 * GALLONS_PER_LITER);
		return MPG2;
}
    //Declare Variables
    
    //Initialize or input i.e. set variable values
   
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
