#ifndef MATCHSTICKSGAME_H
#define MATCHSTICKSGAME_H

class MatchSticksGame
{
public:
    MatchSticksGame();
    bool IsGameOver() const;
    int HowManyMatchSticksRemain() const;
    void PlayRound();

private:
    int numberMatchSticks;
};

#endif

