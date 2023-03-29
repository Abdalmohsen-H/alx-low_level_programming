#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - random words generator
* Return: Always 0 (success)
*/
int main(void)
{
/* all available chars to use */
char charset[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
/* Maximum length of generated words */
int max_length = 10;
/* hold generated word, +1 to hold '\0' */
char word[10+1];
/* define number of rand words*/
int count_rand_words;
/*length of generated word*/
int randlength;
int j;

/* to ensure different numbers generated
* each time the code runs link
*random number generator with current time
*/
srand(time(NULL));
/* Generate 5000 random words */
for (count_rand_words = 1; count_rand_words <= 5000; count_rand_words++)
{
/* Generate a random length for
*rand word between 1 and MAX_LENGTH
*/
randlength = (rand() % max_length) + 1;
/* Generate random letters for the word
* with random length given above
*/
for (j = 0; j < randlength; j++)
{
word[j] = charset[rand() % 62];
}

/* declare the word end
* by adding '\0' to word
*/
word[randlength] = '\0';

/* Print the generated word */
/*printf("Word %d: %s\n", count_rand_words, word);*/
printf("%s",word);
}
return (0);
}
