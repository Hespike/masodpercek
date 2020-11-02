#include<stdio.h>

int masodpercek(int ora, int perc, int masodperc)   {
    return 3600 * ora + 60 * perc + masodperc;
}

int main() {
    int mp1, mp2;
    mp1 = masodpercek(12, 5, 7);
    mp2 = masodpercek(6, 45, 0);

    printf("%d\n", mp1);
    printf("%d\n", mp2);
    return 0;
}