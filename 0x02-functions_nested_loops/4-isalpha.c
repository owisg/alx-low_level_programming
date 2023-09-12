#include "main.h"
/**
* _ialpha - checks for alphabetic character
* @c: is the char to be checked
* Returns: 1 if c is a letter, lowercase or uppercase
* Returns: 0 otherwise.
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
