//
//  main.c
//  Dice Game
//  Main file for the dice game.
//  Created by keenan ray on 10/1/22.
//

#include <stdio.h>
#include "dicegame.h"
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[])
{
    srand((int)time(NULL));
    enum ROUNDTYPE a;
    int player_1 = 0;
    int player_2 = 0;
    int currentPlayer;
    int rounds, dice;
    printf("Enter the number of rounds: ");
    scanf("%d", &rounds);
    printPlayerPoints(player_1, player_2);
    currentPlayer = rand() % 2 + 1;
    if(currentPlayer == 1)
    {
        currentPlayer = 1;
    }else
    {
        currentPlayer = 2;
    }
    for(int i = 1; i <= rounds; i++)
    { //for loop for the rounds
        printf("ROUND %d\n", i);
        printf("_________\n");
        if(currentPlayer == 1)
        {
            printf("Player : %d\n", currentPlayer);
            dice = getRandomNumber(1, 6);
            if(dice % 2 != 0)
            {
                a = getRoundType();
                currentPlayer = getRoundPoints(a);
                printRoundInfo(a, dice, currentPlayer);
                player_1 = player_1 + currentPlayer;
                currentPlayer = 1;
            }
            else
            {
                a = getRoundType();
                currentPlayer = -( getRoundPoints(a));
                printRoundInfo(a, dice, currentPlayer);
                player_1 = player_1 + currentPlayer;
                currentPlayer = 2;
            }
            
        }
        else
        {
            printf("Player : %d\n", currentPlayer);
            dice = getRandomNumber(1, 6);
            if(dice % 2 == 0)
            {
                a = getRoundType();
                currentPlayer =  getRoundPoints(a);
                printRoundInfo(a, dice, currentPlayer);
                player_2 = player_2 + currentPlayer;
                currentPlayer = 2;
            }
            else
            {
                a = getRoundType();
                currentPlayer = -( getRoundPoints(a));
                printRoundInfo(a, dice, currentPlayer);
                player_2 = player_2 + currentPlayer;
                currentPlayer = 1;
                }
            
            
            
        }
      
        
        printPlayerPoints(player_1, player_2);
        
        
    }
    printf("\nGAME OVER!!\n");
    (player_1 > player_2)? printf("P1 Won!\n"): printf("P2 Won!\n");
   
   
    return 0;
}
