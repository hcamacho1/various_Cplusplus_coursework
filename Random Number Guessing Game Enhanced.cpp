#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned seed = time(0); // use time function for seed value
    string tooHigh = "Too high try again. ";
    string tooLow = "Too Low try again. ";
    string guessNum = "Guess a number 1-100. ";
    int guess = 0;
    int number = 0;// where actual random nuber will be stored
    int count = 0;
    
    cout << "NUMBER GUESSING GAME" << endl;
    srand(seed);//specify seed value for rand () function
    number = 1 + rand () % 100; // specify  max range of number to 100 
    cout << guessNum << endl;
    cin >> guess;
    cout << endl;
    
    while (number != guess )
          {
            if (guess > number)//if guess is too high
                  {
                  cout << tooHigh << endl;
                  } 
                  if (guess < number)//if guess is too low
                      {
                      cout << tooLow << endl;
                      }
            count ++;
            cout << guessNum << endl;//prompt for next guess
            cin >> guess;
            cout << endl;
            }
        cout << "You have guessed correctly! " << endl;        
        cout << "You took " << count << " trys to guess the correct number" << endl;    
       
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
