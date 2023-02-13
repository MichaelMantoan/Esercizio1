#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#define DIM 88

int main(int argc, char *argv)
{
    int a, b;
    do
    {
        printf("inserisci coppie di valori");
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            printf("il primo numero maggiore del secondo");
        }
        if (a < b)
        {
            printf("il secondo numero maggiore del secondo");
        }
    } while (a != 0 && a != 0);
}