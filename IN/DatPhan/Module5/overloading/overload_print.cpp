#include <iostream>
using namespace std;

class printData
{
public:
    void print(int i)
    {
        cout << "Printing int: " << i << endl;
    }
    void print(double f)
    {
        cout << "Printing float: " << f << endl;
    }
    void print(char c[], int size)
    {
        cout << "Printing character: ";
        for (int i = 0; i < size; i++)
        {
            cout << c[i];
        }
        cout << endl;
    }
};

int main(void)
{
    printData pd;

    pd.print(5);
    pd.print(500.263);

    char hello[] = "Hello C++";
    pd.print(hello, sizeof(hello));

    return 0;
}