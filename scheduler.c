#include<stdio.h>
#include<stdlib.h>
#define MAX 5
#include "scheduler.h"

// Setting a few variables equal to their value
int cqueue[MAX];
int face = -1;
int tail = -1;

void insert(int element){
	// checks to see if the queue is full
     if((face == 0 && tail == MAX - 1) || (face == tail + 1)) {
              printf("The queue is full\n");
     }
     if(face == -1) {
     face = 0;
     }
     if(tail == MAX - 1){
     tail = 0;
     }
     else {
     tail = tail + 1;
     }
     cqueue[tail] = element;
}

void display(){
	// if there's nothing in the queue a zero will be displayed on the screen.
   if(face == -1){
   printf("The queue is empty\n\n");
   }
 
  int i;
   i = face;
   if(face <= tail){
                  while(i <= tail)
                  printf("%d ", cqueue[i++]);
   }
   
   else {
       while(i <= MAX-1)
       printf("%d  ", cqueue[i++]);
 
       i=0;
       while(i <= tail)
       printf("%d   ", cqueue[i++]);
      
       }
 
}

int kill() {
    int element;
    if(face == -1) {
                 printf("The queue is empty\n");
                 return 0;
    }
    element = cqueue[face];
    if(face == tail) {
                   face = -1;
                   tail = -1;
    }
    else if(face == MAX - 1){
    face = 0;
	}
    else {
    face += 1;
    }
    printf("%d has been killed \n", element);
    return element;
}