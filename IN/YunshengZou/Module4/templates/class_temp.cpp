#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class Stack {
    private:
      vector<T> elems; //elements
    public:
      void push(T const&); //push element
      void pop();//popelement
      T top() const;//return top element

      bool empty() const {
          return elems.empty(); //return true if empty
      }
};

template <class T>
void Stack<T>::push(T const& elem){
    //append copy of passed element
    elems.push_back(elem);
}

template<class T>
void Stack<T>::pop(){
    if(elems.empty()){
        throw out_of_range("Stack<>::pop(): empty stack");
    }

    //remove last element
    elems.pop_back();
}
template <class T>
T Stack<T>::top() const {
    if(elems.empty()){
        throw out_of_range("Stack<>::pop(): empty stack");
    }

    //return copy of last element
    return elems.back();
}

int main()
{
    try{
        Stack<int> intStack; // stack of ints
        Stack<string> stringStack; //stack of strings

        //manipulate int stack
        intStack.push(7);
        cout << intStack.top() << endl;

        //manipulate string stack
        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        stringStack.pop();
        stringStack.pop();
    }catch (exception const& ex){
        cerr << "Exception: " << ex.what() << endl;
        return -1;
    }
}