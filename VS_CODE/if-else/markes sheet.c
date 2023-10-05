
 #include <iostream>

void setdata(int marks)
{
    int total = 0, math, eng, guj, sci;
    float per;

    if (math < 35 || eng < 35 || guj < 35 || sci < 35)    
    {
        printf("Student is fail");
    }
    else
    {
        total = math + eng + guj + sci;
        printf("TOTAL MARKS:%d",total);

        per= total*100/400;
        printf("\nPERCENTAGE IS:%0.2f",per);
    
        if(per >= 95)
        {
            printf("\nGRADE A");
        }
        else if(per >= 80)
        {
            printf("\nGRADE B");
        }
        else if(per >= 60)
        {
            printf("\nGRADE C");
        }
        else if(per >= 40)
        {
            printf("\nGRADE D");
        }
    }
}

int main()
{
    int mat, eng, guj, sci, marks;

    printf("Enter maths marks: ");
    scanf("%d",&mat);

    printf("Enter english marks: ");
    scanf("%d",&eng);

    printf("Enter gujarati marks: ");
    scanf("%d",&guj);

    printf("Enter science marks: ");
    scanf("%d",&sci);

    setdata(marks);

   return 0;
}

