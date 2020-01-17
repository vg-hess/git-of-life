#ifndef __GAME_OF_LIFE_H__
#define __GAME_OF_LIFE_H__

#include <array>
#include "game_of_life.h"

enum {MAXSIZE = 50, MINSIZE = 10, BORDER = 5};  ///< Enum for sizes

auto countNeighbours(std::array<std::array<bool, MAXSIZE + 2>, MAXSIZE + 2> const current, int i, int j) -> int;

#endif
