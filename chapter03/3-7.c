//
// Created by gipoong on 10/28/2023 (Saturday).
//
#include <stdio.h>
#include <string.h>

int main(void)
{
    char fruit[20] = "strawberry";

    printf("%s\n", fruit);
    strcpy(fruit, "banana");
    printf("%s\n", fruit);

    return 0;
}