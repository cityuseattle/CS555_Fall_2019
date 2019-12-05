#include "iostream"
#include "stack"
using namespace std;

void showstack(stack <int> s) {
  while (!s.empty()) {
    cout << s.top() << '\t';
    s.pop();
  }
}

stack<int> empty(stack <int> s) {
  while (!s.empty()) {
    s.pop();
  }

  return s;
}

int main() {
  stack <int> s;
  s.push(10);
  s.push(30);
  s.push(20);
  s.push(5);
  s.push(1);  

  cout << "The stack is : ";
  showstack(s);

  cout << "\ns.size() : " << s.size();
  cout << "\ns.top() : " << s.top();

  cout << "\ns.pop() : ";
  s.pop();
  showstack(s);
  cout << endl;

  cout << "Emptying" << endl;
  s = empty(s);
  showstack(s);


  return 0;
}