#include "inorder.h"
#include "delet.h"
#include <stdio.h>
#include <string.h>

void inorder(tnode cptr)
{
    if(cptr!=NULL)
    {
        inorder(cptr->left);
        if(cptr->key>0)
            printf("%s\t%d\n",cptr->data,cptr->key);
        inorder(cptr->right);
    }
}
