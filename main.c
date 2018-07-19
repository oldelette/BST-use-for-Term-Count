#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "delet.h"
#include "find.h"
#include "insert.h"
#include "inorder.h"

/*struct node
{
    int key;
    char data[MAX],store[MAX];
    struct node *left,*right;
}s[MAX];
typedef struct node node;
typedef node *tnode;*/

//void insert(tnode *cptr,char *data);
//void find(tnode cptr,char *data);
//void delet(tnode *cptr,char *data);
//void inorder(tnode cptr);
void countt(tnode cptr);
int compare(const void *a, const void *b);
int num=0;

int main(int argc,char **argv)
{
    char txt[20];
    //FILE *fp;
    (void)argc;
    //fp=fopen(argv[1],"r");
    tnode rptr=NULL;
    //node s[MAX];
    int i;
    //while(EOF!=fscanf(fp,"%s",txt))
    while(EOF!=scanf("%s",txt))
	{
        if(strcmp(txt,"insert")==0)
        {
            //printf("insert!\n");
            //fscanf(fp,"%s",txt);
            scanf("%s",txt);
            inserte(&rptr,txt);
        }
        else if(strcmp(txt,"find")==0)
        {
        	printf("find\n----------\n");
        	//fscanf(fp,"%s",txt);
            scanf("%s",txt);
            findd(rptr,txt);
            printf("----------\n");
        }
        else if(strcmp(txt,"delete")==0)
        {
            //fscanf(fp,"%s",txt);
            scanf("%s",txt);
            delet(&rptr,txt);
        }
        else if(strcmp(txt,"inorder")==0)
        {
        	printf("inorder\n----------\n");
            inorder(rptr);
            printf("---------\n");
        }
        else if(strcmp(txt,"count")==0)
        {
            num=0;
            countt(rptr);
            qsort(s,num,sizeof(node),compare);
            printf("count\n---------\n");
            for(i=0;i<num;i++)
                printf("%s\t%d\n",s[i].store,s[i].key);
            printf("----------\n");

        }
    }
    return 0;
}

void countt(tnode cptr)
{
    if(cptr!=NULL)
    {
        countt(cptr->left);
        if(cptr->key>0)
        {
            s[num].key=cptr->key;
            strcpy(s[num].store,cptr->data);
            num++;
        }
        countt(cptr->right);
    }
}

int compare(const void *a, const void *b)
{
    node  *c = (node *)a;
    node *d = (node *)b;
    int cc = c->key;
    int dd = d->key;
    if(cc>dd)
        return -1;
    else
        return 1;
}
/*void insert(tnode *cptr,char* data)
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
           insert(&((*cptr)->left),data);
       }else if(strcmp(data,(*cptr)->data)>0)
       {
           insert(&((*cptr)->right),data);
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
*/
/*void find(tnode cptr,char *data)
{
    if(cptr!=NULL)
    {
        if(strcmp(cptr->data,data)==0 &&(cptr->key>0))
        {
            printf("%s\t%d\n",cptr->data,cptr->key);
        }
        else
        {
            find(cptr->left,data);
            find(cptr->right,data);
        }
    }
}*/

/*void delet(tnode *cptr,char *data)
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
}*/

/*void inorder(tnode cptr)
{
    if(cptr!=NULL)
    {
        inorder(cptr->left);
        if(cptr->key>0)
            printf("%s\t%d\n",cptr->data,cptr->key);
        inorder(cptr->right);
    }
}*/
