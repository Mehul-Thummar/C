
#include<stdio.h>

struct dmartbill
{
   int serios_no;
   char pro_name[20];
   int rate,qty,amt,billamt;
   float dis,gst,netbill;
};

int main()
{
    struct dmartbill d[100];
    int i;

    for(i = 0; i < 2; i++)
    {
        printf("Enter Serios no : ");
        scanf("%d",&d[i].serios_no);

        printf("Enter Product Name : ");
        scanf("%s",&d[i].pro_name);

        printf("Enter Rate : ");
        scanf("%d",&d[i].rate);

        printf("Enter Quantaty : ");
        scanf("%d",&d[i].qty);

        printf("\n                     \n");
    }

    printf("Serios_no\tpro_name\tRate\tQuantaty\tAmount\tDiscount\tBillAmt\tGst\tNetBill");

    for(i = 0; i < 2; i++)
    {
        d[i].amt = d[i].rate * d[i].qty;
        d[i].dis = d[i].amt * 5/100;
        d[i].billamt = d[i].amt - d[i].dis;
        d[i].gst = d[i].billamt * 18/100;
        d[i].netbill = d[i].billamt + d[i].gst;
        

        printf("\n%d\t\t%s\t\t%d\t%d\t\t%d\t%.2f\t\t%d\t%.2f\t%.2f",d[i].serios_no,d[i].pro_name,d[i].rate,d[i].qty,d[i].amt,d[i].dis,d[i].billamt,d[i].gst
        ,d[i].netbill);

    }

}