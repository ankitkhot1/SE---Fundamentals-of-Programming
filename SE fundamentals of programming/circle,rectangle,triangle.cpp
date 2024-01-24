//Write a program to find area of circle, rectangle and triangle.
#include<stdio.h>
#include<math.h>
 int main()
{  
   int choice;
   printf("Enter 1 to find area of Triangle \n 2 for finding area of Square \n3 for finding area of Circle");
   scanf("%d",&choice);
   switch(choice) 
   {
      case 1: {
         int a,b,c;
         float s,area;
         printf("Enter sides of triangl");
         scanf("%d%d %d",&a,&b,&c);
         s=(float)(a+b+c)/2;
         area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
         printf("Area of Triangle is %f",area);
         break;
      }
      case 2: {
         float side,area;
         printf("Enter Sides of Squar");
         scanf("%f",&side);
         area=(float)side*side;
         printf("Area of Square is %f",area);
         break;
      }
      case 3: {
         float radius,area;
         printf("Enter Radius of Circle");
         scanf("%f",&radius);
         area=(float)3.14159*radius*radius;
         printf("Area of Circle %f",area);
         break;
      }
      
      default: {
         printf("Invalid Choice");
         break;
      }
   }
   return 0;
}
