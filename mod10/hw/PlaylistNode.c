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
#include "PlaylistNode.h"


/*!
 *  Name:  CreatePlaylistNode
 *  \brief  Initialize all the values
 *
 *  \param  <+NAME+> <+DESCRIPTION+>
 *  \return <+DESCRIPTION+>
 *  <+DETAILED+>
 */
void CreatPlaylistNode(PlaylistNode* thisNode, char idInit[], 
        char songNameInit[], char artistNameInit[],
        int songLengthInit, PlaylistNode* nextLoc)
{
    // 1) Set all your strings in thisNode to the input parameters
    //
    // 2) Set all your integers in thisNode to the input parameters
    //
    // 3) Set the nextNodePtr to nextLoc
    return;
}



/*!
 *  Name:  InsertPlaylistNodeAfter
 *  \brief  Linking your PlaylistNodes
 *
 *  \param  <+NAME+> <+DESCRIPTION+>
 *  \return <+DESCRIPTION+>
 *  <+DETAILED+>
 */
void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode)
{
    PlaylistNode* tempNext = NULL;
    // 1) set temp to thisNode->nextNodePtr
    // 2) update thisNode->nextNodePtr to newNode
    // 3) set newNode->nextNodePtr to tempNext
    return;
}



/*!
 *  Name:  SetNextPlaylistNodeAfter
 *  \brief  Linking your PlaylistNode
 *
 *  \param  <+NAME+> <+DESCRIPTION+>
 *  \return <+DESCRIPTION+>
 *  <+DETAILED+>
 */
void SetNextPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode)
{
    // 1) Set the thisNode->nextNodePtr to newNode
    return;
}



/*!
 *  Name:  GetNextPlaylistNode
 *  \brief  Return the next node in the list
 *
 *  \param  <+NAME+> <+DESCRIPTION+>
 *  \return <+DESCRIPTION+>
 *  <+DETAILED+>
 */
PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode)
{
    // 1) Return the next member in the list
    //
    return thisNode->nextNodePtr;
}



/*!
 *  Name:  PrintlistNode
 *  \brief  Print the list node description
 *
 *  \param  <+NAME+> <+DESCRIPTION+>
 *  \return <+DESCRIPTION+>
 *  <+DETAILED+>
 */
void PrintlistNode(PlaylistNode* thisNode)
{
    // 1) Print each member of the PlaylistNode
    return;
}
/* Function Defenitions */
