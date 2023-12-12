#pragma once

#include "stella_lib.h"
// ###################################################################
//                            Assets Constants
// ###################################################################

// ###################################################################
//                            Assents Structs
// ###################################################################
enum SpriteID
{
    SPRITE_DICE,

    SPRITE_COUNT
};


struct Sprite
{
    IVec2 altasOffset;
    IVec2 spriteSize;
};


// ###################################################################
//                            Assets Functions
// ###################################################################
Sprite get_sprite(SpriteID spriteID) {
    Sprite sprite = {};

    switch(spriteID) {
        case SPRITE_DICE: {
            sprite.altasOffset = {0, 0};
            sprite.spriteSize = {16, 16};
        }
    }
    return sprite;
}
