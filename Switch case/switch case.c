#include<stdio.h>
int main()
{
    char c;

    printf("Enter any Alphabet: ");
    scanf("%c", &c);

    switch(c)

    {
    case 'a' :
           printf("vowel\n");
           break;
    case 'e' :
          printf("vowel\n");
    case 'i' :
           printf("vowel\n");
           break;
    case 'o' :
           printf("vowel\n");
           break;
    case 'u' :
           printf("vowel\n");
           break;
    case 'A' :
           printf("vowel\n");
           break;
    case 'E' :
          printf("vowel\n");
    case 'I' :
           printf("vowel\n");
           break;
    case 'O' :
           printf("vowel\n");
           break;
    case 'U' :
           printf("vowel\n");
           break;
     default :
        printf("consonant\n");
    }
}
