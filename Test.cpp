#include "C:\Users\zxcvber\Desktop\CMake\source\Array.h"
#include <iostream>
using namespace std;
int main()
{
    CubbyMath::Array<int> a;
    a.Set(100);
    cout << a[0] << endl; // expected 100
    CubbyMath::Array<int> b;
    b.Set(a);
    cout << b[0] << endl; // 100
    a.Clear();
    cout << a[0] << endl; // 0
    b.Set(-10);
    a.Swap(b);
    cout << a[0] << endl; // -10
    a.Set(10000);
    b = a;
    cout << b.At(0) << endl; // 10000
    b = 10;
    cout << b.At(0) << endl; // 10
    cout << "Why does this work..." << endl;
}
