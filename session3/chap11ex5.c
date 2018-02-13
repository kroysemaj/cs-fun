# include <stdio.h>

struct doublyLinkedInts {
    int data;
    int *next;
    int *previous;
};

int main(){
    struct doublyLinkedInts dli[10];
    
    int i;
    for(i=0; i<10; i++){
        if ( i == 0 ){
            dli[i].data = 10 * (i + 1);
            dli[i].next = &dli[i+1];
        } else if ( i == 10 ){
            dli[i].data = 10 * (i + 1);
            dli[i].previous = &dli[i-1];
        } else {
            dli[i].data = 10 * (i + 1);
            dli[i].previous = &dli[i-1];
            dli[i].next = &dli[i+1];
        }
    }

    for(i=0; i<10; i++){
        printf("Data: %i, Prev: %i, Next: %i\n", dli[i].data, dli[i].previous, dli[i].next );
    }

}