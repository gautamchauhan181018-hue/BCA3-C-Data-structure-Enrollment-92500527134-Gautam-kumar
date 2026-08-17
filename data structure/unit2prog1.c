//Implement stack using array with following operations : push, pop, print, peek, peep, change, exit.

#include <stdio.h>
#define max 5

int stack[max];
int top = -1;

void push();
void pop();
void peek();
void display();
void change();
void peep();



int main(){

    int choice;

    while(1){

   printf("1.push \n");
   printf("2.pop \n");
   printf("3.peek \n");
   printf("4.display \n");
   printf("5.change \n");
   printf("6.peep \n");
   printf("7.exit\n");

   printf("enter your choice:");
   scanf("%d",&choice);

     switch(choice){

        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;
            
        case 4:
            display();
            break;

        case 5:
           change();
           break;

        case 6:
            peep();
            break;

        case 7:
          printf("exit");
          return 0;

        default:
        printf("invalid choice");
        
     }

     }
   
    return 0;
}


  void push(){

    int value;

    printf("enter the value:");
    scanf("%d",&value);

     if(top == max - 1){
        printf("stack overflow");
        return;
     }

     top++;
     stack[top] = value;

     printf("your element in the stack is: ");

     for(int i = top;i>=0;i--){
        printf(" %d",stack[i]);
     }

  }

  void pop(){
 
     if(top == -1){

        printf("stack is underflow");
        return;

     }

     printf("pop value is %d",stack[top]);

     top--;

     printf("your element in the stack after the deletion:");

     for(int i = top; i>=0;i--){

        printf("%d ",stack[i] );
     }

  }

 void peek(){
    if(top == -1){
        printf("stack is empty");
        return;
    }

    printf("your top element of the stack is : %d", stack[top]);
  }

 void  display(){

     if(top == -1){

        printf("stack is empty");
        return;

     }

     for(int i = top; i>=0;i--){

        printf(" %d ", stack[i]);
     }

      }
    

     void change(){
        int position, value;

        printf("enter your position:");
        scanf("%d", &position);

        if(position <= 0 || position > top + 1){

            printf("invalid position");
            return;
        }

        printf("enter new value:");
        scanf("%d", &value);

        stack[top - position + 1] = value;

        printf("element changed succesfully");

        


     }

     void peep(){

         int position;

    printf("Enter position from top: ");
    scanf("%d", &position);

    if (position <= 0 || position > top + 1) {
        printf("Invalid position!\n");
        return;
    } 
    
        printf("Element at position %d: %d\n",
               position, stack[top - position + 1]);

     }

 



