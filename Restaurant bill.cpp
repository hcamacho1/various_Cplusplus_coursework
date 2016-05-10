#include <cstdlib>
#include <iostream>

using namespace std;

int main()

{
       float mealCharge = 44.50;
       float tax = .0675;
       float tip = .15;
       float taxAmount;
       float tipAmount;
       float totalBill;
       float total1;
       
       taxAmount = mealCharge * tax;
       total1 = mealCharge + taxAmount;
       tipAmount = total1 * tip;
       totalBill = total1 + tipAmount;
       
       cout << "Meal cost : $" << mealCharge << endl;
       cout << "Tax Amount is : $" << taxAmount << endl;
       cout << "Tip Amount is : $" << tipAmount << endl;
       cout << "Total Bill is : $" << totalBill << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
