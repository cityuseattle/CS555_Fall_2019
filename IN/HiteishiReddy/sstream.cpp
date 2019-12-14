// #include <iostream>
// #include <bits/stdc++.h> // stringstream

// using namespace std;

// /*
// 1 getting an input from cin (input stream) from a user
//   e.g. test
//   e.g. this is a test // what happened?
// int main()
// {
//     string input_string;
//     cout << "Enter your string: ";
//     cin >> input_string;         // word -> string
//     cout << "You entered : " << input_string;
//     return 0;
// }
// */

// /*
// 2 when there are spaces, cin takes one word until it sees a space, puts it into a string obj.
//   e.g. this is a test
//   In this case, getline is useful to store a whole line into a string.
//   // what if you want to print a each word out of the getline-ed object?
// int main()
// {
//     string input_string;
//     string word;
//     cout << "Enter your string: ";
//     // cin >> input_string;         // word -> string
//     getline(cin, input_string);     // line -> string
//     cout << "You entered : " << input_string;

//     return 0;
// }
// */

// /*
// 3 you can extract (parsing) a word from a string line object that contains multiple spaces or quotes
//   use stringstream but it requires an initializer for its input

// int main()
// {
//     string input_string;
//     string word;
//     cout << "Enter your string: ";
//     getline(cin, input_string);  // line -> string

//     // A stringstream associates a string object with a stream allowing you 
//     // to read from the string as if it were a stream (like cin) with an initializer
//     stringstream words(input_string); // need #include <bits/stdc++.h>

//     // then use getline() to switch the input string 
//     // from cin to the string you want to parse
//     while(getline(words, word, ' '))
//     {                       //  ^-- this is a character not a string (delimeter)
//         cout << word << " ";
//     }
//     return 0;
// }
// */

// /*
// 4 let's do more parsing with stringstream!
//   there are basic methods you can use:
//     << // to append to the stream
//     >> // to extract a substring from the stream
//     clear() // to clear the stream
//     str()   // to get and set string object from the string stream

// int main()
// {
//     string input_string;
//     string word;
//     cout << "Enter your string: ";
//     getline(cin, input_string);  // line -> string
    
//     // str()
//     // A stringstream associates a string object with a stream allowing you 
//     // to read from the string as if it were a stream (like cin) with an initializer
//     stringstream words(input_string); // words <- input string stream
//     // stream.str() extracts a string object from the string stream 
//     cout << endl << "string from the stream " << words.str(); 
//     words.str("A NEW STRING"); // replacing the existing string object with new string
//     cout << endl << "string from the stream " << words.str(); 

//     // >>
//     // now, we can use >> operator to "extract"
//     // from the input stream "words"
//     while(words >> word) // Note: input_stream >> string, not string >> string!
//     {                       
//         cout << word << " ";
//     }

//     // QUESTION 4.
//     // how would you modify the code above using ">>" operator while extending
//     // the code above to count the # of words and remove the space?
//     stringstream words2(input_string); // words <- input stream

//     // YOUR IMPLEMENTATION GOES HERE


//     return 0;
// }
// */