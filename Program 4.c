
#include <stdio.h>

int main()
{
    float amount, discount = 0, delivery = 0, total;
    int membership;

    printf("Enter order amount: ");
    scanf("%f", &amount);

    printf("Enter membership (1-Premium, 0-Regular): ");
    scanf("%d", &membership);

    if (amount >= 500)
    {
        delivery = 0;

        if (membership == 1)
        {
            discount = amount * 0.10;
        }
    }
    else
    {
        delivery = 50;
        discount = 0;
    }

    total = amount - discount + delivery;

    printf("Final payable amount = Rs. %.2f", total);

    return 0;
}
