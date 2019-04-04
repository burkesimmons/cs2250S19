/*!
 *    \file  main.c
 *   \brief  Use the PlaylistNode
 *
 *  \author  Burke Simmons (), burkesimmons@mail.weber.edu
 *
 *  \internal
 *       Created:  03/26/2019
 *      Revision:  none
 *      Compiler:  gcc main.c PlaylistNode.c -o main.out
 *  Organization:  WSU
 *     Copyright:  Copyright (c) 2019, Burke Simmons
 *
 *  This source code is released for free distribution under the terms of the
 *  GNU General Public License as published by the Free Software Foundation.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "PlaylistNode.h"


/* Function Prototypes */

/* Main Function */
int main(int argc, char* argv[])
{
    char playlistTitle[50];

    // 1) Prompt user for playlist title. Use fgets, do not forget to eliminate
    // the end-of-line char
    printf("Enter playlist's title:\n");
    fgets(playlistTitle, 50, stdin);
    playlistTitle[strlen(playlistTitle) - 1] = '\0';


    // 2) Output playlist menu options
    PrintMenu(playlistTitle);

    return 0;
}
/* Function Defenitions */


