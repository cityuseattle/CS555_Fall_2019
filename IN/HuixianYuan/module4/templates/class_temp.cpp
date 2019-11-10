#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class stack{
    private:
    vector<T> elems;

    public:
    void push(T const&);
    void pop();
    T top() const;

    bool empty() const{
        return elems.empty();
    }
};

template <class T>
void stack<T>::push (T const& elem){
    elems.push_back(elem);
}

template <class T>
void stack<T>::pop(){
    if (elems.empty()){
        throw out_of_range("stack<>::pop(): empty stack");
    }

    elems.pop_back();
}

template <class T>
T stack<T>::top ()const{
    if(elems.empty()){
        throw out_of_range("stack<>::top(): empty stack");
    }

    return elems.back();
}

int main(){
    try{
        stack<int> intsatck;
        stack<string>stringstack;

        intsatck.push(7);
        cout<<intsatck.top()<<endl;

        stringstack.push("hello");
        cout<<stringstack.top()<<std::endl;
        stringstack.pop();
        stringstack.pop();
    }
    catch(exception const& ex){
        cerr<<"exception: "<<ex.what()<<endl;
        return -1;
    }
}