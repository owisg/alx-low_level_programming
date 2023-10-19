#include <stdio.h>
/**
*print_message - print message before main executes
*/
void print_message(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
__attribute__((constructor)) void print_message_on_startup(void)
{
print_message();
}
