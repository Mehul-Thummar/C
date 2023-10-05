# include <iostream>
void data(int w,int l)
{
    int area;
    area=w*l;
    printf("area of squre:%d\n" ,area);
}

int main()

{

    int w,l;
    printf("enter value:");
    scanf("%d",&w);
    printf("enter value:");
    scanf("%d",&l);
    data(w,l);

}