// ---------------------------------------
// YOU MAY NOT MODIFY THIS FILE IN ANY WAY
// THAT MEANS EVEN PUTTING YOUR NAME IN IT
// YOUR CODE MUST MATCH UP WITH THE FORMAT
// OF THE FUNCTIONALITY YOU SEE BELOW
// ---------------------------------------

#include <cassert>
#include <iostream>
#include "MatchSticksGame.h"

int main()
{
	// Set the initial number of sticks in separate game each to 17
	MatchSticksGame a;
	MatchSticksGame b;

	// While we haven't worked our way down to 0 sticks...
	while (a.IsGameOver() == false)
	{
		// Have a player remove some of them from the pile
		a.PlayRound();
	}
	
	// There can be no more sticks remaining at this point for your code to be correct, yes?
	assert(a.HowManyMatchSticksRemain() == 0);

	// This whole time we only played the first of the two games going on simultaneously
	// Let's make sure by playing game A we didn't modify game B in the process
	assert(b.HowManyMatchSticksRemain() == 17);

	// The game is over according to the logic of the loops, so this should now print 
	// the error message "The game is over and there are no more rounds to play!"
	a.PlayRound();

	// Self explanatory...
	std::cout << "Okay this is printing...  Did everything work out as you expected it to though?" << std::endl;

	// Need to supply the operating system a return message of success on our end
	return 0;
}