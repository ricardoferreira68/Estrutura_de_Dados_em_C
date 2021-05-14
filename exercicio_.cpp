#include <iostream>
using namespace std;
int executar(int x, int *y)
{
    x = *y * 2;
    *y = ++x;
    return x + *y;
}

int main(void)
{
    int a = 2, b = 2, c = 2;
    c = executar(a, &b);
    cout << a << ", " << b << ", " << c << endl;
}
