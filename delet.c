#include "delet.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delet(tnode *cptr,char *data)
{
    if((*cptr)!=NULL)
    {
        if(strcmp((*cptr)->data,data)==0)
        {
            if((*cptr)->key>0)
                (*cptr)->key--;
            else
                (*cptr)->key==0;
        }
        else
        {
            delet(&((*cptr)->left),data);
            delet(&((*cptr)->right),data);
        }
    }
}
