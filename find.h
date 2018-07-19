#ifndef FIND_H_INCLUDED
#define FIND_H_INCLUDED
#define MAX 10000

/*struct node
{
    int key;
    char data[MAX],store[MAX];
    struct node *left,*right;
}s[MAX];*/
typedef struct node node;
typedef node *tnode;
void findd(tnode cptr,char *data);

#endif // FIND_H_INCLUDED
