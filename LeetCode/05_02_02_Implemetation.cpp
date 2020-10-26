#include <iostream>
using namespace std;
#include "05_02_DynamicArrayClass.cpp"

int main()
{
    DynamicArray d1; /// default constructor
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    cout << d1.getCapacity() << endl;
    d1.add(60);

    d1.print();
    cout << d1.getCapacity() << endl;

    DynamicArray d2(d1); //Copy Constructor inbuilt called &
                         // it also creates shallow copy
    DynamicArray d3;
    d3 = d1; // it also creates shallow copy
    d1.add(100, 0);
    d1.print();
    cout << endl;
    d2.print();
    cout << endl;
    d3.print();
    cout << endl;
    DynamicArray d4(100);
    cout << d4.getCapacity();
    return 0;
}