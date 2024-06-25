#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    char choice;
    do
    {
        cout << "\t\t\t\t----------||Welcome to the Number Guessing Game!||----------" << endl;
        cout << endl;
        int limit;
        cout << "\t\tSet your Ground In which You want to play (Enter limit of numbers): ";
        cin >> limit;
        srand(static_cast<unsigned int>(time(0)));

        int randomNumber = 1 + rand() % limit;

        int userGuess = 0;
        int attempts = 0;

        cout << "\t\tI have generated a random number between 1 and " << limit << endl;
        cout << "\t\tCan you guess what it is?" << endl;

        while (true)
        {
            cout << "Enter your guess: ";
            cin >> userGuess;
            attempts++;

            if (userGuess < randomNumber)
            {
                cout << "\t\tToo low! Try again." << endl;
            }
            else if (userGuess > randomNumber)
            {
                cout << "\t\tToo high! Try again." << endl;
            }
            else
            {
                cout << "\t\tCongratulations! You guessed the number in " << attempts << " attempts." << endl;
                break;
            }
        }
        cout << endl;
        cout << "\t\t\t---------------------------------------------" << endl;
        cout << endl;
        cout << "\t\tDo you want to play game again (y/n): ";
        cin >> choice;
    } while (choice != 'n');
    cout<<"\t\t\t----------Thank You For Playing Game!---------"<<endl;
    cout<<"\t\t\t-------------Regards! Muhammad Abdullah.--------------";
    return 0;
}

