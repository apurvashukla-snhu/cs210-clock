//CS210 Project One, creating a clock that displays both 24 hour and 12 hour clock side by side.
//Then adding options to change the time 
#include <iostream>

using namespace std;

//function declarations
void Clock12(int, int, int, string);
void Clock24(int, int, int);
//function implementation
void Clock12(int hourClock12, int minClock12, int secClock12, string timeOfDay)
{
    cout << "Chada Tech Clock Program\n";
    cout << "********************\n";
    cout << "   12-Hour Clock  \n";
    cout << "    " << hourClock12 << ": " << minClock12 << ": " << secClock12 << "  " << timeOfDay << "   \n";
    cout << "********************\n";

    
}

void Clock24(int hourClock24, int minClock24, int secClock24)
{
    cout << "*******************\n";
    cout << "  24-Hour Clock  \n";
    cout << "    " << hourClock24 << ": " << minClock24 << ": " << secClock24 << "      \n";
    cout << "*******************\n";

}
// end function implementation

// main
int main()
{
    int userHour12 = 0; //declared a seperate variables since both clocks required altered behaviour.
    int userHour24 = 0; // ^
    int userMin = 0; // empty initialization to 0 to avoid garbage data and bugs.
    int userSec = 0; // ^
    string timeOfDay = "AM";
    int userInput = 0;;
    Clock12(userHour12, userMin, userSec, timeOfDay);
    cout << "     \n"; // formatting space
    Clock24(userHour24, userMin, userSec);
    //cout statements that show up under every if statement
    cout << "1. Display Time\n";
    cout << "2. Add one Hour\n";
    cout << "3. Add one minute\n";
    cout << "4. Add one second\n";
    cout << "0. Exit the program\n";
    cout << "Enter your choice here (1-4,0): "; // tried to implement into function, could not figure out how to get it working. 
    cin >> userInput;


    while (userInput != 0) { // this will run the loop until the program is exited.
        if (userInput == 1) {
            system("cls"); // to avoid having the screen be cluttered
            Clock12(userHour12, userMin, userSec, timeOfDay);
            cout << "     \n";
            Clock24(userHour24, userMin, userSec);
            cout << "1. Display Time\n";
            cout << "2. Add one Hour\n";
            cout << "3. Add one minute\n";
            cout << "4. Add one second\n";
            cout << "0. Exit the program\n";
            cout << "Enter your choice here (1-4,0): ";
            cin >> userInput;
            
        }
        if (userInput == 2) {
            system("cls");
            userHour12++;
            userHour24++;
            if (userHour12 > 12) {
                userHour12 = 1;
                timeOfDay = "PM";
            } 
            if (userHour24 > 24) {
                userHour24 = 0;
            }
            Clock12(userHour12, userMin, userSec, timeOfDay);
            cout << "     \n";
            Clock24(userHour24, userMin, userSec);
            cout << "1. Display Time\n";
            cout << "2. Add one Hour\n";
            cout << "3. Add one minute\n";
            cout << "4. Add one second\n";
            cout << "0. Exit the program\n";
            cout << "Enter your choice here (1-4,0): ";
            cin >> userInput;
            
        }
        if (userInput == 3) {
            system("cls");
            userMin++;
            if (userMin > 60) {
                userMin = 0;
                userHour12++; // to automatically rollover the clock to new hour once minute limit is reached.
                userHour24++; // ^ 
            }
            Clock12(userHour12, userMin, userSec, timeOfDay);
            cout << "     \n";
            Clock24(userHour24, userMin, userSec);
            cout << "1. Display Time\n";
            cout << "2. Add one Hour\n";
            cout << "3. Add one minute\n";
            cout << "4. Add one second\n";
            cout << "0. Exit the program\n";
            cout << "Enter your choice here (1-4,0): ";
            cin >> userInput;
        }
        if (userInput == 4) {
            system("cls");
            userSec++;
            if (userSec > 60) {
                userSec = 0;
                userMin++; // to automatically rollover the clock to new minute once seconds limit is reached.
            }
            Clock12(userHour12, userMin, userSec, timeOfDay);
            cout << "     \n";
            Clock24(userHour24, userMin, userSec);
            cout << "1. Display Time\n";
            cout << "2. Add one Hour\n";
            cout << "3. Add one minute\n";
            cout << "4. Add one second\n";
            cout << "0. Exit the program\n";
            cout << "Enter your choice here (1-4,0): ";
            cin >> userInput;
        }
    }
    return 0;
}

