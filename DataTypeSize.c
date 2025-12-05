#include<stdio.h>

int main()
{
    char cValue = 'S';
    int iValue = 11;
    float fValue = 90.70f;
    double dValue = 98.765421;

    printf("Size of character is : %lu bytes\n",sizeof(cValue));
    printf("Size of integer is : %lu bytes\n",sizeof(iValue));
    printf("Size of float is : %lu bytes\n",sizeof(fValue));
    printf("Size of double is : %lu bytes\n",sizeof(dValue));

    return 0;
}