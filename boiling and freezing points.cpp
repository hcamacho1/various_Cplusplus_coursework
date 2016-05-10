#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    
    int temp = 0;
    string alch = "Ethyl Alcohol";
    string merc = "Mercury";
    string oxy = "Oxygen";
    string wat = "Water";
    
    
    string userPrompt1 = "please enter a temperature (in degrees F)";
    
    cout << userPrompt1 << endl;
    cin >> temp; // user input value for temp variable
    
    if ( temp <= -362 )
     {
         cout << oxy << " will freeze." << endl;
         cout << merc << " will freeze." << endl;
         cout << alch << " will freeze." << endl;
         cout << wat << " will freeze." << endl;
     }
    else if ( temp > -362 && temp <= -173)
    {
         cout << merc << " will freeze." << endl;
         cout << alch << " will freeze." << endl;
         cout << wat << " will freeze." << endl;
         //test for minimum oxygen boiling point
           if ( temp >= -306)
             {
             cout << oxy << " will boil." << endl;
             }
    }
    else if (temp > -173 && temp <= -38)
    {
         cout << alch << " will freeze." << endl;
         cout << wat << " will freeze." << endl;
         cout << oxy << " will boil." << endl;
    }
    else if (temp > -38 && temp <= 32)
    {
         cout << wat << " will freeze." << endl;
         cout << oxy << " will boil." << endl;
    }
    else if (temp > 32 && temp <= 172)
    {
         if ( temp == 172)
         {
         cout << alch << " will boil." << endl;
         }
         cout << oxy << " will boil." << endl;
         
    }
    else if (temp > 172 && temp <= 212)
    {
         if (temp == 212)//test for water boiling point
         {
         cout << wat << " will boil." << endl;
         }
         cout << oxy << " will boil." << endl;
         cout << alch << " will boil." << endl;
         
    }
    else if (temp > 212 && temp <= 676)
    {
         if (temp == 676)//test for mercury boiling point
         {
         cout << merc << " will boil." << endl;
         }
         cout << oxy << " will boil." << endl;
         cout << alch << " will boil." << endl;
         cout << wat << " will boil." << endl;
         
    }
    else
    {
        cout << oxy << " will boil." << endl;
        cout << alch << " will boil." << endl;
        cout << merc << " will boil." << endl;
        cout << wat << " will boil." << endl;
    }
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
