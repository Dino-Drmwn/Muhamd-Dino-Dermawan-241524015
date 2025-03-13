#include "LinkedList.h"

// Inisialisasi Linked List kosong
void InitializeList(LinkedList* list) {
    list->head = NULL;
}

// Fungsi untuk menambahkan elemen di awal (Insert First)
void InsertFirst(LinkedList* list, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Gagal mengalokasikan memori.\n");
        return;
    }
    newNode->data = value;
    newNode->next = list->head;
    list->head = newNode;
}

// Fungsi untuk menambahkan elemen di akhir (Insert Last)
void InsertLast(LinkedList* list, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Gagal mengalokasikan memori.\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (list->head == NULL) {
        list->head = newNode;
        return;
    }

    Node* temp = list->head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Fungsi untuk mencetak isi Linked List
void PrintList(LinkedList* list) {
    printf("Elemen list: {");
    Node* temp = list->head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) printf(", ");
        temp = temp->next;
    }
    printf("}\n");
}

