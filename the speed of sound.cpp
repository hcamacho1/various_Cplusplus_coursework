#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int distance = 0;
    double time = 0.0;
    char material;
    double AIR = 1100;
    double WATER = 4900;
    double STEEL = 16400;
    string intro = "Please select material to be tested";
    string enterAir = "Enter a for air";
    string enterWater = "Enter b for water";
    string enterSteel = "Enter c for steel";
    string distEnter = " Please specify distance for soundwave to travel ";
    //output prompt for user input   
    cout << intro << endl;
    cout << enterAir << endl;
    cout << enterWater << endl;
    cout << enterSteel << endl;
    //input user choice for switch
    cin >> material;
    
    cout << distEnter << endl;//prompt user to specify distance
    cin >> distance;
    cout << setprecision (4) << fixed;
    if ( distance > 0)//test to make sure that distance is greater than zero
    {
       switch (material)//each switch case calculates the time it will take sound to travel through material for specified distance
           {
                     
                     case 'a' : time = distance / AIR;
                                cout << "The soundwave will travel " << distance << "ft in " << time << "s through air" << endl; 
                                break;
                          
                     case 'b' : time = distance / WATER;
                                cout << "The soundwave will travel " << distance << "ft in " << time << "s through water" << endl;
                                break;
                          
                     case 'c' : time = distance / STEEL;
                                cout << "The soundwave will travel " << distance << "ft in " << time << "s through steel" << endl;
                                break;    
                          
                          
                          
                     default: cout << "you did not enter a valid choice" << endl;
                     
           }
    }
      else 
           { 
                     cout << " You did not enter a valid distance " << endl; //output if user entered distance less than zero  
    
    
           }
    
    
 
    system("PAUSE");
    return EXIT_SUCCESS;
}
