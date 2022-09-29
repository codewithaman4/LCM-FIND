/*
wellcom to Amazingcoding
*/


 #include<stdio.h>
 
 int lcm(int,int);
 
 int main()
 {
 
  int x,y=1;
 
  printf("Enter Numbers to find LCM ( press 0 to exit) : ");
 
  while(1)
  {
   scanf("%d",&x);
 
   if(x<1)
       break;
   else if(x>y)
       y = lcm(x,y);
   else
       y = lcm(y,x);
  }
 
  printf("LCM is %d",y);
 
 return 0;
 }
 
 int lcm(int x,int y)
 {
 
  int temp = x;
 
  while(1)
  {
   if(temp % y == 0 && temp % x == 0)
      break;
   temp++;
  }
 
  return temp;
 }
 
 
 /*
 OUTPUT :
 
 Enter numbers to find LCM (press 0 to exit) :
 
 10
 15
 20
 0
 
 LCM is 60
 
 */



