#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void FT_game();
int FT_choise();

int main()
{
    FT_game();
}

int FT_choise()
{
    char playAgain;

    do {
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);  // Note the space before %c to consume the newline character

        if (playAgain == 'y' || playAgain == 'Y') {
            printf("Let's play again!\n");
            FT_game();
        } else if (playAgain == 'n' || playAgain == 'N') {
            printf("Game over, See you then!\n");
            break;
        } else {
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }

    } while (1);

}


void FT_game(void)
{
    const int MAX = 10, MIN = 1;
    //srand(time(NULL));
    //int mysteriousNumber = (rand() % (MAX - MIN + 1)) + MIN;
    int mysteriousNumber = 5;
    int num;
    int chances = 5;
    
    printf("====== THE MYSTERIOUS NUMBER ======\n - Welcome in this game, you have :\n\n\t\"%d chances\"\n\n  to find the streious number \n\n\t GO !! \n\nthe number is between %d and %d\n",chances, MIN, MAX);
                while (1)
                {
                    printf("What's the number ?  ");
                    scanf("%d",&num);
                    if (num > mysteriousNumber)
                        printf("Lesser !\n");
                    else if (num < mysteriousNumber)
                        printf("Greater !\n");

                    chances--;
                    printf("your chanse is %d\n",chances);
                    else if (chances == 0)
                    {
                        printf("your chances are over, the number is %d\n\n",mysteriousNumber);
                        FT_choise();
                    }
                    else
                    {
                        printf("\nBravo, you have found the mysterious number in %d chances !!!\n\n",chances);
                        FT_choise();
                        break;
                    }
                }
}



