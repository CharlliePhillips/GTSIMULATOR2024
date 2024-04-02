#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/
typedef struct {
    u16 X;
    u16 Y;
    short VX;
    short VY;
    const u16 *img;
    int width;
    int height;
} enemy;

int gamePlay(u32 currButtons, u32 oldButtons, enemy *enemies[]);
void gameLoose(u32 currButtons, u32 oldButtons);
void drawTitleScreen(void);
void drawPSelectBox(int player);
void drawScores(void);
#endif
