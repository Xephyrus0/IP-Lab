// Program Name:6.2
// Purpose:drawRoom
// Your name:Xu Ningyuan

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

void frame(int length)//Define the frame function,draw the frame here
{
    printf("+");
    for(int i=0;i<length;i++)
    {printf("-");}
    printf("+\n");
}

void point_line(int length)//Define point_line function,draw the point_line here
{
    printf("|");
    for(int i=0;i<length;i++)
    {printf(".");}
    printf("|\n");
}

void target_line(int length, int x)//Define target_line function,draw the target_line and here
{
    printf("|");
    for(int i=0;i<x;i++)
    {printf(".");}
    printf("@");
    for (int i=0;i<length-x-1;i++)
    {printf(".");}
    printf("|\n");
}

void drawRoom(int length, int height, int x, int y)//Define drawRoom function
{
    frame(length);
    for (int i=0;i<y; i++)
    {point_line(length);}
    target_line(length, x);
    for (int i=0;i<height-y-1;i++)
    {point_line(length);}
    frame(length);
}

int main(void)
{
    drawRoom(2, 2, 0, 1);
    drawRoom(5, 3, 1, 2);
    drawRoom(14, 8, 8, 5);
    return 0;
}