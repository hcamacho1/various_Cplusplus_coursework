#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    //starting values
    double annInt = 0.0;
    int monthPass = 0;
    double amountDep = 0.0;
    double balance = 0.0;
    double amountWithdr = 0.0;
    double monthIntRate = 0.0;
    double monthInt = 0.0;
    double totalDep = 0.0;
    double totalWithdr = 0.0;
    double totalIntrEarn = 0.0;
    
    //prompts for annual interest
    string enterAnnInt =  "Please enter annual interest rate in decimal form.";
    string enterStartBal =  "Please enter starting balance. ";
    string enterMonthPass = "Please enter months passed since account was established.";
    //prompts for use inside loop
    string enterAmtDep = "Please enter amount deposited for month";
    string enterAmtWithdr = "Please enter amount withdrawn for month";
     
    
    //enter annual interest rate
    cout << enterAnnInt << endl;
    cin >> annInt;
    
    //enter starting balance
    cout << enterStartBal << endl;
    cin >> balance;
    
    //enter months passed since account was established
    cout << enterMonthPass << endl;
    cin >> monthPass;
    
    
        for (int month = 1; month <= monthPass; month++)
            {
             cout << enterAmtDep << " " << month << endl;
             cin >> amountDep;
             if (amountDep >= 0)
                {
                 cout << enterAmtWithdr << " " << month << endl;
                 cin >> amountWithdr;
                 if (amountWithdr >= 0)
                 {        
                  totalDep += amountDep;
                  totalWithdr += amountWithdr;
             
                  balance += amountDep; //add amount deposited to balance     
                  balance -= amountWithdr;// subtract amount withdrawn from balance
             
                  monthIntRate = annInt / 12;//calculate monthly interest rate
                  monthInt = monthIntRate * balance;
             
                  totalIntrEarn += monthInt;
             
                  balance += monthInt; //add interest to balance
                  }
                 }
               else
                  {
                   cout << "Sorry you cannot input negative numbers" << endl;
                   break;
                   }
             } 
             
        cout << endl;
        cout << setprecision (2) << fixed;     
        cout << "Ending balance: $" << balance << endl;
        cout << "Total Amount Deposited: $" << totalDep << endl;
        cout << "Total Amount Withdrawn: $" << totalWithdr << endl;
        cout << "Total Interest Earned: $" << totalIntrEarn << endl;
        
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
