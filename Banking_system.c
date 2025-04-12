#include<stdio.h>

int orignal_1 = 1000,orignal_2 = 5000,orignal_3 = 1000,orignal_4 = 1000,orignal_5 = 1000;
int *balance1[]={&orignal_1,&orignal_2,&orignal_3,&orignal_4,&orignal_5};
void main_interface(int *balance, int n);
int pass1=111,pass2=212,pass3=313,pass4=414,pass5=515;
int *password[]={&pass1,&pass2,&pass3,&pass4,&pass5};

void user1();

int main(){
    int n,input;
    while(1){
     printf("\n1 for user1");
    printf("\n2 for user2");
    printf("\n3 for user3");
    printf("\n4 for user4");
    printf("\n5 for user5");
    printf("\n6 to exit");
    printf("\nChoose a user: ");
    scanf("%d",&n);

   if (n>=1 && n<=5){
       main_interface(balance1[n-1],n);
   }else if(n==6){
       printf("\nExiting the program");
       break;
   }else{
       printf("Invalid Input");
   }
    }
     return 0;
}
void main_interface(int *balance,int n){
    int k,p,i,j,l,m;
    do{
 printf("\nEnter the password for user %d : ",n);
 scanf("%d",&p);
 if(p==*password[n-1]){
 printf("\nWelcomr user %d",n);
 printf("\nYour current balance : %d",*balance);
 printf("\n1 for withdraw");
 printf("\n2 for deposit");
 printf("\n3 for transfer");
 printf("\n4 to return to the main menu");
 printf("\nWhat would you like to do : ");
 scanf("%d",&k);
 switch (k)
 {
 case 1:
    printf("Enter the amount you want to withdraw : ");
    scanf("%d",&i);
    if(*balance>=i){
    *balance -= i;
    printf("Your current balance is : %d",*balance);
    break;
    }else{
        printf("Not Sufficient Balance\n");
        break;
    }

 case 2:
    printf("Enter the amount you want to deposit : ");
    scanf("%d",&j);
    *balance += j;
     printf("Your current balance is : %d",*balance);
    break;   
 
 case 3:
    printf("Which user you want the money to transfer [1-5] : ");
    scanf("%d",&m);
    if(m>=1 && m<=5 && m!=n){
    printf("Enter the amount you want to  : ");
    scanf("%d",&l);
     if(*balance>=l){
    *balance -= l;
    *balance1[m - 1] += l;
    printf("Sucessfull! Your current Amount is : %d",*balance);
    break;
     }else{
         printf("\nInsufficient Balance");
         break;
     }
 }else{
     printf("Invalid Input");
 }
 case 4:
 printf("Returning to main menu");
 break;
 default:
 printf("Invalid choice");
 break;
}
}else if(p!=*password[n-1]){
    printf("Wrong Password");
}
}while(k!=4);
}