//food ordering from food vans
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void vanA();     //defination for VAN A
void vanB();     //defination for VAN B
void vanC();     //defination for VAN C
void vanD();     //defination for VAn D
//defination for choicing more order
void choice1();
void choice2();
void choice3();
void choice4();
//main starts from here
int main()
 {
 int n;
 printf("\n       *********************CHOOSE VAN***********************\n");
 printf("                          1. FOOD VAN 'A'\n");
 printf("                          2. FOOD VAN 'B'\n");
 printf("                          3. FOOD VAN 'C'\n");
 printf("                          4. FOOD VAN 'D'\n");
 printf("      *******************************************************\n");
 printf("Enter your choice: ");
 scanf("%d",&n);
 switch(n)
  {
  case 1:
  //textbackground(LIGHTRED);
  //textcolor(YELLOW);
  //clrscr();
  vanA();        //calling function vanA
  printf("-----------------------------------------");
  printf("\nThank You\n");
  choice1();
  break;
  case 2:
  //textbackground(MAGENTA);
  //textcolor(WHITE);
  //clrscr();
  vanB();    //calling function vanB
  printf("----------------------------------------");
  printf("\nThanks\n");
  choice2();
  break;
  case 3:
  //textbackground(DARKGRAY);
  //textcolor(RED);
  //clrscr();
  vanC();   //calling function vanC
  printf("----------------------------------------");
  printf("\nTHANKS\n");
  choice3();
  break;
  case 4:
  //textbackground(LIGHTGRAY);
  //textcolor(GREEN);
  //clrscr();
  vanD();    //calling function vanD
  printf("\nTHANK YOU\n");
  choice4();
  break;
  default:
  exit(1);
  }
 getch();
 return 0;
 }

 //declration for VAN A
 void vanA()
   {

   int i,l;
   float amount,bill;
   printf("\n______ITEMS______________________________AMOUNT______");
   printf("\n  1.Chilli Potato                         60.0\n");
   printf("\n  2.Maggie                                30.0\n");
   printf("\n  3.Wai Wai                               30.0\n");
   printf("\n  4.Coffee                                20.0\n");
   printf("\n  5.Soft Drink                            30.0\n");
   printf("\n  6.Macroni                               40.0\n");
   printf("\n  7.Softy(in summers only)                20.0\n");
   printf("\n  8.Paneer Roll                           85.0\n");
   printf("\n  9.Tea                                   25.0\n");
   printf("\n  10.Mineral Water                        25.0\n");
   printf("\n______________________________________________________\n");
   printf("\n===============ENTER ITEM================\n");
   scanf("%d",&l);
     switch(l)
   {
    case 1:
    amount=60;
    printf("\nChilli Potato\n");
    printf("\nENTER NUMBER OF ITEM\n");
    scanf("%d",&i);
    printf("\n============================================\n");
    printf("\n-------------BILLING-----------------");
    bill=amount*i;
    printf("\nTotal bill:%f",bill);
    printf("\n");
    break;
   case 2:
    amount=30;
    printf("\n Maggie \n");
    printf("\nENTER NUMBER OF ITEM\n");
    scanf("%d",&i);
    printf("\n============================================\n");
    printf("\n-------------BILLING--------------------\n");
    bill=amount*i;
    printf("\nTotal bill:%f\n",bill);
    break;
   case 3:
    amount=30;
    printf("\n Wai Wai \n");
    printf("\nENTER NUMBER OF ITEM\n");
    scanf("%d",&i);
    printf("\n===============================================\n");
    printf("\n-------------BILLING--------------------\n");
    bill=amount*i;
    printf("\nTotal bill:%f\n",bill);
    break;
   case 4:
    amount=20;
    printf("\n Coffee \n");
    printf("\n ENTER NUMBER OF ITEMS\n");
    scanf("%d",&i);
    printf("\n==================================================\n");
    printf("\n-------------BILLING-----------------------\n");
    bill=amount*i;
    printf("\nTotal Bill:%f\n",bill);
    break;
   case 5:
    amount=30;
    printf("\nSoft Drink\n");
    printf("\n ENTER NUMBER OF ITEMS\n");
    scanf("%d",&i);
    printf("\n=====================================================\n");
    printf("\n---------------BILLING----------------------\n");
    bill=amount*i;
    printf("\n Total Bill:%f\n",bill);
    break;
    case 6:
     amount=40;
     printf("\n Macroni \n");
     printf("\n ENTER NUMBER OF ITEMS \n");
     scanf("%d",&i);
     printf("\n========================================================\n");
     printf("\n-------------BILLING--------------------------------\n");
     bill=amount*i;
     printf("\n Total bill:\n",bill);
     break;
    case 7:
     amount=20;
     printf("\n Softy\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
    case 8:
     amount=85;
     printf("\n Paneer Roll\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
     break;
    case 9:
     amount=25;
     printf("\nTea\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
     break;
    case 10:
     amount=25;
     printf("\n Mineral Water\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
     break;
   default:
   exit(0);
   }
   return;
  }
  //declaration for vanB
  void vanB()
  {
  int i,c,amount;
  float bill;
  //textcolor(GREEN);

   printf("\n______ITEMS______________________________AMOUNT______");
   printf("\n  1.Chilli Potato                         50.0\n");
   printf("\n  2.Maggie                                30.0\n");
   printf("\n  3.Noodles                               25.0\n");
   printf("\n  4.Coffee                                15.0\n");
   printf("\n  5.Soft Drink                            30.0\n");
   printf("\n  6.Macroni                               30.0\n");
   printf("\n  7.Pastry                                25.0\n");
   printf("\n  8.Paneer Roll                           65.0\n");
   printf("\n  9.Tea                                   20.0\n");
   printf("\n  10.Mineral Water                        25.0\n");
   printf("\n______________________________________________________\n");
   printf("\n===============ENTER ITEM================\n");
   scanf("%d",&c);
   switch(c)
    {

   case 1:
    amount=50;
    printf("\nChilli Potato\n");
    printf("\nENTER NUMBER OF ITEM\n");
    scanf("%d",&i);
    printf("\n============================================\n");
    printf("\n-------------BILLING-----------------");
    bill=amount*i;
    printf("\nTotal bill:%f",bill);
    printf("\n");
    break;
   case 2:
    amount=30;
    printf("\n Maggie \n");
    printf("\nENTER NUMBER OF ITEM\n");
    scanf("%d",&i);
    printf("\n============================================\n");
    printf("\n-------------BILLING-----------------\n");
    bill=amount*i;
    printf("\nTotal bill:%f\n",bill);
    break;
   case 3:
    amount=25;
    printf("\n Noodles \n");
    printf("\nENTER NUMBER OF ITEM\n");
    scanf("%d",&i);
    printf("\n===============================================\n");
    printf("\n-------------BILLING--------------------\n");
    bill=amount*i;
    printf("\nTotal bill:%f\n",bill);
    break;
   case 4:
    amount=15;
    printf("\n Coffee \n");
    printf("\n ENTER NUMBER OF ITEMS\n");
    scanf("%d",&i);
    printf("\n==================================================\n");
    printf("\n-------------BILLING-----------------------\n");
    bill=amount*i;
    printf("\nTotal Bill:%f\n",bill);
    break;
   case 5:
    amount=30;
    printf("\nSoft Drink\n");
    printf("\n ENTER NUMBER OF ITEMS\n");
    scanf("%d",&i);
    printf("\n=====================================================\n");
    printf("\n---------------BILLING----------------------------\n");
    bill=amount*i;
    printf("\n Total Bill:%f\n",bill);
    break;
   case 6:
    amount=25;
    printf("\n Pastry \n");
    printf("\n ENTER NUMBER OF ITEMS \n");
    scanf("%d",&i);
    printf("\n========================================================\n");
    printf("\n-------------BILLING--------------------------------\n");
    bill=amount*i;
    printf("\n Total bill:\n",bill);
    break;
   case 7:
    amount=30;
    printf("\n Macroni \n");
    printf("\n ENTER NUMBER OF ITEMS\n");
    scanf("%d",&i);
    printf("\n======================================================\n");
    printf("\n-----------------BILLING----------------------------\n");
    bill=amount*i;
    printf("\nTotal Bill:%f\n",bill);
   case 8:
     amount=65;
     printf("\n Paneer Roll\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
     break;
    case 9:
     amount=20;
     printf("\nTea\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
     break;
    case 10:
     amount=25;
     printf("\n Mineral Water\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
     break;
   default:
   exit(0);
   }
    return;
  }

 //declaration for vanC
  void vanC()
   {
    int c,i,amount;
    float bill;
   //textcolor(BLUE);
   printf("\n______ITEMS______________________________AMOUNT______");
   printf("\n  1.Chilli Potato                         50.0\n");
   printf("\n  2.Maggie                                30.0\n");
   printf("\n  3.Pasta                                 25.0\n");
   printf("\n  4.Coffee                                15.0\n");
   printf("\n  5.Soft Drink                            20.0\n");
   printf("\n  6.Pastry                                30.0\n");
   printf("\n  7.Softy(in summers only)                15.0\n");
   printf("\n  8.Paneer Roll                           75.0\n");
   printf("\n  9.Tea                                   15.0\n");
   printf("\n  10.Mineral Water                        25.0\n");
   printf("\n______________________________________________________\n");
   printf("\n===============ENTER ITEM================\n");
   scanf("%d",&c);
   switch(c)
    {
   case 1:
    amount=50;
    printf("\nChilli Potato\n");
    printf("\nENTER NUMBER OF ITEM\n");
    scanf("%d",&i);
    printf("\n============================================\n");
    printf("\n-------------BILLING-----------------");
    bill=amount*i;
    printf("\nTotal bill:%f",bill);
    printf("\n");
    break;
   case 2:
    amount=30;
    printf("\n Maggie \n");
    printf("\nENTER NUMBER OF ITEM\n");
    scanf("%d",&i);
    printf("\n============================================\n");
    printf("\n-------------BILLING-----------------\n");
    bill=amount*i;
    printf("\nTotal bill:%f\n",bill);
    break;
   case 3:
    amount=25;
    printf("\n Pasta \n");
    printf("\nENTER NUMBER OF ITEM\n");
    scanf("%d",&i);
    printf("\n===============================================\n");
    printf("\n-------------BILLING--------------------\n");
    bill=amount*i;
    printf("\nTotal bill:%f\n",bill);
    break;
   case 4:
    amount=15;
    printf("\n Coffee \n");
    printf("\n ENTER NUMBER OF ITEMS\n");
    scanf("%d",&i);
    printf("\n==================================================\n");
    printf("\n-------------BILLING-----------------------\n");
    bill=amount*i;
    printf("\nTotal Bill:%f\n",bill);
    break;
   case 5:
    amount=20;
    printf("\nSoft Drink\n");
    printf("\n ENTER NUMBER OF ITEMS\n");
    scanf("%d",&i);
    printf("\n=====================================================\n");
    printf("\n---------------BILLING----------------------------\n");
    bill=amount*i;
    printf("\n Total Bill:%f\n",bill);
    break;
    case 6:
     amount=30;
     printf("\n Pastry \n");
     printf("\n ENTER NUMBER OF ITEMS \n");
     scanf("%d",&i);
     printf("\n========================================================\n");
     printf("\n-------------BILLING--------------------------------\n");
     bill=amount*i;
     printf("\n Total bill:\n",bill);
     break;
    case 7:
     amount=15;
     printf("\n Softy\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
    case 8:
     amount=75;
     printf("\n Paneer Roll\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
     break;
    case 9:
     amount=15;
     printf("\nTea\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
     break;
    case 10:
     amount=25;
     printf("\n Mineral Water\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
     break;
   default:
   exit(0);
   }
   return;
  }
 //declaration for vanD
  void vanD()
   {
   int i,c,amount;
   float bill;
   printf("\n______ITEMS______________________________AMOUNT______");
   printf("\n  1.Chilli Potato                         50.0\n");
   printf("\n  2.Maggie                                20.0\n");
   printf("\n  3.Sandwitch                             25.0\n");
   printf("\n  4.Coffee                                15.0\n");
   printf("\n  5.Soft Drink                            30.0\n");
   printf("\n  6.Pastry                                30.0\n");
   printf("\n  7.Macroni                               25.0\n");
   printf("\n  8.Paneer Roll                           70.0\n");
   printf("\n  9.Tea                                   20.0\n");
   printf("\n  10.Mineral Water                        25.0\n");
   printf("\n______________________________________________________\n");
   printf("\n===============ENTER ITEM================\n");
   scanf("%d",&c);
   switch(c)
    {
   case 1:

    amount=50;
    printf("\nChilli Potato\n");
    printf("\nENTER NUMBER OF ITEM\n");
    scanf("%d",&i);
    printf("\n============================================\n");
    printf("\n-------------BILLING-----------------");
    bill=amount*i;
    printf("\nTotal bill:%f",bill);
    printf("\n");
    break;
   case 2:
    amount=20;
    printf("\n Maggie \n");
    printf("\nENTER NUMBER OF ITEM\n");
    scanf("%d",&i);
    printf("\n============================================\n");
    printf("\n-------------BILLING-----------------\n");
    bill=amount*i;
    printf("\nTotal bill:%f\n",bill);
    break;
   case 3:
    amount=25;
    printf("\n Sandwitch \n");
    printf("\nENTER NUMBER OF ITEM\n");
    scanf("%d",&i);
    printf("\n===============================================\n");
    printf("\n-------------BILLING--------------------\n");
    bill=amount*i;
    printf("\nTotal bill:%f",bill);
    break;
   case 4:
    amount=15;
    printf("\n Coffee \n");
    printf("\n ENTER NUMBER OF ITEMS\n");
    scanf("%d",&i);
    printf("\n==================================================\n");
    printf("\n-------------BILLING-----------------------\n");
    bill=amount*i;
    printf("\nTotal Bill:%f\n",bill);
    break;
   case 5:
    amount=30;
    printf("\nSoft Drink\n");
    printf("\n ENTER NUMBER OF ITEMS\n");
    scanf("%d",&i);
    printf("\n=====================================================\n");
    printf("\n---------------BILLING----------------------------\n");
    bill=amount*i;
    printf("\n Total Bill:%f\n",bill);
    break;
    case 6:
     amount=30;
     printf("\n Pastry \n");
     printf("\n ENTER NUMBER OF ITEMS \n");
     scanf("%d",&i);
     printf("\n========================================================\n");
     printf("\n-------------BILLING--------------------------------\n");
     bill=amount*i;
     printf("\n Total bill:\n",bill);
     break;
    case 7:
     amount=25;
     printf("\n Macroni\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
    case 8:
     amount=70;
     printf("\n Paneer Roll\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
     break;
    case 9:
     amount=20;
     printf("\nTea\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
     break;
    case 10:
     amount=25;
     printf("\n Mineral Water\n");
     printf("\n ENTER NUMBER OF ITEMS\n");
     scanf("%d",&i);
     printf("\n======================================================\n");
     printf("\n-----------------BILLING----------------------------\n");
     bill=amount*i;
     printf("\nTotal Bill:%f\n",bill);
     break;
   default:
   exit(0);
   }
   return;
  }
 //declaring choice for vanA
 void choice1()
  {
  char ch;
  printf("\nAnything Else\n");
  printf("\nEnter Y/y for yes and N/n for no: ");
   ch=getch();
  if(ch=='Y'||ch=='y')
  {
  vanA();
  }
  else
   {
   printf("\nHAVE A NICE DAY");
   }
  return;
  }
 //declaring choice for vanB
 void choice2()
  {
  char ch;
  printf("\nAnything Else\n");
  printf("\nEnter Y/y for 'yes' and N/n for no: ");
   ch=getch();
  if(ch=='Y'||ch=='y')
  {
  vanB();
  }
  else
  {
  printf("\nHAVE A NICE DAY");
  }
  return;
  }
 //declaring choice for vanC
  void choice3()
   {
  char ch;
  printf("\nAnything Else\n");
  printf("\nEnter Y/y for 'yes' and N/n for 'no': ");
   ch=getch();
  if(ch=='Y'||ch=='y')
  {
  vanC();
  }
  else
  {
  printf("\nHAVE A NICE DAY");
  }
  return;
  }
  //declaring choice for vanD
 void choice4()
  {
  char ch='y';
  printf("\nAnything Else\n");
  printf("\nEnter Y/y for 'yes' and N/n for 'no': ");
  ch=getch();
  if(ch=='Y'||ch=='y')
  {
  vanD();
  }
  else
  {
  printf("\nHAVE A NICE DAY %c for you",ch);
  }
  return;
  }

