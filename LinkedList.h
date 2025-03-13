#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

// Definisi struct Node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Definisi struct Linked List
typedef struct {
    Node* head;
} LinkedList;

// Prototipe fungsi ADT
void InitializeList(LinkedList* list);
void InsertFirst(LinkedList* list, int value);
void InsertLast(LinkedList* list, int value);
void PrintList(LinkedList* list);

#endif

