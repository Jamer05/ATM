#include "Loading.h"
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <stdlib.h>
#include <chrono>
#include <stdio.h>
#include <thread>
#include <conio.h>
#include<iostream>
using namespace std;
Loading::Loading()
{
    //ctor
}
void Loading::loadingMachine()
{
    system("color 0a");
    cout << "\n\n\n\n\n\n\n\n";
    cout<<"\n\n\n\t\t\t\t\tPlease wait until the system is ready!\n\n";
    char a=177, b=219;
    cout<<"\t\t\t\t\t\t";
    for (int i=0; i<=20; i++)
        cout<<a;
    cout<<"\r";
    cout<<"\t\t\t\t\t\t";
    for (int i=0; i<=20; i++)
    {
        cout<<b;
        for (int j=0; j<=1e8; j++); //You can also use sleep function instead of for loop
    }
    printf("\e[1;1H\e[2J");
}

void Loading::sleep(float seconds)
{
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while(clock() < startClock+secondsAhead);
    return;
}
