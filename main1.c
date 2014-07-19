#include<stdio.h>
#include<string.h>
#include</home/mayureshj/Downloads/createList.c>
#include</home/mayureshj/Downloads/nextNode.c>  
#include</home/mayureshj/Downloads/backTrack.c>
extern int n;
extern node *temp, *p, *q;
extern path *curr, *temp1,*pHead;
/*typedef struct node
{
  struct node *next;
  int vertex;
  float data;
}node;

typedef struct path
 {
   int id;
   struct path * next;
 } path;

//path * pHead, *startNode;*/

void main()
    {
      
       char e;       
      
        
        int currNode,i,j,count[n];
        // node *temp,*head[n],*p,*q;
         float pher[10];
         char val;


       scanf("%d",&n);     
       scanf("%c", &e);   
       char g[n][n];        
 
        for( i=0;i<n;i++)
          {
           scanf("%[^\n]s", g[i]);
              	scanf("%c", &e);
              }
          
             for( i=0;i<n;i++)
                printf("%*.*s\n",n,n, g[i]);
            
     createList(g);
     
   
 
     }
