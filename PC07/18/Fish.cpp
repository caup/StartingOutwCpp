#include "Fish.h"
#include <random>
#include <ctime>

Fish::Fish()
{
	caught = 0;
}

Fish::~Fish()
{
}

void Fish::catchFish()
{
	srand((unsigned)time(0));
	caught = (rand() % 6) + 1;
}

int Fish::getCatch()
{
	return caught;
}
