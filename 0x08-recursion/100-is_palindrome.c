#include "main.h"
/**
* is_palindrome - detcect if string is a palindrome.
* @str: inputstring.
* Return: 1 if string is a palindrome, else 0.
*/
int count_strlen(char *str);
int detect_palindro(char *str, int len, int idx);
int is_palindrome(char *str)
{
int idx = 0;
int len = count_strlen(str);

if (*str == '\0')
{
return (1);
}
return (detect_palindro(str, len, idx));
}

/**
* count_strlen - Count length of a string.
* @str: input str.
* Return: length of the string.
*/
int count_strlen(char *str)
{
int len = 0;

if (*(str + len) != '\0')
{
len++;
len += count_strlen(str + len);
}

return (len);
}

/**
* detect_palindro - using recursion to
* detect if a string is a palindrome.
* @str: input.
* @len: length of a string.
* @idx: index to iterate over
* string chars.
*
* Return: 1 if string is a palindrome, else 0.
*/
int detect_palindro(char *str, int len, int idx)
{
if (str[idx] == str[len / 2])
return (1);

if (str[idx] == str[len - idx - 1])
return (detect_palindro(str, len, idx + 1));

return (0);
}
