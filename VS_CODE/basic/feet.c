# include <iostream>

void setdata(int feet)
{
    int i;
    i=feet*33;
    printf("value of feet:%d\n" ,i);
}

int main()

{

    int feet ;
    printf("value of feet:");
    scanf("%d",&feet);
    setdata(feet);

}