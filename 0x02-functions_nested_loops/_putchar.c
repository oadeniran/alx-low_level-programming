#include <unistd.h>
/**
* _putchar.c - writes the character to stdout
* @c : the character to print
*
* Return on success : 1
* on failure -1 is returned and the errno stapp
*/
int _putcahr(char c)
{
    return(write(1,&c,1));
}
