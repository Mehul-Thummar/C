#include<iostream>

void data(char c)
{
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        if(c == 'a' || c == 'e'|| c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            printf("It is vowel.");
        }
        else
        {
            printf("it is consonant.");
        }
    }
    else
    {
        printf("It is not alphabetic character.");
    }
}

int main()
{
    char c;
    printf("Enter value:");
    scanf("%c",&c);
    data(c);

}