#include <stdio.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;
int main(){
    Node *head = NULL, *p, *q;
    int n, i;
    for(i=0;i<n;i++){
        p = (Node *)malloc(sizeof(Node));
        scanf("%d",&p->data);
        p->next = head;
        head = p;//头插读入初始链表
    }
    q=head->next;
    head->next=NULL;
    for (i=0;i<n-1;i++){
        p=q;
        q=q->next;
        p->next=head;
        head=p;//更新head作为逆置链表最后更新完的结点
    }
    return 0;
}

