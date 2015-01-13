# include<stdio.h>

void prast(int x);
void prsp(int x);
int main(void)
{ 
  //Asking the User to give the height of the Pyramid.
  int height;
  do
  {
    printf("Enter a number less than 23: ");
    scanf("%d",&height); 
  }
  while(height > 23);
  //Intializing the number of asterisks...
   int ast = 1;
    while(ast <= height)
   {
    //Init. Spaces..
    int space = height - ast;
    prsp(space);
    prast(ast);
    printf(" ");
    prast(ast);
    prsp(space);
    printf("\n");
    ast++;
   }
    
}
//Function for printing asterisks...
void prast(int x)
{
  int i;
  for(i = 0 ; i < x ; i++)
  {
     printf("#");
  }
}
//Functon for printing Spaces..
void prsp(int x)
{
  int i;
  for(i = 0 ; i < x ; i++)
  {
     printf(" ");
  }
}
