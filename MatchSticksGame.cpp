#include "MatchSticksGame.h"
#include <iostream>

MatchSticksGame::MatchSticksGame()
    : numberMatchSticks(17)
{
    // Empty...
}

int MatchSticksGame::HowManyMatchSticksRemain() const
{
    return numberMatchSticks;
}

bool MatchSticksGame::IsGameOver() const
{
    return numberMatchSticks == 0;
}

void MatchSticksGame::PlayRound()
{
    if(IsGameOver())
    {
        std::cout << std::endl << "The game is over and there are no more rounds to play!" << std::endl;
    }
    else
    {
        int matchSticksToRemove = 0;

        while (true) 
        {
            std::cout << "Remove how many matchsticks from the pile? (" << numberMatchSticks << " remaining) [Pick 1";
            if (numberMatchSticks >= 3)
            {
                std::cout << ", 3";
            }
            if (numberMatchSticks >= 4)
            {
                std::cout << ", 4";
            }
            std::cout << "]: ";

            std::cin >> matchSticksToRemove;

            // check choice is 1, 3, or 4, and not greater than remaining sticks
            if ( matchSticksToRemove == 1 || (matchSticksToRemove == 3 && numberMatchSticks >= 3)
                || (matchSticksToRemove == 4 && numberMatchSticks >= 4) )
            {
                break; 
            }
        }

        numberMatchSticks -= matchSticksToRemove;

        std::cout << std::endl <<  matchSticksToRemove << " matchstick(s) were removed from the pile, leaving ";
        std::cout << numberMatchSticks << " behind." << std::endl;

        if(IsGameOver())
        {
            std::cout << std::endl << "The person who took these matchsticks is the winner of the game!" << std::endl;
        }
    }
}
