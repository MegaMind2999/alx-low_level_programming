#include "main.h"
/**
*_isalpha - detect if the input is char or not
*@c: is the input char
*Return: 0 or 1 depends on char or not
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
return (0);
}
