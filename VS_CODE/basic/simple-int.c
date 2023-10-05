# include <iostream>
void data(int p,int t,int r)
{
    int area;
    area=(r*r*t)/100;
    printf("ans:%d\n" ,area);
}

int main()

{

    int p,t,r;
    printf("enter value:");
    scanf("%d",&p);
    printf("enter value:");
    scanf("%d",&t);
    printf("enter value:");
    scanf("%d",&r);
    data(p,t,r);

}