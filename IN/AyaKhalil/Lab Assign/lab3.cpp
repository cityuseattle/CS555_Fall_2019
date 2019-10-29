#include<vector>
#include<cstdlib>
#include<algorithm>
#include<iostream>

using namespace std;

void merge(vector<int> a,vector<int> b,vector<int> c){
    
}

int rand1000() {
    return rand()%1001;
}

int main() {
    vector<int> a(1000);
    vector<int> b(1000);
    vector<int> c(2000);
    generate(a.begin(), a.end(), rand1000);
    generate(b.begin(), b.end(), rand1000);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater <>());
    for(int i = 0; i < 10; i++) {
        cout << a[i] << " " << b[i] << endl;
    }
    merge(a, b, c);

    return 0;
}