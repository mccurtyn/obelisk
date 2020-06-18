#include <iostream>
#include <ncurses.h>
#pragma once
using namespace std;

void inputVal();
void printMenu(WINDOW* menu, int highlight, const char *list[], int size);
int evalMenu(int &highlight, int c, int &choice, int size);
