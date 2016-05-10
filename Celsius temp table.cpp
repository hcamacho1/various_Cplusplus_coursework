#include <cstdlib>
#include <iostream>

using namespace std;
double calculateCel (double);
double ctemp = 0.0;
int main(int argc, char *argv[])
{
    cout << " F      C " << endl;
    cout << "____________" << endl    
    //set ftemp as incrementing value for loop  and input Fahrenheit value for function
    for (double ftemp = 0 ; ftemp <= 20 ; ftemp++ )
      {
      ctemp = calculateCel (ftemp);//call function with ftem as argument
      
      cout << ftemp << "   " << ctemp << endl;// output temps
      }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
//function to calculate celsius and return value
double calculateCel ( double initTemp )
{
    double celsius = 0.0;
    celsius = 5*(initTemp - 32)/9;       
    return celsius;   
}
