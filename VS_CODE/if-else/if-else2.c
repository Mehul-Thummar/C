#include<stdio.h>

void data(int mat,int eng,int guj,int sci,int total,int marks,float per)
{
    if (mat <35 || eng <35 || guj <35 || sci <35)    
      {
        printf("Student is fail");
      }
    else
    {
        total=mat+eng+guj+sci;
        printf("TOTAL MARKS:%d",total);
        per= total*100/400;
        printf("\nPERCENTAGE IS:%0.2f",per);
    if(per>=95)
        {
        printf("\nGRADE A");
        }
    else if(per>=80)
        {
        printf("\nGRADE B");
        }
    else if(per>=60)
        {
        printf("\nGRADE C");
        }
    else if(per>=40)
        {
        printf("\nGRADE D");
        }
    
}

int main()

   int mat,eng,guj,sci,total,markes;
   float per;
    printf("Enter maths marks: ");
    scanf("%d",&mat);
    printf("Enter english marks: ");
    scanf("%d",&eng);
    printf("Enter gujarati marks: ");
    scanf("%d",&guj);
    printf("Enter science marks: ");
    scanf("%d",&sci);
    data(mat,eng,guj,sci,total,marks,per);

}