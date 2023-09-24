

#include <iostream>
using namespace std;

int main()

{
    /*setlocate(LC_ALL, "ru");*/

    int x;

    x = sizeof(int);
    x = sizeof(short);
    x = sizeof(long);
    x = sizeof(char);
    x = sizeof(double);
    x = sizeof(float);
    cout << x << endl;
}

