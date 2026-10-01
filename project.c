 #include <stdio.h>


long int Bin_to_Dec(long int);
long int Bin_to_Oct(long int);
long int Bin_to_Hex(long int);
long int Dec_to_Bin(long int);
long int Dec_to_Oct(long int);
long int Dec_to_Hex(long int);
long int Oct_to_Bin(long int);
long int Oct_to_Dec(long int);
long int Oct_to_Hex(long int);
void Hex_to_Bin(char []);
void Hex_to_Dec(char []);
void Hex_to_Oct(char []);

int main()
{   system("COLOR 7C");
    int input,num=1,check;
    long int bin,oct,dec;
    char hex[1000];
    int i,j,space;

    printf("\t\t\t  COMPLETE NUMBER SYSTEM CONVERSION\n\t\t\t ___________________________________\n\n");

    while(num!=0)
    {
        printf("\t\t\t CHOOSE THE CONVERSION BETWEEN BASES \n\n");

        printf("========\n BINARY \n========\n\n");
        printf("PRESS <1> Binary to Decimal.\nPRESS <2> Binary to Octal.\nPRESS <3> Binary to Hexa-Decimal.\n");

        printf("\n*********\n DECIMAL \n*********\n\n");
        printf("PRESS <4> Decimal to Binary.\nPRESS <5> Decimal to Octal.\nPRESS <6> Decimal to Hexa-Decimal.\n");

        printf("\n~~~~~~~\n OCTAL \n~~~~~~~\n\n");
        printf("PRESS <7> Octal to Binary.\nPRESS <8> Octal to Decimal.\nPRESS <9> Octal to Hexa-Decimal.\n");

        printf("\n^^^^^^^^^^^^^\n HEXA-DECIMAL \n^^^^^^^^^^^^^\n\n");
        printf("PRESS <10> Hexa-Decimal to Binary.\nPRESS <11> Hexa-Decimal to Decimal.\nPRESS <12> Hexa-Decimal to Octal.\n");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&input);

        switch(input)
        {
            case 1:
                printf("\n***BINARY TO DECIMAL***\n");
                D:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);

                check=bin;

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("***TRY AGAIN****\n");
                        goto D;
                    }
                    else
                    check=check/10;
                }

                Bin_to_Dec(bin); break;

            case 2:
                printf("\n***BINARY TO OCTAL***\n");
                E:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);

                check=bin;

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("****TRY AGAIN****\n");
                        goto E;
                    }
                    else
                    check=check/10;
                }

                Bin_to_Oct(bin); break;

            case 3:
                printf("\n***BINARY TO HEXA-DECIMAL***\n");
                F:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);

                check=bin;

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("***TRY AGAIN****\n");
                        goto F;
                    }
                    else
                    check=check/10;
                }

                Bin_to_Hex(bin); break;

            case 4:
                printf("\n***DECIMAL TO BINARY***\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Bin(dec); break;

            case 5:
                printf("\n***DECIMAL TO OCTAL***\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Oct(dec); break;

            case 6:
                printf("\n***DECIMAL TO HEXA-DECIMAL***\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Hex(dec); break;

            case 7:
                printf("\n***OCTAL TO BINARY***\n");
                A:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);

                check=oct;

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto A;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                Oct_to_Bin(oct); break;

            case 8:
                printf("\n***OCTAL TO DECIMAL***\n");
                B:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);

                check=oct;

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto B;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                Oct_to_Dec(oct); break;

            case 9:
                printf("\n***OCTAL TO HEXA-DECIMAL***\n");
                C:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);

                check=oct;

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto C;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                Oct_to_Hex(oct); break;

            case 10:
                printf("\n***HEXA-DECIMAL TO BINARY***\n");
                X:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);

                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto X;
                    }
                }
                Hex_to_Bin(hex); break;

            case 11:
                printf("\n***HEXA-DECIMAL TO DECIMAL***\n");
                Y:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto Y;
                    }
                }
                Hex_to_Dec(hex); break;

            case 12:
                printf("\n***HEXA-DECIMAL TO OCTAL***\n");
                Z:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);

                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto Z;
                    }
                }
                Hex_to_Oct(hex); break;

            default:
                printf("\n***INVALID NUMBER***\n");
                break;
        }
        printf("\n\nDO YOU WANT TO CONTINUE = (1/0) :\n");
        scanf("%d",&num);

    }

    space = 3+35;
        for( i=1;i<=3;i++)
        {
            for( j=1;j<=space;j++)
            {
                printf(" ");
            }
            space--;
            for( j=1;j<=2*i-1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        space = 37;
        for( i=1;i<=3;i++)
        {
            for( j=1;j<=space;j++)
            {
                printf(" ");
            }
            space++;
            for( j=1;j<=2*(3-i)-1;j++)
            {
                printf("*");

            }

            printf("\n");

        }

}

long int Bin_to_Dec(long int bin)
{
    int rem,sum=0,i=0;
    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }

    printf("\nEquivalent Decimal Number : %d",sum);
}

long int Bin_to_Oct(long int bin)
{
    int i=0,rem,sum=0,remain[100],len=0;

    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%8;
        sum=sum/8;
        i++;
        len++;
    }
    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",remain[i]);
    }
}

long int Bin_to_Hex(long int bin)
{
    int rem,i=0,sum=0,remain[100],len=0;

    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%16;
        sum=sum/16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(remain[i])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",remain[i]);
        }

    }
}

long int Dec_to_Bin(long int dec)
{
    int rem[100],i,len=0;
    while(dec!=0)
    {
        rem[i]=dec%2;
        dec=dec/2;
        i++;
        len++;
    }


    printf("\nEquivalent Binary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}

long int Dec_to_Oct(long int dec)
{
    int rem[100],i=0,len=0;
    while(dec!=0)
    {
        rem[i]=dec%8;
        dec=dec/8;
        i++;
        len++;
    }

    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}

long int Dec_to_Hex(long int dec)
{
    int rem[100],i=0,len=0;
    while(dec!=0)
    {
        rem[i]=dec%16;
        dec=dec/16;
        i++;
        len++;
    }


    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(rem[i])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",rem[i]);
        }

    }
}

long int Oct_to_Bin(long int oct)
{
    int rem[100],len=0,decimal=0,i=0,num,ans;

    while(oct!=0)
    {
        ans=oct % 10;
        oct = oct/10;
        decimal = decimal + ans * pow(8,i);
        i++;

    }

    i=0;
    while(decimal!=0)
    {
        rem[i]=decimal%2;
        decimal=decimal/2;
        i++;
        len++;
    }


    printf("\nEquivalent Binary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}

long int Oct_to_Dec(long int oct)
{
    int decimal=0,i=0,num,ans;

    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);
}

long int Oct_to_Hex(long int oct)
{
    int rem[100],len=0,decimal=0,i=0,num,ans=0;
    while(oct!=0)
    {
        ans=oct % 10;
        oct = oct/10;
        decimal = decimal + ans * pow(8,i);
        i++;

    }
    i=0;
    while(decimal!=0)
    {
        rem[i]=decimal%16;
        decimal=decimal/16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(rem[i])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",rem[i]);
        }

    }
}

void Hex_to_Bin(char hex[])
{
    int i=0;
    printf("\nEquivalent Binary Number : ");
    for(i=0;i<strlen(hex);i++)
    {
        switch (hex[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
        case 'a':
            printf("1010"); break;
        case 'B':
        case 'b':
            printf("1011"); break;
        case 'C':
        case 'c':
            printf("1100"); break;
        case 'D':
        case 'd':
            printf("1101"); break;
        case 'E':
        case 'e':
            printf("1110"); break;
        case 'F':
        case 'f':
            printf("1111"); break;

        default:
            printf("\n Invalid hexa digit %c ", hex[i]);
        }
    }

}

void Hex_to_Dec(char hex[])
{
    int i,num=0,power=0,decimal=0;

    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'|| hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'|| hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'|| hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'|| hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'|| hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'|| hex[i]=='f')
        {
            num=15;
        }
        else

        {
            num=hex[i]-48;
        }

        decimal=decimal+num*pow(16,power);
        power++;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);

}

void Hex_to_Oct(char hex[])
{
    int i,len,num=0,power=0,decimal=0,rem[100];

    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'|| hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'|| hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'|| hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'|| hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'|| hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'|| hex[i]=='f')
        {
            num=15;
        }
        else

        {
            num=hex[i]-48;
        }

        decimal=decimal+num*pow(16,power);
        power++;
    }

    i=0,len=0;
    while(decimal!=0)
    {
        rem[i]=decimal%8;
        decimal=decimal/8;
        i++;
        len++;
    }
    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }

}
