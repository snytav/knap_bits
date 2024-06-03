// bitstring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

void printStringBySymbol(char* s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
}

char* toBinaryString(unsigned long long n) {
    char string[33];// = (char*)malloc(sizeof(int) * 8 + 1);
    strcpy_s(string, sizeof(int) * 8 + 1, "");
    printf("\n");

    if (!string) {
        return NULL;
    }

    // 1234567812345678
    strcpy_s(string, sizeof(int) * 8 + 1, "                                ");
    string[32] = 0;
    for (int i = 31; i >= 0; i--) {
        string[i] = (n & 1) + '0';
        //n >> 1;
        printf("2str n %5d i %2d n&1 %d string[i] %c s %32s\n", n, i, n & 1, string[i], string);
        //printStringBySymbol(string);
       
        n = n >> 1;
    }
    return string;
}



int main()
{
    char s[100];
    strcpy_s(s, "12345678abcdefgh");
    printStringBySymbol(s);
    char* conv_s = toBinaryString(0xafaf);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
