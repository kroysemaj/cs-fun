/*
 *
 *  5. A doubly linked list is a list in which each entry contains a pointer to the
 *     preceding entry in the list as well as a pointer to the next entry in the list. Define 
 *     the appropriate structure definition for a doubly linked list entry and then write 
 *     a small program that implements a small doubly linked list and prints out the elements of the list.
 *
 *  6. Develop insertEntry and removeEntry functions for a doubly linked list that are similar 
 *     in function to those developed in previous exercises for a singly linked list. Why can your 
 *     removeEntry function now take as its argument a direct pointer to the entry to be 
 *     removed from the list?
 *
 */

/*
 * This is more or less a direct lift of this implementation: https://gist.github.com/mycodeschool/7429492
 * But writing it down helped me understand it.
 */

# include <stdio.h>
# include <stdlib.h>

struct intNode {
    int data;
    struct intNode* next;
    struct intNode* previous;
};

struct intNode* createNode(int aNumber);
void insert(int aNumber);

struct intNode* top;

struct intNode* createNode(int aNumber){
    struct  intNode* newNode 
            = (struct intNode*)malloc(sizeof(struct intNode));;
    
    newNode->data = aNumber;
    newNode->next = NULL;
    newNode->previous = NULL;
    return newNode;
}

void insert(int aNumber){
    struct intNode* newInt = (struct intNode*) createNode(aNumber);

    if ( top == NULL ){
        top = newInt;
        return;
    }
    top->previous = newInt;
    newInt->next = top;
    top = newInt;
}

void print(){
    struct intNode* temp = top;
    while (temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){    
    top = NULL; // start empty

    insert(1); print();
    insert(2); print();
    insert(3); print();
    insert(4); print();
}

// Ex 6
