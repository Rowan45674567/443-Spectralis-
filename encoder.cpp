#include <iostream> 
#include <wiringPiI2C.h>
#include <wiringPi.h>

using namespace std;

int main()
{
    wiringPiSetup();			// Setup the library

    while(1)
    {
    pinMode(15, INPUT);		// Configure GPIO8 as an input
    pinMode(16, INPUT);		// Configure GPIO11 as an input
    cout << "pin 8: " << digitalRead(15) << " " << "pin 11: " << digitalRead(16)  << endl;

    
    }
	return 0;
}
