#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    double distance = 0.0;
    double time = 0.0;
    char material;
    double CARBON_DIOXIDE = 258.0;
    double AIR = 331.5;
    double HELIUM = 972.0;
    double HYDROGEN = 1270.0;
    string intro = "Please select a gas to be tested";
    string enterCarbonD = "Enter a for Carbon Dioxide";
    string enterAir = "Enter b for Air";
    string enterHelium = "Enter c for Helium";
    string enterHydrogen = "Enter d for Hydrogen";
    string timeEnter = "Please specify time for sound to travel through medium of choice in seconds ";
    //output prompt for user to enter choice    
    cout << intro << endl;
    cout << enterCarbonD << endl;
    cout << enterAir << endl;
    cout << enterHelium << endl;
    cout << enterHydrogen << endl;
    //input choice
    cin >> material;
    // prompt for user to enter time in seconds
    cout << timeEnter << endl;
    //input time
    cin >> time;
    cout << setprecision (2) << fixed;
    //time must be greater than zero
    if ( time > 0)
    {
         //but less than 30 
         if ( time <= 30)
         {
            switch (material)
                { 
                     
                     case 'a' : distance = time * CARBON_DIOXIDE; // calculate distance
                                cout << "The source of soundwave was " << distance << " meters away from detection location." << endl; 
                                break;
                          
                     case 'b' : distance = time * AIR;// calculate distance
                                cout << "The source of soundwave was " << distance << " meters away from detection location." << endl;
                                break;
                          
                     case 'c' : distance = time * HELIUM;// calculate distance
                                cout << "The source of soundwave was " << distance << " meters away from detection location." << endl;
                                break;    
                     
                     case 'd' : distance = time * HYDROGEN;// calculate distance
                                cout << "The source of soundwave was " << distance << " meters away from detection location." << endl;
                                break;     
                          
                          
                     default: cout << "you did not enter a valid choice" << endl;// default if incorrect choice is made
                     
                }
           }
      else 
           { 
            cout << " You did not enter a valid time " << endl;   // error message if incorrect time is input
           }
    
    }
      
    
 
    system("PAUSE");
    return EXIT_SUCCESS;
}
