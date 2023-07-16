#include &lt;unistd.h&gt;
#define MESSAGE &quot;and that piece of art is useful\&quot; - Dora Korpar, 2015-10-19\n&quot;
/**
* main - Entry point of the program
*
* Description: Prints a specific message to standard error
*
* Return: 1
*/
int main(void)
{
write(2, MESSAGE, sizeof(MESSAGE) - 1);
return (1);
}
