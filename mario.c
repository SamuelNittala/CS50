# include<stdio.h>

void printast(int x);
void printsp(int x);
int main(void)
{ 
  //Asking the User to give the height of the Pyramid.
  int height;
  scanf("%d",&height); 
  
  //Intializing the number of asterisks...
   int ast = 2;
    while(ast <= height+1)
   {
    //Init. Spaces..
    int space = height - ast;
    // Calling Function for printing Spaces..
    prsp(space+1);
    // Calling Function for printing asterisks..
    prast(ast);
    //Printing a new line
    printf("\n");
    ast++;
   }
}
//Function for printing asterisks...
void printast(int x)
{
  int i;
  for(i = 0 ; i < x ; i++)
  {
     printf("#");
  }
}
//Functon for printing Spaces..
void printsp(int x)
{
  int i;
  for(i = 0 ; i < x ; i++)
  {
     printf(" ");
  }
}
