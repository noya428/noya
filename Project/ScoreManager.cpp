#include <iostream>
#include "ScoreManager.h"

using namespace std;

ScoreManager::ScoreManager()
{
	currentScore = 0;
	highScore = 0; 
}
void ScoreManager::addPoints(int points)
{
	currentScore += points;
}
void ScoreManager::resetScore()
{
	currentScore = 0;
}
void ScoreManager::updateHighScore()
{
	if (currentScore > highScore)
	{
		highScore = currentScore;
	}
}
void ScoreManager::displayScores()
{
	cout << "現在のスコア " << currentScore << endl;
	cout << "ハイスコア " << highScore << endl;
}