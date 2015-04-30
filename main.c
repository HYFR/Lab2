#include<stdio.h>
#include<stdlib.h>
#define MAX 5
#include "scheduler.h"

int main(){
      int choice, num;
      while(1){
      printf("\n\nSubmit a command (The numbers represent the commands):\n\n");
      printf("1. A pid (Insert)\n");
      printf("2. K pid (Kill)\n");
      printf("3. I pid (Display)\n");
      printf("4. E (Exit)\n");
      scanf("%d", &choice);
	  // Based on the number submitted, the following case will be initiated.
      switch(choice){
					case 1:
                         printf("Enter a number into the queue: ");
                         scanf("%d", &num);
                         insert(num);
                         break;
                    case 2:
                         num = kill();
                         break;
                    case 3:
                         display();
                         break;
                    case 4:
                         exit(1);
                    default:
                         printf("Invalid choice\n");
      }
   }
}