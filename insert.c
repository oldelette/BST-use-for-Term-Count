#include "insert.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inserte(tnode *cptr,char* data)
{
    if(*cptr == NULL)
    {
        *cptr=malloc(sizeof(node));
        if(*cptr!=NULL)
        {
            (*cptr)->key=1;
            strcpy((*cptr)->data,data);
            (*cptr)->left=NULL;
            (*cptr)->right=NULL;
        }
    }
    else
    {
       if(strcmp(data,(*cptr)->data)<0) //left tree
       {
           inserte(&((*cptr)->left),data);
       }else if(strcmp(data,(*cptr)->data)>0)
       {
           inserte(&((*cptr)->right),data);
       }
       else
       {
       		if((*cptr)->key>0)
       			(*cptr)->key++;
			else
				((*cptr)->key)=1;
       }
    }

}
