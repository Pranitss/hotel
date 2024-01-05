#include <stdio.h>
#include <stdlib.h>
   int r,a,p1,p2,cup,i=1,tot1=0,tot2=0,tot3=0,total,rtcash,amt,total2,bill;

void menu()
{
   printf(":::::MENU:::::\n");
    printf("1. SAMOSA 30/-\n");
    printf("2. DOSA   20/-\n");
    printf("3. TEA    10/-\n");
    printf("0. EXIT\n");

}
void order()
{
    int a;
 //  int r,a,p1,p2,cup,i=1,tot1=0,tot2=0,tot3=0,total,rtcash,amt,total2;

    while(i)
    {
    menu();
    printf("ENTER YOUR CHOICE : ");
    scanf("%d",&a);

      switch(a)
    {
 case 1:
    printf(" HOW MANY PLATES : ");
    scanf("%d",&p1);
    tot1=p1*30;
    printf("OK NIVE CHOICE....\n");
    printf("ANYTHING YOU WANT...\n");
    break;
 case 2:
    printf("HOW MANY PLATES : ");
    scanf("%d",&p2);
    tot2=p2*20;
    break;
 case 3:
    printf("HOW MANY CUPS : ");
    scanf("%d",&cup);
    tot3=cup*10;
    printf("OK NIVE CHOICE....\n");
    printf("ANYTHING YOU WANT...\n");
    break;
 case 0:
    printf("exit\n");
    i=0;
    }
   /* printf("YOUR BILL IS : %d\n",total);
  k:  printf("RECEIVED CASH : ");
    scanf("%d",&r);
    if (r>=total)
    {
       rtcash=r-total;
       printf("your return cash is : %d\n",rtcash);

      total2=rtcash/2000 ;
      printf("%d NOTES OF 2000 \n",total2);
      rtcash=rtcash-(total2*2000);
      total2=rtcash/500;
      printf("%d NOTES OF 500 \n",total2);
      rtcash=rtcash-(total2*500);
      total2=rtcash/200;
      printf("%d NOTES OF 200 \n",total2);
      rtcash=rtcash-(total2*200);
      total2=rtcash/100;
      printf("%d NOTES OF 100 \n",total2);
      rtcash=rtcash-(total2*100);
      total2=rtcash/50;
      printf("%d NOTES OF 50 \n",total2);
      rtcash=rtcash-(total2*50);
      total2=rtcash/20;
      printf("%d NOTES OF 20 \n",total2);
      rtcash=rtcash-(total2*20);
      total2=rtcash/10;
      printf("%d NOTES OF 10 \n",total2);
      rtcash=rtcash-(total2*10);
      total2=rtcash/5;
      printf("%d NOTES OF 5 \n",total2);
      rtcash=rtcash-(total2*5);
      total2=rtcash/2;
      printf("%d NOTES OF 2\n",total2);
      rtcash=rtcash-(total2*2);
      total2=rtcash/1;
      printf("%d NOTES OF 1 \n",total2);
    }
    else
    {
        printf("insufficient cash");
        goto k;

    }

    break;
    }
    }
} */
void bill()
{
    total=tot1+tot2+tot3;
    while (i)
    {
    printf("YOUR BILL IS : %d\n",total);
  k:  printf("RECEIVED CASH : ");
    scanf("%d",&r);
    if (r>=total)
    {
       rtcash=r-total;
       printf("your return cash is : %d\n",rtcash);

      total2=rtcash/2000 ;
      printf("%d NOTES OF 2000 \n",total2);
      rtcash=rtcash-(total2*2000);
      total2=rtcash/500;
      printf("%d NOTES OF 500 \n",total2);
      rtcash=rtcash-(total2*500);
      total2=rtcash/200;
      printf("%d NOTES OF 200 \n",total2);
      rtcash=rtcash-(total2*200);
      total2=rtcash/100;
      printf("%d NOTES OF 100 \n",total2);
      rtcash=rtcash-(total2*100);
      total2=rtcash/50;
      printf("%d NOTES OF 50 \n",total2);
      rtcash=rtcash-(total2*50);
      total2=rtcash/20;
      printf("%d NOTES OF 20 \n",total2);
      rtcash=rtcash-(total2*20);
      total2=rtcash/10;
      printf("%d NOTES OF 10 \n",total2);
      rtcash=rtcash-(total2*10);
      total2=rtcash/5;
      printf("%d NOTES OF 5 \n",total2);
      rtcash=rtcash-(total2*5);
      total2=rtcash/2;
      printf("%d NOTES OF 2\n",total2);
      rtcash=rtcash-(total2*2);
      total2=rtcash/1;
      printf("%d NOTES OF 1 \n",total2);
    }
    else
    {
        printf("insufficient cash");
        goto k;

    }

}
}
}
int main ()
{
printf("                     :::::::::::::::::::: WELCOME TO PRAJWESH HOTEL ::::::::::::::::::::::::\n");

order();

printf(" ::::::::::::::::::::::::::::::::::::::::: THANYOU SIR/MADAM plzz dont VISIT AGAIN :::::::::::::::::::::::::::::::\n");
return 0;

}
