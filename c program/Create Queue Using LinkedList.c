#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} n;

typedef struct queue {
    n *front, *rear;
} q;

n* newnode() {
    n *temp = (n*)malloc(sizeof(n));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    printf("%d added to queue\n", temp->data);
    temp->next = NULL;
    return temp;
}

q* createQ() {
    q *queue = (q*)malloc(sizeof(q));
    queue->front = queue->rear = NULL;
    return queue;
}

void enQ(q *queue) {
    n *temp = newnode();
    if(queue->rear == NULL) {
        queue->front = queue->rear = temp;
        return;
    }
    queue->rear->next = temp;
    queue->rear = temp;
}

void deQ(q *queue) {
    if(queue->front == NULL) {
        printf("Empty queue\n");
        return;
    }

    n *temp = queue->front;
    queue->front = queue->front->next;
    printf("%d removed from queue\n", temp->data);
    free(temp);

    if(queue->front == NULL) queue->rear = NULL;
}

int menu() {
    int p;
    printf("Choice: ");
    scanf("%d", &p);
    char ch;
    while((ch = getchar() != '\n') && ch != EOF);
    return p;
}

int main() {
    printf("1. Add to Queue\n2. Remove from Queue\n3. Exit\n");
    q *queue = createQ();
    while(1) {
        switch(menu()) {
            case 1: enQ(queue); break;
            case 2: deQ(queue); break;
            case 3: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}
