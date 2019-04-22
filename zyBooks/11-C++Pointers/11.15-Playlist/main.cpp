/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2019 08:39:47 AM
 *       Revision:  none
 *   Compiler (C):  gcc main.cpp -o main.out
 * Compiler (C++):  g++ main.cpp -o main.out:
 *          Usage:  ./main.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>
using namespace std;

#include "PlaylistNode.h"

// Constants and Globals

// Function Prototypes
void PrintMenu(const string playlistTitle);
void AddSong(PlaylistNode*& headNode, PlaylistNode*& tailNode);
void DeleteSong(PlaylistNode*& headNode, PlaylistNode*& tailNode, PlaylistNode*& prevNode);
void ChangeSongPosition(PlaylistNode*& headNode, PlaylistNode*& tailNode, PlaylistNode*& prevNode);
void OutputSongsBySpecificArtist(PlaylistNode*& headNode, PlaylistNode*& tailNode, PlaylistNode*& prevNode);
void OutputTotalTime(PlaylistNode*& headNode);
void OutputFullList(const string playlistTitle, PlaylistNode*& headNode);

// Main Function
int main() 
{
    string playlistTitle;
    
    PlaylistNode* prevNode = 0;
    PlaylistNode* headNode = 0;
    PlaylistNode* tailNode = 0;

    // Prompt user for playlist title
    cout << "Enter playlist's title:" << endl;
    getline(cin, playlistTitle);
    cout << endl;

    char menuOp = ' ';
    // Output menu option, prompt users for valid selection
    while(menuOp != 'q') 
    {
        menuOp = ' '; // reset menuOp
        // Output play list menu options
        PrintMenu(playlistTitle);
        while (menuOp != 'a' && menuOp != 'd' && menuOp != 'c' &&
                menuOp != 's' && menuOp != 't' && menuOp != 'o' && 
                menuOp != 'q') 
        {
            cout << "Choose an option:" << endl;
            cin >> menuOp;
        }
        // Call corresponding menu action
        switch (menuOp) 
        {
            case 'a':
                AddSong(headNode, tailNode);
                break;

            case 'd':
                DeleteSong(headNode, tailNode, prevNode);
                break;

            case 'c':
                ChangeSongPosition(headNode, tailNode, prevNode);
                break;

            case 's':
                OutputSongsBySpecificArtist(headNode, tailNode, prevNode);
                break;

            case 't':
                OutputTotalTime(headNode);
                break;

            case 'o':
                OutputFullList(playlistTitle, headNode);
                break;
        } // end of switch
    } // end of while 

    return 0;
}

void PrintMenu(const string playlistTitle) 
{
    cout << playlistTitle << " PLAYLIST MENU" << endl;
    cout << "a - Add song" << endl;
    cout << "d - Remove song" << endl;
    cout << "c - Change position of song" << endl;
    cout << "s - Output songs by specific artist" << endl;
    cout << "t - Output total time of playlist (in seconds)" << endl;
    cout << "o - Output full playlist" << endl;
    cout << "q - Quit" << endl << endl;
    return;
}

void AddSong(PlaylistNode*& headNode, PlaylistNode*& tailNode)
{
    PlaylistNode* newSong = 0;
    string uniqueID;
    string songName;
    string artistName;
    int songLength = 0;
    // Prompt user for song information
    cout << "ADD SONG" << endl;
    cout << "Enter song's unique ID:" << endl;
    cin >> uniqueID;

    cin.ignore();
    cout << "Enter song's name:" << endl;
    getline(cin, songName);

    cout << "Enter artist's name:" << endl;
    getline(cin, artistName);

    cout << "Enter song's length (in seconds):" << endl;
    cin >> songLength;

    // Create a new node for playlist with "new" and save it in newSong pointer
    newSong = new PlaylistNode(uniqueID, songName, artistName, songLength);


    // If song is first in playlist, update head/tail
    if(headNode == 0) // first node
    {
        headNode = newSong;
        tailNode = newSong;
        newSong = 0;
    }
    else // Otherwise insert to end of playlist and update tail
    {
        // Why did these two lines work and what do the next two do differently?
//        tailNode->SetNext(newSong);
//        tailNode = newSong;
        tailNode->InsertAfter(newSong); //insert node after
        tailNode = tailNode->GetNext();
    }
    cout << endl;
    return;
}

void DeleteSong(PlaylistNode*& headNode, PlaylistNode*& tailNode, PlaylistNode*& prevNode)
{
    PlaylistNode* songNode = 0;
    string uniqueID;
    string songName;
    int songPosition = 1;
    // Output playlist messaging
    cout << "REMOVE SONG" << endl;
    cout << "Enter song's unique ID:" << endl;
    cin >> uniqueID;

    // Count number of nodes in list
    songNode = headNode;
    // songNode is the song to be removed
    while ((songNode != 0) && !(songNode->GetID() == uniqueID))
    {
        songPosition++;
        prevNode = songNode;
        songNode = songNode->GetNext();
    }

    if (songNode == 0 )
    {
        // ERROR: songPosition provided by user is invalid
        // Do nothing
    }
    else
    {
        // Remove song at songPosition from list
        // IF songPosition is 1, list head is removed
        if(songPosition == 1)
        {
            delete songNode;
            cout << "songNode deleted,I think" << endl;
            cout << "in songPosition = 1 if statement" << endl;
                        headNode = headNode->GetNext();
                        headNode = tailNode;
        }
        // ELSE prevNode refers to node before the songNode
        else
        {
            cout << "in else statement of songPostion == 1" << endl;
            //prevNode = songNode;
            //songNode = songNode->GetNext();
            //            prevNode->SetNext(songNode->GetNext());
            if(songNode == tailNode)
            {
                cout << "in songNode = tailNode" << endl;
                if(songNode == headNode)
                {
                    cout << "in songNode == headNode" << endl;
                    headNode = 0;
                    tailNode = 0;
                }
                else
                {
                    cout << "in tailNode = prevNode" << endl;
                    tailNode = prevNode;
                }
            }
            cout << "end of if songNode == tailNode, just before delete songNode"
                << endl;
            delete songNode;
        }

        // prevNode updated so next is the node following songNode
//            prevNode->SetNext(songNode->GetNext());
        songName = songNode->GetSongName();
        cout << "right before print of songName removed, before delete songNode" 
            << endl;
        delete songNode;

        cout << "\"" << songName << "\" removed." << endl << endl;
    }
    return;
}

/*
void DeleteSong(PlaylistNode*& headNode, PlaylistNode*& tailNode, PlaylistNode*& prevNode)
{
    PlaylistNode* songNode = 0;
    string uniqueID;
    int songPosition = 0;
    // Output playlist messaging
    cout << "REMOVE SONG" << endl;
    cout << "Enter song's unique ID:" << endl;
    cin >> uniqueID;

    // Count number of nodes in list
    songNode = headNode;

    // songNode is the song to be removed
    while ((songNode != 0) && !(songNode->GetID() == uniqueID)) 
    {
        songPosition++;
        songNode = songNode->GetNext();
        prevNode = songNode;
    }

    if (songNode == 0 ) 
    {
        // ERROR: songPosition provided by user is invalid
        // Do nothing
    }
    else
    {
        // Remove song at songPosition from list

        // IF songPosition is 1, list head is removed
        if(songPosition == 1)
        {
            headNode = headNode->GetNext();
        }
        // ELSE prevNode refers to node before the songNode
        else
        {
            songNode = songNode->GetNext();
            prevNode->SetNext(songNode->GetNext());
        }

            // prevNode updated so next is the node following songNode
        cout << "\"" << songNode->GetSongName() << "\" removed." << endl << endl;
            delete songNode;
    }
    return;
}
*/


void ChangeSongPosition(PlaylistNode*& headNode, PlaylistNode*& tailNode, PlaylistNode*& prevNode)
{
    PlaylistNode* songNode = 0;
    PlaylistNode* insertPosNode = 0;
    int songPosition = 0;
    int newPosition = 0;
    int numNodes = 0;
    // Prompt user to new song location
    cout << "CHANGE POSITION OF SONG" << endl;
    cout << "Enter song's current position:" << endl;
    cin >> songPosition;

    cout << "Enter new position for song:" << endl;
    cin >> newPosition;

    // Count number of nodes in list
    songNode = headNode;

    // songNode is the song to be moved
    // ...
    while ((songNode != 0) && (numNodes < (songPosition - 1))) 
    {
        ++numNodes;
        prevNode = songNode;
        songNode = songNode->GetNext();
    }

    if (songNode == 0 ) 
    {
        // IF songPosition provided by user is invalid
        // ERROR: Do nothing
    }
    else 
    {

        // ELSE:
        // STEP 1: Remove song at songPosition from list. Keep reference to that song.
        insertPosNode = songNode;
        delete songNode;
        // If songPosition is 1, list head is removed
        if(songPosition = 1)
        {
            delete headNode;
        }
        else
        {
            // Else: prevNode refers to node before the songNode
            prevNode->SetNext(songNode->GetNext());

            // prevNode updated so next is the node following songNode
            // ...

            // STEP 2: Insert song at newPosition

            // Insert songNode at head or if user position is before head
            // ....
            if (newPosition <= 1) 
            {
                songNode = headNode;

                cout << "\"" << songNode->GetSongName() << "\" moved to position 1" << endl << endl;

            }
            else 
            {
                // insertPosNode refers to the node before the location songNode is inserted
                insertPosNode = prevNode;

                // Insert songNode to new location
                insertPosNode->SetNext(songNode);

                cout << "\"" << songNode->GetSongName() << "\" moved to position " << newPosition << endl << endl;
            }
        }
    }
        return;
}


void OutputSongsBySpecificArtist(PlaylistNode*& headNode, PlaylistNode*& tailNode, PlaylistNode*& prevNode)
{
    PlaylistNode* currNode = 0;
    string artistName;
    // Consume newline and prompt user for output criteria
    cin.ignore();
    cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
    cout << "Enter artist's name:" << endl;
    getline(cin, artistName);
    cout << endl;

    // Search list for matching artists
    int numNodes = 1;
    currNode = headNode;

    // Cycle through the list
    while (currNode != 0) 
    {
        // Output songs with matching artist name
        if (currNode->GetArtistName() == artistName) 
        {
            cout << numNodes << "." << endl;
            // Print playlist information
            currNode->PrintPlaylistNode();

            cout << endl;
        }
        // Get next node
        currNode = currNode->GetNext(); // update to next member
        ++numNodes;
    }
    return;
}

void OutputTotalTime(PlaylistNode*& headNode)
{
    PlaylistNode* currNode = 0;
    // Output playlist messaging
    cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;

    // Total song times for each song in the list
    currNode = headNode;
    int totalTime = 0;

    // Over List and add up the totalTime
    while(currNode != 0)
    {
        totalTime = totalTime + currNode->GetSongLength();
        currNode = currNode->GetNext();
    }
    cout << "Total time: " << totalTime << " seconds" << endl << endl;
    return;
}

void OutputFullList(const string playlistTitle, PlaylistNode*& headNode)
{
    PlaylistNode* currPrintNode = 0;
    // Output playlist messaging
    cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;

    // Iterate through each song in list
    int numNodes = 1;
    currPrintNode = headNode; // set to first member

    // If list is empty, output error message
    if (headNode == 0) 
    {
        cout << "Playlist is empty" << endl << endl;
    }
    // Otherwise call print function for each node in list
    else 
    {
        while (currPrintNode != 0) 
        {
            cout << numNodes << "." << endl;

            // cycle through the playlist
            currPrintNode->PrintPlaylistNode();
            currPrintNode = currPrintNode->GetNext(); // update to next member
    
            cout << endl;
            ++numNodes;
        }
    }
    return;
}
