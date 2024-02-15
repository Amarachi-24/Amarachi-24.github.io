/*  This function goes through the file and counts the number of lines in the file
    This is used to determine the size of the arrays
    This function returns the number of lines in the file */
int LineCounter(void)
{

    /* Iniatialization and declaration of variables start here */
    FILE *fptr;

    int lineCounter = 0;

    int lineCharSize = 40;
    char lineCharacters[lineCharSize];

    /*  Use the file pointer to open the file and check if it is NULL */
    fptr = fopen("c:\\temp\\testdata.txt", "r");

    /* If the file pointer NULL then the file does not or cannot be found */
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

        /* If the file pointer is not NULL then the program goes through the file and counts the number of lines */
    else
    {
        /* While the line that is being read is not empty, the line counter is incremented */
        while (fgets(lineCharacters, lineCharSize, fptr) != NULL)
        {
            lineCounter++;
        }
    }

    /* The file is closed to prevent memory leaks */
    fclose(fptr);

    return lineCounter;
}

/*  This function calculates the average of the precipitation values
    This function takes in the amount of lines in the file and all the precipitation values
    This function returns the average of the precipitation values */
float average(int size, const float precipitationValues[])
{

    /* Iniatialization and declaration of variables start here */
    float sum = 0;
    int i;

    /*  For every value / line in the file, the value is added to the sum
        Also return the average of the precipitation values */
    for (i = 0; i < size; i++)
    {
        sum += precipitationValues[i];
    }

    return sum / size;
}

/*  This function calculates the maximum of the precipitation values
    This function takes in the amount of lines in the file and all the precipitation values
    This function returns the maximum of the precipitation values */
float highest(int size, const float precipitationValues[])
{

    /* Iniatialization and declaration of variables start here */
    float highest = precipitationValues[0];
    int i;

    /*  For every value / line in the file, find the maximum value
        Also return the maximum of the precipitation values */
    for (i = 1; i < size; i++)
    {

        /* If the current value is greater than the maximum value, then the current value is the new maximum value */
        if (precipitationValues[i] > highest)
        {
            highest = precipitationValues[i];
        }
    }

    return highest;
}

/*  This function calculates the minimum of the precipitation values
    This function takes in the amount of lines in the file and all the precipitation values
    This function returns the minimum of the precipitation values */
float lowest(int size, const float precipitationValues[])
{

    /* Iniatialization and declaration of variables start here */
    float lowest = precipitationValues[0];
    int i;

    /*  For every value / line in the file, find the minimum value
        Also return the minimum of the precipitation values */
    for (i = 1; i < size; i++)
    {

        /* If the current value is less than the minimum value, then the current value is the new minimum value */
        if (precipitationValues[i] < lowest)
        {
            lowest = precipitationValues[i];
        }
    }

    return lowest;
}

/*  This function calculates the year in which the minimum precipitation value occured
    This function takes in the amount of lines in the file, all the precipitation values and all the year and month values
    This function returns the year in which the minimum precipitation value occured */
int low_year(int size, const float precipitationValues[], const int yearMonthValues[])
{

    /* Iniatialization and declaration of variables start here */
    int low_year = 0;
    int year = (int)floor(yearMonthValues[0] / 100.0);
    float low_per_years = 1000000; // we set a high number here (1 million mm of rain has never been reached ever)

    /*  In c89 / Ansi C, you cant really declare variables in the for loop, so we declare it here
        to be safe and to prevent any warnings */
    int i;
    for (i = 0; i < size; i++)
    {

        /* If its still the same year, trigger the code block */
        if (year == (int)floor(yearMonthValues[i] / 100.0))
        {

            /* If the current precipitation value is less than the minimum precipitation value,
            then the current precipitation value is the new minimum precipitation value */
            if (precipitationValues[i] < low_per_years)
            {
                /* The minimum precipitation value is updated, and the minimum year is recorded */
                low_per_years = precipitationValues[i];
                low_year = year;
            }
        }

            /* If its a different year, then update the current year */
        else
        {
            year = (int)floor(yearMonthValues[i] / 100.0);
        }
    }

    return low_year;
}

/*  This function calculates the month in which the minimum precipitation value occured
    This function takes in the amount of lines in the file, all the precipitation values and all the year and month values
    This function returns the month in which the minimum precipitation value occured */
char *low_month(int size, const float precipitationValues[], const int yearMonthValues[])
{

    /* Iniatialization and declaration of variables start here */
    static char low_month[10];
    int year = (int)floor(yearMonthValues[0] / 100.0);
    float low_per_years = 1000000; // we set a high number here (1 million mm of rain has never been reached ever)

    /*  In c89 / Ansi C, you cant really declare variables in the for loop, so we declare it here
        to be safe and to prevent any warnings */
    int i;
    for (i = 0; i < size; i++)
    {

        /* If its still the same year, trigger the code block */
        if (year == (int)floor(yearMonthValues[i] / 100.0))
        {

            /* If the current precipitation value is less than the minimum precipitation value,
            then the current precipitation value is the new minimum precipitation value */
            if (precipitationValues[i] < low_per_years)
            {
                low_per_years = precipitationValues[i];

                /* This switch statement is used to return the months name instead of the months number */
                switch (((int)(((yearMonthValues[i] / 100.0) - year) * 100.0)) + 1)
                {
                    case 1:
                        strcpy(low_month, "January");
                        break;
                    case 2:
                        strcpy(low_month, "February");
                        break;
                    case 3:
                        strcpy(low_month, "March");
                        break;
                    case 4:
                        strcpy(low_month, "April");
                        break;
                    case 5:
                        strcpy(low_month, "May");
                        break;
                    case 6:
                        strcpy(low_month, "June");
                        break;
                    case 7:
                        strcpy(low_month, "July");
                        break;
                    case 8:
                        strcpy(low_month, "August");
                        break;
                    case 9:
                        strcpy(low_month, "September");
                        break;
                    case 10:
                        strcpy(low_month, "October");
                        break;
                    case 11:
                        strcpy(low_month, "November");
                        break;
                    case 12:
                        stpcpy(low_month, "December");
                        break;
                    default:
                        strcpy(low_month, "ERROR");
                        break;
                }
            }
        }

            /* If its a different year, then update the current year */
        else
        {
            year = (int)floor(yearMonthValues[i] / 100.0);
        }
    }

    return low_month;
}

/*  This function calculates the year in which the maximum precipitation value occured
    This function takes in the amount of lines in the file, all the precipitation values and all the year and month values
    This function returns the year in which the maximum precipitation value occured */
int high_year(int size, const float precipitationValues[], const int yearMonthValues[])
{

    /* Iniatialization and declaration of variables start here */
    int high_year = 0;
    int year = (int)floor(yearMonthValues[0] / 100.0);
    float high_per_years = 0;

    /*  In c89 / Ansi C, you cant really declare variables in the for loop, so we declare it here
        to be safe and to prevent any warnings */
    int i;
    for (i = 0; i < size; i++)
    {

        /* If its still the same year, trigger the code block */
        if (year == (int)floor(yearMonthValues[i] / 100.0))
        {

            /* If the current precipitation value is greater than the maximum precipitation value,
            then the current precipitation value is the new maximum precipitation value */
            if (precipitationValues[i] > high_per_years)
            {
                high_per_years = precipitationValues[i];
                high_year = year;
            }
        }

            /* If its a different year, then update the current year */
        else
        {
            year = (int)floor(yearMonthValues[i] / 100.0);
        }
    }

    return high_year;
}

/*  This function calculates the month in which the maximum precipitation value occured
    This function takes in the amount of lines in the file, all the precipitation values and all the year and month values
    This function returns the month in which the maximum precipitation value occured */
char *high_month(int size, const float precipitationValues[], const int yearMonthValues[])
{

    /* Iniatialization and declaration of variables start here */
    static char high_month[10];
    int year = (int)floor(yearMonthValues[0] / 100.0);
    float high_per_years = 0;

    /*  In c89 / Ansi C, you cant really declare variables in the for loop, so we declare it here
        to be safe and to prevent any warnings */
    int i;
    for (i = 0; i < size; i++)
    {

        /* If its still the same year, trigger the code block */
        if (year == (int)floor(yearMonthValues[i] / 100.0))
        {

            /* If the current precipitation value is greater than the maximum precipitation value,
            then the current precipitation value is the new maximum precipitation value */
            if (precipitationValues[i] > high_per_years)
            {
                high_per_years = precipitationValues[i];

                /* This switch statement is used to return the months name instead of the months number */
                switch (((int)(((yearMonthValues[i] / 100.0) - year) * 100.0)) + 1)
                {
                    case 1:
                        strcpy(high_month, "January");
                        break;
                    case 2:
                        strcpy(high_month, "February");
                        break;
                    case 3:
                        strcpy(high_month, "March");
                        break;
                    case 4:
                        strcpy(high_month, "April");
                        break;
                    case 5:
                        strcpy(high_month, "May");
                        break;
                    case 6:
                        strcpy(high_month, "June");
                        break;
                    case 7:
                        strcpy(high_month, "July");
                        break;
                    case 8:
                        strcpy(high_month, "August");
                        break;
                    case 9:
                        strcpy(high_month, "September");
                        break;
                    case 10:
                        strcpy(high_month, "October");
                        break;
                    case 11:
                        strcpy(high_month, "November");
                        break;
                    case 12:
                        stpcpy(high_month, "December");
                        break;
                    default:
                        strcpy(high_month, "ERROR");
                        break;
                }
            }
        }
        else
        {
            year = (int)floor(yearMonthValues[i] / 100.0);
        }
    }

    return high_month;
}

/*  This function mainly displays the maximum precipitation value for each year
    This function takes in the amount of lines in the file, all the precipitation values and all the year and month values
    This function returns nothing */
void high_per_year(int size, const float precipitationValues[], const int yearMonthValues[])
{

    /* Iniatialization and declaration of variables start here */
    float high_per_year = 0;
    int year = (int)floor(yearMonthValues[0] / 100.0);
    char month[10];

    // this is just used for nicer formatting
    printf("\n");

    /*  In c89 / Ansi C, you cant really declare variables in the for loop, so we declare it here
        to be safe and to prevent any warnings */
    int i;
    for (i = 0; i <= size; i++)
    {

        /* If its still the same year, trigger the code block */
        if (year == (int)floor(yearMonthValues[i] / 100.0))
        {

            /* If the current precipitation value is greater than the maximum precipitation value,
            then the current precipitation value is the new maximum precipitation value */
            if (precipitationValues[i] > high_per_year)
            {
                high_per_year = precipitationValues[i];

                /* This switch statement is used to return the months name instead of the months number */
                switch (((int)(((yearMonthValues[i] / 100.0) - year) * 100.0)) + 1)
                {
                    case 1:
                        strcpy(month, "January");
                        break;
                    case 2:
                        strcpy(month, "February");
                        break;
                    case 3:
                        strcpy(month, "March");
                        break;
                    case 4:
                        strcpy(month, "April");
                        break;
                    case 5:
                        strcpy(month, "May");
                        break;
                    case 6:
                        strcpy(month, "June");
                        break;
                    case 7:
                        strcpy(month, "July");
                        break;
                    case 8:
                        strcpy(month, "August");
                        break;
                    case 9:
                        strcpy(month, "September");
                        break;
                    case 10:
                        strcpy(month, "October");
                        break;
                    case 11:
                        strcpy(month, "November");
                        break;
                    case 12:
                        stpcpy(month, "December");
                        break;
                    default:
                        strcpy(month, "ERROR");
                        break;
                }
            }
        }

            /* If its a different year, then print the maximum precipitation value for that year */
        else
        {

            printf("Max precipitation for %d in the month %s was: %.2f\n", year, month, high_per_year);
            year = (int)floor(yearMonthValues[i] / 100.0);
            high_per_year = precipitationValues[i];
        }
    }

    return;
}

// This function adds up all the months precipitation values for a year
// if the new year is reached, and the sum of the precipitation values is less than the previous sum, then the new sum is the new maximum sum
// This function takes in the amount of lines in the file, all the precipitation values and all the year and month values
// This function returns the year in which the maximum precipitation value occured
int high_precipitation_yearly_year(int size, const float precipitationValues[], const int yearMonthValues[])
{

    /* Iniatialization and declaration of variables start here */
    int high_year = 0;
    int year = (int)floor(yearMonthValues[0] / 100.0);
    int highest_sum = 0;
    int sum = 0;
    int highest_sum_year = 0;

    /*  In c89 / Ansi C, you cant really declare variables in the for loop, so we declare it here
        to be safe and to prevent any warnings */
    int i;
    for (i = 0; i < size; i++)
    {

        /* If its still the same year, trigger the code block */
        if (year == (int)floor(yearMonthValues[i] / 100.0))
        {
            sum += precipitationValues[i];
        }

            /* If its a different year, then update the current year */
        else
        {
            year = (int)floor(yearMonthValues[i] / 100.0);
            sum = 0;
        }

        /* If the current sum is greater than the highest sum, then the current sum is the new highest sum */
        if (sum > highest_sum)
        {
            highest_sum = sum;
            highest_sum_year = year;
        }
    }

    return highest_sum_year;
}

// This function is similar to max_precipitation_yearly_year,
// but instead of returning the year, it returns the sum of the precipitation values for that year
int high_precipitation_yearly_precip(int size, const float precipitationValues[], const int yearMonthValues[])
{

    /* Iniatialization and declaration of variables start here */
    int high_year = 0;
    int year = (int)floor(yearMonthValues[0] / 100.0);
    int highest_sum = 0;
    int sum = 0;
    int highest_sum_year = 0;

    /*  In c89 / Ansi C, you cant really declare variables in the for loop, so we declare it here
        to be safe and to prevent any warnings */
    int i;
    for (i = 0; i < size; i++)
    {

        /* If its still the same year, trigger the code block */
        if (year == (int)floor(yearMonthValues[i] / 100.0))
        {
            sum += precipitationValues[i];
        }

            /* If its a different year, then update the current year */
        else
        {
            year = (int)floor(yearMonthValues[i] / 100.0);
            sum = 0;
        }

        /* If the current sum is greater than the highest sum, then the current sum is the new highest sum */
        if (sum > highest_sum)
        {
            highest_sum = sum;
            highest_sum_year = year;
        }
    }

    return highest_sum;
}
// This function finds the second lowest precipitation value
// This function takes in the amount of lines in the file, all the precipitation values and all the year and month values
// This function returns the second lowest precipitation value
float second_lowest_precipitation(int size, const float precipitationValues[], const int yearMonthValues[])
{

    /* Iniatialization and declaration of variables start here */
    float min = precipitationValues[0];
    float second_min = precipitationValues[0];
    int i;

    /*  For every value / line in the file, find the minimum value
        Also return the minimum of the precipitation values */
    for (i = 1; i < size; i++)
    {

        /* If the current value is less than the minimum value, then the current value is the new minimum value */
        if (precipitationValues[i] < min)
        {
            min = precipitationValues[i];
        }
    }

    /*  For every value / line in the file, find the second minimum value
        Also return the second minimum of the precipitation values */
    for (i = 1; i < size; i++)
    {

        /* If the current value is less than the second minimum value, then the current value is the new second minimum value */
        if (precipitationValues[i] < second_min && precipitationValues[i] != min)
        {
            second_min = precipitationValues[i];
        }
    }

    return second_min;
}


