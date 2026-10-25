
#include <stdio.h>

int main()
{
    int userid, password;

    printf("Enter user ID: ");
    scanf("%d", &userid);

    if (userid != 101)
    {
        printf("User not found");
    }
    else
    {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password == 4321)
        {
            printf("Login successful");
        }
        else
        {
            printf("Incorrect password");
        }
    }

    return 0;
}
