#include<stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int find_kth_from_end(Node *L, int k)/*L是指向头结点的指针*/
{
    Node *fast = L->next;
    Node *slow = L->next;
    int i;

    /* 快指针先向前移动 k 步，使两个指针相距 k 个结点 */
    for (i = 0; i < k; i++) {
        if (fast == NULL) {
            return 0;
        }
        fast = fast->next;
    }

    /* 两个指针同步后移，快指针到表尾时，慢指针即指向倒数第 k 个结点 */
    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    printf("%d\n", slow->data);
    return 1;
}

int main()
{
    int n, k, i;
    Node *L = (Node *)malloc(sizeof(Node));/*创建头结点*/
    Node *tail = L;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        Node *node = (Node *)malloc(sizeof(Node));/*创建新结点*/
        scanf("%d", &node->data);
        node->next = NULL;
        tail->next = node;
        tail = node;
    }

    scanf("%d", &k);
    find_kth_from_end(L, k);

    while (L != NULL) {/*释放链表内存*/
        Node *next = L->next;
        free(L);        
        L = next;
    }

    return 0;
}