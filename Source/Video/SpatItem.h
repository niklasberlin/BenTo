/*
  ==============================================================================

    SpatItem.h
    Created: 23 Apr 2018 9:43:20pm
    Author:  Ben

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"
#include "Prop/Prop.h"

class SpatItem :
	public BaseItem
{
public:
	SpatItem();
	~SpatItem();

	Array<Point<float>> points;
	Array<Colour> colors;

	IntParameter * id;
	BoolParameter * isDefault;

	EnumParameter * shape;
	IntParameter * resolution;

	Point2DParameter * startPos;
	Point2DParameter * endPos;

	void updatePoints();

	void onContainerParameterChangedInternal(Parameter *) override;
};