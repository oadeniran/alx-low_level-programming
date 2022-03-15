#include "main.h" 
/**
 *print out _putcahar
 */

int main()
{
    char str[] = "_putchar";
    for(int i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
    return 0;
}
