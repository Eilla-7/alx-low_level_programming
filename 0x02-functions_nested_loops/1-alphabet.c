#include "main.h"

/**
 * main - This is the entry point of the code
 *
 * Return:0 Successful
 */

int main(void)
{
print_alphabet();
_putchar('\n');
return(0);
}

void print_alphabet(void){
char i = 'a';
while (i <= 'z'){
_putchar(i);
i++;
}
return;
}
