#include "find.h"
#include "delet.h"
#include <stdio.h>
#include <string.h>

void findd(tnode cptr,char *data)
{
    if(cptr!=NULL)
    {
        if(strcmp(cptr->data,data)==0 &&(cptr->key>0))
        {
            printf("%s\t%d\n",cptr->data,cptr->key);
        }
        else
        {
            findd(cptr->left,data);
            findd(cptr->right,data);
        }
    }
}
