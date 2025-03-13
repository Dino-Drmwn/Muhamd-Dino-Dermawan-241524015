#include <stdio.h>
#include <stdlib.h>
/*
Gunakan pseudocode ADT Linked List anda menjadi program dengan mengikuti
spesifikasi pembuatan deret bilangan ganjil dengan langkah berikut:
1) masukan bilangan 7 sebagai elemen pertama {insert first}
> F.S. : elemen List = {7}
2) masukan bilangan 11 sebagai elemen kedua {insert last}
> F.S. : elemen List = {7, 11}
3) masukan bilangan 9 diantara bilangan 7 dan 11 {insert after}
> F.S. : elemen List = {7, 9, 11}
4) masukan bilangan 5 di awal list {insert first}
> F.S. : elemen List = {5, 7, 9, 11}
5) masukan bilangan 13 di akhir list {insert last}
> F.S. : elemen List = {5, 7, 9, 11, 13}
6) hapus elemen terakhir (bilangan 13) pada list {delete last}
> F.S. : elemen List = {5, 7, 9, 11}
7) hapus bilangan 7 pada list
> F.S. : elemen List = {5, 9, 11}
8) hapus elemen pertama (bilangan 5) pada list {delete first}
> F.S. : elemen List = {9, 11}
9) hapus semua elemen list deret bilangan ganjil
> F.S. : elemen List = {}
*/
/*
Inisialisasi struct Node
	Data <- Integer
	Next <- Pointer to Node
End Struct
*/

/*typedef struct Node{
	int Data;
	struct Node* Next;
}Node;

Node* head = NULL;

void InsertFirst(int value){
	Node* NewNode = (Node*)alloc(sizeof(Node);
	NewNode.Data = value;
	NewNode = head;
}

/*
Procedure InsertFirst(value)
	New_Node <- Allocate memory for Node
	New_Node.Data <- value
	New_Node.Next <- Head
	Head <- New_Node
End Procedure
*/

#include "LinkedList.h"

int main() {
    LinkedList list;
    InitializeList(&list);

    // 1) Masukkan bilangan 7 sebagai elemen pertama
    InsertFirst(&list, 7);
    PrintList(&list); // Output: {7}

    // 2) Masukkan bilangan 11 sebagai elemen kedua
    InsertLast(&list, 11);
    PrintList(&list); // Output: {7, 11}

    return 0;
}

