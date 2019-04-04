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
    char temp[50] = "";
    char artistName[50] = "";
    int numNodes = 0;
    int totalTime = 0;
    char uniqueID[50] = "";
    PlaylistNode* songNode = NULL;
    PlaylistNode* prevNode = NULL;

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
    char menuOp = ' ';
    // Output menu option 
    // Create a loop to print your options
    printf("\n%s PLAYLIST MENU\n", playlistTitle);
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
                    // Output playlist messaging
                    printf("REMOVE SONG\n");
                    printf("Enter song's unique ID:\n");
                    scanf("%s", uniqueID);
                    printf("uniqueID entered: %s\n", uniqueID);
  
/*          Tried this, problem with "tempNext not set"
                    currNode = headNode;
                    if(currNode == NULL)
                    {
                    }

                    if(strcmp(currNode->uniqueID, uniqueID) == 0)
                    {
                        PlaylistNode* tempNext = NULL;
                        tempNext = currNode->nextNodePtr;
                        free(currNode);
                    }
*/
/*          This one caused a segment fault dump
                    currNode = headNode;
                    while(currNode != NULL)
                    {
                        if(strcmp(currNode->uniqueID, uniqueID) == 0)
                        {
                            PlaylistNode* tempNext;
                            // 1) set temp to thisNode->nextNodePtr
                            tempNext = currNode->nextNodePtr;
                            // 2) update thisNode->nextNodePtr to newNode
                            currNode->nextNodePtr = tempNext->nextNodePtr;
//                            free(tempNext);
                            printf("\"%s\" removed.\n\n", currNode->songName);


                        }
                        else
                        {
                    currNode = GetNextPlaylistNode(currNode);
                        }
                    }
*/

/*              This is 2018 spring class help, I couldn't figure it out
                // Count number of nodes in list
                songNode = headNode;

                // songNode is the song to be deleted
                

                if (songNode == NULL) 
                {
                    // ERROR: uniqueID provided by user is invalid
                    // Do nothing
                    return;
                }
                else
                {i
                    // Remove song at songPosition from list

                    // If songPosition is 1, list head is removed
                    if (songNode == headNode) 
                    {
                        headNode = GetNextPlaylistNode(songNode);
                    }
                    else 
                    {
                        // prevNode refers to node before the songNode
                        // .....
                        
                        // prevNode updated so next is the node following songNode
                        // .....

                    } // end of else
                } // end of else
*/
                    break;
                    // case 'c'; Prompt user for new song location
                case 'c':
                    printf("You chose 'c'");
                    break;
                    // case 's'; Output songs by specific artist
                case 's':
                    // Consume newline and prompt user for output criteria
                    fgets(temp, 50, stdin);

                    printf("OUTPUT SONGS BY SPECIFIC ARTIST\n");
                    printf("Enter artist's name:\n");
                    fgets(artistName, 50, stdin);
                    artistName[strlen(artistName)-1] = '\0';

                    numNodes = 1;
                    // Search list for matching artists
                    currNode = headNode;
                    while ( currNode != NULL)
                    {
                        if(strcmp(currNode->artistName, artistName) == 0)
                        {
                            printf("%d.\n", numNodes);
                            printf("Unique ID: %s\n", currNode->uniqueID);
                            printf("Song Name: %s\n", currNode->songName);
                            printf("Artist Name: %s\n", currNode->artistName);
                            printf("Song Length (in seconds): %d\n", currNode->songLength);
                                            currNode = GetNextPlaylistNode(currNode);
                            printf("\n");
                        }
                            ++numNodes;
                    }
                    break;
                    // case 't'; Output the total time of songs in seconds
                case 't':
                    currNode = headNode;
                    while ( currNode != NULL)
                    {
                        totalTime = totalTime + currNode->songLength;
                        currNode = GetNextPlaylistNode(currNode);
                    }
                    printf("OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)\n");
                    printf("Total time: %d seconds\n\n", totalTime);

                    break;
                    // case 'o'; Output full play list
                case 'o':
                    // Print song info
                    printf("%s - OUTPUT FULL PLAYLIST\n", playlistTitle);
                    numNodes = 1;
                    currNode = headNode;
                    if(headNode == NULL)
                    {
                        printf("Playlist is empty\n\n");
                    }
                    else
                    {
                        PrintlistNode(currNode);
                    }
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
    
    if(currNode == NULL)   // first entry
    {
        headNode = nextNode;
    }
    else // second or more entries
    {
        InsertPlaylistNodeAfter(currNode, nextNode);
    }
    //Save for next round
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
void SetNextPlaylistNode(PlaylistNode* thisNode, PlaylistNode* newNode)
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
void PrintlistNode(PlaylistNode* currNode)
{
    while ( currNode != NULL)
    {
    // 1) Print each member of the PlaylistNode
    printf("%d.\n", numNodes);
    printf("Unique ID: %s\n", currNode->uniqueID);
    printf("Song Name: %s\n", currNode->songName);
    printf("Artist Name: %s\n", currNode->artistName);
    printf("Song Length (in seconds): %d\n", currNode->songLength);
                    currNode = GetNextPlaylistNode(currNode);
    printf("\n");
    ++numNodes;
    }
    return;
}


