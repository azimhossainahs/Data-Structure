#include <stdio.h>
#include <stdlib.h>
#define size 100
int front = -1, rear = -1;
int queue[size];
void enqueue();
void dequeue();
void peek();
void qprintAll();
int main(){
    int choice = -1;
    while(choice != 0){
        system("clear"); // for windows use "cls"
        printf("Queue elements : ");
        qprintAll();
        printf("\n");
        printf("1. Enqueue.\n");
        printf("2. Dequeue.\n");
        printf("3. Peek\n");
        printf("Enter 0 for exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        if(choice == 1){
            enqueue();
        }else if(choice == 2){
            dequeue();
        }else if(choice == 3){
            peek();
        }
    }
}
void enqueue(){
    if(front == -1 ){
        front = 0;
    }
    if(rear == size -1){
        printf("Queue Overflow\n");
    }
    int data;
    printf("Enter a number : ");
    scanf("%d", &data);
    queue[++rear] = data;

}
void dequeue(){
    if(front > size-1 || front > rear){
        printf("Queue Underflow\n");
        return;
    }
    front++;
}
void qprintAll(){
    if(front == -1 || front > rear){
        printf("Queue is empty.\n");
        return;
    }
    for(int i = front;i<=rear;i++){
        printf("%d ", queue[i]);
    }
}
void peek(){
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return ;
    }
    printf("Queue front : %d\n" , queue[front]);
}