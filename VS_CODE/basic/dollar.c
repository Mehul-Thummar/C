# include <iostream>

void setdata(int dollar)
{
    int i;
    i=dollar*82;
    printf("value of dollar:%d\n" ,i);
}

int main()

{

    int dollar ;
    printf("value of dollar:");
    scanf("%d",&dollar);
    setdata(dollar);

}