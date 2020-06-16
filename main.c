#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("******THE BIll GENERATOR*******\n");
printf("Enter the Bill no.(Must be followed by .txt extension)\n");
char number[500];
scanf("%s",&number);

FILE *ptr=NULL;
char *filename=number;
ptr=fopen(filename,"w");
system("CLS");
float currency;
char name[40];
int contact;
char mail[100];
int n;
printf("Enter the following details now:\n");
printf("Enter the number of items purchased: ");
scanf("%d",&n);
printf("Customers Name(First Name Only): ");
scanf("%s",&name);
printf("Mobile Number: ");
scanf("%d",&contact);
printf("Email: \n");
scanf("%s",mail);
printf("Enter the amount paid by the customer:\n");
scanf("%f",&currency);
system("CLS");

fprintf(ptr,"To,\nCustomer Name: %s\nMobile Number:%d\nEmail:%s\t\t\tBill no.: %s\n",name,contact,mail,number);
fprintf(ptr,"==============================================================================\n");
fprintf(ptr,"Product\t\t\tQuantity\t\t\tAmount\n");
fprintf(ptr,"------------------------------------------------------------------------------\n");
char product[50];
int qty;
float price,amount;


 int i,x;
 for(i=0;i<n;i++)
 {
    printf("Enter the product %d\n",i);
    scanf("%s",&product);
    printf("Enter the units bought:\n");
    scanf("%d",&qty);
    printf("Enter the unit price:\n");
    scanf("%f",&price);
    amount=price*qty;
    if(n>1)
    amount+=amount;
    else
        amount=amount;

    fprintf(ptr,"%s\t\t\t%d\t\t\t\t%f\n",product,qty,price*qty);
    system("CLS");
 }
 fprintf(ptr,"==============================================================================\n");
 fprintf(ptr,"Total Amount= %f rupees\n",amount);
 float left;
 left=currency-amount;
 fprintf(ptr,"Amount given by the customer: %.2f rupees\n",currency);
 fprintf(ptr,"Amount to be returned: %.2f rupees\n",left);
 fprintf(ptr,"******************************************************************************\n");
 fprintf(ptr,"\t\t\t\t\t\t\t**BY CODEFREAKS**\n");
 fprintf(ptr,"\t\t\t\t\t\t\t**for MECH.IN**");

}
