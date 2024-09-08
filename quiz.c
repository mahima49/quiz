#include<stdio.h>

int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
    int p01,p02,p03,p04,p05,p06,p07,p08,p09,p010;
    int total1,total2,total3;

    printf(" Welcome to the Game\n\n");

    printf("> Press 7 to Start the GAME\n");
    printf("> Press 0 to Quit the GAME\n");

    scanf("%d", &i);
    if(i==7)
    {
       printf("The Game has started\n\n"); 
    }
    else if(i==0)
    {
        printf("The game has ended\n\n");
    }
    else{
        printf("Invalid\n\n");
    }

    if(i==7)
    {
        printf("1. Which is the first search engine in internet?\n\n");
        printf("A. google\n");
        printf("B. archie\n");
        printf("C. wais\n");
        printf("d. altavista\n");

        printf("Enter your answer number: ");
        scanf("%d", &ans1);

        if(ans1==2)
        {
            printf("corrct answer\n");
            p1=5;
            printf("you have scored %d point\n", p1);
        }
        else
        {
           printf("wrong answer\n");
            p01=0;
            printf("you have scored %d point\n", p01);
        } 

         printf("1. Which is the first web browser invented in 1990?\n\n");
        printf("A. Internet explorer\n");
        printf("B. mosaic\n");
        printf("C. mozilla\n");
        printf("d. nexus\n");

        printf("Enter your answer number: ");
        scanf("%d", &ans2);

        if(ans2==4)
        {
            printf("corrct answer\n");
            p2=5;
            printf("you have scored %d point\n", p2);
        }
        else
        {
           printf("wrong answer\n");
            p02=0;
            printf("you have scored %d point\n", p02);
        } 

         printf("3. Which is the first computer virus?\n\n");
        printf("A. rabbit\n");
        printf("B. creeper\n");
        printf("C. elk cloner\n");
        printf("d. sca virus\n");

        printf("Enter your answer number: ");
        scanf("%d", &ans3);

        if(ans3==2)
        {
            printf("corrct answer\n");
            p3=5;
            printf("you have scored %d point\n", p3);
        }
        else
        {
           printf("wrong answer\n");
            p03=0;
            printf("you have scored %d point\n", p03);
        } 
         printf("4. Which is not the database management system ?\n\n");
        printf("A. mysql\n");
        printf("B. oracle\n");
        printf("C. cobal\n");
        printf("d. sybase\n");

        printf("Enter your answer number: ");
        scanf("%d", &ans4);

        if(ans4==3)
        {
            printf("corrct answer\n");
            p4=5;
            printf("you have scored %d point\n", p4);
        }
        else
        {
           printf("wrong answer\n");
            p04=0;
            printf("you have scored %d point\n", p04);
        } 
    }

    return 0;
}
