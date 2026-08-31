#pragma once

class ScoreManager
{
private:
	int currentScore;
	int highScore;

public:
	ScoreManager();
	void addPoints(int points);
	int resetScore()const;
	int updateHighScore()const;
	int displayScores()const;
};