#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <cmath>
#include <array>
#include <algorithm>
using namespace std;

/**
 * This program demonstarates the wokring of the 
 * RSA algorithm
 * */


//encrypt the message
void encrypt(string msg, double e, double n, double *cipher)
{
    double encode;
   //  ato store the message 
    double *arr = new double[msg.length()];
   //  for loop to iterate through the message
    for (int i = 0; i < msg.length(); i++)
    {
      //Encriptionof the plain text
      // c = m^e mod n 
        cipher[i] = pow(msg[i], e);
        encode = fmod(cipher[i], n);
        arr[i] = encode;
    }
    cout << "Encrypted message: ";
    for (int i = 0; i < msg.length(); i++)
    {
        cout << arr[i];
    }
}

// fucntion to decrypt message 
void decrypt(int length, double e, double phi, double n, double *cipher)
{
    double m, c;
   //  find value of d
    double d2 = 1 / e;
    double d = fmod(d2, phi);
    cout << " d: " ;
    cout << d << endl;
    cout << "Decrypted message: " << endl ;
    for (int i = 0; i < length; i++)
    {
      //   t c^d mod n 
        m = round(fmod(pow(cipher[i],d), n));
        cout << (char)m ;
    }
    
}

int main()
{
    // local variables
    // prime number p & q
    double p = 31, q = 37;
    string message;
    double coprime;

    // calculate n
    double n = p * q;

    // calculate phi
    double phi = (p - 1) * (q - 1);
    double e = 2;
    double d;

    // check coprime
    while (e < phi)
    {
        if (__gcd((int)e, (int)phi) == 1)
            break;
        else
            e++;
    }
    // user input for encryption
    cout << "\n Enter the Message to encrypt \n";
    cin >> message;

    double *cipher = new double[message.length()];
   // encryption function call
    encrypt(message, e, n, cipher);
    cout << " \n e: " << e <<endl;

   //  Decrypt Message function call 
    decrypt(message.length(), e, phi, n, cipher);
    return 0;
}