#include <stdio.h>
#include <string.h>
main()
{
    printf("Password must contain number from 0-9,\n");
    printf("Passwword length must be atleast 8,\n");
    printf("Must contain special character.\n\n");
    printf("Must contain alphabets from a to z\n\n");
    int flag = 1;
    while (flag--)
    {
        printf("Enter password\n");
        char pass[20];
        gets(pass);
        printf("\n");
        int specchar = 0, num = 0, alpha = 0;
        for (int i = 0; i < strlen(pass); i++)
        {
            if (pass[i] == '@' || pass[i] == '#' || pass[i] == '$' || pass[i] == '&')
                specchar++;
            else if (pass[i] >= '0' && pass[i] <= '9')
                num++;
            else if (pass[i] >= 'a' && pass[i] <= 'z')
                alpha++;
            else if (pass[i] >= 'A' && pass[i] <= 'Z')
                alpha++;
        }
        if (specchar > 0 && alpha > 0 && num > 0 && strlen(pass) >= 8)
        {
            printf("Too strong password\n");
            return 0;
        }
        printf("Not too strong.Try again.\n\n");
        flag++;
    }
}