//
//  ColorMap.h
//
//  Created by Kelly Fox on 10/16/17.
//  Copyright © 2017 Allen Institute. All rights reserved.
//

#ifndef COLORMAP_H
#define COLORMAP_H

#include "VisualizerWindowHeaders.h"

/**
    *  Color mapping enumeration describing a predefined set of colors for values
    *  0-1. The maps used and described by these values are derived from libmatplot.
    */
enum class ColorMapId : int
{
    GREYS = 1,
    CIVIDIS,
    VIRIDIS,
    RDGY,
    RDBU,
    SPECTRAL,
    SEISMIC
    
};

namespace ColorMap
{
    /**
        *  Get the color mapping for a given value, assuming normalized [0,1) and
        *  clipping at the bounds. The color mapping used can be set using
        *  ColourScheme::setColourScheme
        */
    Colour getColorForNormalizedValue(float val);

    /**
        *  Get the color mapping for a given value, with a specific ColorMapId and
        *  ignoring the value otherwise stored globally.
        */
    Colour getColorForNormalizedValueInScheme(float val, ColorMapId colorMap);


    /**
        *  Set the global color map, using this value automatically in
        *  ColorMap::getColorForNormalizedValue. The default value, if never
        *  set by a user is ColorMapId::INFERNO.
        */
    void setColorMap(ColorMapId colorMap);
};


#endif /* ColourScheme_hpp */
