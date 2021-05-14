#include <iostream>
using namespace std;
int main(void)
{
    int ptr[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, };
    cout <<"{";
    for (int i=0;i<9;i++)
        cout <<*(ptr+i)<<", ";
    cout <<"}"<< endl;
    return 0;
}
