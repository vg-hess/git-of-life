#include "game_of_life.h"

auto gol::countNeighbours(std::array<std::array<bool, MAXSIZE + 2>, MAXSIZE + 2> const current, int i, int j) -> int
{
	return current[i - 1][j - 1]
			  + current[i - 1][j]
			  + current[i - 1][j + 1]
			  + current[i][j - 1]
			  + current[i][j + 1]
			  + current[i + 1][j - 1]
			  + current[i + 1][j]
			  + current[i + 1][j + 1];
}

