// Program treba naci najveci zajednicki djelitelj od 2 broja.

#include <stdio.h>

//funkcija za pronaci najveci zajednicki djelitelj.
int najvecid(int a,int b)
{
    int temp;

    if(a==0 || b==0)
    return 0;
    while(b!=0)
    {
        temp = a%b;
        a    = b;
        b    = temp;
    }
    return a;
}
int main()
{
    int a,b;
    int djelitelj;

    printf("Unesi prvi broj : ");
    scanf("%d",&a);
    printf("\nUnesi drugi broj : ");
    scanf("%d",&b);

    djelitelj=najvecid(a,b);
    printf("\nNajveci zajednicki djelitelj od %d i %d je: %d\n",a,b,djelitelj);

    return 0;
}
