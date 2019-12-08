#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

static const int RANDOM_LIMIT = 100;

int main() {
    int SecretNumber, GuessedNumber, NumberOfAttempts;
    bool KeepTrying;
    string KeepTryingQuestion;

    KeepTrying = 1; // set the variable to True (it will maintein the game on)
    NumberOfAttempts = 0; // counter of attempts
    SecretNumber = (rand() % RANDOM_LIMIT); // Generates a the random secret number between 0 and 100 
//    SecretNumber = 10;
    
    while (KeepTrying) {
        cout << "Try to guess the secret number between 0 and 100: ";
        cin >> GuessedNumber;
        NumberOfAttempts++;
        
        if (GuessedNumber > SecretNumber) {
             cout << "Too high!" << endl;  
        }
        else if (GuessedNumber < SecretNumber) {
             cout << "Too Low!" << endl;  
        }
        else { // GuessedNumber = SecretNumber
             cout << "You win!" << endl;
             KeepTrying = 0;  // finishes the loop   
        };

        if (KeepTrying) { // if the game is not finished yet
            cout << "Press 'y' to keep trying or any other key to quit: ";
            cin >> KeepTryingQuestion;
            if (KeepTryingQuestion != "y") { // user choose to give up
                 cout << "You Loose!" << endl;  
                 KeepTrying = 0;  // finishes the loop   
            };  
        };
    };

     cout << "The Secret Number is: " << SecretNumber << endl;    
     cout << "Number of attempts: " << NumberOfAttempts << endl;      

    return 0;
}
