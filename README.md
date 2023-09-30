# DiceGame

The project is to create a 2-player game of dice. 
Game Rules:
The user selects the number of rounds to be run. Each dice round consists of 3 values:
Dice – value of the dice rolled. It is a random number between 1-6.
Points – value associated with the round. It is a random number from 10-100 in multiples of 10. (10 * random number between 1-10).
Type – the type of the round. There are 3 types of rounds:
REGULAR – keep the “points” equal to the number of points as calculated above using a random number generator.
BONUS – replace “points” to be equal to 200.
DOUBLE – update “points” to be equal to DOUBLE the number of points as calculated above using a random number generator.
Probability of the round types:
20% for BONUS, 30% for DOUBLE and 50% for REGULAR
The game consists of two players (1 & 2). The game starts with one player at random.
For each round, one of the following cases can occur:
Success: Player-1 (odd player) is the current player and the dice rolled is odd  OR Player-2 (even player) is the current player and the dice rolled is even.
Current player gains the points, based on the type of the round (see above). The current player’s turn continues in the next round.
Failure: Player-1 (odd player) is the current player and the dice rolled is even  OR Player-2 (even player) is the current player and the dice rolled is odd.
Current player incurs penalty of the same number of points, based on the type of the round (see above). In the next round, the current player is changed to the other player.
At the end of all rounds, the player with the highest points wins the game.

Sample Output


###############  RUN-1  ############### 


Enter the number of rounds: 5
P1      : 0
P2      : 0

ROUND 1
--------
Player  : 1
Type    : REGULAR
Dice    : 5
Points  : 70
P1      : 70
P2      : 0

ROUND 2
--------
Player  : 1
Type    : REGULAR
Dice    : 2
Points  : 50
P1      : 20
P2      : 0

ROUND 3
--------
Player  : 2
Type    : DOUBLE
Dice    : 4
Points  : 180
P1      : 20
P2      : 180

ROUND 4
--------
Player  : 2
Type    : DOUBLE
Dice    : 3
Points  : 140
P1      : 20
P2      : 40

ROUND 5
--------
Player  : 1
Type    : DOUBLE
Dice    : 3
Points  : 180
P1      : 200
P2      : 40

GAME OVER!!
P1 Won

 
