#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Queue queue;
struct Queue
{
    int *arr;
    int  rear, capacity;
};
queue q;

void createQueue(int capacity)
{q.capacity=capacity;
    q.arr = (int *)malloc(q.capacity * sizeof(int));
    q.rear = 0;
    
}
bool isEmpty()
{
    return q.rear == 0;
}
bool isFull()
{
    return q.rear == q.capacity;
}
void enQueue(int data)
{
    if (isFull())
    {
        printf("Queue overflow\n");
        return;
    }
    q.arr[q.rear] = data;
    q.rear ++;
}
int deQueue()
{
    int i = 1, temp=-1;
    if (isEmpty())
    {
        printf("Queue underflow\n");
        return temp;
    }
    temp = q.arr[0];
    for (i = 1; i < q.rear; i++)
    {
        q.arr[i - 1] = q.arr[i];
    }
    (q.rear)--;
    return temp;
}
int top()
{
    if (isEmpty())
    {
        printf("Empty queue\n");
        return -1000000;
    }
    return q.arr[0];
}
void print()
{
	int i = 0;
    for(i = 0 ; i < q.rear ; i++){
    	printf("%d ",q.arr[i]);
    }
    printf("\n");
}
int main()
{
    int capacity;
    int n, choice;
    int data;
//      createQueue(5);
//      enQueue(1);
//      enQueue(2);
//      enQueue(3);
//      enQueue(4);
//      enQueue(5);
//      enQueue(6);
//  print();
//      printf("%d\n",deQueue());
//      print();
//      enQueue(5);
//    print();
    //  do
    //  {
    //      printf("Select your choice\n\t1.Create queue\n\t2.enQueue\n\t3.deQueue\n\t4.Print Queue\n\t0.Quite\n");
    //     scanf("%d", &choice);
    //      switch (choice)
    //      {
    //      case 1:
    //          printf("Enter capacity of queue\n");
    //          scanf("%d", &capacity);
    //          createQueue(capacity);
    //          break;
    //      case 2:
    //          printf("Enter data\n");
    //          scanf("%d", &data);
    //          enQueue(data);
    //          break;
    //      case 3:
    //          deQueue();
    //          break;
    //      case 4:
    //          print();
    //          break;
    //      case 0:
    //      printf("Quiting\n");
             
    //          break;
    //      default:
    //          printf("Invalid choice\n");
    //      }
    //  } while (1);
 printf("%d",'9');
     return 0;
}