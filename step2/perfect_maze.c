/*
** EPITECH PROJECT, 2022
** dante
** File description:
** perfect_maze
*/

#include "maze.h"

////////////////////////////////////////////////////////////////////////////////
/// ./step2/perfect_maze 10 10
///
///  **XXXXXXXX
///  X**XXXXXXX
///  XX**XXXXXX
///  XXX**XXXXX
///  XXXX**XXXX
///  XXXXX**XXX
///  XXXXXX**XX
///  XXXXXXX**X
///  XXXXXXXX**
///  XXXXXXXXX*
///
////////////////////////////////////////////////////////////////////////////////

void free_maze(char **maze)
{
    for (int i = 0; maze[i]; i += 1) {
        free(maze[i]);
    }
    free(maze);
}

void print_maze(char **maze)
{
    for (int i = 0; maze[i]; i += 1) {
        printf("%s\n", maze[i]);
    }
}

void set_maze(char **maze, int x, int y)
{
    for (int i = 0; i < y; i++) {
        maze[i] = malloc(sizeof(char) * (x + 1));
        memset(maze[i], 'X', sizeof(char) * (x));
        maze[i][x] = '\0';
    }
    maze[y] = NULL;
}

void create_maze(char ***maze, coord_t coord)
{
    set_maze(*maze, coord.x, coord.y);

    /// CODE HERE

}

int main(int argc, char *argv[])
{
    char **maze = NULL;
    coord_t coord;      // VOIR MAZE.H

    if (argc != 3)
        return (-1);
    maze = malloc(sizeof(char *) * (atoi(argv[2]) + 1));
    coord.x = atoi(argv[1]);    // ARG1 = HEIGHT
    coord.y = atoi(argv[2]);    // ARG2 = WIDTH
    coord.act_x = 0;
    coord.act_y = 0;
    create_maze(&maze, coord);
    print_maze(maze);
    free_maze(maze);
    return (0);
}