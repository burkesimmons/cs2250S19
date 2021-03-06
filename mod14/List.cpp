#include<iostream>
#include "List.h"
using namespace std;

List::List()
{
    head=NULL;
    tail=NULL;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  createnode
 *  Description:  Create a new node by requesting memory and linking all the 
 *  corresponding pointers in the linked list
 * =====================================================================================
 */
void List::createnode(int value)
{
    // Create a new node from the HEAP
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    // Connect the nodes
    if(head  == NULL) // first node
    {
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else // second or more nodes
    {
        // insert at end of list
        tail->next = temp;
        tail = temp;
    }
    return;
}


/*!
 *  Name:  display
 *  \brief  Display linked list
 */
void List::display()
{
    node *temp = new node;
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next; // point to next member
    }
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert_start
 *  Description:  Insert a node at the beginning of the list.
 *  Remapped your head pointer
 * =====================================================================================
 */
void List::insert_start(int value)
{
    // Create the new node
    node* temp = new node;
    temp->data = value;
    temp->next = head;
    // Set the head pointer
    head = temp;
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert_position
 *  Description:  Insert at given index. Then, reconnect list
 * =====================================================================================
 */
void List::insert_position(int pos, int value)
{
    node *prev = new node;
    node* temp = new node;
    node *curr = new node;

    curr = head; // point to first member
    for(int i = 0; i < pos; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    // Connect prev to curr to the rest of the list
    temp->data = value;
    prev->next = temp;
    temp->next = curr;
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  delete_first
 *  Description:  Delete the first member of linked list
 * =====================================================================================
 */
void List::delete_first()
{
    node *temp = new node;
    temp = head; // save old head
    head = head->next;

    delete temp; //free this memory
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  delete_last
 *  Description:  Delete last member of the list.
 *  Set the new lastmember to NULL
 * =====================================================================================
 */
void List::delete_last()
{
    node *current = new node;
    node *prev = new node;
    current = head; // point at first
    // loop until the end
    while(current->next != NULL)
    {
        prev = current;
        current = current->next;
    }
    // set last member
    tail = prev;
    prev->next = NULL; // last member

    delete current;
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  delete_position
 *  Description:  Delete by a given postion in the list
 * =====================================================================================
 */
void List::delete_position(int pos)
{
    node *current = new node;
    node *prev = new node;
    current = head; // point at head
    int list_size = 0;
    // NOTE: TODO: Make sure you are within 
    // boundaries of the list by number 
    // of elements

    while ( current->next != NULL ) {
        list_size++;
        current = current->next;
    }

    if ( pos > list_size ) {
        cout << "Position out of bounds " << endl;
        return;
    }
    // Loop over nodes
    current = head; // point at head
    for(int i = 1; i < pos; i++)
    {
        prev = current;
        current = current->next;
    }
    // Set new addresses
    prev->next = current->next;

    delete current;
    return;
}
