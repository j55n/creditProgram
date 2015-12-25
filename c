#include <stdio.h>

int main(void)
{
    //Set variables
    unsigned long long int creditNum;
    int creditDigit[16], product, productDigit, i, cardType, size, first2, sum, j;

    //Get user to input credit card number
    printf("What is your credit card number? \n");
    scanf("%llu", &creditNum);

    //Assign digits to array
    for ( i = 0; creditNum > 0; i++)
    {
        creditDigit[i] = creditNum % 10;
        creditNum = creditNum / 10;
    }


    size = i;

    if( size == 13)
    {
        // Check if 1st digit matches Visa. Visas start with the number 4.
        if( creditDigit[12] = 4)
        {
            //***BEGIN TEST***
            sum = 0;

            for ( j = 1; j < 12; j = j + 2 )
            {
                product = creditDigit[i] * 2;

                if ( product > 9)
                {
                    productDigit = product % 10;
                    product /10;
                    sum = sum + product + productDigit;
                }
                else
                {
                    sum = sum + product;
                }
            }

            // Add other digits
            sum = sum + creditDigit[0] + creditDigit[2] + creditDigit[4] + creditDigit[6] + creditDigit[8] + creditDigit[10] + creditDigit[12];

            if ( sum % 10 == 0 )
            {
                printf("VISA1\n");
            }
            else
            {
                printf("INVALID VISA1\n");
            }

            //*** END TEST ***
        }
        else
        {
            printf("INVALID VISA1 Numbers\n");
        }
    }
    else if ( size == 15)
    {
        // Check if 1st 2 digits  are 34 or 27 for AmEx cards.
        first2 = creditDigit[14]*10 + creditDigit[13];
        if ( first2 == 34 || first2 == 37)
        {
            //***BEGIN TEST***

            sum = 0;

            for ( j = 1; j < 14; j = j + 2 )
            {
                product = creditDigit[j] * 2;

                if ( product > 9)
                {
                    productDigit = product % 10;
                    product = product /10;
                    sum = sum + product + productDigit;
                }
                else
                {
                    sum = sum + product;
                }
            }

            // Add other digits
            sum = sum + creditDigit[0] + creditDigit[2] + creditDigit[4] + creditDigit[6] + creditDigit[8] + creditDigit[10] + creditDigit[12] + creditDigit[14];

            if ( sum % 10 == 0 )
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }

            //*** END TEST ***
        }
        else
        {
            printf("INVALID AMEX NUMBER\n");
        }
    }
    else if ( size == 16)
    {
        //Test if Visa or MasterCard.  Visa starts with 4 and MasterCard starts with 51,52,53,54, or 55
        first2 = creditDigit[15]*10 + creditDigit[14];
        if ( creditDigit[15] == 4)
        {
            //***BEGIN TEST***

            sum = 0;

            for ( j = 1; j < 16; j = j + 2 )
            {
                product = creditDigit[j] * 2;

                if ( product > 9)
                {
                    productDigit = product % 10;
                    product = product /10;
                    sum = sum + product + productDigit;
                }
                else
                {
                    sum = sum + product;
                }
            }

            // Add other digits
            sum = sum + creditDigit[0] + creditDigit[2] + creditDigit[4] + creditDigit[6] + creditDigit[8] + creditDigit[10] + creditDigit[12] + creditDigit[14];

            if ( sum % 10 == 0 )
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID VISA\n");
            }

            //*** END TEST ***
        }
        else if ( first2 == 51 || first2 == 52 || first2 == 53 || first2 == 54 || first2 == 55 )
        {
            //***BEGIN TEST***

            sum = 0;

            for ( j = 1; j < 16; j = j + 2 )
            {
                product = creditDigit[j] * 2;

                if ( product > 9)
                {
                    productDigit = product % 10;
                    product = product /10;
                    sum = sum + product + productDigit;
                }
                else
                {
                    sum = sum + product;
                }
            }

            // Add other digits
            sum = sum + creditDigit[0] + creditDigit[2] + creditDigit[4] + creditDigit[6] + creditDigit[8] + creditDigit[10] + creditDigit[12] + creditDigit[14];

            if ( sum % 10 == 0 )
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID MASTERCARD\n");
            }

            //*** END TEST ***
        }
    }
    else
    {
        printf("INVALID CARD total\n");
    }

    return 0;
}
