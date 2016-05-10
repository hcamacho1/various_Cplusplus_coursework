#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
double presentValue ( double, double, int );
//present value. amount currently needed to deposit 
double P = 0.0;
//future value
double F = 0.0;
//annual interest rate
double r = 0.0;
//numer of years
int n = 0;
double presentValue2 = 0.0;


int main(int argc, char *argv[])
{
    cout << " What is you goal amount? " << endl;
    cin >> F;
    cout << " Please enter annual interest rate in decimal form." << endl;
    cin >> r;
    cout << " Please enter number of years you want to let the money sit in the account." << endl;
    cin >> n;
    //pass values to function
    presentValue2 = presentValue ( F, r, n);
    cout << "Amount to deposit: " << presentValue2 << endl;
     
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


double presentValue ( double future, double interest, int years)
{
  double depositAmount;
  depositAmount = future / pow(interest + 1, years);
  return depositAmount;



}
