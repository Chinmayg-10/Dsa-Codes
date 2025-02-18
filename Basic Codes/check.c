#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {
    int emp_no;
    char name[30];
    struct Node* prev;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int emp_no, char name[30]) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->emp_no = emp_no;
    strcpy(new_node->name,name);
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

struct Node* insertBegin(struct Node* head, int emp_no, char name[]) {
    
    struct Node* new_node = createNode(emp_no, name);
    new_node->next = head;
    
    if (head != NULL) {
        head->prev = new_node;
    }
    return new_node;
}

struct Node* delLast(struct Node *head) {
    if (head == NULL)
        return NULL;
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;

    curr->prev->next = NULL;
    free(curr);
    return head;
}

void printList(struct Node* head) {
    struct Node* curr = head;
    while (curr != NULL) {
        printf("employee number: %d | employee name: %s", curr->emp_no, curr->name);
        curr = curr->next;
        printf("\n");        
    }
    printf("\n");
}

int main() {

    struct Node *head = createNode(1,"daksh");
    head->next = createNode(2,"arnav");
    head->next->prev = head;
    head->next->next = createNode(3,"shivam");
    head->next->next->prev = head->next;

    printf("Original Linked List:\n");
    printList(head);

    head = insertBegin(head, 0, "arth");

    printf("After inserting Node 0 at the front:\n");
    printList(head);

    head = delLast(head);

    printf("After deleting last node:\n");
    printList(head);

    return 0;
}