// ukazatelthisDZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<time.h>
using namespace std;

class Point
{
    int a;
    int b;
    int c;
public:
    Point()
    {
        cout << "Construct\n";
        a = b = c = 0;
    }
    Point(int a1, int b1, int c1)
    {
        cout << "Construct by 3 param\n";
        a = a1;
        b = b1;
        c = c1;
    }
    void Init()
    {
        a = rand() % 10;
        c = rand() % 10;
        b = rand() % 10;
    }
    void Init(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    void Output()
    {
        cout << "A: " << a << "\tB: " << b << "\tC: " << c << endl;
    }
};
int main()
{
    srand(unsigned(time(0)));

    Point obj1;
    obj1.Output();
    Point obj2(10, 20, 30);
    obj2.Output();

    system("pause");
}