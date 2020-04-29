#include <iostream>
#include <string>
#include <stdlib.h>

void add(int *tab, int position)
{
    tab[position] = position;
}

void show(int *tab, int size)
{
    int i ;
    for(i = 0; i < size; i++)
    {
        std::cout<<tab[i]<<" ";
    }
}

int main(int argc, char *argv[])
{
    int size = atoi(argv[1]);

    int *tab = new int[size];
    
    for(int i = 0; i < size; i++)
    {
        add(tab, i);
    }

    delete tab;
}
