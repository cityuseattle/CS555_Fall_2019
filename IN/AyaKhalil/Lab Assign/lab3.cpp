#include<vector>
#include<cstdlib>
#include<algorithm>
#include<iostream>

using namespace std;

//the merge function contains 3 vectors, one of them is empty to merge the first two vwctors inside it
void merge(vector<int> a,vector<int> b,vector<int> c){  
    auto i = a.begin();  // the iterator for the first item in the vector 
    auto j = b.rbegin(); // the iterator for the last element in the vector 
    while (i != a.end() || j != b.rend()) {  //loop until both vectors reach their end
        if(j == b.rend() || *i < *j)  { //in case b reach its end which is the begining because it's in a reverse order, or the value of i is less than j  
            c.push_back(*i);           // in that case will push the value of i 
            i++;
        } else {
            c.push_back(*j);
            j++;
        }
    }

    for (auto i = c.begin(); i != c.end(); ++i)   // print vector c which contains the other two lists 
        cout << *i <<endl;       

}

int rand1000() {        // this function to return a random value between 0 & 1000
    return rand()%1001;
}

int main() {
    //create vectors
    vector<int> a(10);  
    vector<int> b(10);
    vector<int> c;

//generate random values in the vectors
    generate(a.begin(), a.end(), rand1000);
    generate(b.begin(), b.end(), rand1000);

//sort the vectors, one in the ascending order, the other in decending order    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater <>());

//print the list before merging
    cout <<"Two lists before merge"<< endl;
    for(int i = 0; i < 10; i++) {
        cout <<a[i] << "  "<< b[i] << endl;
    }


    cout <<"List After merge"<< endl;
    merge(a, b, c);

    cout << "End of List";

    return 0;
}