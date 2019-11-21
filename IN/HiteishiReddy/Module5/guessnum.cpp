#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // to store random number 
	int num;
    // to store the user input  
    int input;
    // to store the number of guesses 
    int  tries;
    tries = 0;
    bool win = false;
    //seed random number generator
	srand(time(0)); 
    // random number between 1 and 100
	num = rand() % 100 + 1;
    // as long as value of win is false it will execute the block of code 
    while (win == false ){
		 cout << "guess a number  between 1 and 100 : " << endl;
        // user input equal to guess
		cin >> input;
        // Adds one for each guess 
		tries++;

        if (input == num)
        win = true;
        // if user  guess higher than random num

		else if (input > num)
			cout << "guess lower" << endl;
        
        // if user  guess lower than random number
		else if (input < num)
			cout << "guess higher" << endl;
        
        
}
		cout << "YAY! you guessed right!!  " << endl;
            // print message for the number of tires 
         cout << " And your no of guesses were: " << tries << endl;
            // keeps executing as long as the input is not equal to random num
                                               
	return 0;
}
