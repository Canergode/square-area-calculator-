#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609

int main()
{
   int side,area;

   // Get side length from user
   printf("Enter the side length\n");
   scanf("%d",&side);

   // Calculate the area
   area=side*side;

   //Print the result
   printf("Area of the square:%d",area);



    return 0;
}
