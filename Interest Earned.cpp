#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    double interest, amount, principal, rate, rate1;
    int t;
    
    cout << "What is your principal amount? ";
    cin >> principal;
    cout << "What is your interest rate? ";
    cin >> rate;
    rate1 = rate /100;
    
    cout << "How many times a year is interest compounded? ";
    cin >> t;
    amount = principal * pow ((1+rate1/t),t);
    interest = amount - principal;
    cout << setprecision (7);
    cout << "Interest Rate:       " << rate << "%\n";
    cout << "Times compounded:    " << t << endl;
    cout << "Principal:           " << principal << endl;
    cout << "Interest:            " << setprecision (4) << interest << endl;
    cout << "Amount in Savings:   " << setprecision (6) << amount << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
} 
