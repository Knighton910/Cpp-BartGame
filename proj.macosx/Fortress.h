//
//  Fortress.h
//  Game_macosx
//
//  Created by iAppleJack on 01/04/15.
//  Copyright (c) 2015 oxygine. All rights reserved.
//

#ifndef __Game_macosx__Fortress__
#define __Game_macosx__Fortress__
#include <iostream>
#include "Unit.h"

#endif /* defined(__Game_macosx__Box__) */

class Fortress: public Unit
{
public:
    int team;
    int hp;
    Fortress(double x , double y, int width, int height);
    Fortress ();
    
};