/*
** EPITECH PROJECT, 2022
** dante
** File description:
** simple_maze
*/

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
/// ./step1/imperfect_maze 10 10
///  ..........
///  .X.X.X.X.X
///  ..........
///  .X.X.X.X.X
///  ..........
///  .X.X.X.X.X
///  ..........
///  .X.X.X.X.X
///  ..........
///  .X.X.X.X..
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
/// x = width of the maze / y = height of the maze
void print_maze(int x, int y)
{
    // CODE HERE
}

int main(int argc, char *argv[])
{
    if (argc != 3)
        return (-1);
    print_maze(atoi(argv[1]), atoi(argv[2]));
    return (0);
}