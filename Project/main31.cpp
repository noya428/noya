#include <iostream>
#include "ScoreManager.h"
using namespace std;

int main()
{
	ScoreManager score;
	score.displayScores();
	score.addPoints(100);
	score.addPoints(50);
	score.updateHighScore();
	score.displayScores();
	score.resetScore();
	score.displayScores();
	return 0;
}