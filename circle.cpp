#include "Circle.h"

int main()
{
    Circle M(5);
    M.print();
    M -= 2;
    M.print();
    M += 1;
    M.print();
    Circle A(1);

    cout << boolalpha << (A == M) << endl;
    cout << boolalpha << (A < M) << endl;
}

