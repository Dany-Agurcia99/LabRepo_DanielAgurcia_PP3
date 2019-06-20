#include <ncurses.h>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <sstream>
using std::stringstream;
int main()
{
    char usuario[20] = "home";
    char computadora[20] = "vm-gauss";
    char directorio[30] = "";
    char input[20];
    string salida = "";
    initscr();
    while (salida != "exit")
    {
        printw("%s@%s:~%s$ ", usuario, computadora, directorio);
        refresh();
        getstr(input);
        if (input[0] == 'e' && input[1] == 'x' && input[2] == 'i' && input[3] == 't')
        {
            salida = "exit";
            refresh();
        }
        if (input[0] == 'c' && input[1] == 'h' && input[2] == 'a' && input[3] == 'n' && input[4] == 'g' && input[5] == 'e' && input[6] == 'U' && input[7] == 's' && input[8] == 'e' && input[9] == 'r')
        {
            int posicion = 0;
            for (int i = 11; i < sizeof(input); i++)
            {
                usuario[posicion] = input[i];
                posicion++;
            }
            refresh();
        }
        if (input[0] == 'c' && input[1] == 'h' && input[2] == 'a' && input[3] == 'n' && input[4] == 'g' && input[5] == 'e' && input[6] == 'M' && input[7] == 'a' && input[8] == 'c' && input[9] == 'h' && input[10] == 'i' && input[11] == 'n' && input[12] == 'e')
        {
            int posicion = 0;
            for (int i = 13; i < sizeof(input); i++)
            {
                computadora[posicion] = input[i];
                posicion++;
            }
            refresh();
        }
        if (input[0] == 'c' && input[1] == 'h' && input[2] == 'a' && input[3] == 'n' && input[4] == 'g' && input[5] == 'e' && input[6] == 'C' && input[7] == 'o' && input[8] == 'l' && input[9] == 'o' && input[10] == 'r')
        {
            if (input[12] == 'w' || input[12] == 'W')
            {
                start_color();
                init_pair(1, COLOR_BLACK, COLOR_WHITE);
                wbkgd(stdscr, COLOR_PAIR(1));
            }
            else if (input[12] == 'b' || input[12] == 'B')
            {
                start_color();
                init_pair(1, COLOR_WHITE, COLOR_BLACK);
                wbkgd(stdscr, COLOR_PAIR(1));
            }
            else if (input[12] == 'r' || input[12] == 'R')
            {
                start_color();
                init_pair(1, COLOR_BLACK, COLOR_RED);
                wbkgd(stdscr, COLOR_PAIR(1));
            }
        }
        if (input[0] == 'c' && input[1] == 'l' && input[2] == 'e' && input[3] == 'a' && input[4] == 'r')
        {
            clear();
            refresh();
        }
        if (input[0] == 'c' && input[1] == 'd')
        {
            directorio[0]='/';
            int posicion=1;
            for (int i = 3; i < sizeof(input); i++)
            {
                directorio[posicion] = input[i];
                posicion++;
            }
            refresh();
        }
    }
    endwin();
    return 0;
}