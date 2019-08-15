#include<iostream>

using namespace std;

 int main()
 {
    int i = 42;
    int *p = nullptr;
    p = &i;
    *p = i;
    int &i2 = *p;
     return 0;
 }