/*!
 *    \file  PlaylistNode.c
 *   \brief  Implement the playlist library
 *
 *  \author  Burke Simmons (), burkesimmons@mail.weber.edu
 *
 *  \internal
 *       Created:  03/26/2019
 *      Revision:  none
 *      Compiler:  gcc
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

    PlaylistNode* headNode = NULL;
    PlaylistNode* currNode = NULL;
    PlaylistNode* nextNode = NULL;
    char dummy = ' ';

    /*!
     *  Name:  PrintMenu
     *  \brief  Print menu function
     *
     *  \param  
     *  \return 
     */
void PrintMenu(char playlistTitle[])
{
    // Create a bunch of temporary variables: chars, ints, and PlaylistNodes(6-8 pointers)
    printf("Beggining of printmenu, or popped out of switch case");
    char menuOp = ' ';
    // Output menu option 
    // Create a loop to print your options
    printf("%s PLAYLIST MENU\n", playlistTitle);
    printf("a - Add song\n");
    printf("r - Remove song\n");
    printf("c - Change position of song\n");
    printf("s - Output songs by specific artist\n");
    printf("t - Output total time of playlist (in seconds)\n");
    printf("o - Output full playlist\n");
    printf("q - Quit\n");
    printf("\n");
    printf("Choose an option:\n");
    scanf(" %c", &menuOp);

    while(menuOp != 'q')
    {
        // check for valid choices
        if(menuOp == 'a' || 'r' || 'c' || 's' || 't' || 'o')
        {
            // set corresponding menu action
            // switch menuop
            switch(menuOp)
            {
                // case 'a'; Add a song
                case 'a':
                    AddSong();
                    break;
                    // case 'r'; Output the playlist message
                case 'r':
                    printf("You chose 'r'");
                    break;
                    // case 'c'; Prompt user for new song location
                case 'c':
                    printf("You chose 'c'");
                    break;
                    // case 's'; Output songs by specific artist
                case 's':
                    printf("You chose 's'");
                    break;
                    // case 't'; Output the total time of songs in seconds
                case 't':
                    printf("You chose 't'");
                    break;
                    // case 'o'; Output full play list
                case 'o':
                    PrintlistNode(playlistTitle);
                    break;
                    // case 'q'; Quit, which is the exit of your loop
            }// end of switch

        } // end of IF (good choices)
        else
        {
            printf("Choose an appropriate letter\n");
            //            scanf("%c", &menuOp);

        }
        printf("%s PLAYLIST MENU\n", playlistTitle);
        printf("a - Add song\n");
        printf("r - Remove song\n");
        printf("c - Change position of song\n");
        printf("s - Output songs by specific artist\n");
        printf("t - Output total time of playlist (in seconds)\n");
        printf("o - Output full playlist\n");
        printf("q - Quit\n");
        printf("\n");
        printf("Choose an option:\n");
        scanf(" %c", &menuOp);

    }// end of loop


    return;
}


/*!
 *  Name:  AddSong
 *  \brief  Add a song to playlist
 *
 *  \param  
 *  \return 
 */
void AddSong()
{
    char idData[50];
    char songData[50];
    char artistData[50];
    char temp[50];
    int songTime;
    char dummy;

    nextNode = (PlaylistNode*)malloc(sizeof(PlaylistNode));
    if(currNode == NULL)
    {
        headNode = nextNode;
    }
    else
    {
        InsertPlaylistNodeAfter(currNode, nextNode);
    }
    //Capture song information
//    scanf("%c\n", &dummy);
    printf("Enter song's unique ID\n");
    scanf("%s", idData);
    fgets(temp, 50, stdin);
//    fgets(idData, 50, stdin);
//    idData[strlen(idData) - 1] = '\0';
    printf("Enter song's name\n");
    fgets(songData, 50, stdin);
    songData[strlen(songData) - 1] = '\0';
    printf("Enter artist's name\n");
    fgets(artistData, 50, stdin);
    artistData[strlen(artistData) - 1] = '\0';
    printf("Enter song's length (in seconds)\n");
    scanf("%d", &songTime);
    scanf("%c", &dummy);
    CreatePlaylistNode(nextNode, idData, songData, artistData, songTime, NULL);
    currNode = nextNode;

//    printf("finish add song\n");
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CreatePlaylistNode
 *  Description:  Initialize all the value
 * =====================================================================================
 */
void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[], 
        char songNameInit[], char artistNameInit[],
        int songLengthInit, PlaylistNode* nextLoc)
{
    // 1) Set all your strings in thisNode to the input parameters
    strcpy(thisNode->uniqueID, idInit);
    strcpy(thisNode->songName, songNameInit);
    strcpy(thisNode->artistName, artistNameInit);
    // 2) Set all your integers in thisNode to the input parameters
    thisNode->songLength = songLengthInit;
    // 3) Set the nextNodePtr to nextLoc
    thisNode->nextNodePtr = nextLoc;
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InsertPlaylistNodeAfter
 *  Description:  Linking your PlaylistNodes
 * =====================================================================================
 */
void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode)
{
    PlaylistNode* tempNext = NULL;
    // 1) set temp to thisNode->nextNodePtr
    tempNext = thisNode->nextNodePtr;
    // 2) update thisNode->nextNodePtr to newNode
    thisNode->nextNodePtr = newNode;
    // 3) set newNode->nextNodePtr to tempNext
    newNode->nextNodePtr = tempNext;
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetNextPlayList
 *  Description:  Linking your PlaylistNodes
 * =====================================================================================
 */
void SetNextPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode)
{
    // 1) Set the thisNode->nextNodePtr to newNode
    thisNode->nextNodePtr = newNode;
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNextPlaylistNode
 *  Description:  Return the next node in the list
 * =====================================================================================
 */
PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode)
{
    // 1) Return the next member in the list
    //
    return thisNode->nextNodePtr;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintlistNode
 *  Description:  Print the list node description
 * =====================================================================================
 */
void PrintlistNode(char playListName[])
{
    // Print song info
    currNode = headNode;
    printf("%s - OUTPUT FULL PLAYLIST\n", playListName);
    while ( currNode != NULL)
    {
    // 1) Print each member of the PlaylistNode
    printf("Unique ID: %s\n", currNode->uniqueID);
    printf("Song Name: %s\n", currNode->songName);
    printf("Artist Name: %s\n", currNode->artistName);
    printf("Song Length (in seconds): %d\n", currNode->songLength);
        currNode = GetNextPlaylistNode(currNode);
    }
    return;
}

