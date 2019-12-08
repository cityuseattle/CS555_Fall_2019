#include <iostream>
using namespace std;

class shape{
    public:
    virtual void draw()=0;
};

class rectangle:shape{
    public:
    void draw(){
        cout<<"drawing rectangle..."<<endl;
    }
};

class circle:shape{
    public:
    void draw(){
        cout<<"drawing circle..."<<endl;
    }
};

int main(){
    rectangle rec;
    rec.draw();
    
    circle cir;
    cir.draw();

    return 0;
}