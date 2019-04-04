/*!
 *    \file  PlaylistNode.h
 *   \brief  Playlist library
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
#ifndef  PLAYLISTNODE__INC__
#define  PLAYLISTNODE__INC__

#define MAX 50
typedef struct PlaylistNode_struct
{
    char uniqueID[MAX];
    char songName [MAX];
    char artistName[MAX];
    int songLength;
    struct PlaylistNode_struct* nextNodePtr; // address of next member. NULL for last member
}PlaylistNode;

void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[], 
        char songNameInit[], char artistNameInit[],
        int songLengthInit, PlaylistNode* nextLoc);
void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode);
void SetNextPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode);
void AddSong();
void PrintMenu(char playlistTitle[]);


PlaylistNode* GetNextPlaylistNode();

void PrintlistNode(char playListName[]);

#endif /* ----- #ifndef PLAYLISTNODE__INC__ ----- */
