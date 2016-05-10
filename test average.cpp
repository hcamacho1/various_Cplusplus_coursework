#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    int test1, test2, test3, test4, test5;
    double testAvg;
    
    cout << " This program calculates average of five test scores. \n";
    //input test scores
    cout << "Enter first test score: ";
    cin >> test1;
    cout <<"\n";
    cout << "Enter second test score: ";
    cin >> test2;
    cout <<"\n";
    cout << "Enter third test score: ";
    cin >> test3;
    cout <<"\n";
    cout << "Enter fourth test score: ";
    cin >> test4;
    cout <<"\n";
    cout << "Enter last test score: ";
    cin >> test5;
    cout <<"\n";
    //calculate average of test scores
    testAvg = (test1+test2+test3+test4+test5) / 5;
    cout << setprecision(1) << fixed;
    //output average
    cout << "Your test average is " << testAvg << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
