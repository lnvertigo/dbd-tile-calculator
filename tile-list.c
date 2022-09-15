#include "tile-list.h"

struct Tile {
	int n;
	int s;
	int e;
	int w;
	int direction;
};

Tile blank = {0, 0, 0, 0, 0};

struct Tile generator() {
	struct Tile t1 = {5, 2, 3, 4, 0};
	struct Tile t2 = {1, 3, 7, 2, 0};
}