#ifndef PROJECTHEADER_H_   /* Include guard */
#define PROJECTHEADER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// include more later, ofc

/*functions responsible for matrix building*/
void file_reader(char *file_name, int **maze);
int** allocate_matrix(int line, int col);
void cell_placer(int coord_L, int coord_C, int **matrix, int cost);

/*functions responsible for mode parcing*/
void mode_parcer(int priority_cell[], int mode[], int **maze);

#endif