// Rock Paper Scissors
/*
rock vs scissors -  rock wins
paper vs scissors - scissors winsss
paper vs rock - paper wins
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int generateRandomeNumber()
{
    srand(time(NULL));
    return rand() % 3;
}
int main()
{
    char playerName[50];
    int i, playerCh, computerCh, playerCounter = 0, computerCounter = 0;
    printf("\tInstructions\n");
    printf("\t============\n");
    printf("Rock(press 0)\nPaper(press 1)\nScissors(press 2)\n\n");
    printf("Enter player name: ");
    scanf("%s", playerName);
    getchar();
    for (i = 0; i < 3; i++)
    {
        printf("Rock - Paper - Scissor (enter): ");
        scanf("%d", &playerCh);
        computerCh = generateRandomeNumber();
        printf("\tcomputer generate %d\n", computerCh);

        if (playerCh == 0 && computerCh == 0 || playerCh == 1 && computerCh == 1 || playerCh == 2 && computerCh == 2)
        {
            printf("Both are same\n");
        }
        // 1-rock 2-paper
        if (playerCh == 0 && computerCh == 1)
        {
            printf("Computer win\n");
            computerCounter++;
        }
        // 1-paper 2-rock
        else if (playerCh == 1 && computerCh == 0)
        {
            printf("%s win\n", playerName);
            playerCounter++;
        }

        // 1-rock 2-scissors
        else if (playerCh == 0 && computerCh == 2)
        {
            printf("%s win\n", playerName);
            playerCounter++;
        }

        // 1-scissors 2-rock
        else if (playerCh == 2 && computerCh == 0)
        {
            printf("Computer win\n");
            computerCounter++;
        }

        // 1-paper 2-scisccr
        else if (playerCh == 1 && computerCh == 2)
        {
            printf("Computer win\n");
            computerCounter++;
        }

        // 1-paper 2-scisccr
        else if (playerCh == 2 && computerCh == 1)
        {
            printf("%s win\n", playerName);
            playerCounter++;
        }
    }

    printf("\nscore of %s is %d\n", playerName, playerCounter);
    printf("score of computer is %d\n", computerCounter);

    if (playerCounter == computerCounter)
    {
        printf("Match is tye play again\n");
    }
    else if (playerCounter > computerCounter)
    {
        printf("%s win the match\n", playerName);
    }
    else
    {
        printf("Computer win the match\n");
    }

    return 0;
}
