# include <iostream>

void dataset()
{
            int a,b,c;      
    if(a==b && b==c)
    {
        printf("THIS IS EQUILATERAT TRIANGLE");
    }
    else if(a==b || b==c || c==a) 
    {
        printf("THIS IS ISOSALES TRIANGLE");
    }
    else
    {
        printf("THIS IS SCALINE TRIANGLE");
    }
   
}

int main()

{

    int a,b,c;

    printf("enter value:");
    scanf("%d",&a);
    printf("enter value:");
    scanf("%d",&b);
    printf("enter value:");
    scanf("%d",&c);
    dataset();
    

}