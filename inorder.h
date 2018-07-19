#ifndef INORDER_H_INCLUDED
#define INORDER_H_INCLUDED
#define MAX 10000

/*struct node
{
    int key;
    char data[MAX],store[MAX];
    struct node *left,*right;
}s[MAX];*/
typedef struct node node;
typedef node *tnode;
void inorder(tnode cptr);

#endif // INORDER_H_INCLUDED
