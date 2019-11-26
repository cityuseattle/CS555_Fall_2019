#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int targetnum;      // Define variable targetnum to store the target number that player need to guess
    srand((unsigned)time(NULL));      // This code to make everytime we run the program the random is different
    targetnum = rand() % 100 + 1; // Assign a random number from 0 to 100 to targetnum
    int attempt=0;   // Defint attempt variable to count attempts
    int gnum; // Define guessing number which is the number user input
    
    cout << "Welcome to Number Guessing Game" << endl; // Print out title

    while(true){  // While loop to keep asking for user input when they haven't guess the right number
    cout<< "Make your guess ? "; // Ask for their guess
    cin>>gnum; // assign the input to gnum variable
    attempt++; // Count the attempt
    
    if (!gnum){  // Check if the input is interger
        cout<< "Please enter an interger"<<endl;   
        cin.clear();                                    // clear the input
        cin.ignore(100, '\n');  // Ignore 100 characters
    }
    else if ( gnum < targetnum){  // Check the case when gnum < targernum
        cout<< "Too low, Try again "<< endl;    // Say its too low
    }
    else if (gnum > targetnum){  // Check the case when gnum > targetnum
        cout<< "Too high, Try again"<<endl; // Say its too high
    }
    
    else {          // Else means when gnum == targetnum
        cout<< "You got it!!!"<<endl;           // Says they got it
        break;      // Break out of loop
    }
    }
    cout<< "The secret number was " << targetnum<<" You got it after "<< attempt << " attempts" <<endl; //Anounce the target number

}