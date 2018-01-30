#include <stdio.h>
#include <math.h>
int main()
{
    int num, backwards, backupzeros = 0, digit;
    printf("Type a number: ");
    scanf("%i", &num);

    // I STACK OVERFLOWED THIS PART
    while (num > 0)
    {
        digit = num % 10; // pry off the last digit
        num /= 10;        // take off the digit

        if ((backwards == 0) && (digit == 0)) // If it's a number that ends in 0
            backupzeros++;                    // save it, we'll use that later

        backwards = (backwards * 10) + digit; // glue it on backwards
    }   // TO HERE

    //print digits
    while (backwards > 0)
    {
        digit = backwards % 10;
        backwards /= 10;
        switch (digit)
        {
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        }
    }
    
    while (backupzeros > 0)
    {
        printf("zero ");
        backupzeros--;
    }

    printf("\n");
    return 0;
}
