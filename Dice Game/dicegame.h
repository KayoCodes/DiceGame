//
//  dicegame.h
//  Dice Game
//  Header file for the dice game
//  Created by keenan ray on 10/1/22.
//

#ifndef dicegame_h
#define dicegame_h

#include <stdio.h>

enum ROUNDTYPE{BONUS, DOUBLE, REGULAR};
/*
  Function : getRoundType
 gets the type of roundtype for each round being played based off probability
  returns: returns the game mode/ roundtype
 
 */

enum ROUNDTYPE getRoundType(void);
/*
 Function : getRandomNumber
 uses the random function to generate a random number between a minimum number and a max number
 min : the minimum number in the range of random numbers
 max: the maximum number in the range of random numbers.
 returns: random number
 */
int getRandomNumber( int min, int max );
/*
 Function : getRoundPoints
 uses the the roundtype to determine the amount of points the player will get each round
 Roundtype : based off the roundtype parameter, a certain amount of points is given
 Returns: points
 */
int getRoundPoints(enum ROUNDTYPE x );
/*
 Function : printPlayerPoints
 prints the amount of points for player 1 and player 2
 p1: this is player 1's points
 p2: this is player 2's points
 */
void printPlayerPoints(int p1, int p2);
/*
 Function: printRoundInfo
 prints the roundtype, dice roll ,and the amount of points for the player
 Roundtype: prints the roundtype passed in
 Dice: prints the die rolled by player
 Points: prints the points for the player
 
 */
void printRoundInfo (enum ROUNDTYPE t, int dice, int points);


#endif /* dicegame_h */
