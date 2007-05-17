/*
 *  RHRUnit.h
 *  hog2
 *
 *  Created by Nathan Sturtevant on 4/23/07.
 *  Copyright 2007 Nathan Sturtevant, University of Alberta. All rights reserved.
 *
 */

#ifndef RHRUNIT_H
#define RHRUNIT_H

#include "MapUnit.h"

/**
 * A simple unit that attempts to follow walls using the right hand rule.
 */
class RHRUnit : public MapUnit {
public:
	RHRUnit(int x, int y)
	:MapUnit(x, y)
  { lastIndex = 0; }
	const char *GetName() { return "RHRUnit"; }
	tDirection MakeMove(MapEnvironment *, BaseMapOccupancyInterface *, SimulationInfo *);
	void UpdateLocation(MapEnvironment *, BaseMapOccupancyInterface *, xyLoc &, bool, SimulationInfo *);
private:
	int lastIndex;
	xyLoc loc;
};

#endif
