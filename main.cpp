#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    
    bool again;

    do
    {
        srand(time(0));
        int secretNumber = rand() % 100 + 1;

        int guess;
        int attemps = 0;

        cout << "Welcome to Guess the Number Game!" << endl;
        cout << "I'm thinking of a number from 1 to 100, " << endl << "can you think of the number?" << endl;
            do
            {
                cout << "Take a guess: ";
                cin >> guess;
                attemps++;
                if (guess > secretNumber)
                {
                    cout << "Your guess was too high D:" << endl << "Try again." <<endl;
                }
                else if (guess < secretNumber)
                {
                    cout << "Your guess was too low D:" << endl << "Try again." << endl;
                }
                else
                {
                    cout << "Congradulations! Your guess was correct!" << endl << "The secret number was " << secretNumber << "." << endl;
                    cout << "It took you " << attemps << " tries." << endl;
                }
                
            } while (guess != secretNumber);
            cout << "Do you want to play again?" << endl;
            cout << "Type 1 to play again and 0 to stop!" << endl;
            cout << "Again?: ";
            cin >> again;
    } while (again == true);
    
    return 0;
}