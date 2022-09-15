#ifndef TILE-LIST_H
#define TILE-LIST_H

typedef struct {
	int n;
	int s;
	int e;
	int w;
	int direction;
} Tile;

/* Tiles
	___DIR__
	|	N	|
	|	   E|
	|W		|
	|___S___|
*/

Tile blank;

struct Tile generator();

#endif