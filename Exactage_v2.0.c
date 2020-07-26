//This program calculates a person's age or 2 people's age and finds the difference between them
#include <stdio.h>
#include <string.h>

main()

{
    int thisday, thismonth, thisyear , p1day, p1month, p1year;
    //this stands for the present day,month and year...
    //p1 stands for person 1
    int copyday,copymonth,copyyear;//copies the same present date,time and month for the second person if need in order to avoid confusion

    char p1name[30];//name of person 1

    printf("Welcome to ExactAge v2.0.\nPlease enter only your first name\n");
    scanf("%s",p1name);

    printf("\nPlease  enter your birthday in (dd/mm/yyyy) format\n");
    scanf("%d/%d/%d",&p1day,&p1month,&p1year);

    puts("\nPlease enter today's date in (dd/mm/yyyy) format");
    scanf("%d/%d/%d", &thisday, &thismonth, &thisyear );

    copyday = thisday;
    copymonth = thismonth;
    copyyear = thisyear;

    if (p1day > thisday)//calculations related to maths
    {
        thisday += 30 ;
        thismonth -= 1;
    }

    if (p1month > thismonth)
    {
        thismonth += 12;
        thisyear -= 1;
    }

    p1day = thisday - p1day;
    p1month = thismonth - p1month;
    p1year = thisyear - p1year;//calculation ends here

    int p2day, p2month, p2year;
    char p2name[30], p2avail;
    int difday, difmonth, difyear;

    printf("\nDo you want to calculate the age of another person who is younger than you and find the age difference between you'll ???\n");
    printf("If yes press 'y' or else press 'n'\n");

    scanf(" %c", &p2avail);//Finds for a second person

    char note1[20], note2[20];//Mentions whether the person is a child,teenager or an adult

    if (p1year > 19)
        {
            strcpy ( note1, "adult");
        }
    else if (p1year > 12)
        {
            strcpy ( note1, "teenager");
        }
    else if (p1year > 2)
        {
            strcpy ( note1, "child");
        }
    else if (p1year > -1)
        {
            strcpy ( note1, "baby");
        }
    else
        {
            strcpy ( note1, "not yet born");
        };//age tag for person 1 ends

    char p1yearis, p1monthis, p1dayis;//Variables that decide whether an 's' should be added at the end or not

    if ( p1year > 1 )    p1yearis = 's';//Decides the s for the first person's year
    if ( p1month > 1 )   p1monthis = 's';//Decides the s for the first person's month
    if ( p1day > 1 )     p1dayis = 's';//Decides the s for the first person's day

    if (p2avail == 'y' || p2avail == 'Y')//if user enteres 'y' or 'Y'
    {
        printf("\nPlease enter the first name of the second person\n");
        scanf("%s", p2name);

        printf("\nPlease  enter the second person's birthdate in (dd/mm/yyyy) format\n");
        scanf("%d/%d/%d", &p2day,&p2month,&p2year);

        char p2yearis, p2monthis, p2dayis;//Variables that decide whether an 's' should be added at the end or not

        if (p2day > copyday)//Mathematics calculation for calculating the exact age of the second person
        {
            copyday += 30;
            copymonth -= 1;
        }
        if (p2month > copymonth)
        {
            copymonth +=12;
            copyyear -= 1;
        }//calculation stops here

        p2day = copyday - p2day;
        p2month = copymonth - p2month;
        p2year = copyyear - p2year;

        if ( p2year > 1 )    p2yearis = 's';//Decides the s for the second person's year
        if ( p2month > 1 )   p2monthis = 's';//Decides the s for the second person's month
        if ( p2day > 1 )     p2dayis = 's';//Decides the s for the second person's day


        if (p2year > 19)//Mentions whether a person is a child,teenager or an adult
            {
                strcpy ( note2, "adult");
            }
        else if (p2year > 12)
            {
                strcpy ( note2, "teenager");
            }
        else if (p2year > 2)
            {
                strcpy ( note2, "child");
            }
        else if (p2year > -1)
            {
                strcpy ( note2, "baby");
            }
        else
            {
                strcpy ( note2, "not yet born");
            }//age tag for person 2 ends here

        int p1calcday, p1calcmonth, p1calcyear;//seperate values for calculating the difference between person 1 and 2;

        p1calcday = p1day;
        p1calcmonth = p1month;
        p1calcyear = p1year;//intializing the variables before starting the calculation

        if ( p2day > p1day )//calculation to adjust the values for finding the difference between person 1 and person 2
            {
                p1calcday += 30;
                p1calcmonth -= 1;
            }
        if ( p2month > p1month )
            {
                p1calcmonth += 12;
                p1calcyear -= 1;
            }//calculation ends here

        difday = p1calcday - p2day;//calculation for finding the differenece between person 1 and person 2
        difmonth = p1calcmonth - p2month;
        difyear = p1calcyear - p2year;//calculation ends here

        int difyearis, difmonthis, difdayis;//Variables that decide whether an 's' should be added at the end or not

        if ( difyear > 1 )  difyearis = 's';
        if ( difmonth > 1)  difmonthis = 's';
        if ( difday > 1)    difdayis = 's';

        printf("\n%s who is a %s is %d year%c %d month%c and %d day%c old\n", p1name, note1, p1year, p1yearis, p1month, p1monthis, p1day, p1dayis );
        printf("\n%s who is a %s is %d year%c %d month%c and %d day%c old\n\n", p2name, note2, p2year, p2yearis, p2month, p2monthis, p2day, p2dayis );
        printf("The difference between %s and %s is %d year%c %d month%c and %d day%c\n\n", p1name, p2name, difyear, difyearis, difmonth, difmonthis, difday, difdayis);
        printf("Thank You for using ExactAge v2.0\nHave a nice day 🙂\n\n\n");

    }

    else if ( p2avail == 'n' || p2avail == 'N')//if user enters 'n' or 'N'
            {
            printf("\n%s who is a %s is %d year%c %d month%c and %d day%c old\n\n", p1name, note1, p1year, p1yearis, p1month, p1monthis, p1day, p1dayis );
            printf("Thank You for using ExactAge v2.0\nHave a nice day 🙂\n\n\n");
            }

    else//If user enters a wrong value for the presence of a second person
        {
            printf("\n%s who is a %s is %d year%c %d month%c and %d day%c old\n", p1name, note1, p1year, p1yearis, p1month, p1monthis, p1day, p1dayis );
            printf("\nYou have entered an incorrect value. Please try again later\n\n");
            printf("Thank You for using ExactAge v2.0\nHave a nice day 🙂\n\n\n");
        }

    return 0;
}
