p1name = input("Welcome to ExactAge_v1.1\nPlease enter only your first name \n") #Name of person 1

p1day = input("Please enter your birth day: ") #Date of birth of person 1
p1month = input("Please enter your birth month: ")
p1year = input("Please enter your birth year: ")

thisday = input("Please enter today's day: ") #Current date
thismonth = input("Please enter today's month: ")
thisyear = input("Please enter today's year: ")

copyday = thisday #Caculation to find the exact age of p1
copymonth = thismonth
copyyear = thisyear

int ("p1day"), int ("thisday")

if (p1day > thisday)
    {
        thisday +=30
        thismonth -= 1
    }

if (p1month > thismonth)
    {
        thismonth += 12
        thisyear -= 1    
    }

p1day = thisday - p1day
p1month = thismonth - p1month
p1year = thisyear - p1year

agetagp1 = "" #Mentions whether p1 is a child, teenager or adult or not yet born :D

if (p1year > 17)
    {
        agetagp1.append("adult")
    }
else if (p1year > 12)
    {
        agetagp1.append("teenager")
    }
else if (p1year > 2)
    {
        agetagp1.append("child")
    }
else if (p1year > -1)
    {
        agetagp1.append("baby")
    }
else
    {
        agetagp1.append("not yet born ,sorry :(")
    }

p1yearis, p1monthis, p1dayis #Variables that decide whether an 's' should be added at the end or not
if(p1day > 1) p1dayis = "s" #Adds a 's' to the end of the day of p1
if(p1month > 1) p1monthis = "s" #Adds a 's' to the end of the month of p1
if(p1year > 1) p1yearis = "s" #Adds a 's' to the end of the year of p1

print("Do you want to calculate the age of another person and find the age difference between you'll ? \n")
p2avail = input("If yes press 'y' else press 'n' \n") #Checks whether user wants to find the age of another person

if (p2avail == 'y' || p2avail == "Y") #Code if user enters 'Y' or 'y'
    {
        p2name = input("\nPlease enter the first name of the second name\n")

        p2day = input("Please enter the %s's birth day", p2name)
        p2month = input("Please enter the %s's birth month", p2name)
        p2year = input("Please enter the %s's birth year", p2name)

        if (p2day > copyday)
        {
            copyday += 30
            copymonth -= 1
        }
        if (p2month > copymonth)
        {
            copymonth += 12
            copyyear -= 1

        p2day = copyday - p2day
        p2month = copymonth - p2month
        p2year = copyyear - p2year

        p2yearis = ""
        if (p2day > 1) p2dayis = "s" #Adds a 's' to the end of the day of p2
        if (p2month > 1) p2month = "s" #Adds a 's' to the end of the day of p2
        if (p2year > 1) p2year = "s" #Adds a 's' to the end of the day of p2

        agetagp2 = "" #Mentions whether p2 is a child, teenager or adult or not yet born :D
        if (p1year > 19)
        {
            agetagp2.append("adult")
        }
        else if (p1year > 12)
        {
            agetagp2.append("teenager")
        }
        else if (p1year > 2)
        {
            agetagp2.append("child")
        }
        else if (p1year > -1)
        {
            agetagp2.append("baby")
        }
        else agetagp2.append("not yet born ,sorry :(")

        p1calcday = p1day # Seperate values for calculating the age difference between p1 and p2
        p1calcmonth = p1month
        p1calcyear = p1year

        if (p2day > p1day) #Calculation to adjust the values for finding the age difference between person 1 and person 2
        {
            p1calcday += 30
            p1calcmonth -= 1
        }
        if (p2month > p1month)
        {
            p1calcmonth += 12
            p1calcyear -= 1
        }

        difday = p1calcday - p2day #Calculation to find the exact age difference
        difmonth = p1calcmonth - p2month
        difyear = p1calcyear - p2year

        if (difday > 1) difdayis = 's' #Calculation to decide whether a 's' should be added at the end of the year, month & day
        if (difmonth  > 1) difmonthis = 's'
        if (difyear > 1) difyearis = 's'

        print("--------------------------------------------------------------------------------------------------------")
        print("%s who is a %s is %d year%c %d month%c and %d day%c old\n", p1name, agetagp1, p1year, p1yearis, p1month, p1monthis, p1day, p1dayis)
        print("%s who is a %s is %d year%c %d month%c and %d day%c old\n", p2name, agetagp1, p1year, p1yearis, p1month, p1monthis, p1day, p1dayis)
        print("The age difference betweeen %s and %s is %d year%c %d month%c and %d day%c old\n\n", p1name, p2name, difyear, difyearis, difmonth, difmonthis, difday, difdayis)
        }
    }

else if (p2avail == 'n' || p2avail == 'N') #Code if user enters 'N' or 'n'
{
    print("--------------------------------------------------------------------------------------------------------")
    print("%s who is a %s is %d year%c %d month%c and %d day%c old\n\n", p1name, agetagp1, p1year, p1yearis, p1month, p1monthis, p1day, p1dayis)
}

else #If user enters a wrong value for the presence of a second person
{
    print("--------------------------------------------------------------------------------------------------------")
    print("\n%s who is a %s is %d year%c %d month%c and %d day%c old\n", p1name, agetagp1, p1year, p1yearis, p1month, p1monthis, p1day, p1dayis)
    print("You have entered a wrong value for the presence of a second person. Please try again later\n\n")
}

print("Thank You for using ExactAge_v.1.1.py\nHave a Nice Day")
