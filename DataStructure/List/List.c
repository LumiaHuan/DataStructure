//
//  List.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include "List.h"
#include <stdlib.h>
struct _Node{
    int data;
    struct _Node* next;
};

Node* createList(){
    Node* header = (Node*)malloc(sizeof(Node));
    if (header == NULL) {
        printf("createList: Memeory is full!");
        return NULL;
    }
    header->next = NULL;
    return header;
}

int isEmpty(Node* header){
    if (header == NULL) {
        printf("Error isEmpty list is NULL\n");
        return -1;
    }
    return header->next == NULL;
}

Node* findPos(int pos, Node* header){
    if (header == NULL) {
        printf("Error findPos list is NULL");
        return NULL;
    }
    int i;
    Node* tmp = header->next;
    for (i = 0; tmp!=NULL && i < pos; i++) {
        tmp = tmp->next;
    }
    if (tmp == NULL) {
        printf("findPos:Error pos is too long");
        return NULL;
    }
    return tmp;
}

Node* findNode(int findValue, Node* header){
    if (header == NULL) {
        printf("Error findNode list is NULL");
        return NULL;
    }
    Node* tmp = header->next;
    while (tmp != NULL) {
        if (tmp->data == findValue) {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}

Node* findLast(Node* list){
    if (list == NULL) {
        printf("Error findLast list is NULL");
        return NULL;
    }
    Node* tmp = list;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    return tmp;
}

void deleteNode(int deleteValue, Node* header){
    if (header == NULL || isEmpty(header)) {
        printf("Error deleteNode list is NULL");
        return;
    }
    Node* tmp = header;
    while (tmp->next != NULL) {
        if (tmp->next->data == deleteValue) {
            Node* deletedNode = tmp->next;
            tmp->next = tmp->next->next;
            free(deletedNode);
            return;
        }
        tmp = tmp->next;
    }
}

void insertNode(int insertValue, Node* pos){
    if (pos == NULL) {
        printf("Error insertNode list==NULL or pos==NULL\n");
        return;
    }
    Node* insertedNode= (Node*)malloc(sizeof(Node));
    if (insertedNode == NULL) {
        printf("insertNode: Memory is full!\n");
        return;
    }
    insertedNode->data = insertValue;
    insertedNode->next = pos->next;
    pos->next = insertedNode;
}

void insertPos(int insertValue, Node* header, int pos){
    if (header == NULL) {
        printf("Error insertPos header is NULL");
        return;
    }
    int i;
    Node* tmp = header;
    for (i = 0; tmp != NULL && i < pos; i++) {
        tmp = tmp->next;
    }
    if (tmp == NULL) {
        printf("insertPos: Error pos is too long!\n");
        return;
    }
    Node* insertedNode = (Node*)malloc(sizeof(Node));
    if (insertedNode == NULL) {
        printf("insertPos: Error Memory is Full!\n");
        return;
    }
    insertedNode->data = insertValue;
    insertedNode->next = tmp->next;
    tmp->next = insertedNode;
}

void deleteList(Node* header){
    if (header == NULL) {
        printf("Error deleteList header is NULL\n");
        return;
    }
    Node* deletedNode = header->next;
    Node* tmp;
    while (deletedNode != NULL) {
        tmp = deletedNode->next;
        free(deletedNode);
        deletedNode = tmp;
    }
    header->next = NULL;
}

void printList(Node* header){
    if (header == NULL) {
        printf("Error printList is NULL\n");
        return;
    }
    Node* tmp = header->next;
    printf("header--->");
    while (tmp != NULL) {
        printf("%d--->", tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
}

