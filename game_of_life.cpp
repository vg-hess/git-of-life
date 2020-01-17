#include "game_of_life.h"

auto gol::isAlive(bool currentCell, int neighbourCount) -> bool
{
	return (neighbourCount == 3 || (neighbourCount == 2 && currentCell));
}
