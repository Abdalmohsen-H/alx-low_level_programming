#include "main.h"
/**
 * print_chessboard - prints chars to
 * chess board
 * @a: input 2D array of chars (8*8)
 */
void print_chessboard(char (*a)[8])
{
int row = 0;
int column;

while (row < 8)
{
column = 0;
while (column < 8)
{
_putchar(a[row][column]);
column++;
}
_putchar('\n');
row++;
}
}
