#ifndef __GAME_OF_LIFE_H__
#define __GAME_OF_LIFE_H__

#include <array>

namespace gol {

auto isAlive(bool currentCell, int neighbourCount) -> bool;

}

#endif
