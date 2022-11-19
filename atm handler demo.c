#include <stdio.h>
int main(){
    printf("Welcome to abc bank\n");
    printf("************************************************\n");
    printf("Please insert your card\n");
    int password = 1234;
    int balance =10000;
    int choice=0;
    int dept,wit;
    int pin;
    printf("Enter your Pass\n");
    scanf("%d",&pin);
    if(pin == password){
        while(choice!=4){

            printf("**** Menu ****\n");
        printf("1 ==Balance==\n");
        printf("2 ==Deposit==\n");
        printf("3 ==Withdraw==\n");
        printf("4 ==Cancel==\n");
        printf("Enter your Option:\n");
        scanf("%d",&choice);
        if(choice==1){
            printf("Balance = Rs.%d\n",balance);
        }
        else if(choice==2){
            printf("Enter your deposite:Rs.\n");
            scanf("%d",&dept);
            balance+=dept;
            printf("\nDeposited amount: Rs.%d",dept);
            printf("Balance = Rs.%d",balance);                     
        }
        else if(choice==3){
            printf("Enter the amount to withdraw: Rs");
            scanf("%d",&wit);
            balance -= wit;
            printf("Withdrawn Amount: Rs.%d\n",wit);
            printf("Balance = Rs.%d\n",balance);

        }
        else if(choice==4){
            printf("Session Ended!");
        }
        else{
            printf("Invalid Entry\n");
        }
         }
   
    }
     else{
      printf("Invalid Pin");
        }   
}
