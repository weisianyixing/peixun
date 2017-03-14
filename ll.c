#include<stdio.h>
#include<wiringPi.h>
int main()
{
  int a, x=1,y=0,t=500;
  
  wiringPiSetup();
  for(a=1;a<9;a++)
  {
   pinMode (a,OUTPUT);
   digitalWrite (1,HIGH);
}

   pinMode (23,OUTPUT);
   pinMode (24,OUTPUT);
   pinMode (25,OUTPUT);
   digitalWrite (23,HIGH);
   digitalWrite (24,HIGH);
   digitalWrite (25,LOW);
   while(1)
{
     if(x<9)
     {
      for(x=1;x<9;x++)
        {
          digitalWrite(x,LOW);
          if(x>1)
           digitalWrite(x-1,HIGH);
    
          digitalWrite(23+y%3,LOW);

           digitalWrite(22+y%3,HIGH);
           
           y=y+1;
          delay(t);
          digitalWrite(8,HIGH);
          digitalWrite(25,HIGH);
        }
        
     }
    else x=1;
    
    
}
    return 0;
}
