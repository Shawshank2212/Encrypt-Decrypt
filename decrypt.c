#include <stdio.h>
#include <string.h>
void encrypt (char *st)
{
    char *ptr = st;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 2;
        ptr++;
    }
}
int main ()
{
    char st[100];
    printf("enter the string: ");
    gets(st);
    encrypt (st);
    printf("decrypted message is: %s",st);
    return 0;
}
