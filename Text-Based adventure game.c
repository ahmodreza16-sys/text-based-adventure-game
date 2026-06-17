#include<stdio.h>

int main() {

    int choice;

    printf("You enter a cave.\n");
    printf("1. Go left\n");
    printf("2. Go right\n");

    scanf("%d",&choice);

    if (choice)
        printf("You found treasure!\n");
    else
        printf("A dragon appeared!\n");
    return 0;
}
