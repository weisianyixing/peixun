#include<stdio.h>
#include<wiringPi.h>
#include<sys/time.h>
int main()
{
   wiringPiSetup();
   pinMode(8,OUTPUT);
   pinMode(9,INPUT);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   
   struct timeval start,end;
    
   while(1)
   {
   digitalWrite(8,HIGH);
   delayMicroseconds(10);
   digitalWrite(8,LOW);
   int x,y;
   int i,j,t;
   for(i=0; ;i++)
      {
         x=digitalRead(9);
         
            if(x==1)
              {
                 printf("start\n");
                 
                 break;
              }
            
      }
      gettimeofday(&start,NULL);
      
      
    for(j=0; ;j++)
       {
            y=digitalRead(9);
            
            if(y==0)
            {
               printf("end\n");
               
               break;
            }
            
           
       }
       
       gettimeofday(&end,NULL); 
       
       
       long t1 =start.tv_sec * 1000000 + start.tv_usec;
       long t2 =end.tv_sec * 1000000 + end.tv_usec;
       float dis= (float)(t2-t1)/1000000 * 34000 / 2;
       printf("%fcm\n",dis);
       
     delay(2000);
     
   }
   return 0;
}
