#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct product
{
    char pname[10][10], pc[10][10], dom[10][10], doe[10][10];
    int pup[10], qty[10], totalp[10];
};
struct product pro;
void in()
{
    int i;
    // int n;
    // printf("How many variants are there:  ");
    // scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        printf("Enter product name:   ");
        gets(pro.pname[i]);
        fflush(stdin);
        printf("Enter price,date of manufc, date of expiry:   ");
        gets(pro.pc[i]);
        fflush(stdin);
        gets(pro.dom[i]);
        fflush(stdin);
        gets(pro.doe[i]);
        fflush(stdin);
        printf("Enter quantity and price per unit:   ");
        scanf("%d  %d", &pro.qty[i], &pro.pup[i]);
        pro.totalp[i] = pro.qty[i] * pro.pup[i];
        fflush(stdin);
    }
}
void out()
{
    int i, n;
    for (int i = 0; i < 10; i++)
    {
        printf("Product %s ,it costs %s, manufactured on %s, will expire on %s, price per unit %d, quantity %d, total amount will be %d\n\n", pro.pname[i], pro.pc[i], pro.dom[i], pro.doe[i], pro.pup[i], pro.totalp[i]);
    }
}
void search()
{
    char code[10];
    int i, a = 0, n;
    printf("Enter the product you want to search:   ");
    gets(code);
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(code, pro.pname[i]) == 0)
        {
            printf("The product name is %s\nPrice =  %s\n Date of manufacturing= %s\n Date of expiry= %s\nPrice per unit= %d\n Quantity you wanted= %d\nTotal payable amount is=  %d", pro.pname[i], pro.pc[i], pro.dom[i], pro.doe[i], pro.pup[i], pro.qty[i], pro.totalp[i]);
            a++;
        }
    }
    if (a == 0)
    {
        printf("%s the product is currently unavailable\n", code);
    }
}
main()
{
    in();
    out();
    search();
}