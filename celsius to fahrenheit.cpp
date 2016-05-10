#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    double celsius;
    double fahrenheit;
     cout << "Enter celsius temp to be converted: ";
     // user input celsius temp to be converted
     cin >> celsius;
     // convert celsius to fahrenheit
     fahrenheit = (9/5)*celsius+32;
     // output converted temp
     cout << "\n";
     cout << setprecision (2) << fixed;
     cout << fahrenheit << " Degrees Fahrenheit" << endl;
     
    system("PAUSE");
    return EXIT_SUCCESS;
}
