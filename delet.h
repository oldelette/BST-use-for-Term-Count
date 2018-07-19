#ifndef DELET_H_INCLUDED
#define DELET_H_INCLUDED
#define MAX 10000

struct node
{
    int key;
    char data[MAX],store[MAX];
    struct node *left,*right;
}s[MAX];
typedef struct node node;
typedef node *tnode;
void delet(tnode *cptr,char *data);

#endif // DELET_H_INCLUDED
