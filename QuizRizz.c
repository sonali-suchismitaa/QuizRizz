#include <stdio.h>
#include <string.h>
int main()
{
    int response;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3;
    int point01, point02, point03;
    int total1, total2, total3, sum;

    printf("Welcome to the QuizRizz! \n");

    printf("Enter 1 to start \n");
    printf("Enter 0 to quit \n");

    scanf("%d", &response);

    if (response == 1)
        printf("Let the game begin \n");

    else if (response == 0)
        printf("Thanks for playing. \n");

    else
        printf("UH OH! ERROR 404! \n");

    if (response == 1)
    {
        printf("Q1 : Which one is the first search engine in internet? \n");
        printf(" \n1. Google \n2.Archie \n3. Wais \n4. Altavista \n");
        printf("Answer please? ");
        scanf("%d", &ans1);

        if (ans1 == 2)
        {
            printf("That's a headstart! \n");
            point1 = 5;
            printf("You just scored %d points \n", point1);
            total1 = point1;
        }
        else
        {
            printf("That's incorrect :( \n");
            point01 = 0;
            printf("You scored %d points \n", point01);
            total1 = point01;
        }
        printf("Q2 : Which one is the first web browser invented in 1990? \n");
        printf(" \n1. Internet Explorer \n2.Mosaic \n3. Mozzila \n4. Nexus \n");
        printf("Answer please? ");
        scanf("%d", &ans2);

        if (ans2 == 4)
        {
            printf("Bravo!");
            point2 = 5;
            printf("You just scored another %d points \n", point2);
            total2 = point2;
        }
        else
        {
            printf("That's incorrect :( \n");
            point02 = 0;
            printf("You scored %d points \n", point02);
            total2 = point02;
        }
        printf("Q3 : First computer virus is known as? \n");
        printf(" \n1. Rabbit \n2.Creeper Virus \n3. Elk Cloner \n4. SCA Virus \n");
        printf("Answer please? ");
        scanf("%d", &ans3);

        if (ans3 == 2)
        {
            printf("You're doing great!");
            point3 = 5;
            printf("You just scored another %d points \n", point3);
            total3 = point3;
        }
        else
        {
            printf("That's incorrect :( \n");
            point03 = 0;
            printf("You scored %d points \n", point03);
            total3 = point03;
        }
    }

    sum = total1 + total2 + total3;

    printf("You scored %d points in total in QuizRizz! \n", sum);

    return 0;
}