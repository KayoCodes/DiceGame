//
//  dicegame.c
//  Dice Game
//  contains the functions used for the dice game.
//  Created by keenan ray on 10/1/22.
//

#include "dicegame.h"
#include <stdlib.h>
#include <time.h>
/*
 Function : getRandomNumber
 uses the random function to generate a random number between a minimum number and a max number
 min : the minimum number in the range of random numbers
 max: the maximum number in the range of random numbers.
 returns: random number
 */


int getRandomNumber( int min, int max )
{
    int count;
    int random;
    //srand((int)time(NULL)); already intialized in main file
    count = ((max - min)+ 1);
   random = (rand() % count ) + min; ///calculates random number based off range
    return random;
}
/*
  Function : getRoundType
 gets the type of roundtype for each round being played based off probability
  returns: returns the game mode/ roundtype
 
 */
enum ROUNDTYPE getRoundType(void)
{
    enum ROUNDTYPE game;
    //srand((int)time(NULL));
    int probNum =  rand() % 10; //function determines the round type based off the probability
    switch(probNum)
    {
        case 0:
        case 1: //20 %
            game = BONUS;
            break;
        case 2:
        case 3:
        case 4: //50%
        case 5:
        case 6:
            game = REGULAR;
            break;
        case 7:
        case 8: //30%
        case 9:
            game = DOUBLE;
            break;
    }
    return game;
}
/*
 Function : getRoundPoints
 uses the the roundtype to determine the amount of points the player will get each round
 Roundtype : based off the roundtype parameter, a certain amount of points is given
 Returns: points
 */
int getRoundPoints(enum ROUNDTYPE x){ 
    int points = 0;
    if(x == 0)
    {
        points = 200;
        return points;
    }
    if(x==2)
    {
        points = getRandomNumber(1, 10)*10;
        return points;
    }
    if(x==1)
    {
        int orig;
        orig = getRandomNumber(1, 10) * 10;
        points = orig * 2;
        return points;
    }
    return points;
}
/*
 Function : printPlayerPoints
 prints the amount of points for player 1 and player 2
 p1: this is player 1's points
 p2: this is player 2's points
 */

void printPlayerPoints(int p1, int p2){
    printf("P1     : %d\n", p1);
    printf("P2     : %d\n", p2);
}
/*
 Function: printRoundInfo
 prints the roundtype, dice roll ,and the amount of points for the player
 Roundtype: prints the roundtype passed in
 Dice: prints the die rolled by player
 Points: prints the points for the player
 
 */
void printRoundInfo (enum ROUNDTYPE t, int dice, int points){
    switch(t){
        case 0:
            printf("Type   : BONUS\n" );
            printf("Dice   : %d\n", dice);
            printf("Points : %d\n", points);
            break;
        case 1:
            printf("Type   : DOUBLE\n" );
            printf("Dice   : %d\n", dice);
            printf("Points : %d\n", points);
            break;
        case 2:
            printf("Type   : REGULAR\n" );
            printf("Dice   : %d\n", dice);
            printf("Points : %d\n", points);
            break;
    }
    
}

