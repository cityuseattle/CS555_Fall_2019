#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;
template <class T>
class Stack {
    private:
       vector<T> elems;
    
    public:
    void push(T const&);
    void pop();
    T top() const;

    bool empty() const {
        return elems.empty();
    }
};

template <class T>
void Stack<T>::pop() {
    if (elems.empty()){
        throw out_of_range("Stack<>::pop(): empty Stack");
    }

    elems.pop_back();
}

template <class T>
T Stack<T>::top () const {
    if (elems.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }

    return elems.back();
}

int main() {
    try {
        Stack<int> intStack;
        Stack<string> StringStack;

        intStack.push(7);
        cout << intStack.top() <<endl;

        StringStack.push("hello");
        cout << StringStack.top() << std::endl;
        StringStack.pop();
        StringStack.pop();
    } catch (exception const& ex) {
        cerr << "Exception: " << ex.what() << endl;
        return -1;
    }
}






