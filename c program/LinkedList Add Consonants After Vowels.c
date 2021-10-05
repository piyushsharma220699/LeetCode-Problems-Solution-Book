#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node {
    char data;
    struct node *next;
} n;

n *start = NULL;

void create(char s[]) {
    n *new, *t;
    char ch;
    int i;
    for(i=0; i<strlen(s); i++) {
        new = (n*)malloc(sizeof(n));
        new->data = s[i];
        new->next = NULL;
        if (start == NULL) start = new;
        else {
            t = start;
            while (t->next != NULL)
                t = t->next;
            t->next = new;
        }
    }
}

void edit() {
    n *prev, *n1, *t, *new;
    char x, ch;
    int count = 0;
    if(start == NULL) printf("Empty list\n");
    else {
        t = start;
        while(t != NULL) {
            x = t->data;
            if(x == 'a' || x == 'i' || x == 'e' || x == 'o'
            || x == 'u' || x == 'A' || x == 'E' || x == 'I'
            || x == 'O' || x == 'U') {
                ++count;
                prev = t;
                n1 = t->next;
                new = (n*)malloc(sizeof(n));
                printf("Enter a consonant: ");
                scanf("%c", &new->data);
                while((ch = getchar() != '\n') && ch != EOF);
                new->next = n1;
                prev->next = new;
            }
            t = t->next;
        }
        if(count == 0) {
            printf("No vowels found\n");
            exit(0);
        }
    }
}

void trav() {
    n *tr;
    if(start == NULL) printf("Empty list\n");
    else {
        tr = start;
        printf("Current list\n");
        while(tr != NULL) {
            printf("%c ", tr->data);
            tr = tr->next;
        }
        printf("\n");
    }
}

int main() {
    char st[100], ch;
    printf("Enter a string first: ");
    scanf("%[^\n]s", &st);
    while((ch = getchar() != '\n' && ch != EOF));
    create(st);
    trav();
    edit();
    trav();
    exit(0);
}