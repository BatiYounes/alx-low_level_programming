#include &lt;stdio.h&gt;
/**
* main - Entry point of the program
*
* Description: Prints numbers of base 10
*
* Return: 0 (success)
*/
int main(void)
{
char x;
for (x = &#39;0&#39;;  &lt;= &#39;9&#39;; x++)
{
putchar(x);
}
for (x = &#39;a&#39;; x &lt;= &#39;f&#39;; x++)
{
putchar(x);
}
putchar(‘\n’);
return (0);
}

