/*c program to calculate the electricity bill */
/* total bill as per units*/
#include<stdio.h>
#include<conio.h>
int main(){
int units;
float amount,sur_charges,total_amount;
printf("\nplease enter the units you used******************:");
scanf("%d",&units);
//if it is true ok then inside block executed
if(units>500){
    amount=units*9.60;
    sur_charges=87;
}
//otherwise <fail>, compiler to next else if block
else if (units>=200){
    amount=units,7.77;
    sur_charges=76;
}
else if (units>=100){
amount=units*3.55;
sur_charges=37;
}
//otherwise  {fails},compiler move to the else block
else{
    amount=units*2.12;
    sur_charges=25;

}
total_amount=amount+sur_charges;
printf("\n ELECTRICITY BILL=%f",total_amount);
return 0;
}
