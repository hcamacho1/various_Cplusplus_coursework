#include <cstdlib>
#include <iostream>

using namespace std;

int main()

{
       int purchase = 52;
       float countyTax = .02;
       float stateTax = .04;
       float totalTax;
       float tax1;
       float tax2;
       
       tax1 = purchase * countyTax;
       tax2 = purchase * stateTax;
       totalTax = tax1 + tax2;
       cout << " Total sales tax is $"<< totalTax << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
