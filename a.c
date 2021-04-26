#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int i, a, b, c, count = 0;
    char name[200];
    printf("Enter  a name\n");
    printf("1.Start the quiz\t\t 0.quit quiz\n");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("Enter your name:-\n");
        scanf("%s", &name);
        printf("Player name is %s\n", name);
        printf("Enter the level of game\n");
        printf("1. Easy \n 2. Medium \n 3. Hard \n");
        scanf("%d", &a);
        if (a == 1)
        {
            printf("You select easy level \n");
            printf("\n\n\t\t\t [ SELECT AND ENTER THE ANSWER NO. ]\n");
            printf("\t\t\t Q1. What is the capital of india? \n");
            printf("\t\t\t1.Mumbai \n \t\t\t2.Delhi\n \t\t\t 3.Lucknow\n \t\t\t 4.Goa\t\t\n");
            scanf("%d", &b);
            if (b == 2)
            {
                printf("Your answer is Correct\n");
                ++count;
            }
            else
            {
                printf("Your answer is Wrong\n");
                }

            printf("\t\t\t Q2.What is the capital of uttar Pradesh ?\n");
            printf("\t\t\t1.Lucknow \n \t\t\t2.Kanpur \n \t\t\t3.Agra \n \t\t\t4.Banaras \n");
            scanf("%d", &b);
            if (b == 1)
            {
                printf("Your answer is Correct\n");
            }
            else
            {
                printf("Your answer is Wrong \n");
            }
            printf("\t\t\t Q3. How many days do we have in a week ?\n");
            printf("\t\t\t1.3 \n \t\t\t2.5 \n \t\t\t3.4 \n\t\t\t4.7\n");
            scanf("%d", &b);
            if (b == 4)
            {
                printf("Your answer is correct\n");
                ++count;
            }
            else
            {
                printf("Your answer is Wrong \n");
            }
            printf("\t\t\t Q4.Which animal is known as the 'Ship of the Desert'?\n");
            printf("\t\t\t1.Horse \n \t\t\t2.Cow \n \t\t\t3.Camel \n \t\t\t\4.Elephant\n");
            scanf("%d", &b);
            if (b == 3)
            {
                printf("Your answer is Coreect\n");
                ++count;
            }
            else
            {
                printf("Your answer is Wrong \n");
            }
            printf("\t\t\t Q5.How many letters in the English alphabet ? \n");
            printf("\t\t\t1.34 \n \t\t\t2.30 \n \t\t\t3.22 \n \t\t\t4.26\n");
            if (b == 4)
            {
                printf("Your answer is Coreect \n");
                ++count;
            }
            else
            {
                printf("Your answer is Wrong \n");
            }
            printf("Your score is %d", count);
        }
        else if (a == 2)
        {
            printf("You select medium level \n");
            printf("\n\n\t\t\t [ SELECT AND ENTER THE ANSWER NO. ]\n");
            printf("\t\t\t Q1. In which direction does the sun rise ?\n");
            printf("\t\t\t1.East \n \t\t\t2.West \n \t\t\t3.North \n \t\t\t4.South\n");
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is coreect\n");
                ++count;
            }
            else{
                printf("Your answer is worng \n");
            }
             printf("\t\t\t Q2. In which direction does the sun rise ?\n");
            printf("\t\t\t1.East \n \t\t\t2.West \n \t\t\t3.North \n \t\t\t4.South\n");
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is coreect\n");
                ++count;
            }
            else{
                printf("Your answer is worng \n");
            }
             printf("\t\t\t Q3. In which direction does the sun rise ?\n");
            printf("\t\t\t1.East \n \t\t\t2.West \n \t\t\t3.North \n \t\t\t4.South\n");
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is coreect\n");
                ++count;
            }
            else{
                printf("Your answer is worng \n");
            }
             printf("\t\t\t Q4. In which direction does the sun rise ?\n");
            printf("\t\t\t1.East \n \t\t\t2.West \n \t\t\t3.North \n \t\t\t4.South\n");
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is coreect\n");
                ++count;
            }
            else{
                printf("Your answer is worng \n");
            }
             printf("\t\t\t Q5. In which direction does the sun rise ?\n");
            printf("\t\t\t1.East \n \t\t\t2.West \n \t\t\t3.North \n \t\t\t4.South\n");
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is coreect\n");
                ++count;
            }
            else{
                printf("Your answer is worng \n");
            }
            
            printf("Your score is %d:",count);

        }  
        else if (a == 3)
        {
            printf("You select hard level \n");
            printf("\n\n\t\t\t [ SELECT AND ENTER THE ANSWER NO. ] \n");
             printf("\t\t\t Q1. In which direction does the sun rise ?\n");
            printf("\t\t\t1.East \n \t\t\t2.West \n \t\t\t3.North \n \t\t\t4.South\n");
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is coreect\n");
                ++count;
            }
            else{
                printf("Your answer is worng \n");
            }
             printf("\t\t\t Q2. In which direction does the sun rise ?\n");
            printf("\t\t\t1.East \n \t\t\t2.West \n \t\t\t3.North \n \t\t\t4.South\n");
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is coreect\n");
                ++count;
            }
            else{
                printf("Your answer is worng \n");
            }
             printf("\t\t\t Q3. In which direction does the sun rise ?\n");
            printf("\t\t\t1.East \n \t\t\t2.West \n \t\t\t3.North \n \t\t\t4.South\n");
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is coreect\n");
                ++count;
            }
            else{
                printf("Your answer is worng \n");
            }
             printf("\t\t\t Q4. In which direction does the sun rise ?\n");
            printf("\t\t\t1.East \n \t\t\t2.West \n \t\t\t3.North \n \t\t\t4.South\n");
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is coreect\n");
                ++count;
            }
            else{
                printf("Your answer is worng \n");
            }
             printf("\t\t\t Q5. In which direction does the sun rise ?\n");
            printf("\t\t\t1.East \n \t\t\t2.West \n \t\t\t3.North \n \t\t\t4.South\n");
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is coreect\n");
                ++count;
            }
            else{
                printf("Your answer is worng \n");
            }
            printf("Your score is %d \n",count);
        }
        else
        {
            printf("Select a level \n");
        }
        if (count == 5)
        {
            printf("\n your general knowledge is very strong. \n");
        }
        else if (count == 4)
        {
            printf("\n Your general knowledge is strong. \n ");
        }
        else if (count == 3)
        {
            printf("\n Your general knowledge is good. \n");
        }
        else if (count == 2)
        {
            printf("\n Your general knowledge is bad. \n ");
        }
        else
        {
            printf("\n your general knowledge is poor. \n");
        }
    }
}