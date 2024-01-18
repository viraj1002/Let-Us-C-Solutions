 #include<stdio.h>
 int main()
 {
 int num,pos=0,neg=0,zero=0,choice;
  do
  {
    scanf("%d",&num);
    if(num==0)
    zero++;
    else if(n<0)
    neg++;
    else if(n>0)
    pos++;
    printf("Do you want to enter another number? (Enter 1 for yes & 0 for no)");
    scanf("%d",&choice);
   }while(choice);
   printf("Zeroes = %d\n",zero);
   printf("Negatives = %d\n",neg);
   printf("Positives = %d\n",pos);
   return 0;
   }
