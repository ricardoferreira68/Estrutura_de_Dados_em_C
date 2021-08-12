#include <iostream>
#include <ncurses.h>
using namespace std;
int main(void)
{
    initscr();
    cbreak();
    noecho();
    scrollok(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    cout << "Início" << endl;
    while (1)
    {
        if (getch() == 'g')
        {
            cout << "You pressed G\n" << endl;
        }
        //napms(500);
    }
    return 0;
}
