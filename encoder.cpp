#include <iostream> 
#include <wiringPiI2C.h>
#include <wiringPi.h>

using namespace std;

int main()
{
    //wiringPiSetup();			// Setup the library
pinMode(15, INPUT);		// Configure GPIO8 as an input
pinMode(0, INPUT);		// Configure GPIO11 as an input

// Main program loop
while(1)
{
    cout << "pin 8: " << digitalRead(15) << endl; 
    cout << "pin 11: " << digitalRead(0)  << endl;
}
	return 0;
}

