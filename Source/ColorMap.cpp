//
//  ColorMap.cpp
//
//  Created by Kelly Fox on 10/16/17.
//  Copyright © 2017 Allen Institute. All rights reserved.
//

#include "ColorMap.h"


namespace { // hidden from the outside world (true static and hidden)
    ColorMapId selectedColorMap = ColorMapId::GREYS;

    Colour colourFromCividis(float val);
    Colour colourFromViridis(float val);
    Colour colourFromSeismic(float val);
    Colour colourFromRdBu(float val);
    Colour colourFromRdGy(float val);
    Colour colourFromSpectral(float val);
    Colour colourFromGreys(float val);
}


void ColorMap::setColorMap(ColorMapId colorMap)
{
    selectedColorMap = colorMap;
}

Colour ColorMap::getColorForNormalizedValue(float val)
{
    switch (selectedColorMap)
    {
    case ColorMapId::CIVIDIS:
        return colourFromCividis(val);

    case ColorMapId::VIRIDIS:
        return colourFromViridis(val);

    case ColorMapId::SEISMIC:
        return colourFromSeismic(val);

    case ColorMapId::RDBU:
        return colourFromRdBu(val);

    case ColorMapId::RDGY:
        return colourFromRdGy(val);
        
    case ColorMapId::SPECTRAL:
        return colourFromSpectral(val);

    case ColorMapId::GREYS:
        return colourFromGreys(val);
    }
}

Colour ColorMap::getColorForNormalizedValueInScheme(float val, ColorMapId ColorMap)
{
    switch (ColorMap)
    {
    case ColorMapId::CIVIDIS:
        return colourFromCividis(val);

    case ColorMapId::VIRIDIS:
        return colourFromViridis(val);

    case ColorMapId::SEISMIC:
        return colourFromSeismic(val);

    case ColorMapId::RDBU:
        return colourFromRdBu(val);

    case ColorMapId::RDGY:
        return colourFromRdGy(val);

    case ColorMapId::SPECTRAL:
        return colourFromSpectral(val);

    case ColorMapId::GREYS:
        return colourFromGreys(val);
    }
}

namespace {
    Colour colourFromCividis(float val)
    {

        if (val <= 0.003906)
        {
            return Colour::fromFloatRGBA(0.0, 0.135112, 0.304751, 1.0);
        }
        if (val <= 0.007812)
        {
            return Colour::fromFloatRGBA(0.0, 0.138068, 0.311105, 1.0);
        }
        if (val <= 0.011718000000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.141013, 0.317579, 1.0);
        }
        if (val <= 0.015624)
        {
            return Colour::fromFloatRGBA(0.0, 0.143951, 0.323982, 1.0);
        }
        if (val <= 0.019530000000000002)
        {
            return Colour::fromFloatRGBA(0.0, 0.146877, 0.330479, 1.0);
        }
        if (val <= 0.023436000000000002)
        {
            return Colour::fromFloatRGBA(0.0, 0.149791, 0.337065, 1.0);
        }
        if (val <= 0.027342)
        {
            return Colour::fromFloatRGBA(0.0, 0.152673, 0.343704, 1.0);
        }
        if (val <= 0.031248)
        {
            return Colour::fromFloatRGBA(0.0, 0.155377, 0.3505, 1.0);
        }
        if (val <= 0.035154000000000005)
        {
            return Colour::fromFloatRGBA(0.0, 0.157932, 0.357521, 1.0);
        }
        if (val <= 0.039060000000000004)
        {
            return Colour::fromFloatRGBA(0.0, 0.160495, 0.364534, 1.0);
        }
        if (val <= 0.042966000000000004)
        {
            return Colour::fromFloatRGBA(0.0, 0.163058, 0.371608, 1.0);
        }
        if (val <= 0.046872000000000004)
        {
            return Colour::fromFloatRGBA(0.0, 0.165621, 0.378769, 1.0);
        }
        if (val <= 0.050778000000000004)
        {
            return Colour::fromFloatRGBA(0.0, 0.168204, 0.385902, 1.0);
        }
        if (val <= 0.054684)
        {
            return Colour::fromFloatRGBA(0.0, 0.1708, 0.3931, 1.0);
        }
        if (val <= 0.05859)
        {
            return Colour::fromFloatRGBA(0.0, 0.17342, 0.400353, 1.0);
        }
        if (val <= 0.062496)
        {
            return Colour::fromFloatRGBA(0.0, 0.176082, 0.407577, 1.0);
        }
        if (val <= 0.066402)
        {
            return Colour::fromFloatRGBA(0.0, 0.178802, 0.414764, 1.0);
        }
        if (val <= 0.07030800000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.18161, 0.421859, 1.0);
        }
        if (val <= 0.07421400000000002)
        {
            return Colour::fromFloatRGBA(0.0, 0.18455, 0.428802, 1.0);
        }
        if (val <= 0.07812000000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.186915, 0.435532, 1.0);
        }
        if (val <= 0.08202600000000002)
        {
            return Colour::fromFloatRGBA(0.0, 0.188769, 0.439563, 1.0);
        }
        if (val <= 0.08593200000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.19095, 0.441085, 1.0);
        }
        if (val <= 0.08983800000000002)
        {
            return Colour::fromFloatRGBA(0.0, 0.193366, 0.441561, 1.0);
        }
        if (val <= 0.09374400000000001)
        {
            return Colour::fromFloatRGBA(0.003602, 0.195911, 0.441564, 1.0);
        }
        if (val <= 0.09765000000000001)
        {
            return Colour::fromFloatRGBA(0.017852, 0.198528, 0.441248, 1.0);
        }
        if (val <= 0.10155600000000001)
        {
            return Colour::fromFloatRGBA(0.03211, 0.201199, 0.440785, 1.0);
        }
        if (val <= 0.10546200000000001)
        {
            return Colour::fromFloatRGBA(0.046205, 0.203903, 0.440196, 1.0);
        }
        if (val <= 0.109368)
        {
            return Colour::fromFloatRGBA(0.058378, 0.206629, 0.439531, 1.0);
        }
        if (val <= 0.11327400000000001)
        {
            return Colour::fromFloatRGBA(0.068968, 0.209372, 0.438863, 1.0);
        }
        if (val <= 0.11718)
        {
            return Colour::fromFloatRGBA(0.078624, 0.212122, 0.438105, 1.0);
        }
        if (val <= 0.12108600000000001)
        {
            return Colour::fromFloatRGBA(0.087465, 0.214879, 0.437342, 1.0);
        }
        if (val <= 0.124992)
        {
            return Colour::fromFloatRGBA(0.095645, 0.217643, 0.436593, 1.0);
        }
        if (val <= 0.128898)
        {
            return Colour::fromFloatRGBA(0.103401, 0.220406, 0.43579, 1.0);
        }
        if (val <= 0.132804)
        {
            return Colour::fromFloatRGBA(0.110658, 0.22317, 0.435067, 1.0);
        }
        if (val <= 0.13671)
        {
            return Colour::fromFloatRGBA(0.117612, 0.225935, 0.434308, 1.0);
        }
        if (val <= 0.140616)
        {
            return Colour::fromFloatRGBA(0.124291, 0.228697, 0.433547, 1.0);
        }
        if (val <= 0.144522)
        {
            return Colour::fromFloatRGBA(0.130669, 0.231458, 0.43284, 1.0);
        }
        if (val <= 0.148428)
        {
            return Colour::fromFloatRGBA(0.13683, 0.234216, 0.432148, 1.0);
        }
        if (val <= 0.152334)
        {
            return Colour::fromFloatRGBA(0.142852, 0.236972, 0.431404, 1.0);
        }
        if (val <= 0.15624)
        {
            return Colour::fromFloatRGBA(0.148638, 0.239724, 0.430752, 1.0);
        }
        if (val <= 0.160146)
        {
            return Colour::fromFloatRGBA(0.154261, 0.242475, 0.43012, 1.0);
        }
        if (val <= 0.164052)
        {
            return Colour::fromFloatRGBA(0.159733, 0.245221, 0.429528, 1.0);
        }
        if (val <= 0.167958)
        {
            return Colour::fromFloatRGBA(0.165113, 0.247965, 0.428908, 1.0);
        }
        if (val <= 0.171864)
        {
            return Colour::fromFloatRGBA(0.170362, 0.250707, 0.428325, 1.0);
        }
        if (val <= 0.17577)
        {
            return Colour::fromFloatRGBA(0.17549, 0.253444, 0.42779, 1.0);
        }
        if (val <= 0.179676)
        {
            return Colour::fromFloatRGBA(0.180503, 0.25618, 0.427299, 1.0);
        }
        if (val <= 0.183582)
        {
            return Colour::fromFloatRGBA(0.185453, 0.258914, 0.426788, 1.0);
        }
        if (val <= 0.187488)
        {
            return Colour::fromFloatRGBA(0.190303, 0.261644, 0.426329, 1.0);
        }
        if (val <= 0.191394)
        {
            return Colour::fromFloatRGBA(0.195057, 0.264372, 0.425924, 1.0);
        }
        if (val <= 0.1953)
        {
            return Colour::fromFloatRGBA(0.199764, 0.267099, 0.425497, 1.0);
        }
        if (val <= 0.199206)
        {
            return Colour::fromFloatRGBA(0.204385, 0.269823, 0.425126, 1.0);
        }
        if (val <= 0.20311200000000001)
        {
            return Colour::fromFloatRGBA(0.208926, 0.272546, 0.424809, 1.0);
        }
        if (val <= 0.207018)
        {
            return Colour::fromFloatRGBA(0.213431, 0.275266, 0.42448, 1.0);
        }
        if (val <= 0.210924)
        {
            return Colour::fromFloatRGBA(0.217863, 0.277985, 0.424206, 1.0);
        }
        if (val <= 0.21483)
        {
            return Colour::fromFloatRGBA(0.222264, 0.280702, 0.423914, 1.0);
        }
        if (val <= 0.218736)
        {
            return Colour::fromFloatRGBA(0.226598, 0.283419, 0.423678, 1.0);
        }
        if (val <= 0.222642)
        {
            return Colour::fromFloatRGBA(0.230871, 0.286134, 0.423498, 1.0);
        }
        if (val <= 0.226548)
        {
            return Colour::fromFloatRGBA(0.23512, 0.288848, 0.423304, 1.0);
        }
        if (val <= 0.230454)
        {
            return Colour::fromFloatRGBA(0.239312, 0.291562, 0.423167, 1.0);
        }
        if (val <= 0.23436)
        {
            return Colour::fromFloatRGBA(0.243485, 0.294274, 0.423014, 1.0);
        }
        if (val <= 0.238266)
        {
            return Colour::fromFloatRGBA(0.247605, 0.296986, 0.422917, 1.0);
        }
        if (val <= 0.242172)
        {
            return Colour::fromFloatRGBA(0.251675, 0.299698, 0.422873, 1.0);
        }
        if (val <= 0.246078)
        {
            return Colour::fromFloatRGBA(0.255731, 0.302409, 0.422814, 1.0);
        }
        if (val <= 0.249984)
        {
            return Colour::fromFloatRGBA(0.25974, 0.30512, 0.42281, 1.0);
        }
        if (val <= 0.25389)
        {
            return Colour::fromFloatRGBA(0.263738, 0.307831, 0.422789, 1.0);
        }
        if (val <= 0.257796)
        {
            return Colour::fromFloatRGBA(0.267693, 0.310542, 0.422821, 1.0);
        }
        if (val <= 0.26170200000000005)
        {
            return Colour::fromFloatRGBA(0.271639, 0.313253, 0.422837, 1.0);
        }
        if (val <= 0.265608)
        {
            return Colour::fromFloatRGBA(0.275513, 0.315965, 0.422979, 1.0);
        }
        if (val <= 0.26951400000000003)
        {
            return Colour::fromFloatRGBA(0.279411, 0.318677, 0.423031, 1.0);
        }
        if (val <= 0.27342000000000005)
        {
            return Colour::fromFloatRGBA(0.28324, 0.32139, 0.423211, 1.0);
        }
        if (val <= 0.277326)
        {
            return Colour::fromFloatRGBA(0.287065, 0.324103, 0.423373, 1.0);
        }
        if (val <= 0.28123200000000004)
        {
            return Colour::fromFloatRGBA(0.290884, 0.326816, 0.423517, 1.0);
        }
        if (val <= 0.28513800000000006)
        {
            return Colour::fromFloatRGBA(0.294669, 0.329531, 0.423716, 1.0);
        }
        if (val <= 0.289044)
        {
            return Colour::fromFloatRGBA(0.298421, 0.332247, 0.423973, 1.0);
        }
        if (val <= 0.29295000000000004)
        {
            return Colour::fromFloatRGBA(0.302169, 0.334963, 0.424213, 1.0);
        }
        if (val <= 0.296856)
        {
            return Colour::fromFloatRGBA(0.305886, 0.337681, 0.424512, 1.0);
        }
        if (val <= 0.30076200000000003)
        {
            return Colour::fromFloatRGBA(0.309601, 0.340399, 0.42479, 1.0);
        }
        if (val <= 0.30466800000000005)
        {
            return Colour::fromFloatRGBA(0.313287, 0.34312, 0.42512, 1.0);
        }
        if (val <= 0.308574)
        {
            return Colour::fromFloatRGBA(0.316941, 0.345842, 0.425512, 1.0);
        }
        if (val <= 0.31248000000000004)
        {
            return Colour::fromFloatRGBA(0.320595, 0.348565, 0.425889, 1.0);
        }
        if (val <= 0.31638600000000006)
        {
            return Colour::fromFloatRGBA(0.32425, 0.351289, 0.42625, 1.0);
        }
        if (val <= 0.320292)
        {
            return Colour::fromFloatRGBA(0.327875, 0.354016, 0.42667, 1.0);
        }
        if (val <= 0.32419800000000004)
        {
            return Colour::fromFloatRGBA(0.331474, 0.356744, 0.427144, 1.0);
        }
        if (val <= 0.32810400000000006)
        {
            return Colour::fromFloatRGBA(0.335073, 0.359474, 0.427605, 1.0);
        }
        if (val <= 0.33201)
        {
            return Colour::fromFloatRGBA(0.338673, 0.362206, 0.428053, 1.0);
        }
        if (val <= 0.33591600000000005)
        {
            return Colour::fromFloatRGBA(0.342246, 0.364939, 0.428559, 1.0);
        }
        if (val <= 0.339822)
        {
            return Colour::fromFloatRGBA(0.345793, 0.367676, 0.429127, 1.0);
        }
        if (val <= 0.34372800000000003)
        {
            return Colour::fromFloatRGBA(0.349341, 0.370414, 0.429685, 1.0);
        }
        if (val <= 0.34763400000000005)
        {
            return Colour::fromFloatRGBA(0.352892, 0.373153, 0.430226, 1.0);
        }
        if (val <= 0.35154)
        {
            return Colour::fromFloatRGBA(0.356418, 0.375896, 0.430823, 1.0);
        }
        if (val <= 0.35544600000000004)
        {
            return Colour::fromFloatRGBA(0.359916, 0.378641, 0.431501, 1.0);
        }
        if (val <= 0.35935200000000006)
        {
            return Colour::fromFloatRGBA(0.363446, 0.381388, 0.432075, 1.0);
        }
        if (val <= 0.363258)
        {
            return Colour::fromFloatRGBA(0.366923, 0.384139, 0.432796, 1.0);
        }
        if (val <= 0.36716400000000005)
        {
            return Colour::fromFloatRGBA(0.37043, 0.38689, 0.433428, 1.0);
        }
        if (val <= 0.37107)
        {
            return Colour::fromFloatRGBA(0.373884, 0.389646, 0.434209, 1.0);
        }
        if (val <= 0.37497600000000003)
        {
            return Colour::fromFloatRGBA(0.377371, 0.392404, 0.43489, 1.0);
        }
        if (val <= 0.37888200000000005)
        {
            return Colour::fromFloatRGBA(0.38083, 0.395164, 0.435653, 1.0);
        }
        if (val <= 0.382788)
        {
            return Colour::fromFloatRGBA(0.384268, 0.397928, 0.436475, 1.0);
        }
        if (val <= 0.38669400000000004)
        {
            return Colour::fromFloatRGBA(0.387705, 0.400694, 0.437305, 1.0);
        }
        if (val <= 0.39060000000000006)
        {
            return Colour::fromFloatRGBA(0.391151, 0.403464, 0.438096, 1.0);
        }
        if (val <= 0.394506)
        {
            return Colour::fromFloatRGBA(0.394568, 0.406236, 0.438986, 1.0);
        }
        if (val <= 0.39841200000000004)
        {
            return Colour::fromFloatRGBA(0.397991, 0.409011, 0.439848, 1.0);
        }
        if (val <= 0.40231800000000006)
        {
            return Colour::fromFloatRGBA(0.401418, 0.41179, 0.440708, 1.0);
        }
        if (val <= 0.40622400000000003)
        {
            return Colour::fromFloatRGBA(0.40482, 0.414572, 0.441642, 1.0);
        }
        if (val <= 0.41013000000000005)
        {
            return Colour::fromFloatRGBA(0.408226, 0.417357, 0.44257, 1.0);
        }
        if (val <= 0.414036)
        {
            return Colour::fromFloatRGBA(0.411607, 0.420145, 0.443577, 1.0);
        }
        if (val <= 0.41794200000000004)
        {
            return Colour::fromFloatRGBA(0.414992, 0.422937, 0.444578, 1.0);
        }
        if (val <= 0.42184800000000006)
        {
            return Colour::fromFloatRGBA(0.418383, 0.425733, 0.44556, 1.0);
        }
        if (val <= 0.425754)
        {
            return Colour::fromFloatRGBA(0.421748, 0.428531, 0.44664, 1.0);
        }
        if (val <= 0.42966000000000004)
        {
            return Colour::fromFloatRGBA(0.42512, 0.431334, 0.447692, 1.0);
        }
        if (val <= 0.43356600000000006)
        {
            return Colour::fromFloatRGBA(0.428462, 0.43414, 0.448864, 1.0);
        }
        if (val <= 0.437472)
        {
            return Colour::fromFloatRGBA(0.431817, 0.43695, 0.449982, 1.0);
        }
        if (val <= 0.44137800000000005)
        {
            return Colour::fromFloatRGBA(0.435168, 0.439763, 0.451134, 1.0);
        }
        if (val <= 0.44528400000000007)
        {
            return Colour::fromFloatRGBA(0.438504, 0.44258, 0.452341, 1.0);
        }
        if (val <= 0.44919000000000003)
        {
            return Colour::fromFloatRGBA(0.44181, 0.445402, 0.453659, 1.0);
        }
        if (val <= 0.45309600000000005)
        {
            return Colour::fromFloatRGBA(0.445148, 0.448226, 0.454885, 1.0);
        }
        if (val <= 0.457002)
        {
            return Colour::fromFloatRGBA(0.448447, 0.451053, 0.456264, 1.0);
        }
        if (val <= 0.46090800000000004)
        {
            return Colour::fromFloatRGBA(0.451759, 0.453887, 0.457582, 1.0);
        }
        if (val <= 0.46481400000000006)
        {
            return Colour::fromFloatRGBA(0.455072, 0.456718, 0.458976, 1.0);
        }
        if (val <= 0.46872)
        {
            return Colour::fromFloatRGBA(0.458366, 0.459552, 0.460457, 1.0);
        }
        if (val <= 0.47262600000000005)
        {
            return Colour::fromFloatRGBA(0.461616, 0.462405, 0.461969, 1.0);
        }
        if (val <= 0.47653200000000007)
        {
            return Colour::fromFloatRGBA(0.464947, 0.465241, 0.463395, 1.0);
        }
        if (val <= 0.48043800000000003)
        {
            return Colour::fromFloatRGBA(0.468254, 0.468083, 0.464908, 1.0);
        }
        if (val <= 0.48434400000000005)
        {
            return Colour::fromFloatRGBA(0.471501, 0.47096, 0.466357, 1.0);
        }
        if (val <= 0.48825)
        {
            return Colour::fromFloatRGBA(0.474812, 0.473832, 0.467681, 1.0);
        }
        if (val <= 0.49215600000000004)
        {
            return Colour::fromFloatRGBA(0.478186, 0.476699, 0.468845, 1.0);
        }
        if (val <= 0.49606200000000006)
        {
            return Colour::fromFloatRGBA(0.481622, 0.479573, 0.469767, 1.0);
        }
        if (val <= 0.499968)
        {
            return Colour::fromFloatRGBA(0.485141, 0.482451, 0.470384, 1.0);
        }
        if (val <= 0.503874)
        {
            return Colour::fromFloatRGBA(0.488697, 0.485318, 0.471008, 1.0);
        }
        if (val <= 0.50778)
        {
            return Colour::fromFloatRGBA(0.492278, 0.488198, 0.471453, 1.0);
        }
        if (val <= 0.511686)
        {
            return Colour::fromFloatRGBA(0.495913, 0.491076, 0.471751, 1.0);
        }
        if (val <= 0.5155919999999999)
        {
            return Colour::fromFloatRGBA(0.499552, 0.49396, 0.472032, 1.0);
        }
        if (val <= 0.519498)
        {
            return Colour::fromFloatRGBA(0.503185, 0.496851, 0.472305, 1.0);
        }
        if (val <= 0.523404)
        {
            return Colour::fromFloatRGBA(0.506866, 0.499743, 0.472432, 1.0);
        }
        if (val <= 0.52731)
        {
            return Colour::fromFloatRGBA(0.51054, 0.502643, 0.47255, 1.0);
        }
        if (val <= 0.531216)
        {
            return Colour::fromFloatRGBA(0.514226, 0.505546, 0.47264, 1.0);
        }
        if (val <= 0.535122)
        {
            return Colour::fromFloatRGBA(0.51792, 0.508454, 0.472707, 1.0);
        }
        if (val <= 0.539028)
        {
            return Colour::fromFloatRGBA(0.521643, 0.511367, 0.472639, 1.0);
        }
        if (val <= 0.542934)
        {
            return Colour::fromFloatRGBA(0.525348, 0.514285, 0.47266, 1.0);
        }
        if (val <= 0.54684)
        {
            return Colour::fromFloatRGBA(0.529086, 0.517207, 0.472543, 1.0);
        }
        if (val <= 0.550746)
        {
            return Colour::fromFloatRGBA(0.532829, 0.520135, 0.472401, 1.0);
        }
        if (val <= 0.554652)
        {
            return Colour::fromFloatRGBA(0.536553, 0.523067, 0.472352, 1.0);
        }
        if (val <= 0.558558)
        {
            return Colour::fromFloatRGBA(0.540307, 0.526005, 0.472163, 1.0);
        }
        if (val <= 0.562464)
        {
            return Colour::fromFloatRGBA(0.544069, 0.528948, 0.471947, 1.0);
        }
        if (val <= 0.56637)
        {
            return Colour::fromFloatRGBA(0.54784, 0.531895, 0.471704, 1.0);
        }
        if (val <= 0.570276)
        {
            return Colour::fromFloatRGBA(0.551612, 0.534849, 0.471439, 1.0);
        }
        if (val <= 0.574182)
        {
            return Colour::fromFloatRGBA(0.555393, 0.537807, 0.471147, 1.0);
        }
        if (val <= 0.578088)
        {
            return Colour::fromFloatRGBA(0.559181, 0.540771, 0.470829, 1.0);
        }
        if (val <= 0.581994)
        {
            return Colour::fromFloatRGBA(0.562972, 0.543741, 0.470488, 1.0);
        }
        if (val <= 0.5859)
        {
            return Colour::fromFloatRGBA(0.566802, 0.546715, 0.469988, 1.0);
        }
        if (val <= 0.5898059999999999)
        {
            return Colour::fromFloatRGBA(0.570607, 0.549695, 0.469593, 1.0);
        }
        if (val <= 0.593712)
        {
            return Colour::fromFloatRGBA(0.574417, 0.552682, 0.469172, 1.0);
        }
        if (val <= 0.597618)
        {
            return Colour::fromFloatRGBA(0.578236, 0.555673, 0.468724, 1.0);
        }
        if (val <= 0.601524)
        {
            return Colour::fromFloatRGBA(0.582087, 0.55867, 0.468118, 1.0);
        }
        if (val <= 0.60543)
        {
            return Colour::fromFloatRGBA(0.585916, 0.561674, 0.467618, 1.0);
        }
        if (val <= 0.609336)
        {
            return Colour::fromFloatRGBA(0.589753, 0.564682, 0.46709, 1.0);
        }
        if (val <= 0.613242)
        {
            return Colour::fromFloatRGBA(0.593622, 0.567697, 0.466401, 1.0);
        }
        if (val <= 0.617148)
        {
            return Colour::fromFloatRGBA(0.597469, 0.570718, 0.465821, 1.0);
        }
        if (val <= 0.621054)
        {
            return Colour::fromFloatRGBA(0.601354, 0.573743, 0.465074, 1.0);
        }
        if (val <= 0.62496)
        {
            return Colour::fromFloatRGBA(0.605211, 0.576777, 0.464441, 1.0);
        }
        if (val <= 0.628866)
        {
            return Colour::fromFloatRGBA(0.609105, 0.579816, 0.463638, 1.0);
        }
        if (val <= 0.632772)
        {
            return Colour::fromFloatRGBA(0.612977, 0.582861, 0.46295, 1.0);
        }
        if (val <= 0.636678)
        {
            return Colour::fromFloatRGBA(0.616852, 0.585913, 0.462237, 1.0);
        }
        if (val <= 0.640584)
        {
            return Colour::fromFloatRGBA(0.620765, 0.58897, 0.461351, 1.0);
        }
        if (val <= 0.64449)
        {
            return Colour::fromFloatRGBA(0.624654, 0.592034, 0.460583, 1.0);
        }
        if (val <= 0.648396)
        {
            return Colour::fromFloatRGBA(0.628576, 0.595104, 0.459641, 1.0);
        }
        if (val <= 0.652302)
        {
            return Colour::fromFloatRGBA(0.632506, 0.59818, 0.458668, 1.0);
        }
        if (val <= 0.656208)
        {
            return Colour::fromFloatRGBA(0.636412, 0.601264, 0.457818, 1.0);
        }
        if (val <= 0.660114)
        {
            return Colour::fromFloatRGBA(0.640352, 0.604354, 0.456791, 1.0);
        }
        if (val <= 0.6640199999999999)
        {
            return Colour::fromFloatRGBA(0.64427, 0.60745, 0.455886, 1.0);
        }
        if (val <= 0.667926)
        {
            return Colour::fromFloatRGBA(0.648222, 0.610553, 0.454801, 1.0);
        }
        if (val <= 0.671832)
        {
            return Colour::fromFloatRGBA(0.652178, 0.613664, 0.453689, 1.0);
        }
        if (val <= 0.675738)
        {
            return Colour::fromFloatRGBA(0.656114, 0.61678, 0.452702, 1.0);
        }
        if (val <= 0.679644)
        {
            return Colour::fromFloatRGBA(0.660082, 0.619904, 0.451534, 1.0);
        }
        if (val <= 0.68355)
        {
            return Colour::fromFloatRGBA(0.664055, 0.623034, 0.450338, 1.0);
        }
        if (val <= 0.687456)
        {
            return Colour::fromFloatRGBA(0.668008, 0.626171, 0.44927, 1.0);
        }
        if (val <= 0.691362)
        {
            return Colour::fromFloatRGBA(0.671991, 0.629316, 0.448018, 1.0);
        }
        if (val <= 0.695268)
        {
            return Colour::fromFloatRGBA(0.675981, 0.632468, 0.446736, 1.0);
        }
        if (val <= 0.699174)
        {
            return Colour::fromFloatRGBA(0.679979, 0.635626, 0.445424, 1.0);
        }
        if (val <= 0.70308)
        {
            return Colour::fromFloatRGBA(0.68395, 0.638793, 0.444251, 1.0);
        }
        if (val <= 0.706986)
        {
            return Colour::fromFloatRGBA(0.687957, 0.641966, 0.442886, 1.0);
        }
        if (val <= 0.710892)
        {
            return Colour::fromFloatRGBA(0.691971, 0.645145, 0.441491, 1.0);
        }
        if (val <= 0.714798)
        {
            return Colour::fromFloatRGBA(0.695985, 0.648334, 0.440072, 1.0);
        }
        if (val <= 0.718704)
        {
            return Colour::fromFloatRGBA(0.700008, 0.651529, 0.438624, 1.0);
        }
        if (val <= 0.72261)
        {
            return Colour::fromFloatRGBA(0.704037, 0.654731, 0.437147, 1.0);
        }
        if (val <= 0.726516)
        {
            return Colour::fromFloatRGBA(0.708067, 0.657942, 0.435647, 1.0);
        }
        if (val <= 0.730422)
        {
            return Colour::fromFloatRGBA(0.712105, 0.66116, 0.434117, 1.0);
        }
        if (val <= 0.734328)
        {
            return Colour::fromFloatRGBA(0.716177, 0.664384, 0.432386, 1.0);
        }
        if (val <= 0.738234)
        {
            return Colour::fromFloatRGBA(0.720222, 0.667618, 0.430805, 1.0);
        }
        if (val <= 0.74214)
        {
            return Colour::fromFloatRGBA(0.724274, 0.670859, 0.429194, 1.0);
        }
        if (val <= 0.746046)
        {
            return Colour::fromFloatRGBA(0.728334, 0.674107, 0.427554, 1.0);
        }
        if (val <= 0.749952)
        {
            return Colour::fromFloatRGBA(0.732422, 0.677364, 0.425717, 1.0);
        }
        if (val <= 0.753858)
        {
            return Colour::fromFloatRGBA(0.736488, 0.680629, 0.424028, 1.0);
        }
        if (val <= 0.757764)
        {
            return Colour::fromFloatRGBA(0.740589, 0.6839, 0.422131, 1.0);
        }
        if (val <= 0.76167)
        {
            return Colour::fromFloatRGBA(0.744664, 0.687181, 0.420393, 1.0);
        }
        if (val <= 0.765576)
        {
            return Colour::fromFloatRGBA(0.748772, 0.69047, 0.418448, 1.0);
        }
        if (val <= 0.769482)
        {
            return Colour::fromFloatRGBA(0.752886, 0.693766, 0.416472, 1.0);
        }
        if (val <= 0.773388)
        {
            return Colour::fromFloatRGBA(0.756975, 0.697071, 0.414659, 1.0);
        }
        if (val <= 0.777294)
        {
            return Colour::fromFloatRGBA(0.761096, 0.700384, 0.412638, 1.0);
        }
        if (val <= 0.7812)
        {
            return Colour::fromFloatRGBA(0.765223, 0.703705, 0.410587, 1.0);
        }
        if (val <= 0.785106)
        {
            return Colour::fromFloatRGBA(0.769353, 0.707035, 0.408516, 1.0);
        }
        if (val <= 0.789012)
        {
            return Colour::fromFloatRGBA(0.773486, 0.710373, 0.406422, 1.0);
        }
        if (val <= 0.792918)
        {
            return Colour::fromFloatRGBA(0.777651, 0.713719, 0.404112, 1.0);
        }
        if (val <= 0.796824)
        {
            return Colour::fromFloatRGBA(0.781795, 0.717074, 0.401966, 1.0);
        }
        if (val <= 0.80073)
        {
            return Colour::fromFloatRGBA(0.785965, 0.720438, 0.399613, 1.0);
        }
        if (val <= 0.804636)
        {
            return Colour::fromFloatRGBA(0.790116, 0.72381, 0.397423, 1.0);
        }
        if (val <= 0.808542)
        {
            return Colour::fromFloatRGBA(0.794298, 0.72719, 0.395016, 1.0);
        }
        if (val <= 0.812448)
        {
            return Colour::fromFloatRGBA(0.79848, 0.73058, 0.392597, 1.0);
        }
        if (val <= 0.816354)
        {
            return Colour::fromFloatRGBA(0.802667, 0.733978, 0.390153, 1.0);
        }
        if (val <= 0.82026)
        {
            return Colour::fromFloatRGBA(0.806859, 0.737385, 0.387684, 1.0);
        }
        if (val <= 0.824166)
        {
            return Colour::fromFloatRGBA(0.811054, 0.740801, 0.385198, 1.0);
        }
        if (val <= 0.828072)
        {
            return Colour::fromFloatRGBA(0.815274, 0.744226, 0.382504, 1.0);
        }
        if (val <= 0.831978)
        {
            return Colour::fromFloatRGBA(0.819499, 0.747659, 0.379785, 1.0);
        }
        if (val <= 0.835884)
        {
            return Colour::fromFloatRGBA(0.823729, 0.751101, 0.377043, 1.0);
        }
        if (val <= 0.83979)
        {
            return Colour::fromFloatRGBA(0.827959, 0.754553, 0.374292, 1.0);
        }
        if (val <= 0.843696)
        {
            return Colour::fromFloatRGBA(0.832192, 0.758014, 0.371529, 1.0);
        }
        if (val <= 0.847602)
        {
            return Colour::fromFloatRGBA(0.836429, 0.761483, 0.368747, 1.0);
        }
        if (val <= 0.851508)
        {
            return Colour::fromFloatRGBA(0.840693, 0.764962, 0.365746, 1.0);
        }
        if (val <= 0.855414)
        {
            return Colour::fromFloatRGBA(0.844957, 0.76845, 0.362741, 1.0);
        }
        if (val <= 0.85932)
        {
            return Colour::fromFloatRGBA(0.849223, 0.771947, 0.359729, 1.0);
        }
        if (val <= 0.863226)
        {
            return Colour::fromFloatRGBA(0.853515, 0.775454, 0.3565, 1.0);
        }
        if (val <= 0.867132)
        {
            return Colour::fromFloatRGBA(0.857809, 0.778969, 0.353259, 1.0);
        }
        if (val <= 0.871038)
        {
            return Colour::fromFloatRGBA(0.862105, 0.782494, 0.350011, 1.0);
        }
        if (val <= 0.874944)
        {
            return Colour::fromFloatRGBA(0.866421, 0.786028, 0.346571, 1.0);
        }
        if (val <= 0.87885)
        {
            return Colour::fromFloatRGBA(0.870717, 0.789572, 0.343333, 1.0);
        }
        if (val <= 0.882756)
        {
            return Colour::fromFloatRGBA(0.875057, 0.793125, 0.339685, 1.0);
        }
        if (val <= 0.8866620000000001)
        {
            return Colour::fromFloatRGBA(0.879378, 0.796687, 0.336241, 1.0);
        }
        if (val <= 0.890568)
        {
            return Colour::fromFloatRGBA(0.88372, 0.800258, 0.332599, 1.0);
        }
        if (val <= 0.894474)
        {
            return Colour::fromFloatRGBA(0.888081, 0.803839, 0.32877, 1.0);
        }
        if (val <= 0.89838)
        {
            return Colour::fromFloatRGBA(0.89244, 0.80743, 0.324968, 1.0);
        }
        if (val <= 0.902286)
        {
            return Colour::fromFloatRGBA(0.896818, 0.81103, 0.320982, 1.0);
        }
        if (val <= 0.906192)
        {
            return Colour::fromFloatRGBA(0.901195, 0.814639, 0.317021, 1.0);
        }
        if (val <= 0.910098)
        {
            return Colour::fromFloatRGBA(0.905589, 0.818257, 0.312889, 1.0);
        }
        if (val <= 0.914004)
        {
            return Colour::fromFloatRGBA(0.91, 0.821885, 0.308594, 1.0);
        }
        if (val <= 0.91791)
        {
            return Colour::fromFloatRGBA(0.914407, 0.825522, 0.304348, 1.0);
        }
        if (val <= 0.921816)
        {
            return Colour::fromFloatRGBA(0.918828, 0.829168, 0.29996, 1.0);
        }
        if (val <= 0.925722)
        {
            return Colour::fromFloatRGBA(0.923279, 0.832822, 0.295244, 1.0);
        }
        if (val <= 0.929628)
        {
            return Colour::fromFloatRGBA(0.927724, 0.836486, 0.290611, 1.0);
        }
        if (val <= 0.933534)
        {
            return Colour::fromFloatRGBA(0.93218, 0.840159, 0.28588, 1.0);
        }
        if (val <= 0.93744)
        {
            return Colour::fromFloatRGBA(0.93666, 0.843841, 0.280876, 1.0);
        }
        if (val <= 0.941346)
        {
            return Colour::fromFloatRGBA(0.941147, 0.84753, 0.275815, 1.0);
        }
        if (val <= 0.945252)
        {
            return Colour::fromFloatRGBA(0.945654, 0.851228, 0.270532, 1.0);
        }
        if (val <= 0.9491580000000001)
        {
            return Colour::fromFloatRGBA(0.950178, 0.854933, 0.265085, 1.0);
        }
        if (val <= 0.953064)
        {
            return Colour::fromFloatRGBA(0.954725, 0.858646, 0.259365, 1.0);
        }
        if (val <= 0.95697)
        {
            return Colour::fromFloatRGBA(0.959284, 0.862365, 0.253563, 1.0);
        }
        if (val <= 0.9608760000000001)
        {
            return Colour::fromFloatRGBA(0.963872, 0.866089, 0.247445, 1.0);
        }
        if (val <= 0.964782)
        {
            return Colour::fromFloatRGBA(0.968469, 0.869819, 0.24131, 1.0);
        }
        if (val <= 0.968688)
        {
            return Colour::fromFloatRGBA(0.973114, 0.87355, 0.234677, 1.0);
        }
        if (val <= 0.972594)
        {
            return Colour::fromFloatRGBA(0.97778, 0.877281, 0.227954, 1.0);
        }
        if (val <= 0.9765)
        {
            return Colour::fromFloatRGBA(0.982497, 0.881008, 0.220878, 1.0);
        }
        if (val <= 0.980406)
        {
            return Colour::fromFloatRGBA(0.987293, 0.884718, 0.213336, 1.0);
        }
        if (val <= 0.984312)
        {
            return Colour::fromFloatRGBA(0.992218, 0.888385, 0.205468, 1.0);
        }
        if (val <= 0.988218)
        {
            return Colour::fromFloatRGBA(0.994847, 0.892954, 0.203445, 1.0);
        }
        if (val <= 0.992124)
        {
            return Colour::fromFloatRGBA(0.995249, 0.898384, 0.207561, 1.0);
        }
        if (val <= 0.99603)
        {
            return Colour::fromFloatRGBA(0.995503, 0.903866, 0.21237, 1.0);
        }
        if (val <= 0.999936)
        {
            return Colour::fromFloatRGBA(0.995737, 0.909344, 0.217772, 1.0);
        }

        return Colour::fromFloatRGBA(0.995737, 0.909344, 0.217772, 1.0);
    }

    Colour colourFromSeismic(float val)
    {

        if (val <= 0.003906)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.3, 1.0);
        }
        if (val <= 0.007812)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.31098039215686274, 1.0);
        }
        if (val <= 0.011718000000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.3219607843137255, 1.0);
        }
        if (val <= 0.015624)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.33294117647058824, 1.0);
        }
        if (val <= 0.019530000000000002)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.34392156862745094, 1.0);
        }
        if (val <= 0.023436000000000002)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.3549019607843137, 1.0);
        }
        if (val <= 0.027342)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.36588235294117644, 1.0);
        }
        if (val <= 0.031248)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.3768627450980392, 1.0);
        }
        if (val <= 0.035154000000000005)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.38784313725490194, 1.0);
        }
        if (val <= 0.039060000000000004)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.3988235294117647, 1.0);
        }
        if (val <= 0.042966000000000004)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.40980392156862744, 1.0);
        }
        if (val <= 0.046872000000000004)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.4207843137254902, 1.0);
        }
        if (val <= 0.050778000000000004)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.43176470588235294, 1.0);
        }
        if (val <= 0.054684)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.4427450980392157, 1.0);
        }
        if (val <= 0.05859)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.45372549019607844, 1.0);
        }
        if (val <= 0.062496)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.4647058823529412, 1.0);
        }
        if (val <= 0.066402)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.4756862745098039, 1.0);
        }
        if (val <= 0.07030800000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.48666666666666664, 1.0);
        }
        if (val <= 0.07421400000000002)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.4976470588235294, 1.0);
        }
        if (val <= 0.07812000000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.5086274509803921, 1.0);
        }
        if (val <= 0.08202600000000002)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.5196078431372548, 1.0);
        }
        if (val <= 0.08593200000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.5305882352941176, 1.0);
        }
        if (val <= 0.08983800000000002)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.5415686274509803, 1.0);
        }
        if (val <= 0.09374400000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.5525490196078431, 1.0);
        }
        if (val <= 0.09765000000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.5635294117647058, 1.0);
        }
        if (val <= 0.10155600000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.5745098039215686, 1.0);
        }
        if (val <= 0.10546200000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.5854901960784313, 1.0);
        }
        if (val <= 0.109368)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.5964705882352941, 1.0);
        }
        if (val <= 0.11327400000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.6074509803921568, 1.0);
        }
        if (val <= 0.11718)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.6184313725490196, 1.0);
        }
        if (val <= 0.12108600000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.6294117647058823, 1.0);
        }
        if (val <= 0.124992)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.6403921568627451, 1.0);
        }
        if (val <= 0.128898)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.6513725490196078, 1.0);
        }
        if (val <= 0.132804)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.6623529411764706, 1.0);
        }
        if (val <= 0.13671)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.6733333333333333, 1.0);
        }
        if (val <= 0.140616)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.6843137254901961, 1.0);
        }
        if (val <= 0.144522)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.6952941176470588, 1.0);
        }
        if (val <= 0.148428)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.7062745098039215, 1.0);
        }
        if (val <= 0.152334)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.7172549019607843, 1.0);
        }
        if (val <= 0.15624)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.7282352941176471, 1.0);
        }
        if (val <= 0.160146)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.7392156862745097, 1.0);
        }
        if (val <= 0.164052)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.7501960784313725, 1.0);
        }
        if (val <= 0.167958)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.7611764705882352, 1.0);
        }
        if (val <= 0.171864)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.7721568627450981, 1.0);
        }
        if (val <= 0.17577)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.7831372549019607, 1.0);
        }
        if (val <= 0.179676)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.7941176470588234, 1.0);
        }
        if (val <= 0.183582)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.8050980392156861, 1.0);
        }
        if (val <= 0.187488)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.8160784313725491, 1.0);
        }
        if (val <= 0.191394)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.8270588235294116, 1.0);
        }
        if (val <= 0.1953)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.8380392156862744, 1.0);
        }
        if (val <= 0.199206)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.8490196078431371, 1.0);
        }
        if (val <= 0.20311200000000001)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.8599999999999999, 1.0);
        }
        if (val <= 0.207018)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.8709803921568626, 1.0);
        }
        if (val <= 0.210924)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.8819607843137254, 1.0);
        }
        if (val <= 0.21483)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.8929411764705881, 1.0);
        }
        if (val <= 0.218736)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.9039215686274509, 1.0);
        }
        if (val <= 0.222642)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.9149019607843136, 1.0);
        }
        if (val <= 0.226548)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.9258823529411764, 1.0);
        }
        if (val <= 0.230454)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.9368627450980391, 1.0);
        }
        if (val <= 0.23436)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.9478431372549019, 1.0);
        }
        if (val <= 0.238266)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.9588235294117646, 1.0);
        }
        if (val <= 0.242172)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.9698039215686274, 1.0);
        }
        if (val <= 0.246078)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.9807843137254901, 1.0);
        }
        if (val <= 0.249984)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.9917647058823529, 1.0);
        }
        if (val <= 0.25389)
        {
            return Colour::fromFloatRGBA(0.00392156862745098, 0.00392156862745098, 1.0, 1.0);
        }
        if (val <= 0.257796)
        {
            return Colour::fromFloatRGBA(0.0196078431372549, 0.0196078431372549, 1.0, 1.0);
        }
        if (val <= 0.26170200000000005)
        {
            return Colour::fromFloatRGBA(0.0352941176470586, 0.0352941176470586, 1.0, 1.0);
        }
        if (val <= 0.265608)
        {
            return Colour::fromFloatRGBA(0.050980392156862744, 0.050980392156862744, 1.0, 1.0);
        }
        if (val <= 0.26951400000000003)
        {
            return Colour::fromFloatRGBA(0.06666666666666667, 0.06666666666666667, 1.0, 1.0);
        }
        if (val <= 0.27342000000000005)
        {
            return Colour::fromFloatRGBA(0.08235294117647059, 0.08235294117647059, 1.0, 1.0);
        }
        if (val <= 0.277326)
        {
            return Colour::fromFloatRGBA(0.09803921568627451, 0.09803921568627451, 1.0, 1.0);
        }
        if (val <= 0.28123200000000004)
        {
            return Colour::fromFloatRGBA(0.11372549019607843, 0.11372549019607843, 1.0, 1.0);
        }
        if (val <= 0.28513800000000006)
        {
            return Colour::fromFloatRGBA(0.12941176470588237, 0.12941176470588237, 1.0, 1.0);
        }
        if (val <= 0.289044)
        {
            return Colour::fromFloatRGBA(0.1450980392156863, 0.1450980392156863, 1.0, 1.0);
        }
        if (val <= 0.29295000000000004)
        {
            return Colour::fromFloatRGBA(0.16078431372548999, 0.16078431372548999, 1.0, 1.0);
        }
        if (val <= 0.296856)
        {
            return Colour::fromFloatRGBA(0.17647058823529413, 0.17647058823529413, 1.0, 1.0);
        }
        if (val <= 0.30076200000000003)
        {
            return Colour::fromFloatRGBA(0.19215686274509805, 0.19215686274509805, 1.0, 1.0);
        }
        if (val <= 0.30466800000000005)
        {
            return Colour::fromFloatRGBA(0.20784313725490197, 0.20784313725490197, 1.0, 1.0);
        }
        if (val <= 0.308574)
        {
            return Colour::fromFloatRGBA(0.2235294117647059, 0.2235294117647059, 1.0, 1.0);
        }
        if (val <= 0.31248000000000004)
        {
            return Colour::fromFloatRGBA(0.23921568627450981, 0.23921568627450981, 1.0, 1.0);
        }
        if (val <= 0.31638600000000006)
        {
            return Colour::fromFloatRGBA(0.2549019607843137, 0.2549019607843137, 1.0, 1.0);
        }
        if (val <= 0.320292)
        {
            return Colour::fromFloatRGBA(0.27058823529411763, 0.27058823529411763, 1.0, 1.0);
        }
        if (val <= 0.32419800000000004)
        {
            return Colour::fromFloatRGBA(0.28627450980392133, 0.28627450980392133, 1.0, 1.0);
        }
        if (val <= 0.32810400000000006)
        {
            return Colour::fromFloatRGBA(0.30196078431372547, 0.30196078431372547, 1.0, 1.0);
        }
        if (val <= 0.33201)
        {
            return Colour::fromFloatRGBA(0.3176470588235294, 0.3176470588235294, 1.0, 1.0);
        }
        if (val <= 0.33591600000000005)
        {
            return Colour::fromFloatRGBA(0.3333333333333333, 0.3333333333333333, 1.0, 1.0);
        }
        if (val <= 0.339822)
        {
            return Colour::fromFloatRGBA(0.34901960784313724, 0.34901960784313724, 1.0, 1.0);
        }
        if (val <= 0.34372800000000003)
        {
            return Colour::fromFloatRGBA(0.36470588235294116, 0.36470588235294116, 1.0, 1.0);
        }
        if (val <= 0.34763400000000005)
        {
            return Colour::fromFloatRGBA(0.3803921568627451, 0.3803921568627451, 1.0, 1.0);
        }
        if (val <= 0.35154)
        {
            return Colour::fromFloatRGBA(0.396078431372549, 0.396078431372549, 1.0, 1.0);
        }
        if (val <= 0.35544600000000004)
        {
            return Colour::fromFloatRGBA(0.4117647058823527, 0.4117647058823527, 1.0, 1.0);
        }
        if (val <= 0.35935200000000006)
        {
            return Colour::fromFloatRGBA(0.42745098039215684, 0.42745098039215684, 1.0, 1.0);
        }
        if (val <= 0.363258)
        {
            return Colour::fromFloatRGBA(0.44313725490196076, 0.44313725490196076, 1.0, 1.0);
        }
        if (val <= 0.36716400000000005)
        {
            return Colour::fromFloatRGBA(0.4588235294117647, 0.4588235294117647, 1.0, 1.0);
        }
        if (val <= 0.37107)
        {
            return Colour::fromFloatRGBA(0.4745098039215686, 0.4745098039215686, 1.0, 1.0);
        }
        if (val <= 0.37497600000000003)
        {
            return Colour::fromFloatRGBA(0.49019607843137253, 0.49019607843137253, 1.0, 1.0);
        }
        if (val <= 0.37888200000000005)
        {
            return Colour::fromFloatRGBA(0.5058823529411764, 0.5058823529411764, 1.0, 1.0);
        }
        if (val <= 0.382788)
        {
            return Colour::fromFloatRGBA(0.5215686274509804, 0.5215686274509804, 1.0, 1.0);
        }
        if (val <= 0.38669400000000004)
        {
            return Colour::fromFloatRGBA(0.5372549019607841, 0.5372549019607841, 1.0, 1.0);
        }
        if (val <= 0.39060000000000006)
        {
            return Colour::fromFloatRGBA(0.5529411764705883, 0.5529411764705883, 1.0, 1.0);
        }
        if (val <= 0.394506)
        {
            return Colour::fromFloatRGBA(0.5686274509803921, 0.5686274509803921, 1.0, 1.0);
        }
        if (val <= 0.39841200000000004)
        {
            return Colour::fromFloatRGBA(0.5843137254901961, 0.5843137254901961, 1.0, 1.0);
        }
        if (val <= 0.40231800000000006)
        {
            return Colour::fromFloatRGBA(0.6, 0.6, 1.0, 1.0);
        }
        if (val <= 0.40622400000000003)
        {
            return Colour::fromFloatRGBA(0.615686274509804, 0.615686274509804, 1.0, 1.0);
        }
        if (val <= 0.41013000000000005)
        {
            return Colour::fromFloatRGBA(0.6313725490196078, 0.6313725490196078, 1.0, 1.0);
        }
        if (val <= 0.414036)
        {
            return Colour::fromFloatRGBA(0.6470588235294118, 0.6470588235294118, 1.0, 1.0);
        }
        if (val <= 0.41794200000000004)
        {
            return Colour::fromFloatRGBA(0.6627450980392154, 0.6627450980392154, 1.0, 1.0);
        }
        if (val <= 0.42184800000000006)
        {
            return Colour::fromFloatRGBA(0.6784313725490196, 0.6784313725490196, 1.0, 1.0);
        }
        if (val <= 0.425754)
        {
            return Colour::fromFloatRGBA(0.6941176470588235, 0.6941176470588235, 1.0, 1.0);
        }
        if (val <= 0.42966000000000004)
        {
            return Colour::fromFloatRGBA(0.7098039215686275, 0.7098039215686275, 1.0, 1.0);
        }
        if (val <= 0.43356600000000006)
        {
            return Colour::fromFloatRGBA(0.7254901960784313, 0.7254901960784313, 1.0, 1.0);
        }
        if (val <= 0.437472)
        {
            return Colour::fromFloatRGBA(0.7411764705882353, 0.7411764705882353, 1.0, 1.0);
        }
        if (val <= 0.44137800000000005)
        {
            return Colour::fromFloatRGBA(0.7568627450980392, 0.7568627450980392, 1.0, 1.0);
        }
        if (val <= 0.44528400000000007)
        {
            return Colour::fromFloatRGBA(0.7725490196078432, 0.7725490196078432, 1.0, 1.0);
        }
        if (val <= 0.44919000000000003)
        {
            return Colour::fromFloatRGBA(0.7882352941176468, 0.7882352941176468, 1.0, 1.0);
        }
        if (val <= 0.45309600000000005)
        {
            return Colour::fromFloatRGBA(0.803921568627451, 0.803921568627451, 1.0, 1.0);
        }
        if (val <= 0.457002)
        {
            return Colour::fromFloatRGBA(0.8196078431372549, 0.8196078431372549, 1.0, 1.0);
        }
        if (val <= 0.46090800000000004)
        {
            return Colour::fromFloatRGBA(0.8352941176470589, 0.8352941176470589, 1.0, 1.0);
        }
        if (val <= 0.46481400000000006)
        {
            return Colour::fromFloatRGBA(0.8509803921568627, 0.8509803921568627, 1.0, 1.0);
        }
        if (val <= 0.46872)
        {
            return Colour::fromFloatRGBA(0.8666666666666667, 0.8666666666666667, 1.0, 1.0);
        }
        if (val <= 0.47262600000000005)
        {
            return Colour::fromFloatRGBA(0.8823529411764706, 0.8823529411764706, 1.0, 1.0);
        }
        if (val <= 0.47653200000000007)
        {
            return Colour::fromFloatRGBA(0.8980392156862745, 0.8980392156862745, 1.0, 1.0);
        }
        if (val <= 0.48043800000000003)
        {
            return Colour::fromFloatRGBA(0.9137254901960782, 0.9137254901960782, 1.0, 1.0);
        }
        if (val <= 0.48434400000000005)
        {
            return Colour::fromFloatRGBA(0.9294117647058824, 0.9294117647058824, 1.0, 1.0);
        }
        if (val <= 0.48825)
        {
            return Colour::fromFloatRGBA(0.9450980392156862, 0.9450980392156862, 1.0, 1.0);
        }
        if (val <= 0.49215600000000004)
        {
            return Colour::fromFloatRGBA(0.9607843137254902, 0.9607843137254902, 1.0, 1.0);
        }
        if (val <= 0.49606200000000006)
        {
            return Colour::fromFloatRGBA(0.9764705882352941, 0.9764705882352941, 1.0, 1.0);
        }
        if (val <= 0.499968)
        {
            return Colour::fromFloatRGBA(0.9921568627450981, 0.9921568627450981, 1.0, 1.0);
        }
        if (val <= 0.503874)
        {
            return Colour::fromFloatRGBA(1.0, 0.9921568627450981, 0.9921568627450981, 1.0);
        }
        if (val <= 0.50778)
        {
            return Colour::fromFloatRGBA(1.0, 0.9764705882352941, 0.9764705882352941, 1.0);
        }
        if (val <= 0.511686)
        {
            return Colour::fromFloatRGBA(1.0, 0.9607843137254902, 0.9607843137254902, 1.0);
        }
        if (val <= 0.5155919999999999)
        {
            return Colour::fromFloatRGBA(1.0, 0.9450980392156862, 0.9450980392156862, 1.0);
        }
        if (val <= 0.519498)
        {
            return Colour::fromFloatRGBA(1.0, 0.9294117647058828, 0.9294117647058828, 1.0);
        }
        if (val <= 0.523404)
        {
            return Colour::fromFloatRGBA(1.0, 0.9137254901960784, 0.9137254901960784, 1.0);
        }
        if (val <= 0.52731)
        {
            return Colour::fromFloatRGBA(1.0, 0.8980392156862745, 0.8980392156862745, 1.0);
        }
        if (val <= 0.531216)
        {
            return Colour::fromFloatRGBA(1.0, 0.8823529411764706, 0.8823529411764706, 1.0);
        }
        if (val <= 0.535122)
        {
            return Colour::fromFloatRGBA(1.0, 0.8666666666666667, 0.8666666666666667, 1.0);
        }
        if (val <= 0.539028)
        {
            return Colour::fromFloatRGBA(1.0, 0.8509803921568627, 0.8509803921568627, 1.0);
        }
        if (val <= 0.542934)
        {
            return Colour::fromFloatRGBA(1.0, 0.8352941176470589, 0.8352941176470589, 1.0);
        }
        if (val <= 0.54684)
        {
            return Colour::fromFloatRGBA(1.0, 0.8196078431372549, 0.8196078431372549, 1.0);
        }
        if (val <= 0.550746)
        {
            return Colour::fromFloatRGBA(1.0, 0.803921568627451, 0.803921568627451, 1.0);
        }
        if (val <= 0.554652)
        {
            return Colour::fromFloatRGBA(1.0, 0.788235294117647, 0.788235294117647, 1.0);
        }
        if (val <= 0.558558)
        {
            return Colour::fromFloatRGBA(1.0, 0.7725490196078432, 0.7725490196078432, 1.0);
        }
        if (val <= 0.562464)
        {
            return Colour::fromFloatRGBA(1.0, 0.7568627450980392, 0.7568627450980392, 1.0);
        }
        if (val <= 0.56637)
        {
            return Colour::fromFloatRGBA(1.0, 0.7411764705882353, 0.7411764705882353, 1.0);
        }
        if (val <= 0.570276)
        {
            return Colour::fromFloatRGBA(1.0, 0.7254901960784313, 0.7254901960784313, 1.0);
        }
        if (val <= 0.574182)
        {
            return Colour::fromFloatRGBA(1.0, 0.7098039215686274, 0.7098039215686274, 1.0);
        }
        if (val <= 0.578088)
        {
            return Colour::fromFloatRGBA(1.0, 0.6941176470588235, 0.6941176470588235, 1.0);
        }
        if (val <= 0.581994)
        {
            return Colour::fromFloatRGBA(1.0, 0.6784313725490201, 0.6784313725490201, 1.0);
        }
        if (val <= 0.5859)
        {
            return Colour::fromFloatRGBA(1.0, 0.6627450980392157, 0.6627450980392157, 1.0);
        }
        if (val <= 0.5898059999999999)
        {
            return Colour::fromFloatRGBA(1.0, 0.6470588235294117, 0.6470588235294117, 1.0);
        }
        if (val <= 0.593712)
        {
            return Colour::fromFloatRGBA(1.0, 0.6313725490196078, 0.6313725490196078, 1.0);
        }
        if (val <= 0.597618)
        {
            return Colour::fromFloatRGBA(1.0, 0.615686274509804, 0.615686274509804, 1.0);
        }
        if (val <= 0.601524)
        {
            return Colour::fromFloatRGBA(1.0, 0.6, 0.6, 1.0);
        }
        if (val <= 0.60543)
        {
            return Colour::fromFloatRGBA(1.0, 0.584313725490196, 0.584313725490196, 1.0);
        }
        if (val <= 0.609336)
        {
            return Colour::fromFloatRGBA(1.0, 0.5686274509803921, 0.5686274509803921, 1.0);
        }
        if (val <= 0.613242)
        {
            return Colour::fromFloatRGBA(1.0, 0.5529411764705883, 0.5529411764705883, 1.0);
        }
        if (val <= 0.617148)
        {
            return Colour::fromFloatRGBA(1.0, 0.5372549019607843, 0.5372549019607843, 1.0);
        }
        if (val <= 0.621054)
        {
            return Colour::fromFloatRGBA(1.0, 0.5215686274509803, 0.5215686274509803, 1.0);
        }
        if (val <= 0.62496)
        {
            return Colour::fromFloatRGBA(1.0, 0.5058823529411764, 0.5058823529411764, 1.0);
        }
        if (val <= 0.628866)
        {
            return Colour::fromFloatRGBA(1.0, 0.4901960784313726, 0.4901960784313726, 1.0);
        }
        if (val <= 0.632772)
        {
            return Colour::fromFloatRGBA(1.0, 0.4745098039215686, 0.4745098039215686, 1.0);
        }
        if (val <= 0.636678)
        {
            return Colour::fromFloatRGBA(1.0, 0.45882352941176474, 0.45882352941176474, 1.0);
        }
        if (val <= 0.640584)
        {
            return Colour::fromFloatRGBA(1.0, 0.44313725490196076, 0.44313725490196076, 1.0);
        }
        if (val <= 0.64449)
        {
            return Colour::fromFloatRGBA(1.0, 0.42745098039215734, 0.42745098039215734, 1.0);
        }
        if (val <= 0.648396)
        {
            return Colour::fromFloatRGBA(1.0, 0.4117647058823529, 0.4117647058823529, 1.0);
        }
        if (val <= 0.652302)
        {
            return Colour::fromFloatRGBA(1.0, 0.39607843137254906, 0.39607843137254906, 1.0);
        }
        if (val <= 0.656208)
        {
            return Colour::fromFloatRGBA(1.0, 0.3803921568627451, 0.3803921568627451, 1.0);
        }
        if (val <= 0.660114)
        {
            return Colour::fromFloatRGBA(1.0, 0.3647058823529412, 0.3647058823529412, 1.0);
        }
        if (val <= 0.6640199999999999)
        {
            return Colour::fromFloatRGBA(1.0, 0.34901960784313724, 0.34901960784313724, 1.0);
        }
        if (val <= 0.667926)
        {
            return Colour::fromFloatRGBA(1.0, 0.33333333333333337, 0.33333333333333337, 1.0);
        }
        if (val <= 0.671832)
        {
            return Colour::fromFloatRGBA(1.0, 0.3176470588235294, 0.3176470588235294, 1.0);
        }
        if (val <= 0.675738)
        {
            return Colour::fromFloatRGBA(1.0, 0.3019607843137255, 0.3019607843137255, 1.0);
        }
        if (val <= 0.679644)
        {
            return Colour::fromFloatRGBA(1.0, 0.28627450980392155, 0.28627450980392155, 1.0);
        }
        if (val <= 0.68355)
        {
            return Colour::fromFloatRGBA(1.0, 0.2705882352941177, 0.2705882352941177, 1.0);
        }
        if (val <= 0.687456)
        {
            return Colour::fromFloatRGBA(1.0, 0.2549019607843137, 0.2549019607843137, 1.0);
        }
        if (val <= 0.691362)
        {
            return Colour::fromFloatRGBA(1.0, 0.23921568627450984, 0.23921568627450984, 1.0);
        }
        if (val <= 0.695268)
        {
            return Colour::fromFloatRGBA(1.0, 0.22352941176470587, 0.22352941176470587, 1.0);
        }
        if (val <= 0.699174)
        {
            return Colour::fromFloatRGBA(1.0, 0.207843137254902, 0.207843137254902, 1.0);
        }
        if (val <= 0.70308)
        {
            return Colour::fromFloatRGBA(1.0, 0.19215686274509802, 0.19215686274509802, 1.0);
        }
        if (val <= 0.706986)
        {
            return Colour::fromFloatRGBA(1.0, 0.1764705882352946, 0.1764705882352946, 1.0);
        }
        if (val <= 0.710892)
        {
            return Colour::fromFloatRGBA(1.0, 0.16078431372549018, 0.16078431372549018, 1.0);
        }
        if (val <= 0.714798)
        {
            return Colour::fromFloatRGBA(1.0, 0.14509803921568631, 0.14509803921568631, 1.0);
        }
        if (val <= 0.718704)
        {
            return Colour::fromFloatRGBA(1.0, 0.12941176470588234, 0.12941176470588234, 1.0);
        }
        if (val <= 0.72261)
        {
            return Colour::fromFloatRGBA(1.0, 0.11372549019607847, 0.11372549019607847, 1.0);
        }
        if (val <= 0.726516)
        {
            return Colour::fromFloatRGBA(1.0, 0.0980392156862745, 0.0980392156862745, 1.0);
        }
        if (val <= 0.730422)
        {
            return Colour::fromFloatRGBA(1.0, 0.08235294117647063, 0.08235294117647063, 1.0);
        }
        if (val <= 0.734328)
        {
            return Colour::fromFloatRGBA(1.0, 0.06666666666666665, 0.06666666666666665, 1.0);
        }
        if (val <= 0.738234)
        {
            return Colour::fromFloatRGBA(1.0, 0.050980392156862786, 0.050980392156862786, 1.0);
        }
        if (val <= 0.74214)
        {
            return Colour::fromFloatRGBA(1.0, 0.03529411764705881, 0.03529411764705881, 1.0);
        }
        if (val <= 0.746046)
        {
            return Colour::fromFloatRGBA(1.0, 0.019607843137254943, 0.019607843137254943, 1.0);
        }
        if (val <= 0.749952)
        {
            return Colour::fromFloatRGBA(1.0, 0.0039215686274509665, 0.0039215686274509665, 1.0);
        }
        if (val <= 0.753858)
        {
            return Colour::fromFloatRGBA(0.9941176470588236, 0.0, 0.0, 1.0);
        }
        if (val <= 0.757764)
        {
            return Colour::fromFloatRGBA(0.9862745098039216, 0.0, 0.0, 1.0);
        }
        if (val <= 0.76167)
        {
            return Colour::fromFloatRGBA(0.9784313725490196, 0.0, 0.0, 1.0);
        }
        if (val <= 0.765576)
        {
            return Colour::fromFloatRGBA(0.9705882352941176, 0.0, 0.0, 1.0);
        }
        if (val <= 0.769482)
        {
            return Colour::fromFloatRGBA(0.9627450980392159, 0.0, 0.0, 1.0);
        }
        if (val <= 0.773388)
        {
            return Colour::fromFloatRGBA(0.9549019607843138, 0.0, 0.0, 1.0);
        }
        if (val <= 0.777294)
        {
            return Colour::fromFloatRGBA(0.9470588235294117, 0.0, 0.0, 1.0);
        }
        if (val <= 0.7812)
        {
            return Colour::fromFloatRGBA(0.9392156862745098, 0.0, 0.0, 1.0);
        }
        if (val <= 0.785106)
        {
            return Colour::fromFloatRGBA(0.9313725490196079, 0.0, 0.0, 1.0);
        }
        if (val <= 0.789012)
        {
            return Colour::fromFloatRGBA(0.9235294117647059, 0.0, 0.0, 1.0);
        }
        if (val <= 0.792918)
        {
            return Colour::fromFloatRGBA(0.9156862745098039, 0.0, 0.0, 1.0);
        }
        if (val <= 0.796824)
        {
            return Colour::fromFloatRGBA(0.907843137254902, 0.0, 0.0, 1.0);
        }
        if (val <= 0.80073)
        {
            return Colour::fromFloatRGBA(0.9, 0.0, 0.0, 1.0);
        }
        if (val <= 0.804636)
        {
            return Colour::fromFloatRGBA(0.892156862745098, 0.0, 0.0, 1.0);
        }
        if (val <= 0.808542)
        {
            return Colour::fromFloatRGBA(0.884313725490196, 0.0, 0.0, 1.0);
        }
        if (val <= 0.812448)
        {
            return Colour::fromFloatRGBA(0.8764705882352941, 0.0, 0.0, 1.0);
        }
        if (val <= 0.816354)
        {
            return Colour::fromFloatRGBA(0.8686274509803922, 0.0, 0.0, 1.0);
        }
        if (val <= 0.82026)
        {
            return Colour::fromFloatRGBA(0.8607843137254902, 0.0, 0.0, 1.0);
        }
        if (val <= 0.824166)
        {
            return Colour::fromFloatRGBA(0.8529411764705882, 0.0, 0.0, 1.0);
        }
        if (val <= 0.828072)
        {
            return Colour::fromFloatRGBA(0.8450980392156863, 0.0, 0.0, 1.0);
        }
        if (val <= 0.831978)
        {
            return Colour::fromFloatRGBA(0.8372549019607846, 0.0, 0.0, 1.0);
        }
        if (val <= 0.835884)
        {
            return Colour::fromFloatRGBA(0.8294117647058823, 0.0, 0.0, 1.0);
        }
        if (val <= 0.83979)
        {
            return Colour::fromFloatRGBA(0.8215686274509804, 0.0, 0.0, 1.0);
        }
        if (val <= 0.843696)
        {
            return Colour::fromFloatRGBA(0.8137254901960784, 0.0, 0.0, 1.0);
        }
        if (val <= 0.847602)
        {
            return Colour::fromFloatRGBA(0.8058823529411765, 0.0, 0.0, 1.0);
        }
        if (val <= 0.851508)
        {
            return Colour::fromFloatRGBA(0.7980392156862746, 0.0, 0.0, 1.0);
        }
        if (val <= 0.855414)
        {
            return Colour::fromFloatRGBA(0.7901960784313725, 0.0, 0.0, 1.0);
        }
        if (val <= 0.85932)
        {
            return Colour::fromFloatRGBA(0.7823529411764706, 0.0, 0.0, 1.0);
        }
        if (val <= 0.863226)
        {
            return Colour::fromFloatRGBA(0.7745098039215687, 0.0, 0.0, 1.0);
        }
        if (val <= 0.867132)
        {
            return Colour::fromFloatRGBA(0.7666666666666666, 0.0, 0.0, 1.0);
        }
        if (val <= 0.871038)
        {
            return Colour::fromFloatRGBA(0.7588235294117647, 0.0, 0.0, 1.0);
        }
        if (val <= 0.874944)
        {
            return Colour::fromFloatRGBA(0.7509803921568627, 0.0, 0.0, 1.0);
        }
        if (val <= 0.87885)
        {
            return Colour::fromFloatRGBA(0.7431372549019608, 0.0, 0.0, 1.0);
        }
        if (val <= 0.882756)
        {
            return Colour::fromFloatRGBA(0.7352941176470589, 0.0, 0.0, 1.0);
        }
        if (val <= 0.8866620000000001)
        {
            return Colour::fromFloatRGBA(0.7274509803921569, 0.0, 0.0, 1.0);
        }
        if (val <= 0.890568)
        {
            return Colour::fromFloatRGBA(0.7196078431372549, 0.0, 0.0, 1.0);
        }
        if (val <= 0.894474)
        {
            return Colour::fromFloatRGBA(0.7117647058823532, 0.0, 0.0, 1.0);
        }
        if (val <= 0.89838)
        {
            return Colour::fromFloatRGBA(0.7039215686274509, 0.0, 0.0, 1.0);
        }
        if (val <= 0.902286)
        {
            return Colour::fromFloatRGBA(0.696078431372549, 0.0, 0.0, 1.0);
        }
        if (val <= 0.906192)
        {
            return Colour::fromFloatRGBA(0.6882352941176471, 0.0, 0.0, 1.0);
        }
        if (val <= 0.910098)
        {
            return Colour::fromFloatRGBA(0.6803921568627451, 0.0, 0.0, 1.0);
        }
        if (val <= 0.914004)
        {
            return Colour::fromFloatRGBA(0.6725490196078432, 0.0, 0.0, 1.0);
        }
        if (val <= 0.91791)
        {
            return Colour::fromFloatRGBA(0.6647058823529413, 0.0, 0.0, 1.0);
        }
        if (val <= 0.921816)
        {
            return Colour::fromFloatRGBA(0.6568627450980392, 0.0, 0.0, 1.0);
        }
        if (val <= 0.925722)
        {
            return Colour::fromFloatRGBA(0.6490196078431373, 0.0, 0.0, 1.0);
        }
        if (val <= 0.929628)
        {
            return Colour::fromFloatRGBA(0.6411764705882352, 0.0, 0.0, 1.0);
        }
        if (val <= 0.933534)
        {
            return Colour::fromFloatRGBA(0.6333333333333333, 0.0, 0.0, 1.0);
        }
        if (val <= 0.93744)
        {
            return Colour::fromFloatRGBA(0.6254901960784314, 0.0, 0.0, 1.0);
        }
        if (val <= 0.941346)
        {
            return Colour::fromFloatRGBA(0.6176470588235294, 0.0, 0.0, 1.0);
        }
        if (val <= 0.945252)
        {
            return Colour::fromFloatRGBA(0.6098039215686275, 0.0, 0.0, 1.0);
        }
        if (val <= 0.9491580000000001)
        {
            return Colour::fromFloatRGBA(0.6019607843137256, 0.0, 0.0, 1.0);
        }
        if (val <= 0.953064)
        {
            return Colour::fromFloatRGBA(0.5941176470588235, 0.0, 0.0, 1.0);
        }
        if (val <= 0.95697)
        {
            return Colour::fromFloatRGBA(0.5862745098039218, 0.0, 0.0, 1.0);
        }
        if (val <= 0.9608760000000001)
        {
            return Colour::fromFloatRGBA(0.5784313725490196, 0.0, 0.0, 1.0);
        }
        if (val <= 0.964782)
        {
            return Colour::fromFloatRGBA(0.5705882352941176, 0.0, 0.0, 1.0);
        }
        if (val <= 0.968688)
        {
            return Colour::fromFloatRGBA(0.5627450980392157, 0.0, 0.0, 1.0);
        }
        if (val <= 0.972594)
        {
            return Colour::fromFloatRGBA(0.5549019607843138, 0.0, 0.0, 1.0);
        }
        if (val <= 0.9765)
        {
            return Colour::fromFloatRGBA(0.5470588235294118, 0.0, 0.0, 1.0);
        }
        if (val <= 0.980406)
        {
            return Colour::fromFloatRGBA(0.5392156862745099, 0.0, 0.0, 1.0);
        }
        if (val <= 0.984312)
        {
            return Colour::fromFloatRGBA(0.5313725490196078, 0.0, 0.0, 1.0);
        }
        if (val <= 0.988218)
        {
            return Colour::fromFloatRGBA(0.5235294117647059, 0.0, 0.0, 1.0);
        }
        if (val <= 0.992124)
        {
            return Colour::fromFloatRGBA(0.5156862745098039, 0.0, 0.0, 1.0);
        }
        if (val <= 0.99603)
        {
            return Colour::fromFloatRGBA(0.5078431372549019, 0.0, 0.0, 1.0);
        }
        if (val <= 0.999936)
        {
            return Colour::fromFloatRGBA(0.5, 0.0, 0.0, 1.0);
        }

        return Colour::fromFloatRGBA(0.5, 0.0, 0.0, 1.0);
    }

    Colour colourFromRdBu(float val)
    {

        if (val <= 0.003906)
        {
            return Colour::fromFloatRGBA(0.403921568627451, 0.0, 0.12156862745098039, 1.0);
        }
        if (val <= 0.007812)
        {
            return Colour::fromFloatRGBA(0.4154555940023068, 0.003690888119953864, 0.12341407151095732, 1.0);
        }
        if (val <= 0.011718000000000001)
        {
            return Colour::fromFloatRGBA(0.4269896193771626, 0.007381776239907728, 0.12525951557093426, 1.0);
        }
        if (val <= 0.015624)
        {
            return Colour::fromFloatRGBA(0.43852364475201844, 0.011072664359861591, 0.12710495963091117, 1.0);
        }
        if (val <= 0.019530000000000002)
        {
            return Colour::fromFloatRGBA(0.45005767012687425, 0.014763552479815456, 0.12895040369088812, 1.0);
        }
        if (val <= 0.023436000000000002)
        {
            return Colour::fromFloatRGBA(0.4615916955017301, 0.01845444059976932, 0.13079584775086506, 1.0);
        }
        if (val <= 0.027342)
        {
            return Colour::fromFloatRGBA(0.47312572087658594, 0.022145328719723183, 0.132641291810842, 1.0);
        }
        if (val <= 0.031248)
        {
            return Colour::fromFloatRGBA(0.48465974625144176, 0.02583621683967705, 0.1344867358708189, 1.0);
        }
        if (val <= 0.035154000000000005)
        {
            return Colour::fromFloatRGBA(0.4961937716262976, 0.02952710495963091, 0.13633217993079585, 1.0);
        }
        if (val <= 0.039060000000000004)
        {
            return Colour::fromFloatRGBA(0.5077277970011534, 0.03321799307958478, 0.13817762399077277, 1.0);
        }
        if (val <= 0.042966000000000004)
        {
            return Colour::fromFloatRGBA(0.5192618223760093, 0.03690888119953864, 0.1400230680507497, 1.0);
        }
        if (val <= 0.046872000000000004)
        {
            return Colour::fromFloatRGBA(0.5307958477508651, 0.0405997693194925, 0.14186851211072665, 1.0);
        }
        if (val <= 0.050778000000000004)
        {
            return Colour::fromFloatRGBA(0.5423298731257209, 0.044290657439446365, 0.1437139561707036, 1.0);
        }
        if (val <= 0.054684)
        {
            return Colour::fromFloatRGBA(0.5538638985005767, 0.04798154555940023, 0.1455594002306805, 1.0);
        }
        if (val <= 0.05859)
        {
            return Colour::fromFloatRGBA(0.5653979238754325, 0.0516724336793541, 0.14740484429065745, 1.0);
        }
        if (val <= 0.062496)
        {
            return Colour::fromFloatRGBA(0.5769319492502883, 0.05536332179930796, 0.14925028835063436, 1.0);
        }
        if (val <= 0.066402)
        {
            return Colour::fromFloatRGBA(0.5884659746251442, 0.05905420991926182, 0.1510957324106113, 1.0);
        }
        if (val <= 0.07030800000000001)
        {
            return Colour::fromFloatRGBA(0.6, 0.06274509803921569, 0.15294117647058825, 1.0);
        }
        if (val <= 0.07421400000000002)
        {
            return Colour::fromFloatRGBA(0.6115340253748558, 0.06643598615916955, 0.1547866205305652, 1.0);
        }
        if (val <= 0.07812000000000001)
        {
            return Colour::fromFloatRGBA(0.6230680507497116, 0.07012687427912341, 0.1566320645905421, 1.0);
        }
        if (val <= 0.08202600000000002)
        {
            return Colour::fromFloatRGBA(0.6346020761245674, 0.07381776239907728, 0.15847750865051904, 1.0);
        }
        if (val <= 0.08593200000000001)
        {
            return Colour::fromFloatRGBA(0.6461361014994232, 0.07750865051903114, 0.16032295271049596, 1.0);
        }
        if (val <= 0.08983800000000002)
        {
            return Colour::fromFloatRGBA(0.6576701268742791, 0.081199538638985, 0.1621683967704729, 1.0);
        }
        if (val <= 0.09374400000000001)
        {
            return Colour::fromFloatRGBA(0.669204152249135, 0.08489042675893888, 0.16401384083044984, 1.0);
        }
        if (val <= 0.09765000000000001)
        {
            return Colour::fromFloatRGBA(0.6807381776239907, 0.08858131487889273, 0.16585928489042678, 1.0);
        }
        if (val <= 0.10155600000000001)
        {
            return Colour::fromFloatRGBA(0.6922722029988466, 0.09227220299884659, 0.1677047289504037, 1.0);
        }
        if (val <= 0.10546200000000001)
        {
            return Colour::fromFloatRGBA(0.7008073817762399, 0.09965397923875433, 0.17124183006535948, 1.0);
        }
        if (val <= 0.109368)
        {
            return Colour::fromFloatRGBA(0.7063437139561707, 0.11072664359861592, 0.17647058823529413, 1.0);
        }
        if (val <= 0.11327400000000001)
        {
            return Colour::fromFloatRGBA(0.7118800461361015, 0.12179930795847752, 0.18169934640522878, 1.0);
        }
        if (val <= 0.11718)
        {
            return Colour::fromFloatRGBA(0.7174163783160322, 0.1328719723183391, 0.1869281045751634, 1.0);
        }
        if (val <= 0.12108600000000001)
        {
            return Colour::fromFloatRGBA(0.7229527104959631, 0.14394463667820068, 0.19215686274509805, 1.0);
        }
        if (val <= 0.124992)
        {
            return Colour::fromFloatRGBA(0.7284890426758939, 0.15501730103806227, 0.1973856209150327, 1.0);
        }
        if (val <= 0.128898)
        {
            return Colour::fromFloatRGBA(0.7340253748558246, 0.16608996539792387, 0.20261437908496732, 1.0);
        }
        if (val <= 0.132804)
        {
            return Colour::fromFloatRGBA(0.7395617070357554, 0.1771626297577854, 0.20784313725490194, 1.0);
        }
        if (val <= 0.13671)
        {
            return Colour::fromFloatRGBA(0.7450980392156863, 0.18823529411764706, 0.2130718954248366, 1.0);
        }
        if (val <= 0.140616)
        {
            return Colour::fromFloatRGBA(0.7506343713956171, 0.19930795847750865, 0.21830065359477124, 1.0);
        }
        if (val <= 0.144522)
        {
            return Colour::fromFloatRGBA(0.7561707035755478, 0.21038062283737025, 0.22352941176470587, 1.0);
        }
        if (val <= 0.148428)
        {
            return Colour::fromFloatRGBA(0.7617070357554786, 0.22145328719723176, 0.2287581699346405, 1.0);
        }
        if (val <= 0.152334)
        {
            return Colour::fromFloatRGBA(0.7672433679354095, 0.2325259515570934, 0.23398692810457516, 1.0);
        }
        if (val <= 0.15624)
        {
            return Colour::fromFloatRGBA(0.7727797001153403, 0.243598615916955, 0.2392156862745098, 1.0);
        }
        if (val <= 0.160146)
        {
            return Colour::fromFloatRGBA(0.778316032295271, 0.2546712802768166, 0.24444444444444444, 1.0);
        }
        if (val <= 0.164052)
        {
            return Colour::fromFloatRGBA(0.7838523644752018, 0.2657439446366781, 0.24967320261437903, 1.0);
        }
        if (val <= 0.167958)
        {
            return Colour::fromFloatRGBA(0.7893886966551327, 0.2768166089965398, 0.2549019607843137, 1.0);
        }
        if (val <= 0.171864)
        {
            return Colour::fromFloatRGBA(0.7949250288350634, 0.28788927335640135, 0.26013071895424833, 1.0);
        }
        if (val <= 0.17577)
        {
            return Colour::fromFloatRGBA(0.8004613610149942, 0.298961937716263, 0.265359477124183, 1.0);
        }
        if (val <= 0.179676)
        {
            return Colour::fromFloatRGBA(0.805997693194925, 0.3100346020761245, 0.2705882352941176, 1.0);
        }
        if (val <= 0.183582)
        {
            return Colour::fromFloatRGBA(0.8115340253748559, 0.3211072664359862, 0.2758169934640523, 1.0);
        }
        if (val <= 0.187488)
        {
            return Colour::fromFloatRGBA(0.8170703575547866, 0.33217993079584773, 0.28104575163398693, 1.0);
        }
        if (val <= 0.191394)
        {
            return Colour::fromFloatRGBA(0.8226066897347174, 0.34325259515570933, 0.28627450980392155, 1.0);
        }
        if (val <= 0.1953)
        {
            return Colour::fromFloatRGBA(0.8281430219146482, 0.35432525951557087, 0.2915032679738562, 1.0);
        }
        if (val <= 0.199206)
        {
            return Colour::fromFloatRGBA(0.833679354094579, 0.3653979238754325, 0.29673202614379085, 1.0);
        }
        if (val <= 0.20311200000000001)
        {
            return Colour::fromFloatRGBA(0.8392156862745098, 0.3764705882352941, 0.30196078431372547, 1.0);
        }
        if (val <= 0.207018)
        {
            return Colour::fromFloatRGBA(0.8438292964244521, 0.3870818915801615, 0.3101114955786236, 1.0);
        }
        if (val <= 0.210924)
        {
            return Colour::fromFloatRGBA(0.8484429065743945, 0.39769319492502875, 0.31826220684352163, 1.0);
        }
        if (val <= 0.21483)
        {
            return Colour::fromFloatRGBA(0.8530565167243368, 0.4083044982698962, 0.3264129181084198, 1.0);
        }
        if (val <= 0.218736)
        {
            return Colour::fromFloatRGBA(0.8576701268742791, 0.41891580161476355, 0.3345636293733179, 1.0);
        }
        if (val <= 0.222642)
        {
            return Colour::fromFloatRGBA(0.8622837370242215, 0.42952710495963087, 0.34271434063821604, 1.0);
        }
        if (val <= 0.226548)
        {
            return Colour::fromFloatRGBA(0.8668973471741638, 0.44013840830449813, 0.35086505190311407, 1.0);
        }
        if (val <= 0.230454)
        {
            return Colour::fromFloatRGBA(0.8715109573241061, 0.4507497116493656, 0.35901576316801226, 1.0);
        }
        if (val <= 0.23436)
        {
            return Colour::fromFloatRGBA(0.8761245674740484, 0.46136101499423293, 0.3671664744329104, 1.0);
        }
        if (val <= 0.238266)
        {
            return Colour::fromFloatRGBA(0.8807381776239908, 0.4719723183391003, 0.3753171856978085, 1.0);
        }
        if (val <= 0.242172)
        {
            return Colour::fromFloatRGBA(0.8853517877739331, 0.48258362168396757, 0.38346789696270656, 1.0);
        }
        if (val <= 0.246078)
        {
            return Colour::fromFloatRGBA(0.8899653979238754, 0.493194925028835, 0.3916186082276047, 1.0);
        }
        if (val <= 0.249984)
        {
            return Colour::fromFloatRGBA(0.8945790080738177, 0.5038062283737024, 0.39976931949250283, 1.0);
        }
        if (val <= 0.25389)
        {
            return Colour::fromFloatRGBA(0.8991926182237601, 0.5144175317185697, 0.4079200307574009, 1.0);
        }
        if (val <= 0.257796)
        {
            return Colour::fromFloatRGBA(0.9038062283737024, 0.5250288350634371, 0.41607074202229904, 1.0);
        }
        if (val <= 0.26170200000000005)
        {
            return Colour::fromFloatRGBA(0.9084198385236447, 0.5356401384083043, 0.424221453287197, 1.0);
        }
        if (val <= 0.265608)
        {
            return Colour::fromFloatRGBA(0.913033448673587, 0.5462514417531718, 0.43237216455209526, 1.0);
        }
        if (val <= 0.26951400000000003)
        {
            return Colour::fromFloatRGBA(0.9176470588235294, 0.5568627450980391, 0.44052287581699334, 1.0);
        }
        if (val <= 0.27342000000000005)
        {
            return Colour::fromFloatRGBA(0.9222606689734717, 0.5674740484429065, 0.4486735870818915, 1.0);
        }
        if (val <= 0.277326)
        {
            return Colour::fromFloatRGBA(0.926874279123414, 0.5780853517877739, 0.4568242983467896, 1.0);
        }
        if (val <= 0.28123200000000004)
        {
            return Colour::fromFloatRGBA(0.9314878892733564, 0.5886966551326411, 0.4649750096116877, 1.0);
        }
        if (val <= 0.28513800000000006)
        {
            return Colour::fromFloatRGBA(0.9361014994232987, 0.5993079584775085, 0.4731257208765858, 1.0);
        }
        if (val <= 0.289044)
        {
            return Colour::fromFloatRGBA(0.940715109573241, 0.6099192618223759, 0.4812764321414839, 1.0);
        }
        if (val <= 0.29295000000000004)
        {
            return Colour::fromFloatRGBA(0.9453287197231833, 0.6205305651672431, 0.48942714340638194, 1.0);
        }
        if (val <= 0.296856)
        {
            return Colour::fromFloatRGBA(0.9499423298731257, 0.6311418685121106, 0.49757785467128013, 1.0);
        }
        if (val <= 0.30076200000000003)
        {
            return Colour::fromFloatRGBA(0.954555940023068, 0.641753171856978, 0.5057285659361782, 1.0);
        }
        if (val <= 0.30466800000000005)
        {
            return Colour::fromFloatRGBA(0.9575547866205306, 0.6512110726643597, 0.515109573241061, 1.0);
        }
        if (val <= 0.308574)
        {
            return Colour::fromFloatRGBA(0.9589388696655133, 0.659515570934256, 0.5257208765859284, 1.0);
        }
        if (val <= 0.31248000000000004)
        {
            return Colour::fromFloatRGBA(0.960322952710496, 0.6678200692041522, 0.5363321799307956, 1.0);
        }
        if (val <= 0.31638600000000006)
        {
            return Colour::fromFloatRGBA(0.9617070357554787, 0.6761245674740484, 0.546943483275663, 1.0);
        }
        if (val <= 0.320292)
        {
            return Colour::fromFloatRGBA(0.9630911188004614, 0.6844290657439446, 0.5575547866205304, 1.0);
        }
        if (val <= 0.32419800000000004)
        {
            return Colour::fromFloatRGBA(0.9644752018454441, 0.6927335640138407, 0.5681660899653976, 1.0);
        }
        if (val <= 0.32810400000000006)
        {
            return Colour::fromFloatRGBA(0.9658592848904268, 0.701038062283737, 0.5787773933102651, 1.0);
        }
        if (val <= 0.33201)
        {
            return Colour::fromFloatRGBA(0.9672433679354094, 0.7093425605536331, 0.5893886966551325, 1.0);
        }
        if (val <= 0.33591600000000005)
        {
            return Colour::fromFloatRGBA(0.9686274509803922, 0.7176470588235293, 0.5999999999999999, 1.0);
        }
        if (val <= 0.339822)
        {
            return Colour::fromFloatRGBA(0.9700115340253749, 0.7259515570934255, 0.6106113033448672, 1.0);
        }
        if (val <= 0.34372800000000003)
        {
            return Colour::fromFloatRGBA(0.9713956170703576, 0.7342560553633217, 0.6212226066897346, 1.0);
        }
        if (val <= 0.34763400000000005)
        {
            return Colour::fromFloatRGBA(0.9727797001153403, 0.7425605536332179, 0.631833910034602, 1.0);
        }
        if (val <= 0.35154)
        {
            return Colour::fromFloatRGBA(0.9741637831603229, 0.7508650519031141, 0.6424452133794694, 1.0);
        }
        if (val <= 0.35544600000000004)
        {
            return Colour::fromFloatRGBA(0.9755478662053056, 0.7591695501730102, 0.6530565167243365, 1.0);
        }
        if (val <= 0.35935200000000006)
        {
            return Colour::fromFloatRGBA(0.9769319492502884, 0.7674740484429066, 0.6636678200692041, 1.0);
        }
        if (val <= 0.363258)
        {
            return Colour::fromFloatRGBA(0.9783160322952711, 0.7757785467128027, 0.6742791234140715, 1.0);
        }
        if (val <= 0.36716400000000005)
        {
            return Colour::fromFloatRGBA(0.9797001153402538, 0.7840830449826989, 0.6848904267589389, 1.0);
        }
        if (val <= 0.37107)
        {
            return Colour::fromFloatRGBA(0.9810841983852365, 0.7923875432525951, 0.6955017301038062, 1.0);
        }
        if (val <= 0.37497600000000003)
        {
            return Colour::fromFloatRGBA(0.9824682814302191, 0.8006920415224913, 0.7061130334486736, 1.0);
        }
        if (val <= 0.37888200000000005)
        {
            return Colour::fromFloatRGBA(0.9838523644752019, 0.8089965397923875, 0.7167243367935409, 1.0);
        }
        if (val <= 0.382788)
        {
            return Colour::fromFloatRGBA(0.9852364475201846, 0.8173010380622837, 0.7273356401384083, 1.0);
        }
        if (val <= 0.38669400000000004)
        {
            return Colour::fromFloatRGBA(0.9866205305651673, 0.8256055363321797, 0.7379469434832755, 1.0);
        }
        if (val <= 0.39060000000000006)
        {
            return Colour::fromFloatRGBA(0.98800461361015, 0.833910034602076, 0.748558246828143, 1.0);
        }
        if (val <= 0.394506)
        {
            return Colour::fromFloatRGBA(0.9893886966551326, 0.8422145328719722, 0.7591695501730104, 1.0);
        }
        if (val <= 0.39841200000000004)
        {
            return Colour::fromFloatRGBA(0.9907727797001153, 0.8505190311418684, 0.7697808535178777, 1.0);
        }
        if (val <= 0.40231800000000006)
        {
            return Colour::fromFloatRGBA(0.9921568627450981, 0.8588235294117647, 0.7803921568627451, 1.0);
        }
        if (val <= 0.40622400000000003)
        {
            return Colour::fromFloatRGBA(0.9912341407151096, 0.8631295655517108, 0.7877739331026529, 1.0);
        }
        if (val <= 0.41013000000000005)
        {
            return Colour::fromFloatRGBA(0.9903114186851212, 0.867435601691657, 0.7951557093425605, 1.0);
        }
        if (val <= 0.414036)
        {
            return Colour::fromFloatRGBA(0.9893886966551326, 0.8717416378316032, 0.8025374855824683, 1.0);
        }
        if (val <= 0.41794200000000004)
        {
            return Colour::fromFloatRGBA(0.9884659746251442, 0.8760476739715493, 0.809919261822376, 1.0);
        }
        if (val <= 0.42184800000000006)
        {
            return Colour::fromFloatRGBA(0.9875432525951557, 0.8803537101114955, 0.8173010380622837, 1.0);
        }
        if (val <= 0.425754)
        {
            return Colour::fromFloatRGBA(0.9866205305651673, 0.8846597462514417, 0.8246828143021915, 1.0);
        }
        if (val <= 0.42966000000000004)
        {
            return Colour::fromFloatRGBA(0.9856978085351787, 0.8889657823913879, 0.8320645905420992, 1.0);
        }
        if (val <= 0.43356600000000006)
        {
            return Colour::fromFloatRGBA(0.9847750865051903, 0.8932718185313341, 0.8394463667820069, 1.0);
        }
        if (val <= 0.437472)
        {
            return Colour::fromFloatRGBA(0.9838523644752019, 0.8975778546712803, 0.8468281430219147, 1.0);
        }
        if (val <= 0.44137800000000005)
        {
            return Colour::fromFloatRGBA(0.9829296424452134, 0.9018838908112264, 0.8542099192618224, 1.0);
        }
        if (val <= 0.44528400000000007)
        {
            return Colour::fromFloatRGBA(0.982006920415225, 0.9061899269511726, 0.8615916955017301, 1.0);
        }
        if (val <= 0.44919000000000003)
        {
            return Colour::fromFloatRGBA(0.9810841983852365, 0.9104959630911187, 0.8689734717416377, 1.0);
        }
        if (val <= 0.45309600000000005)
        {
            return Colour::fromFloatRGBA(0.980161476355248, 0.914801999231065, 0.8763552479815455, 1.0);
        }
        if (val <= 0.457002)
        {
            return Colour::fromFloatRGBA(0.9792387543252595, 0.9191080353710112, 0.8837370242214533, 1.0);
        }
        if (val <= 0.46090800000000004)
        {
            return Colour::fromFloatRGBA(0.9783160322952711, 0.9234140715109573, 0.891118800461361, 1.0);
        }
        if (val <= 0.46481400000000006)
        {
            return Colour::fromFloatRGBA(0.9773933102652826, 0.9277201076509035, 0.8985005767012687, 1.0);
        }
        if (val <= 0.46872)
        {
            return Colour::fromFloatRGBA(0.9764705882352941, 0.9320261437908497, 0.9058823529411765, 1.0);
        }
        if (val <= 0.47262600000000005)
        {
            return Colour::fromFloatRGBA(0.9755478662053056, 0.9363321799307959, 0.9132641291810842, 1.0);
        }
        if (val <= 0.47653200000000007)
        {
            return Colour::fromFloatRGBA(0.9746251441753172, 0.940638216070742, 0.9206459054209919, 1.0);
        }
        if (val <= 0.48043800000000003)
        {
            return Colour::fromFloatRGBA(0.9737024221453288, 0.9449442522106881, 0.9280276816608996, 1.0);
        }
        if (val <= 0.48434400000000005)
        {
            return Colour::fromFloatRGBA(0.9727797001153402, 0.9492502883506344, 0.9354094579008074, 1.0);
        }
        if (val <= 0.48825)
        {
            return Colour::fromFloatRGBA(0.9718569780853518, 0.9535563244905806, 0.9427912341407151, 1.0);
        }
        if (val <= 0.49215600000000004)
        {
            return Colour::fromFloatRGBA(0.9709342560553633, 0.9578623606305268, 0.9501730103806229, 1.0);
        }
        if (val <= 0.49606200000000006)
        {
            return Colour::fromFloatRGBA(0.9700115340253749, 0.9621683967704728, 0.9575547866205305, 1.0);
        }
        if (val <= 0.499968)
        {
            return Colour::fromFloatRGBA(0.9690888119953864, 0.9664744329104191, 0.9649365628604383, 1.0);
        }
        if (val <= 0.503874)
        {
            return Colour::fromFloatRGBA(0.9657054978854287, 0.9672433679354094, 0.9680891964628989, 1.0);
        }
        if (val <= 0.50778)
        {
            return Colour::fromFloatRGBA(0.9598615916955018, 0.9644752018454441, 0.9670126874279124, 1.0);
        }
        if (val <= 0.511686)
        {
            return Colour::fromFloatRGBA(0.9540176855055748, 0.9617070357554787, 0.9659361783929258, 1.0);
        }
        if (val <= 0.5155919999999999)
        {
            return Colour::fromFloatRGBA(0.9481737793156478, 0.9589388696655132, 0.9648596693579392, 1.0);
        }
        if (val <= 0.519498)
        {
            return Colour::fromFloatRGBA(0.942329873125721, 0.956170703575548, 0.9637831603229527, 1.0);
        }
        if (val <= 0.523404)
        {
            return Colour::fromFloatRGBA(0.936485966935794, 0.9534025374855825, 0.9627066512879662, 1.0);
        }
        if (val <= 0.52731)
        {
            return Colour::fromFloatRGBA(0.930642060745867, 0.9506343713956171, 0.9616301422529796, 1.0);
        }
        if (val <= 0.531216)
        {
            return Colour::fromFloatRGBA(0.92479815455594, 0.9478662053056517, 0.960553633217993, 1.0);
        }
        if (val <= 0.535122)
        {
            return Colour::fromFloatRGBA(0.9189542483660131, 0.9450980392156864, 0.9594771241830066, 1.0);
        }
        if (val <= 0.539028)
        {
            return Colour::fromFloatRGBA(0.9131103421760862, 0.9423298731257209, 0.95840061514802, 1.0);
        }
        if (val <= 0.542934)
        {
            return Colour::fromFloatRGBA(0.9072664359861592, 0.9395617070357555, 0.9573241061130334, 1.0);
        }
        if (val <= 0.54684)
        {
            return Colour::fromFloatRGBA(0.9014225297962323, 0.9367935409457901, 0.956247597078047, 1.0);
        }
        if (val <= 0.550746)
        {
            return Colour::fromFloatRGBA(0.8955786236063054, 0.9340253748558247, 0.9551710880430604, 1.0);
        }
        if (val <= 0.554652)
        {
            return Colour::fromFloatRGBA(0.8897347174163783, 0.9312572087658594, 0.9540945790080738, 1.0);
        }
        if (val <= 0.558558)
        {
            return Colour::fromFloatRGBA(0.8838908112264514, 0.9284890426758939, 0.9530180699730872, 1.0);
        }
        if (val <= 0.562464)
        {
            return Colour::fromFloatRGBA(0.8780469050365245, 0.9257208765859286, 0.9519415609381008, 1.0);
        }
        if (val <= 0.56637)
        {
            return Colour::fromFloatRGBA(0.8722029988465976, 0.9229527104959632, 0.9508650519031142, 1.0);
        }
        if (val <= 0.570276)
        {
            return Colour::fromFloatRGBA(0.8663590926566707, 0.9201845444059977, 0.9497885428681276, 1.0);
        }
        if (val <= 0.574182)
        {
            return Colour::fromFloatRGBA(0.8605151864667436, 0.9174163783160324, 0.9487120338331411, 1.0);
        }
        if (val <= 0.578088)
        {
            return Colour::fromFloatRGBA(0.8546712802768167, 0.914648212226067, 0.9476355247981546, 1.0);
        }
        if (val <= 0.581994)
        {
            return Colour::fromFloatRGBA(0.8488273740868899, 0.9118800461361016, 0.946559015763168, 1.0);
        }
        if (val <= 0.5859)
        {
            return Colour::fromFloatRGBA(0.8429834678969628, 0.9091118800461362, 0.9454825067281815, 1.0);
        }
        if (val <= 0.5898059999999999)
        {
            return Colour::fromFloatRGBA(0.8371395617070359, 0.9063437139561707, 0.9444059976931949, 1.0);
        }
        if (val <= 0.593712)
        {
            return Colour::fromFloatRGBA(0.8312956555171089, 0.9035755478662054, 0.9433294886582084, 1.0);
        }
        if (val <= 0.597618)
        {
            return Colour::fromFloatRGBA(0.825451749327182, 0.90080738177624, 0.9422529796232219, 1.0);
        }
        if (val <= 0.601524)
        {
            return Colour::fromFloatRGBA(0.8196078431372551, 0.8980392156862746, 0.9411764705882353, 1.0);
        }
        if (val <= 0.60543)
        {
            return Colour::fromFloatRGBA(0.8099192618223763, 0.8931180315263362, 0.93840830449827, 1.0);
        }
        if (val <= 0.609336)
        {
            return Colour::fromFloatRGBA(0.8002306805074973, 0.8881968473663977, 0.9356401384083045, 1.0);
        }
        if (val <= 0.613242)
        {
            return Colour::fromFloatRGBA(0.7905420991926184, 0.8832756632064592, 0.9328719723183392, 1.0);
        }
        if (val <= 0.617148)
        {
            return Colour::fromFloatRGBA(0.7808535178777396, 0.8783544790465208, 0.9301038062283737, 1.0);
        }
        if (val <= 0.621054)
        {
            return Colour::fromFloatRGBA(0.7711649365628607, 0.8734332948865823, 0.9273356401384084, 1.0);
        }
        if (val <= 0.62496)
        {
            return Colour::fromFloatRGBA(0.7614763552479817, 0.8685121107266438, 0.924567474048443, 1.0);
        }
        if (val <= 0.628866)
        {
            return Colour::fromFloatRGBA(0.7517877739331029, 0.8635909265667053, 0.9217993079584775, 1.0);
        }
        if (val <= 0.632772)
        {
            return Colour::fromFloatRGBA(0.742099192618224, 0.8586697424067669, 0.9190311418685122, 1.0);
        }
        if (val <= 0.636678)
        {
            return Colour::fromFloatRGBA(0.7324106113033451, 0.8537485582468283, 0.9162629757785468, 1.0);
        }
        if (val <= 0.640584)
        {
            return Colour::fromFloatRGBA(0.7227220299884662, 0.8488273740868898, 0.9134948096885814, 1.0);
        }
        if (val <= 0.64449)
        {
            return Colour::fromFloatRGBA(0.7130334486735876, 0.8439061899269515, 0.9107266435986161, 1.0);
        }
        if (val <= 0.648396)
        {
            return Colour::fromFloatRGBA(0.7033448673587084, 0.8389850057670128, 0.9079584775086506, 1.0);
        }
        if (val <= 0.652302)
        {
            return Colour::fromFloatRGBA(0.6936562860438296, 0.8340638216070744, 0.9051903114186852, 1.0);
        }
        if (val <= 0.656208)
        {
            return Colour::fromFloatRGBA(0.6839677047289506, 0.8291426374471359, 0.9024221453287198, 1.0);
        }
        if (val <= 0.660114)
        {
            return Colour::fromFloatRGBA(0.6742791234140717, 0.8242214532871974, 0.8996539792387545, 1.0);
        }
        if (val <= 0.6640199999999999)
        {
            return Colour::fromFloatRGBA(0.6645905420991929, 0.819300269127259, 0.896885813148789, 1.0);
        }
        if (val <= 0.667926)
        {
            return Colour::fromFloatRGBA(0.654901960784314, 0.8143790849673205, 0.8941176470588236, 1.0);
        }
        if (val <= 0.671832)
        {
            return Colour::fromFloatRGBA(0.645213379469435, 0.8094579008073819, 0.8913494809688582, 1.0);
        }
        if (val <= 0.675738)
        {
            return Colour::fromFloatRGBA(0.6355247981545562, 0.8045367166474434, 0.8885813148788928, 1.0);
        }
        if (val <= 0.679644)
        {
            return Colour::fromFloatRGBA(0.6258362168396773, 0.7996155324875049, 0.8858131487889275, 1.0);
        }
        if (val <= 0.68355)
        {
            return Colour::fromFloatRGBA(0.6161476355247983, 0.7946943483275665, 0.883044982698962, 1.0);
        }
        if (val <= 0.687456)
        {
            return Colour::fromFloatRGBA(0.6064590542099195, 0.789773164167628, 0.8802768166089966, 1.0);
        }
        if (val <= 0.691362)
        {
            return Colour::fromFloatRGBA(0.5967704728950406, 0.7848519800076895, 0.8775086505190313, 1.0);
        }
        if (val <= 0.695268)
        {
            return Colour::fromFloatRGBA(0.5870818915801617, 0.779930795847751, 0.8747404844290658, 1.0);
        }
        if (val <= 0.699174)
        {
            return Colour::fromFloatRGBA(0.5773933102652828, 0.7750096116878126, 0.8719723183391004, 1.0);
        }
        if (val <= 0.70308)
        {
            return Colour::fromFloatRGBA(0.5664744329104193, 0.7687043444828915, 0.8685121107266437, 1.0);
        }
        if (val <= 0.706986)
        {
            return Colour::fromFloatRGBA(0.5543252595155715, 0.7610149942329878, 0.8643598615916958, 1.0);
        }
        if (val <= 0.710892)
        {
            return Colour::fromFloatRGBA(0.5421760861207231, 0.7533256439830837, 0.8602076124567475, 1.0);
        }
        if (val <= 0.714798)
        {
            return Colour::fromFloatRGBA(0.530026912725875, 0.7456362937331797, 0.8560553633217994, 1.0);
        }
        if (val <= 0.718704)
        {
            return Colour::fromFloatRGBA(0.5178777393310268, 0.7379469434832758, 0.8519031141868513, 1.0);
        }
        if (val <= 0.72261)
        {
            return Colour::fromFloatRGBA(0.5057285659361787, 0.7302575932333719, 0.8477508650519032, 1.0);
        }
        if (val <= 0.726516)
        {
            return Colour::fromFloatRGBA(0.4935793925413305, 0.7225682429834681, 0.8435986159169551, 1.0);
        }
        if (val <= 0.730422)
        {
            return Colour::fromFloatRGBA(0.4814302191464823, 0.7148788927335642, 0.839446366782007, 1.0);
        }
        if (val <= 0.734328)
        {
            return Colour::fromFloatRGBA(0.4692810457516342, 0.7071895424836603, 0.8352941176470589, 1.0);
        }
        if (val <= 0.738234)
        {
            return Colour::fromFloatRGBA(0.45713187235678604, 0.6995001922337564, 0.8311418685121108, 1.0);
        }
        if (val <= 0.74214)
        {
            return Colour::fromFloatRGBA(0.4449826989619379, 0.6918108419838525, 0.8269896193771626, 1.0);
        }
        if (val <= 0.746046)
        {
            return Colour::fromFloatRGBA(0.43283352556708976, 0.6841214917339487, 0.8228373702422146, 1.0);
        }
        if (val <= 0.749952)
        {
            return Colour::fromFloatRGBA(0.42068435217224165, 0.6764321414840447, 0.8186851211072664, 1.0);
        }
        if (val <= 0.753858)
        {
            return Colour::fromFloatRGBA(0.4085351787773935, 0.6687427912341408, 0.8145328719723184, 1.0);
        }
        if (val <= 0.757764)
        {
            return Colour::fromFloatRGBA(0.3963860053825453, 0.6610534409842369, 0.8103806228373702, 1.0);
        }
        if (val <= 0.76167)
        {
            return Colour::fromFloatRGBA(0.38423683198769715, 0.653364090734333, 0.8062283737024222, 1.0);
        }
        if (val <= 0.765576)
        {
            return Colour::fromFloatRGBA(0.37208765859284904, 0.6456747404844292, 0.8020761245674741, 1.0);
        }
        if (val <= 0.769482)
        {
            return Colour::fromFloatRGBA(0.3599384851980012, 0.6379853902345254, 0.7979238754325261, 1.0);
        }
        if (val <= 0.773388)
        {
            return Colour::fromFloatRGBA(0.34778931180315276, 0.6302960399846214, 0.7937716262975778, 1.0);
        }
        if (val <= 0.777294)
        {
            return Colour::fromFloatRGBA(0.3356401384083046, 0.6226066897347174, 0.7896193771626298, 1.0);
        }
        if (val <= 0.7812)
        {
            return Colour::fromFloatRGBA(0.3234909650134564, 0.6149173394848135, 0.7854671280276817, 1.0);
        }
        if (val <= 0.785106)
        {
            return Colour::fromFloatRGBA(0.3113417916186083, 0.6072279892349096, 0.7813148788927335, 1.0);
        }
        if (val <= 0.789012)
        {
            return Colour::fromFloatRGBA(0.29919261822376014, 0.5995386389850057, 0.7771626297577854, 1.0);
        }
        if (val <= 0.792918)
        {
            return Colour::fromFloatRGBA(0.287043444828912, 0.5918492887351019, 0.7730103806228373, 1.0);
        }
        if (val <= 0.796824)
        {
            return Colour::fromFloatRGBA(0.27489427143406386, 0.584159938485198, 0.7688581314878893, 1.0);
        }
        if (val <= 0.80073)
        {
            return Colour::fromFloatRGBA(0.2627450980392157, 0.5764705882352941, 0.7647058823529411, 1.0);
        }
        if (val <= 0.804636)
        {
            return Colour::fromFloatRGBA(0.2575163398692811, 0.5695501730103806, 0.7611687812379854, 1.0);
        }
        if (val <= 0.808542)
        {
            return Colour::fromFloatRGBA(0.2522875816993464, 0.5626297577854671, 0.7576316801230295, 1.0);
        }
        if (val <= 0.812448)
        {
            return Colour::fromFloatRGBA(0.24705882352941178, 0.5557093425605536, 0.7540945790080738, 1.0);
        }
        if (val <= 0.816354)
        {
            return Colour::fromFloatRGBA(0.24183006535947713, 0.5487889273356401, 0.750557477893118, 1.0);
        }
        if (val <= 0.82026)
        {
            return Colour::fromFloatRGBA(0.2366013071895425, 0.5418685121107266, 0.7470203767781622, 1.0);
        }
        if (val <= 0.824166)
        {
            return Colour::fromFloatRGBA(0.23137254901960785, 0.5349480968858131, 0.7434832756632064, 1.0);
        }
        if (val <= 0.828072)
        {
            return Colour::fromFloatRGBA(0.2261437908496732, 0.5280276816608996, 0.7399461745482506, 1.0);
        }
        if (val <= 0.831978)
        {
            return Colour::fromFloatRGBA(0.22091503267973872, 0.5211072664359864, 0.736409073433295, 1.0);
        }
        if (val <= 0.835884)
        {
            return Colour::fromFloatRGBA(0.21568627450980393, 0.5141868512110727, 0.7328719723183391, 1.0);
        }
        if (val <= 0.83979)
        {
            return Colour::fromFloatRGBA(0.21045751633986928, 0.5072664359861592, 0.7293348712033833, 1.0);
        }
        if (val <= 0.843696)
        {
            return Colour::fromFloatRGBA(0.20522875816993463, 0.5003460207612457, 0.7257977700884275, 1.0);
        }
        if (val <= 0.847602)
        {
            return Colour::fromFloatRGBA(0.2, 0.4934256055363322, 0.7222606689734717, 1.0);
        }
        if (val <= 0.851508)
        {
            return Colour::fromFloatRGBA(0.1947712418300654, 0.4865051903114187, 0.718723567858516, 1.0);
        }
        if (val <= 0.855414)
        {
            return Colour::fromFloatRGBA(0.1895424836601307, 0.47958477508650516, 0.7151864667435601, 1.0);
        }
        if (val <= 0.85932)
        {
            return Colour::fromFloatRGBA(0.1843137254901961, 0.47266435986159167, 0.7116493656286044, 1.0);
        }
        if (val <= 0.863226)
        {
            return Colour::fromFloatRGBA(0.17908496732026147, 0.46574394463667823, 0.7081122645136486, 1.0);
        }
        if (val <= 0.867132)
        {
            return Colour::fromFloatRGBA(0.17385620915032682, 0.45882352941176474, 0.7045751633986929, 1.0);
        }
        if (val <= 0.871038)
        {
            return Colour::fromFloatRGBA(0.16862745098039217, 0.4519031141868512, 0.701038062283737, 1.0);
        }
        if (val <= 0.874944)
        {
            return Colour::fromFloatRGBA(0.16339869281045752, 0.4449826989619377, 0.6975009611687812, 1.0);
        }
        if (val <= 0.87885)
        {
            return Colour::fromFloatRGBA(0.15816993464052287, 0.43806228373702427, 0.6939638600538255, 1.0);
        }
        if (val <= 0.882756)
        {
            return Colour::fromFloatRGBA(0.15294117647058825, 0.4311418685121108, 0.6904267589388697, 1.0);
        }
        if (val <= 0.8866620000000001)
        {
            return Colour::fromFloatRGBA(0.1477124183006536, 0.42422145328719724, 0.6868896578239139, 1.0);
        }
        if (val <= 0.890568)
        {
            return Colour::fromFloatRGBA(0.14248366013071895, 0.41730103806228375, 0.6833525567089581, 1.0);
        }
        if (val <= 0.894474)
        {
            return Colour::fromFloatRGBA(0.13725490196078446, 0.4103806228373704, 0.6798154555940025, 1.0);
        }
        if (val <= 0.89838)
        {
            return Colour::fromFloatRGBA(0.1320261437908497, 0.40346020761245677, 0.6762783544790466, 1.0);
        }
        if (val <= 0.902286)
        {
            return Colour::fromFloatRGBA(0.12725874663590928, 0.3958477508650519, 0.6687427912341407, 1.0);
        }
        if (val <= 0.906192)
        {
            return Colour::fromFloatRGBA(0.1229527104959631, 0.3875432525951557, 0.6572087658592849, 1.0);
        }
        if (val <= 0.910098)
        {
            return Colour::fromFloatRGBA(0.11864667435601693, 0.37923875432525955, 0.6456747404844291, 1.0);
        }
        if (val <= 0.914004)
        {
            return Colour::fromFloatRGBA(0.11434063821607075, 0.37093425605536334, 0.6341407151095733, 1.0);
        }
        if (val <= 0.91791)
        {
            return Colour::fromFloatRGBA(0.11003460207612457, 0.36262975778546713, 0.6226066897347174, 1.0);
        }
        if (val <= 0.921816)
        {
            return Colour::fromFloatRGBA(0.10572856593617841, 0.3543252595155709, 0.6110726643598616, 1.0);
        }
        if (val <= 0.925722)
        {
            return Colour::fromFloatRGBA(0.10142252979623223, 0.34602076124567477, 0.5995386389850058, 1.0);
        }
        if (val <= 0.929628)
        {
            return Colour::fromFloatRGBA(0.09711649365628605, 0.33771626297577856, 0.58800461361015, 1.0);
        }
        if (val <= 0.933534)
        {
            return Colour::fromFloatRGBA(0.09281045751633987, 0.3294117647058824, 0.5764705882352942, 1.0);
        }
        if (val <= 0.93744)
        {
            return Colour::fromFloatRGBA(0.0885044213763937, 0.3211072664359862, 0.5649365628604384, 1.0);
        }
        if (val <= 0.941346)
        {
            return Colour::fromFloatRGBA(0.08419838523644753, 0.31280276816609, 0.5534025374855824, 1.0);
        }
        if (val <= 0.945252)
        {
            return Colour::fromFloatRGBA(0.07989234909650135, 0.3044982698961938, 0.5418685121107266, 1.0);
        }
        if (val <= 0.9491580000000001)
        {
            return Colour::fromFloatRGBA(0.07558631295655519, 0.29619377162629756, 0.5303344867358708, 1.0);
        }
        if (val <= 0.953064)
        {
            return Colour::fromFloatRGBA(0.071280276816609, 0.2878892733564014, 0.518800461361015, 1.0);
        }
        if (val <= 0.95697)
        {
            return Colour::fromFloatRGBA(0.06697424067666295, 0.2795847750865054, 0.5072664359861595, 1.0);
        }
        if (val <= 0.9608760000000001)
        {
            return Colour::fromFloatRGBA(0.06266820453671666, 0.27128027681660905, 0.49573241061130335, 1.0);
        }
        if (val <= 0.964782)
        {
            return Colour::fromFloatRGBA(0.05836216839677047, 0.26297577854671284, 0.48419838523644754, 1.0);
        }
        if (val <= 0.968688)
        {
            return Colour::fromFloatRGBA(0.054056132256824305, 0.2546712802768166, 0.4726643598615917, 1.0);
        }
        if (val <= 0.972594)
        {
            return Colour::fromFloatRGBA(0.049750096116878126, 0.24636678200692042, 0.4611303344867359, 1.0);
        }
        if (val <= 0.9765)
        {
            return Colour::fromFloatRGBA(0.04544405997693196, 0.23806228373702423, 0.4495963091118801, 1.0);
        }
        if (val <= 0.980406)
        {
            return Colour::fromFloatRGBA(0.04113802383698577, 0.22975778546712802, 0.4380622837370242, 1.0);
        }
        if (val <= 0.984312)
        {
            return Colour::fromFloatRGBA(0.0368319876970396, 0.22145328719723184, 0.4265282583621684, 1.0);
        }
        if (val <= 0.988218)
        {
            return Colour::fromFloatRGBA(0.032525951557093424, 0.21314878892733566, 0.4149942329873126, 1.0);
        }
        if (val <= 0.992124)
        {
            return Colour::fromFloatRGBA(0.02821991541714726, 0.20484429065743945, 0.40346020761245677, 1.0);
        }
        if (val <= 0.99603)
        {
            return Colour::fromFloatRGBA(0.02391387927720108, 0.19653979238754324, 0.3919261822376009, 1.0);
        }
        if (val <= 0.999936)
        {
            return Colour::fromFloatRGBA(0.0196078431372549, 0.18823529411764706, 0.3803921568627451, 1.0);
        }

        return Colour::fromFloatRGBA(0.0196078431372549, 0.18823529411764706, 0.3803921568627451, 1.0);
    }

    Colour colourFromViridis(float val)
    {

        if (val <= 0.003906)
        {
            return Colour::fromFloatRGBA(0.26700400000000002, 0.0048739999999999999, 0.32941500000000001, 1.0);
        }
        if (val <= 0.007812)
        {
            return Colour::fromFloatRGBA(0.26851000000000003, 0.0096050000000000007, 0.33542699999999998, 1.0);
        }
        if (val <= 0.011719)
        {
            return Colour::fromFloatRGBA(0.26994400000000002, 0.014625000000000001, 0.34137899999999999, 1.0);
        }
        if (val <= 0.015625)
        {
            return Colour::fromFloatRGBA(0.27130500000000002, 0.019942000000000001, 0.34726899999999999, 1.0);
        }
        if (val <= 0.019531)
        {
            return Colour::fromFloatRGBA(0.272594, 0.025562999999999999, 0.35309299999999999, 1.0);
        }
        if (val <= 0.023438)
        {
            return Colour::fromFloatRGBA(0.27380900000000002, 0.031496999999999997, 0.35885299999999998, 1.0);
        }
        if (val <= 0.027344)
        {
            return Colour::fromFloatRGBA(0.27495199999999997, 0.037752000000000001, 0.36454300000000001, 1.0);
        }
        if (val <= 0.031250)
        {
            return Colour::fromFloatRGBA(0.27602199999999999, 0.044166999999999998, 0.37016399999999999, 1.0);
        }
        if (val <= 0.035156)
        {
            return Colour::fromFloatRGBA(0.27701799999999999, 0.050344, 0.37571500000000002, 1.0);
        }
        if (val <= 0.039062)
        {
            return Colour::fromFloatRGBA(0.27794099999999999, 0.056323999999999999, 0.381191, 1.0);
        }
        if (val <= 0.042969)
        {
            return Colour::fromFloatRGBA(0.27879100000000001, 0.062144999999999999, 0.38659199999999999, 1.0);
        }
        if (val <= 0.046875)
        {
            return Colour::fromFloatRGBA(0.27956599999999998, 0.067835999999999994, 0.39191700000000002, 1.0);
        }
        if (val <= 0.050781)
        {
            return Colour::fromFloatRGBA(0.28026699999999999, 0.073416999999999996, 0.39716299999999999, 1.0);
        }
        if (val <= 0.054688)
        {
            return Colour::fromFloatRGBA(0.28089399999999998, 0.078907000000000005, 0.40232899999999999, 1.0);
        }
        if (val <= 0.058594)
        {
            return Colour::fromFloatRGBA(0.28144599999999997, 0.084320000000000006, 0.407414, 1.0);
        }
        if (val <= 0.062500)
        {
            return Colour::fromFloatRGBA(0.28192400000000001, 0.089665999999999996, 0.41241499999999998, 1.0);
        }
        if (val <= 0.066406)
        {
            return Colour::fromFloatRGBA(0.28232699999999999, 0.094954999999999998, 0.41733100000000001, 1.0);
        }
        if (val <= 0.070312)
        {
            return Colour::fromFloatRGBA(0.28265600000000002, 0.10019599999999999, 0.42215999999999998, 1.0);
        }
        if (val <= 0.074219)
        {
            return Colour::fromFloatRGBA(0.28290999999999999, 0.105393, 0.426902, 1.0);
        }
        if (val <= 0.078125)
        {
            return Colour::fromFloatRGBA(0.28309099999999998, 0.110553, 0.43155399999999999, 1.0);
        }
        if (val <= 0.082031)
        {
            return Colour::fromFloatRGBA(0.28319699999999998, 0.11568000000000001, 0.43611499999999997, 1.0);
        }
        if (val <= 0.085938)
        {
            return Colour::fromFloatRGBA(0.28322900000000001, 0.120777, 0.44058399999999998, 1.0);
        }
        if (val <= 0.089844)
        {
            return Colour::fromFloatRGBA(0.28318700000000002, 0.12584799999999999, 0.44496000000000002, 1.0);
        }
        if (val <= 0.093750)
        {
            return Colour::fromFloatRGBA(0.28307199999999999, 0.13089500000000001, 0.449241, 1.0);
        }
        if (val <= 0.097656)
        {
            return Colour::fromFloatRGBA(0.28288400000000002, 0.13592000000000001, 0.45342700000000002, 1.0);
        }
        if (val <= 0.101562)
        {
            return Colour::fromFloatRGBA(0.28262300000000001, 0.140926, 0.45751700000000001, 1.0);
        }
        if (val <= 0.105469)
        {
            return Colour::fromFloatRGBA(0.28228999999999999, 0.14591199999999999, 0.46150999999999998, 1.0);
        }
        if (val <= 0.109375)
        {
            return Colour::fromFloatRGBA(0.281887, 0.15088099999999999, 0.46540500000000001, 1.0);
        }
        if (val <= 0.113281)
        {
            return Colour::fromFloatRGBA(0.281412, 0.155834, 0.46920099999999998, 1.0);
        }
        if (val <= 0.117188)
        {
            return Colour::fromFloatRGBA(0.28086800000000001, 0.160771, 0.47289900000000001, 1.0);
        }
        if (val <= 0.121094)
        {
            return Colour::fromFloatRGBA(0.28025499999999998, 0.16569300000000001, 0.47649799999999998, 1.0);
        }
        if (val <= 0.125000)
        {
            return Colour::fromFloatRGBA(0.27957399999999999, 0.170599, 0.47999700000000001, 1.0);
        }
        if (val <= 0.128906)
        {
            return Colour::fromFloatRGBA(0.27882600000000002, 0.17549000000000001, 0.48339700000000002, 1.0);
        }
        if (val <= 0.132812)
        {
            return Colour::fromFloatRGBA(0.27801199999999998, 0.180367, 0.48669699999999999, 1.0);
        }
        if (val <= 0.136719)
        {
            return Colour::fromFloatRGBA(0.27713399999999999, 0.185228, 0.489898, 1.0);
        }
        if (val <= 0.140625)
        {
            return Colour::fromFloatRGBA(0.276194, 0.19007399999999999, 0.49300100000000002, 1.0);
        }
        if (val <= 0.144531)
        {
            return Colour::fromFloatRGBA(0.27519100000000002, 0.19490499999999999, 0.49600499999999997, 1.0);
        }
        if (val <= 0.148438)
        {
            return Colour::fromFloatRGBA(0.27412799999999998, 0.19972100000000001, 0.49891099999999999, 1.0);
        }
        if (val <= 0.152344)
        {
            return Colour::fromFloatRGBA(0.27300600000000003, 0.20452000000000001, 0.50172099999999997, 1.0);
        }
        if (val <= 0.156250)
        {
            return Colour::fromFloatRGBA(0.27182800000000001, 0.20930299999999999, 0.50443400000000005, 1.0);
        }
        if (val <= 0.160156)
        {
            return Colour::fromFloatRGBA(0.27059499999999997, 0.21406900000000001, 0.50705199999999995, 1.0);
        }
        if (val <= 0.164062)
        {
            return Colour::fromFloatRGBA(0.26930799999999999, 0.21881800000000001, 0.50957699999999995, 1.0);
        }
        if (val <= 0.167969)
        {
            return Colour::fromFloatRGBA(0.26796799999999998, 0.223549, 0.51200800000000002, 1.0);
        }
        if (val <= 0.171875)
        {
            return Colour::fromFloatRGBA(0.26657999999999998, 0.22826199999999999, 0.51434899999999995, 1.0);
        }
        if (val <= 0.175781)
        {
            return Colour::fromFloatRGBA(0.26514500000000002, 0.232956, 0.51659900000000003, 1.0);
        }
        if (val <= 0.179688)
        {
            return Colour::fromFloatRGBA(0.26366299999999998, 0.23763100000000001, 0.51876199999999995, 1.0);
        }
        if (val <= 0.183594)
        {
            return Colour::fromFloatRGBA(0.26213799999999998, 0.242286, 0.52083699999999999, 1.0);
        }
        if (val <= 0.187500)
        {
            return Colour::fromFloatRGBA(0.260571, 0.246922, 0.52282799999999996, 1.0);
        }
        if (val <= 0.191406)
        {
            return Colour::fromFloatRGBA(0.258965, 0.25153700000000001, 0.52473599999999998, 1.0);
        }
        if (val <= 0.195312)
        {
            return Colour::fromFloatRGBA(0.257322, 0.25613000000000002, 0.526563, 1.0);
        }
        if (val <= 0.199219)
        {
            return Colour::fromFloatRGBA(0.25564500000000001, 0.26070300000000002, 0.528312, 1.0);
        }
        if (val <= 0.203125)
        {
            return Colour::fromFloatRGBA(0.25393500000000002, 0.26525399999999999, 0.52998299999999998, 1.0);
        }
        if (val <= 0.207031)
        {
            return Colour::fromFloatRGBA(0.25219399999999997, 0.269783, 0.53157900000000002, 1.0);
        }
        if (val <= 0.210938)
        {
            return Colour::fromFloatRGBA(0.25042500000000001, 0.27428999999999998, 0.53310299999999999, 1.0);
        }
        if (val <= 0.214844)
        {
            return Colour::fromFloatRGBA(0.24862899999999999, 0.278775, 0.53455600000000003, 1.0);
        }
        if (val <= 0.218750)
        {
            return Colour::fromFloatRGBA(0.246811, 0.28323700000000002, 0.535941, 1.0);
        }
        if (val <= 0.222656)
        {
            return Colour::fromFloatRGBA(0.244972, 0.28767500000000001, 0.53725999999999996, 1.0);
        }
        if (val <= 0.226562)
        {
            return Colour::fromFloatRGBA(0.243113, 0.29209200000000002, 0.53851599999999999, 1.0);
        }
        if (val <= 0.230469)
        {
            return Colour::fromFloatRGBA(0.24123700000000001, 0.296485, 0.53970899999999999, 1.0);
        }
        if (val <= 0.234375)
        {
            return Colour::fromFloatRGBA(0.239346, 0.30085499999999998, 0.54084399999999999, 1.0);
        }
        if (val <= 0.238281)
        {
            return Colour::fromFloatRGBA(0.23744100000000001, 0.30520199999999997, 0.54192099999999999, 1.0);
        }
        if (val <= 0.242188)
        {
            return Colour::fromFloatRGBA(0.23552600000000001, 0.309527, 0.54294399999999998, 1.0);
        }
        if (val <= 0.246094)
        {
            return Colour::fromFloatRGBA(0.23360300000000001, 0.313828, 0.54391400000000001, 1.0);
        }
        if (val <= 0.250000)
        {
            return Colour::fromFloatRGBA(0.23167399999999999, 0.318106, 0.54483400000000004, 1.0);
        }
        if (val <= 0.253906)
        {
            return Colour::fromFloatRGBA(0.229739, 0.32236100000000001, 0.54570600000000002, 1.0);
        }
        if (val <= 0.257812)
        {
            return Colour::fromFloatRGBA(0.227802, 0.326594, 0.54653200000000002, 1.0);
        }
        if (val <= 0.261719)
        {
            return Colour::fromFloatRGBA(0.22586300000000001, 0.33080500000000002, 0.54731399999999997, 1.0);
        }
        if (val <= 0.265625)
        {
            return Colour::fromFloatRGBA(0.22392500000000001, 0.33499400000000001, 0.54805300000000001, 1.0);
        }
        if (val <= 0.269531)
        {
            return Colour::fromFloatRGBA(0.22198899999999999, 0.33916099999999999, 0.54875200000000002, 1.0);
        }
        if (val <= 0.273438)
        {
            return Colour::fromFloatRGBA(0.220057, 0.34330699999999997, 0.54941300000000004, 1.0);
        }
        if (val <= 0.277344)
        {
            return Colour::fromFloatRGBA(0.21812999999999999, 0.34743200000000002, 0.55003800000000003, 1.0);
        }
        if (val <= 0.281250)
        {
            return Colour::fromFloatRGBA(0.21621000000000001, 0.35153499999999999, 0.55062699999999998, 1.0);
        }
        if (val <= 0.285156)
        {
            return Colour::fromFloatRGBA(0.21429799999999999, 0.35561900000000002, 0.55118400000000001, 1.0);
        }
        if (val <= 0.289062)
        {
            return Colour::fromFloatRGBA(0.212395, 0.35968299999999997, 0.55171000000000003, 1.0);
        }
        if (val <= 0.292969)
        {
            return Colour::fromFloatRGBA(0.210503, 0.36372700000000002, 0.55220599999999997, 1.0);
        }
        if (val <= 0.296875)
        {
            return Colour::fromFloatRGBA(0.208623, 0.36775200000000002, 0.55267500000000003, 1.0);
        }
        if (val <= 0.300781)
        {
            return Colour::fromFloatRGBA(0.206756, 0.37175799999999998, 0.55311699999999997, 1.0);
        }
        if (val <= 0.304688)
        {
            return Colour::fromFloatRGBA(0.204903, 0.37574600000000002, 0.55353300000000005, 1.0);
        }
        if (val <= 0.308594)
        {
            return Colour::fromFloatRGBA(0.20306299999999999, 0.379716, 0.553925, 1.0);
        }
        if (val <= 0.312500)
        {
            return Colour::fromFloatRGBA(0.201239, 0.38367000000000001, 0.55429399999999995, 1.0);
        }
        if (val <= 0.316406)
        {
            return Colour::fromFloatRGBA(0.19943, 0.38760699999999998, 0.55464199999999997, 1.0);
        }
        if (val <= 0.320312)
        {
            return Colour::fromFloatRGBA(0.19763600000000001, 0.39152799999999999, 0.55496900000000005, 1.0);
        }
        if (val <= 0.324219)
        {
            return Colour::fromFloatRGBA(0.19586000000000001, 0.39543299999999998, 0.55527599999999999, 1.0);
        }
        if (val <= 0.328125)
        {
            return Colour::fromFloatRGBA(0.19409999999999999, 0.39932299999999998, 0.55556499999999998, 1.0);
        }
        if (val <= 0.332031)
        {
            return Colour::fromFloatRGBA(0.192357, 0.40319899999999997, 0.555836, 1.0);
        }
        if (val <= 0.335938)
        {
            return Colour::fromFloatRGBA(0.19063099999999999, 0.40706100000000001, 0.55608900000000006, 1.0);
        }
        if (val <= 0.339844)
        {
            return Colour::fromFloatRGBA(0.18892300000000001, 0.41091, 0.55632599999999999, 1.0);
        }
        if (val <= 0.343750)
        {
            return Colour::fromFloatRGBA(0.18723100000000001, 0.414746, 0.55654700000000001, 1.0);
        }
        if (val <= 0.347656)
        {
            return Colour::fromFloatRGBA(0.185556, 0.41857, 0.55675300000000005, 1.0);
        }
        if (val <= 0.351562)
        {
            return Colour::fromFloatRGBA(0.18389800000000001, 0.42238300000000001, 0.55694399999999999, 1.0);
        }
        if (val <= 0.355469)
        {
            return Colour::fromFloatRGBA(0.182256, 0.42618400000000001, 0.55711999999999995, 1.0);
        }
        if (val <= 0.359375)
        {
            return Colour::fromFloatRGBA(0.18062900000000001, 0.429975, 0.55728200000000006, 1.0);
        }
        if (val <= 0.363281)
        {
            return Colour::fromFloatRGBA(0.17901900000000001, 0.43375599999999997, 0.55742999999999998, 1.0);
        }
        if (val <= 0.367188)
        {
            return Colour::fromFloatRGBA(0.177423, 0.437527, 0.55756499999999998, 1.0);
        }
        if (val <= 0.371094)
        {
            return Colour::fromFloatRGBA(0.175841, 0.44129000000000002, 0.55768499999999999, 1.0);
        }
        if (val <= 0.375000)
        {
            return Colour::fromFloatRGBA(0.17427400000000001, 0.445044, 0.55779199999999995, 1.0);
        }
        if (val <= 0.378906)
        {
            return Colour::fromFloatRGBA(0.17271900000000001, 0.448791, 0.55788499999999996, 1.0);
        }
        if (val <= 0.382812)
        {
            return Colour::fromFloatRGBA(0.17117599999999999, 0.45252999999999999, 0.55796500000000004, 1.0);
        }
        if (val <= 0.386719)
        {
            return Colour::fromFloatRGBA(0.16964599999999999, 0.456262, 0.55803000000000003, 1.0);
        }
        if (val <= 0.390625)
        {
            return Colour::fromFloatRGBA(0.168126, 0.45998800000000001, 0.55808199999999997, 1.0);
        }
        if (val <= 0.394531)
        {
            return Colour::fromFloatRGBA(0.16661699999999999, 0.46370800000000001, 0.55811900000000003, 1.0);
        }
        if (val <= 0.398438)
        {
            return Colour::fromFloatRGBA(0.16511700000000001, 0.46742299999999998, 0.558141, 1.0);
        }
        if (val <= 0.402344)
        {
            return Colour::fromFloatRGBA(0.16362499999999999, 0.47113300000000002, 0.55814799999999998, 1.0);
        }
        if (val <= 0.406250)
        {
            return Colour::fromFloatRGBA(0.16214200000000001, 0.47483799999999998, 0.55813999999999997, 1.0);
        }
        if (val <= 0.410156)
        {
            return Colour::fromFloatRGBA(0.160665, 0.47854000000000002, 0.55811500000000003, 1.0);
        }
        if (val <= 0.414062)
        {
            return Colour::fromFloatRGBA(0.159194, 0.48223700000000003, 0.55807300000000004, 1.0);
        }
        if (val <= 0.417969)
        {
            return Colour::fromFloatRGBA(0.15772900000000001, 0.48593199999999998, 0.55801299999999998, 1.0);
        }
        if (val <= 0.421875)
        {
            return Colour::fromFloatRGBA(0.15626999999999999, 0.489624, 0.55793599999999999, 1.0);
        }
        if (val <= 0.425781)
        {
            return Colour::fromFloatRGBA(0.15481500000000001, 0.493313, 0.55784, 1.0);
        }
        if (val <= 0.429688)
        {
            return Colour::fromFloatRGBA(0.153364, 0.497, 0.557724, 1.0);
        }
        if (val <= 0.433594)
        {
            return Colour::fromFloatRGBA(0.151918, 0.50068500000000005, 0.55758700000000005, 1.0);
        }
        if (val <= 0.437500)
        {
            return Colour::fromFloatRGBA(0.150476, 0.50436899999999996, 0.55742999999999998, 1.0);
        }
        if (val <= 0.441406)
        {
            return Colour::fromFloatRGBA(0.149039, 0.50805100000000003, 0.55725000000000002, 1.0);
        }
        if (val <= 0.445312)
        {
            return Colour::fromFloatRGBA(0.14760699999999999, 0.51173299999999999, 0.55704900000000002, 1.0);
        }
        if (val <= 0.449219)
        {
            return Colour::fromFloatRGBA(0.14618, 0.51541300000000001, 0.55682299999999996, 1.0);
        }
        if (val <= 0.453125)
        {
            return Colour::fromFloatRGBA(0.144759, 0.51909300000000003, 0.55657199999999996, 1.0);
        }
        if (val <= 0.457031)
        {
            return Colour::fromFloatRGBA(0.143343, 0.52277300000000004, 0.55629499999999998, 1.0);
        }
        if (val <= 0.460938)
        {
            return Colour::fromFloatRGBA(0.14193500000000001, 0.52645299999999995, 0.55599100000000001, 1.0);
        }
        if (val <= 0.464844)
        {
            return Colour::fromFloatRGBA(0.14053599999999999, 0.53013200000000005, 0.55565900000000001, 1.0);
        }
        if (val <= 0.468750)
        {
            return Colour::fromFloatRGBA(0.13914699999999999, 0.53381199999999995, 0.55529799999999996, 1.0);
        }
        if (val <= 0.472656)
        {
            return Colour::fromFloatRGBA(0.13777, 0.53749199999999997, 0.55490600000000001, 1.0);
        }
        if (val <= 0.476562)
        {
            return Colour::fromFloatRGBA(0.136408, 0.54117300000000002, 0.55448299999999995, 1.0);
        }
        if (val <= 0.480469)
        {
            return Colour::fromFloatRGBA(0.13506599999999999, 0.54485300000000003, 0.55402899999999999, 1.0);
        }
        if (val <= 0.484375)
        {
            return Colour::fromFloatRGBA(0.133743, 0.54853499999999999, 0.55354099999999995, 1.0);
        }
        if (val <= 0.488281)
        {
            return Colour::fromFloatRGBA(0.13244400000000001, 0.55221600000000004, 0.55301800000000001, 1.0);
        }
        if (val <= 0.492188)
        {
            return Colour::fromFloatRGBA(0.13117200000000001, 0.55589900000000003, 0.55245900000000003, 1.0);
        }
        if (val <= 0.496094)
        {
            return Colour::fromFloatRGBA(0.12993299999999999, 0.55958200000000002, 0.55186400000000002, 1.0);
        }
        if (val <= 0.500000)
        {
            return Colour::fromFloatRGBA(0.12872900000000001, 0.56326500000000002, 0.55122899999999997, 1.0);
        }
        if (val <= 0.503906)
        {
            return Colour::fromFloatRGBA(0.12756799999999999, 0.56694900000000004, 0.55055600000000005, 1.0);
        }
        if (val <= 0.507812)
        {
            return Colour::fromFloatRGBA(0.12645300000000001, 0.57063299999999995, 0.54984100000000002, 1.0);
        }
        if (val <= 0.511719)
        {
            return Colour::fromFloatRGBA(0.12539400000000001, 0.574318, 0.54908599999999996, 1.0);
        }
        if (val <= 0.515625)
        {
            return Colour::fromFloatRGBA(0.12439500000000001, 0.57800200000000002, 0.54828699999999997, 1.0);
        }
        if (val <= 0.519531)
        {
            return Colour::fromFloatRGBA(0.123463, 0.58168699999999995, 0.54744499999999996, 1.0);
        }
        if (val <= 0.523438)
        {
            return Colour::fromFloatRGBA(0.12260600000000001, 0.58537099999999997, 0.54655699999999996, 1.0);
        }
        if (val <= 0.527344)
        {
            return Colour::fromFloatRGBA(0.12183099999999999, 0.589055, 0.54562299999999997, 1.0);
        }
        if (val <= 0.531250)
        {
            return Colour::fromFloatRGBA(0.12114800000000001, 0.59273900000000002, 0.54464100000000004, 1.0);
        }
        if (val <= 0.535156)
        {
            return Colour::fromFloatRGBA(0.12056500000000001, 0.59642200000000001, 0.54361099999999996, 1.0);
        }
        if (val <= 0.539062)
        {
            return Colour::fromFloatRGBA(0.120092, 0.60010399999999997, 0.54252999999999996, 1.0);
        }
        if (val <= 0.542969)
        {
            return Colour::fromFloatRGBA(0.119738, 0.60378500000000002, 0.54139999999999999, 1.0);
        }
        if (val <= 0.546875)
        {
            return Colour::fromFloatRGBA(0.11951199999999999, 0.607464, 0.54021799999999998, 1.0);
        }
        if (val <= 0.550781)
        {
            return Colour::fromFloatRGBA(0.119423, 0.61114100000000005, 0.53898199999999996, 1.0);
        }
        if (val <= 0.554688)
        {
            return Colour::fromFloatRGBA(0.11948300000000001, 0.61481699999999995, 0.53769199999999995, 1.0);
        }
        if (val <= 0.558594)
        {
            return Colour::fromFloatRGBA(0.119699, 0.61848999999999998, 0.53634700000000002, 1.0);
        }
        if (val <= 0.562500)
        {
            return Colour::fromFloatRGBA(0.12008099999999999, 0.62216099999999996, 0.53494600000000003, 1.0);
        }
        if (val <= 0.566406)
        {
            return Colour::fromFloatRGBA(0.120638, 0.62582800000000005, 0.53348799999999996, 1.0);
        }
        if (val <= 0.570312)
        {
            return Colour::fromFloatRGBA(0.12138, 0.62949200000000005, 0.53197300000000003, 1.0);
        }
        if (val <= 0.574219)
        {
            return Colour::fromFloatRGBA(0.122312, 0.63315299999999997, 0.53039800000000004, 1.0);
        }
        if (val <= 0.578125)
        {
            return Colour::fromFloatRGBA(0.123444, 0.63680899999999996, 0.52876299999999998, 1.0);
        }
        if (val <= 0.582031)
        {
            return Colour::fromFloatRGBA(0.12478, 0.64046099999999995, 0.52706799999999998, 1.0);
        }
        if (val <= 0.585938)
        {
            return Colour::fromFloatRGBA(0.12632599999999999, 0.64410699999999999, 0.52531099999999997, 1.0);
        }
        if (val <= 0.589844)
        {
            return Colour::fromFloatRGBA(0.12808700000000001, 0.64774900000000002, 0.52349100000000004, 1.0);
        }
        if (val <= 0.593750)
        {
            return Colour::fromFloatRGBA(0.13006699999999999, 0.65138399999999996, 0.52160799999999996, 1.0);
        }
        if (val <= 0.597656)
        {
            return Colour::fromFloatRGBA(0.132268, 0.65501399999999999, 0.51966100000000004, 1.0);
        }
        if (val <= 0.601562)
        {
            return Colour::fromFloatRGBA(0.13469200000000001, 0.658636, 0.51764900000000003, 1.0);
        }
        if (val <= 0.605469)
        {
            return Colour::fromFloatRGBA(0.13733899999999999, 0.66225199999999995, 0.515571, 1.0);
        }
        if (val <= 0.609375)
        {
            return Colour::fromFloatRGBA(0.14021, 0.66585899999999998, 0.51342699999999997, 1.0);
        }
        if (val <= 0.613281)
        {
            return Colour::fromFloatRGBA(0.14330300000000001, 0.66945900000000003, 0.51121499999999997, 1.0);
        }
        if (val <= 0.617188)
        {
            return Colour::fromFloatRGBA(0.146616, 0.67305000000000004, 0.50893600000000006, 1.0);
        }
        if (val <= 0.621094)
        {
            return Colour::fromFloatRGBA(0.150148, 0.67663099999999998, 0.50658899999999996, 1.0);
        }
        if (val <= 0.625000)
        {
            return Colour::fromFloatRGBA(0.153894, 0.680203, 0.50417199999999995, 1.0);
        }
        if (val <= 0.628906)
        {
            return Colour::fromFloatRGBA(0.15785099999999999, 0.68376499999999996, 0.50168599999999997, 1.0);
        }
        if (val <= 0.632812)
        {
            return Colour::fromFloatRGBA(0.16201599999999999, 0.68731600000000004, 0.49912899999999999, 1.0);
        }
        if (val <= 0.636719)
        {
            return Colour::fromFloatRGBA(0.166383, 0.69085600000000003, 0.496502, 1.0);
        }
        if (val <= 0.640625)
        {
            return Colour::fromFloatRGBA(0.17094799999999999, 0.694384, 0.49380299999999999, 1.0);
        }
        if (val <= 0.644531)
        {
            return Colour::fromFloatRGBA(0.175707, 0.69789999999999996, 0.491033, 1.0);
        }
        if (val <= 0.648438)
        {
            return Colour::fromFloatRGBA(0.18065300000000001, 0.70140199999999997, 0.48818899999999998, 1.0);
        }
        if (val <= 0.652344)
        {
            return Colour::fromFloatRGBA(0.185783, 0.70489100000000005, 0.48527300000000001, 1.0);
        }
        if (val <= 0.656250)
        {
            return Colour::fromFloatRGBA(0.19109000000000001, 0.70836600000000005, 0.48228399999999999, 1.0);
        }
        if (val <= 0.660156)
        {
            return Colour::fromFloatRGBA(0.196571, 0.71182699999999999, 0.47922100000000001, 1.0);
        }
        if (val <= 0.664062)
        {
            return Colour::fromFloatRGBA(0.20221900000000001, 0.71527200000000002, 0.47608400000000001, 1.0);
        }
        if (val <= 0.667969)
        {
            return Colour::fromFloatRGBA(0.20802999999999999, 0.71870100000000003, 0.47287299999999999, 1.0);
        }
        if (val <= 0.671875)
        {
            return Colour::fromFloatRGBA(0.214, 0.72211400000000003, 0.46958800000000001, 1.0);
        }
        if (val <= 0.675781)
        {
            return Colour::fromFloatRGBA(0.22012399999999999, 0.72550899999999996, 0.46622599999999997, 1.0);
        }
        if (val <= 0.679688)
        {
            return Colour::fromFloatRGBA(0.22639699999999999, 0.72888799999999998, 0.46278900000000001, 1.0);
        }
        if (val <= 0.683594)
        {
            return Colour::fromFloatRGBA(0.23281499999999999, 0.73224699999999998, 0.45927699999999999, 1.0);
        }
        if (val <= 0.687500)
        {
            return Colour::fromFloatRGBA(0.239374, 0.73558800000000002, 0.45568799999999998, 1.0);
        }
        if (val <= 0.691406)
        {
            return Colour::fromFloatRGBA(0.24607000000000001, 0.73890999999999996, 0.45202399999999998, 1.0);
        }
        if (val <= 0.695312)
        {
            return Colour::fromFloatRGBA(0.25289899999999998, 0.74221099999999995, 0.44828400000000002, 1.0);
        }
        if (val <= 0.699219)
        {
            return Colour::fromFloatRGBA(0.259857, 0.74549200000000004, 0.444467, 1.0);
        }
        if (val <= 0.703125)
        {
            return Colour::fromFloatRGBA(0.26694099999999998, 0.74875100000000006, 0.44057299999999999, 1.0);
        }
        if (val <= 0.707031)
        {
            return Colour::fromFloatRGBA(0.27414899999999998, 0.75198799999999999, 0.43660100000000002, 1.0);
        }
        if (val <= 0.710938)
        {
            return Colour::fromFloatRGBA(0.28147699999999998, 0.75520299999999996, 0.43255199999999999, 1.0);
        }
        if (val <= 0.714844)
        {
            return Colour::fromFloatRGBA(0.28892099999999998, 0.75839400000000001, 0.42842599999999997, 1.0);
        }
        if (val <= 0.718750)
        {
            return Colour::fromFloatRGBA(0.29647899999999999, 0.76156100000000004, 0.42422300000000002, 1.0);
        }
        if (val <= 0.722656)
        {
            return Colour::fromFloatRGBA(0.30414799999999997, 0.76470400000000005, 0.41994300000000001, 1.0);
        }
        if (val <= 0.726562)
        {
            return Colour::fromFloatRGBA(0.31192500000000001, 0.767822, 0.41558600000000001, 1.0);
        }
        if (val <= 0.730469)
        {
            return Colour::fromFloatRGBA(0.31980900000000001, 0.77091399999999999, 0.41115200000000002, 1.0);
        }
        if (val <= 0.734375)
        {
            return Colour::fromFloatRGBA(0.32779599999999998, 0.77398, 0.40664, 1.0);
        }
        if (val <= 0.738281)
        {
            return Colour::fromFloatRGBA(0.33588499999999999, 0.77701799999999999, 0.40204899999999999, 1.0);
        }
        if (val <= 0.742188)
        {
            return Colour::fromFloatRGBA(0.34407399999999999, 0.78002899999999997, 0.39738099999999998, 1.0);
        }
        if (val <= 0.746094)
        {
            return Colour::fromFloatRGBA(0.35236000000000001, 0.78301100000000001, 0.39263599999999999, 1.0);
        }
        if (val <= 0.750000)
        {
            return Colour::fromFloatRGBA(0.36074099999999998, 0.785964, 0.38781399999999999, 1.0);
        }
        if (val <= 0.753906)
        {
            return Colour::fromFloatRGBA(0.36921399999999999, 0.78888800000000003, 0.38291399999999998, 1.0);
        }
        if (val <= 0.757812)
        {
            return Colour::fromFloatRGBA(0.37777899999999998, 0.79178099999999996, 0.37793900000000002, 1.0);
        }
        if (val <= 0.761719)
        {
            return Colour::fromFloatRGBA(0.38643300000000003, 0.79464400000000002, 0.372886, 1.0);
        }
        if (val <= 0.765625)
        {
            return Colour::fromFloatRGBA(0.39517400000000003, 0.79747500000000004, 0.367757, 1.0);
        }
        if (val <= 0.769531)
        {
            return Colour::fromFloatRGBA(0.404001, 0.80027499999999996, 0.36255199999999999, 1.0);
        }
        if (val <= 0.773438)
        {
            return Colour::fromFloatRGBA(0.41291299999999997, 0.803041, 0.357269, 1.0);
        }
        if (val <= 0.777344)
        {
            return Colour::fromFloatRGBA(0.42190800000000001, 0.80577399999999999, 0.35191, 1.0);
        }
        if (val <= 0.781250)
        {
            return Colour::fromFloatRGBA(0.430983, 0.808473, 0.34647600000000001, 1.0);
        }
        if (val <= 0.785156)
        {
            return Colour::fromFloatRGBA(0.440137, 0.81113800000000003, 0.34096700000000002, 1.0);
        }
        if (val <= 0.789062)
        {
            return Colour::fromFloatRGBA(0.44936799999999999, 0.81376800000000005, 0.33538400000000002, 1.0);
        }
        if (val <= 0.792969)
        {
            return Colour::fromFloatRGBA(0.45867400000000003, 0.81636299999999995, 0.32972699999999999, 1.0);
        }
        if (val <= 0.796875)
        {
            return Colour::fromFloatRGBA(0.468053, 0.81892100000000001, 0.32399800000000001, 1.0);
        }
        if (val <= 0.800781)
        {
            return Colour::fromFloatRGBA(0.47750399999999998, 0.82144399999999995, 0.31819500000000001, 1.0);
        }
        if (val <= 0.804688)
        {
            return Colour::fromFloatRGBA(0.48702600000000001, 0.82392900000000002, 0.31232100000000002, 1.0);
        }
        if (val <= 0.808594)
        {
            return Colour::fromFloatRGBA(0.49661499999999997, 0.826376, 0.30637700000000001, 1.0);
        }
        if (val <= 0.812500)
        {
            return Colour::fromFloatRGBA(0.50627100000000003, 0.82878600000000002, 0.30036200000000002, 1.0);
        }
        if (val <= 0.816406)
        {
            return Colour::fromFloatRGBA(0.51599200000000001, 0.83115799999999995, 0.29427900000000001, 1.0);
        }
        if (val <= 0.820312)
        {
            return Colour::fromFloatRGBA(0.52577600000000002, 0.83349099999999998, 0.28812700000000002, 1.0);
        }
        if (val <= 0.824219)
        {
            return Colour::fromFloatRGBA(0.53562100000000001, 0.835785, 0.28190799999999999, 1.0);
        }
        if (val <= 0.828125)
        {
            return Colour::fromFloatRGBA(0.54552400000000001, 0.83803899999999998, 0.27562599999999998, 1.0);
        }
        if (val <= 0.832031)
        {
            return Colour::fromFloatRGBA(0.55548399999999998, 0.84025399999999995, 0.26928099999999999, 1.0);
        }
        if (val <= 0.835938)
        {
            return Colour::fromFloatRGBA(0.56549799999999995, 0.84243000000000001, 0.26287700000000003, 1.0);
        }
        if (val <= 0.839844)
        {
            return Colour::fromFloatRGBA(0.57556300000000005, 0.84456600000000004, 0.256415, 1.0);
        }
        if (val <= 0.843750)
        {
            return Colour::fromFloatRGBA(0.58567800000000003, 0.846661, 0.24989700000000001, 1.0);
        }
        if (val <= 0.847656)
        {
            return Colour::fromFloatRGBA(0.59583900000000001, 0.84871700000000005, 0.24332899999999999, 1.0);
        }
        if (val <= 0.851562)
        {
            return Colour::fromFloatRGBA(0.60604499999999994, 0.85073299999999996, 0.23671200000000001, 1.0);
        }
        if (val <= 0.855469)
        {
            return Colour::fromFloatRGBA(0.61629299999999998, 0.85270900000000005, 0.23005200000000001, 1.0);
        }
        if (val <= 0.859375)
        {
            return Colour::fromFloatRGBA(0.626579, 0.85464499999999999, 0.223353, 1.0);
        }
        if (val <= 0.863281)
        {
            return Colour::fromFloatRGBA(0.63690199999999997, 0.85654200000000003, 0.21662000000000001, 1.0);
        }
        if (val <= 0.867188)
        {
            return Colour::fromFloatRGBA(0.64725699999999997, 0.85840000000000005, 0.20986099999999999, 1.0);
        }
        if (val <= 0.871094)
        {
            return Colour::fromFloatRGBA(0.65764199999999995, 0.86021899999999996, 0.20308200000000001, 1.0);
        }
        if (val <= 0.875000)
        {
            return Colour::fromFloatRGBA(0.66805400000000004, 0.86199899999999996, 0.196293, 1.0);
        }
        if (val <= 0.878906)
        {
            return Colour::fromFloatRGBA(0.67848900000000001, 0.86374200000000001, 0.189503, 1.0);
        }
        if (val <= 0.882812)
        {
            return Colour::fromFloatRGBA(0.688944, 0.865448, 0.182725, 1.0);
        }
        if (val <= 0.886719)
        {
            return Colour::fromFloatRGBA(0.69941500000000001, 0.86711700000000003, 0.17597099999999999, 1.0);
        }
        if (val <= 0.890625)
        {
            return Colour::fromFloatRGBA(0.70989800000000003, 0.86875100000000005, 0.16925699999999999, 1.0);
        }
        if (val <= 0.894531)
        {
            return Colour::fromFloatRGBA(0.720391, 0.87034999999999996, 0.162603, 1.0);
        }
        if (val <= 0.898438)
        {
            return Colour::fromFloatRGBA(0.73088900000000001, 0.87191600000000002, 0.156029, 1.0);
        }
        if (val <= 0.902344)
        {
            return Colour::fromFloatRGBA(0.74138800000000005, 0.87344900000000003, 0.149561, 1.0);
        }
        if (val <= 0.906250)
        {
            return Colour::fromFloatRGBA(0.751884, 0.87495100000000003, 0.14322799999999999, 1.0);
        }
        if (val <= 0.910156)
        {
            return Colour::fromFloatRGBA(0.76237299999999997, 0.87642399999999998, 0.13706399999999999, 1.0);
        }
        if (val <= 0.914062)
        {
            return Colour::fromFloatRGBA(0.77285199999999998, 0.87786799999999998, 0.131109, 1.0);
        }
        if (val <= 0.917969)
        {
            return Colour::fromFloatRGBA(0.78331499999999998, 0.87928499999999998, 0.12540499999999999, 1.0);
        }
        if (val <= 0.921875)
        {
            return Colour::fromFloatRGBA(0.79376000000000002, 0.88067799999999996, 0.120005, 1.0);
        }
        if (val <= 0.925781)
        {
            return Colour::fromFloatRGBA(0.80418199999999995, 0.882046, 0.114965, 1.0);
        }
        if (val <= 0.929688)
        {
            return Colour::fromFloatRGBA(0.81457599999999997, 0.88339299999999998, 0.110347, 1.0);
        }
        if (val <= 0.933594)
        {
            return Colour::fromFloatRGBA(0.82494000000000001, 0.88471999999999995, 0.10621700000000001, 1.0);
        }
        if (val <= 0.937500)
        {
            return Colour::fromFloatRGBA(0.83526999999999996, 0.88602899999999996, 0.102646, 1.0);
        }
        if (val <= 0.941406)
        {
            return Colour::fromFloatRGBA(0.84556100000000001, 0.88732200000000006, 0.099701999999999999, 1.0);
        }
        if (val <= 0.945312)
        {
            return Colour::fromFloatRGBA(0.85580999999999996, 0.88860099999999997, 0.097451999999999997, 1.0);
        }
        if (val <= 0.949219)
        {
            return Colour::fromFloatRGBA(0.86601300000000003, 0.88986799999999999, 0.095952999999999997, 1.0);
        }
        if (val <= 0.953125)
        {
            return Colour::fromFloatRGBA(0.87616799999999995, 0.89112499999999994, 0.095250000000000001, 1.0);
        }
        if (val <= 0.957031)
        {
            return Colour::fromFloatRGBA(0.88627100000000003, 0.892374, 0.095374, 1.0);
        }
        if (val <= 0.960938)
        {
            return Colour::fromFloatRGBA(0.89632000000000001, 0.89361599999999997, 0.096335000000000004, 1.0);
        }
        if (val <= 0.964844)
        {
            return Colour::fromFloatRGBA(0.90631099999999998, 0.89485499999999996, 0.098125000000000004, 1.0);
        }
        if (val <= 0.968750)
        {
            return Colour::fromFloatRGBA(0.916242, 0.89609099999999997, 0.100717, 1.0);
        }
        if (val <= 0.972656)
        {
            return Colour::fromFloatRGBA(0.92610599999999998, 0.89732999999999996, 0.104071, 1.0);
        }
        if (val <= 0.976562)
        {
            return Colour::fromFloatRGBA(0.93590399999999996, 0.89856999999999998, 0.108131, 1.0);
        }
        if (val <= 0.980469)
        {
            return Colour::fromFloatRGBA(0.94563600000000003, 0.89981500000000003, 0.11283799999999999, 1.0);
        }
        if (val <= 0.984375)
        {
            return Colour::fromFloatRGBA(0.95530000000000004, 0.901065, 0.118128, 1.0);
        }
        if (val <= 0.988281)
        {
            return Colour::fromFloatRGBA(0.96489400000000003, 0.90232299999999999, 0.123941, 1.0);
        }
        if (val <= 0.992188)
        {
            return Colour::fromFloatRGBA(0.97441699999999998, 0.90359, 0.130215, 1.0);
        }
        if (val <= 0.996094)
        {
            return Colour::fromFloatRGBA(0.98386799999999996, 0.90486699999999998, 0.13689699999999999, 1.0);
        }

        return Colour::fromFloatRGBA(0.99324800000000002, 0.90615699999999999, 0.14393600000000001, 1.0);
    }

    Colour colourFromSpectral(float val)
    {

        if (val <= 0.003906)
        {
            return Colour::fromFloatRGBA(0.6196078431372549, 0.00392156862745098, 0.25882352941176473, 1.0);
        }
        if (val <= 0.007812)
        {
            return Colour::fromFloatRGBA(0.6280661284121491, 0.013302575932333718, 0.26082276047673975, 1.0);
        }
        if (val <= 0.011718000000000001)
        {
            return Colour::fromFloatRGBA(0.6365244136870435, 0.022683583237216455, 0.26282199154171476, 1.0);
        }
        if (val <= 0.015624)
        {
            return Colour::fromFloatRGBA(0.6449826989619377, 0.03206459054209919, 0.2648212226066898, 1.0);
        }
        if (val <= 0.019530000000000002)
        {
            return Colour::fromFloatRGBA(0.6534409842368321, 0.04144559784698193, 0.2668204536716648, 1.0);
        }
        if (val <= 0.023436000000000002)
        {
            return Colour::fromFloatRGBA(0.6618992695117263, 0.050826605151864664, 0.26881968473663975, 1.0);
        }
        if (val <= 0.027342)
        {
            return Colour::fromFloatRGBA(0.6703575547866205, 0.0602076124567474, 0.27081891580161477, 1.0);
        }
        if (val <= 0.031248)
        {
            return Colour::fromFloatRGBA(0.6788158400615149, 0.06958861976163014, 0.2728181468665898, 1.0);
        }
        if (val <= 0.035154000000000005)
        {
            return Colour::fromFloatRGBA(0.6872741253364091, 0.07896962706651288, 0.2748173779315648, 1.0);
        }
        if (val <= 0.039060000000000004)
        {
            return Colour::fromFloatRGBA(0.6957324106113034, 0.08835063437139562, 0.2768166089965398, 1.0);
        }
        if (val <= 0.042966000000000004)
        {
            return Colour::fromFloatRGBA(0.7041906958861976, 0.09773164167627835, 0.27881584006151483, 1.0);
        }
        if (val <= 0.046872000000000004)
        {
            return Colour::fromFloatRGBA(0.7126489811610919, 0.10711264898116109, 0.28081507112648985, 1.0);
        }
        if (val <= 0.050778000000000004)
        {
            return Colour::fromFloatRGBA(0.7211072664359862, 0.11649365628604381, 0.28281430219146486, 1.0);
        }
        if (val <= 0.054684)
        {
            return Colour::fromFloatRGBA(0.7295655517108804, 0.12587466359092656, 0.2848135332564398, 1.0);
        }
        if (val <= 0.05859)
        {
            return Colour::fromFloatRGBA(0.7380238369857748, 0.1352556708958093, 0.28681276432141484, 1.0);
        }
        if (val <= 0.062496)
        {
            return Colour::fromFloatRGBA(0.746482122260669, 0.14463667820069204, 0.28881199538638985, 1.0);
        }
        if (val <= 0.066402)
        {
            return Colour::fromFloatRGBA(0.7549404075355632, 0.15401768550557476, 0.29081122645136487, 1.0);
        }
        if (val <= 0.07030800000000001)
        {
            return Colour::fromFloatRGBA(0.7633986928104575, 0.1633986928104575, 0.2928104575163399, 1.0);
        }
        if (val <= 0.07421400000000002)
        {
            return Colour::fromFloatRGBA(0.7718569780853518, 0.17277970011534027, 0.2948096885813149, 1.0);
        }
        if (val <= 0.07812000000000001)
        {
            return Colour::fromFloatRGBA(0.7803152633602461, 0.182160707420223, 0.2968089196462899, 1.0);
        }
        if (val <= 0.08202600000000002)
        {
            return Colour::fromFloatRGBA(0.7887735486351404, 0.19154171472510573, 0.29880815071126493, 1.0);
        }
        if (val <= 0.08593200000000001)
        {
            return Colour::fromFloatRGBA(0.7972318339100346, 0.20092272202998845, 0.3008073817762399, 1.0);
        }
        if (val <= 0.08983800000000002)
        {
            return Colour::fromFloatRGBA(0.8056901191849289, 0.21030372933487118, 0.3028066128412149, 1.0);
        }
        if (val <= 0.09374400000000001)
        {
            return Colour::fromFloatRGBA(0.8141484044598232, 0.2196847366397539, 0.3048058439061899, 1.0);
        }
        if (val <= 0.09765000000000001)
        {
            return Colour::fromFloatRGBA(0.8226066897347175, 0.22906574394463664, 0.30680507497116494, 1.0);
        }
        if (val <= 0.10155600000000001)
        {
            return Colour::fromFloatRGBA(0.8310649750096117, 0.23844675124951936, 0.30880430603613995, 1.0);
        }
        if (val <= 0.10546200000000001)
        {
            return Colour::fromFloatRGBA(0.8376778162245291, 0.2467512495194156, 0.308881199538639, 1.0);
        }
        if (val <= 0.109368)
        {
            return Colour::fromFloatRGBA(0.8424452133794694, 0.25397923875432526, 0.3070357554786621, 1.0);
        }
        if (val <= 0.11327400000000001)
        {
            return Colour::fromFloatRGBA(0.8472126105344099, 0.2612072279892349, 0.30519031141868513, 1.0);
        }
        if (val <= 0.11718)
        {
            return Colour::fromFloatRGBA(0.8519800076893502, 0.26843521722414454, 0.3033448673587082, 1.0);
        }
        if (val <= 0.12108600000000001)
        {
            return Colour::fromFloatRGBA(0.8567474048442907, 0.2756632064590542, 0.30149942329873125, 1.0);
        }
        if (val <= 0.124992)
        {
            return Colour::fromFloatRGBA(0.8615148019992311, 0.28289119569396387, 0.2996539792387543, 1.0);
        }
        if (val <= 0.128898)
        {
            return Colour::fromFloatRGBA(0.8662821991541715, 0.2901191849288735, 0.2978085351787774, 1.0);
        }
        if (val <= 0.132804)
        {
            return Colour::fromFloatRGBA(0.8710495963091118, 0.2973471741637831, 0.2959630911188005, 1.0);
        }
        if (val <= 0.13671)
        {
            return Colour::fromFloatRGBA(0.8758169934640523, 0.3045751633986928, 0.29411764705882354, 1.0);
        }
        if (val <= 0.140616)
        {
            return Colour::fromFloatRGBA(0.8805843906189927, 0.3118031526336025, 0.2922722029988466, 1.0);
        }
        if (val <= 0.144522)
        {
            return Colour::fromFloatRGBA(0.8853517877739331, 0.3190311418685121, 0.29042675893886966, 1.0);
        }
        if (val <= 0.148428)
        {
            return Colour::fromFloatRGBA(0.8901191849288735, 0.3262591311034217, 0.28858131487889277, 1.0);
        }
        if (val <= 0.152334)
        {
            return Colour::fromFloatRGBA(0.894886582083814, 0.3334871203383314, 0.28673587081891583, 1.0);
        }
        if (val <= 0.15624)
        {
            return Colour::fromFloatRGBA(0.8996539792387543, 0.340715109573241, 0.2848904267589389, 1.0);
        }
        if (val <= 0.160146)
        {
            return Colour::fromFloatRGBA(0.9044213763936948, 0.34794309880815066, 0.28304498269896194, 1.0);
        }
        if (val <= 0.164052)
        {
            return Colour::fromFloatRGBA(0.9091887735486351, 0.3551710880430603, 0.281199538638985, 1.0);
        }
        if (val <= 0.167958)
        {
            return Colour::fromFloatRGBA(0.9139561707035756, 0.36239907727797, 0.27935409457900806, 1.0);
        }
        if (val <= 0.171864)
        {
            return Colour::fromFloatRGBA(0.9187235678585159, 0.3696270665128797, 0.2775086505190312, 1.0);
        }
        if (val <= 0.17577)
        {
            return Colour::fromFloatRGBA(0.9234909650134564, 0.3768550557477893, 0.27566320645905423, 1.0);
        }
        if (val <= 0.179676)
        {
            return Colour::fromFloatRGBA(0.9282583621683967, 0.3840830449826989, 0.2738177623990773, 1.0);
        }
        if (val <= 0.183582)
        {
            return Colour::fromFloatRGBA(0.9330257593233372, 0.3913110342176086, 0.27197231833910035, 1.0);
        }
        if (val <= 0.187488)
        {
            return Colour::fromFloatRGBA(0.9377931564782777, 0.39853902345251824, 0.2701268742791234, 1.0);
        }
        if (val <= 0.191394)
        {
            return Colour::fromFloatRGBA(0.942560553633218, 0.4057670126874279, 0.2682814302191465, 1.0);
        }
        if (val <= 0.1953)
        {
            return Colour::fromFloatRGBA(0.9473279507881585, 0.4129950019223375, 0.2664359861591696, 1.0);
        }
        if (val <= 0.199206)
        {
            return Colour::fromFloatRGBA(0.9520953479430989, 0.4202229911572472, 0.26459054209919264, 1.0);
        }
        if (val <= 0.20311200000000001)
        {
            return Colour::fromFloatRGBA(0.9568627450980393, 0.42745098039215684, 0.2627450980392157, 1.0);
        }
        if (val <= 0.207018)
        {
            return Colour::fromFloatRGBA(0.958246828143022, 0.43744713571703187, 0.267358708189158, 1.0);
        }
        if (val <= 0.210924)
        {
            return Colour::fromFloatRGBA(0.9596309111880047, 0.44744329104190683, 0.2719723183391003, 1.0);
        }
        if (val <= 0.21483)
        {
            return Colour::fromFloatRGBA(0.9610149942329873, 0.45743944636678197, 0.2765859284890427, 1.0);
        }
        if (val <= 0.218736)
        {
            return Colour::fromFloatRGBA(0.96239907727797, 0.46743560169165704, 0.281199538638985, 1.0);
        }
        if (val <= 0.222642)
        {
            return Colour::fromFloatRGBA(0.9637831603229527, 0.47743175701653207, 0.28581314878892733, 1.0);
        }
        if (val <= 0.226548)
        {
            return Colour::fromFloatRGBA(0.9651672433679355, 0.48742791234140703, 0.2904267589388696, 1.0);
        }
        if (val <= 0.230454)
        {
            return Colour::fromFloatRGBA(0.9665513264129182, 0.49742406766628217, 0.295040369088812, 1.0);
        }
        if (val <= 0.23436)
        {
            return Colour::fromFloatRGBA(0.9679354094579008, 0.5074202229911572, 0.2996539792387543, 1.0);
        }
        if (val <= 0.238266)
        {
            return Colour::fromFloatRGBA(0.9693194925028835, 0.5174163783160323, 0.30426758938869664, 1.0);
        }
        if (val <= 0.242172)
        {
            return Colour::fromFloatRGBA(0.9707035755478662, 0.5274125336409072, 0.3088811995386389, 1.0);
        }
        if (val <= 0.246078)
        {
            return Colour::fromFloatRGBA(0.972087658592849, 0.5374086889657823, 0.3134948096885813, 1.0);
        }
        if (val <= 0.249984)
        {
            return Colour::fromFloatRGBA(0.9734717416378317, 0.5474048442906574, 0.3181084198385236, 1.0);
        }
        if (val <= 0.25389)
        {
            return Colour::fromFloatRGBA(0.9748558246828143, 0.5574009996155325, 0.32272202998846594, 1.0);
        }
        if (val <= 0.257796)
        {
            return Colour::fromFloatRGBA(0.976239907727797, 0.5673971549404074, 0.32733564013840827, 1.0);
        }
        if (val <= 0.26170200000000005)
        {
            return Colour::fromFloatRGBA(0.9776239907727797, 0.5773933102652824, 0.33194925028835054, 1.0);
        }
        if (val <= 0.265608)
        {
            return Colour::fromFloatRGBA(0.9790080738177624, 0.5873894655901576, 0.3365628604382929, 1.0);
        }
        if (val <= 0.26951400000000003)
        {
            return Colour::fromFloatRGBA(0.9803921568627452, 0.5973856209150326, 0.34117647058823525, 1.0);
        }
        if (val <= 0.27342000000000005)
        {
            return Colour::fromFloatRGBA(0.9817762399077278, 0.6073817762399076, 0.3457900807381776, 1.0);
        }
        if (val <= 0.277326)
        {
            return Colour::fromFloatRGBA(0.9831603229527105, 0.6173779315647827, 0.3504036908881199, 1.0);
        }
        if (val <= 0.28123200000000004)
        {
            return Colour::fromFloatRGBA(0.9845444059976932, 0.6273740868896577, 0.3550173010380622, 1.0);
        }
        if (val <= 0.28513800000000006)
        {
            return Colour::fromFloatRGBA(0.9859284890426759, 0.6373702422145328, 0.35963091118800455, 1.0);
        }
        if (val <= 0.289044)
        {
            return Colour::fromFloatRGBA(0.9873125720876587, 0.6473663975394078, 0.3642445213379469, 1.0);
        }
        if (val <= 0.29295000000000004)
        {
            return Colour::fromFloatRGBA(0.9886966551326413, 0.6573625528642827, 0.36885813148788915, 1.0);
        }
        if (val <= 0.296856)
        {
            return Colour::fromFloatRGBA(0.990080738177624, 0.6673587081891579, 0.37347174163783153, 1.0);
        }
        if (val <= 0.30076200000000003)
        {
            return Colour::fromFloatRGBA(0.9914648212226067, 0.677354863514033, 0.37808535178777386, 1.0);
        }
        if (val <= 0.30466800000000005)
        {
            return Colour::fromFloatRGBA(0.9922337562475971, 0.6861976163014224, 0.38362168396770463, 1.0);
        }
        if (val <= 0.308574)
        {
            return Colour::fromFloatRGBA(0.9923875432525952, 0.6938869665513263, 0.3900807381776239, 1.0);
        }
        if (val <= 0.31248000000000004)
        {
            return Colour::fromFloatRGBA(0.9925413302575933, 0.7015763168012302, 0.39653979238754317, 1.0);
        }
        if (val <= 0.31638600000000006)
        {
            return Colour::fromFloatRGBA(0.9926951172625913, 0.7092656670511341, 0.40299884659746243, 1.0);
        }
        if (val <= 0.320292)
        {
            return Colour::fromFloatRGBA(0.9928489042675894, 0.716955017301038, 0.40945790080738165, 1.0);
        }
        if (val <= 0.32419800000000004)
        {
            return Colour::fromFloatRGBA(0.9930026912725874, 0.7246443675509417, 0.41591695501730086, 1.0);
        }
        if (val <= 0.32810400000000006)
        {
            return Colour::fromFloatRGBA(0.9931564782775856, 0.7323337178008458, 0.4223760092272202, 1.0);
        }
        if (val <= 0.33201)
        {
            return Colour::fromFloatRGBA(0.9933102652825836, 0.7400230680507497, 0.42883506343713945, 1.0);
        }
        if (val <= 0.33591600000000005)
        {
            return Colour::fromFloatRGBA(0.9934640522875817, 0.7477124183006535, 0.4352941176470587, 1.0);
        }
        if (val <= 0.339822)
        {
            return Colour::fromFloatRGBA(0.9936178392925799, 0.7554017685505574, 0.441753171856978, 1.0);
        }
        if (val <= 0.34372800000000003)
        {
            return Colour::fromFloatRGBA(0.9937716262975779, 0.7630911188004613, 0.44821222606689726, 1.0);
        }
        if (val <= 0.34763400000000005)
        {
            return Colour::fromFloatRGBA(0.993925413302576, 0.7707804690503652, 0.4546712802768165, 1.0);
        }
        if (val <= 0.35154)
        {
            return Colour::fromFloatRGBA(0.994079200307574, 0.778469819300269, 0.4611303344867358, 1.0);
        }
        if (val <= 0.35544600000000004)
        {
            return Colour::fromFloatRGBA(0.9942329873125721, 0.7861591695501728, 0.46758938869665495, 1.0);
        }
        if (val <= 0.35935200000000006)
        {
            return Colour::fromFloatRGBA(0.9943867743175702, 0.7938485198000769, 0.47404844290657433, 1.0);
        }
        if (val <= 0.363258)
        {
            return Colour::fromFloatRGBA(0.9945405613225683, 0.8015378700499807, 0.48050749711649354, 1.0);
        }
        if (val <= 0.36716400000000005)
        {
            return Colour::fromFloatRGBA(0.9946943483275663, 0.8092272202998846, 0.48696655132641287, 1.0);
        }
        if (val <= 0.37107)
        {
            return Colour::fromFloatRGBA(0.9948481353325644, 0.8169165705497885, 0.4934256055363321, 1.0);
        }
        if (val <= 0.37497600000000003)
        {
            return Colour::fromFloatRGBA(0.9950019223375625, 0.8246059207996924, 0.4998846597462514, 1.0);
        }
        if (val <= 0.37888200000000005)
        {
            return Colour::fromFloatRGBA(0.9951557093425606, 0.8322952710495963, 0.5063437139561706, 1.0);
        }
        if (val <= 0.382788)
        {
            return Colour::fromFloatRGBA(0.9953094963475586, 0.8399846212995001, 0.5128027681660899, 1.0);
        }
        if (val <= 0.38669400000000004)
        {
            return Colour::fromFloatRGBA(0.9954632833525567, 0.8476739715494039, 0.519261822376009, 1.0);
        }
        if (val <= 0.39060000000000006)
        {
            return Colour::fromFloatRGBA(0.9956170703575548, 0.855363321799308, 0.5257208765859285, 1.0);
        }
        if (val <= 0.394506)
        {
            return Colour::fromFloatRGBA(0.9957708573625529, 0.8630526720492118, 0.5321799307958477, 1.0);
        }
        if (val <= 0.39841200000000004)
        {
            return Colour::fromFloatRGBA(0.9959246443675509, 0.8707420222991157, 0.5386389850057669, 1.0);
        }
        if (val <= 0.40231800000000006)
        {
            return Colour::fromFloatRGBA(0.996078431372549, 0.8784313725490196, 0.5450980392156862, 1.0);
        }
        if (val <= 0.40622400000000003)
        {
            return Colour::fromFloatRGBA(0.9962322183775472, 0.88319876970396, 0.5530949634755863, 1.0);
        }
        if (val <= 0.41013000000000005)
        {
            return Colour::fromFloatRGBA(0.9963860053825452, 0.8879661668589004, 0.5610918877354863, 1.0);
        }
        if (val <= 0.414036)
        {
            return Colour::fromFloatRGBA(0.9965397923875433, 0.8927335640138409, 0.5690888119953863, 1.0);
        }
        if (val <= 0.41794200000000004)
        {
            return Colour::fromFloatRGBA(0.9966935793925413, 0.8975009611687812, 0.5770857362552863, 1.0);
        }
        if (val <= 0.42184800000000006)
        {
            return Colour::fromFloatRGBA(0.9968473663975395, 0.9022683583237217, 0.5850826605151864, 1.0);
        }
        if (val <= 0.425754)
        {
            return Colour::fromFloatRGBA(0.9970011534025375, 0.907035755478662, 0.5930795847750865, 1.0);
        }
        if (val <= 0.42966000000000004)
        {
            return Colour::fromFloatRGBA(0.9971549404075356, 0.9118031526336025, 0.6010765090349866, 1.0);
        }
        if (val <= 0.43356600000000006)
        {
            return Colour::fromFloatRGBA(0.9973087274125336, 0.9165705497885429, 0.6090734332948865, 1.0);
        }
        if (val <= 0.437472)
        {
            return Colour::fromFloatRGBA(0.9974625144175318, 0.9213379469434833, 0.6170703575547866, 1.0);
        }
        if (val <= 0.44137800000000005)
        {
            return Colour::fromFloatRGBA(0.9976163014225298, 0.9261053440984237, 0.6250672818146866, 1.0);
        }
        if (val <= 0.44528400000000007)
        {
            return Colour::fromFloatRGBA(0.9977700884275279, 0.930872741253364, 0.6330642060745867, 1.0);
        }
        if (val <= 0.44919000000000003)
        {
            return Colour::fromFloatRGBA(0.9979238754325259, 0.9356401384083044, 0.6410611303344866, 1.0);
        }
        if (val <= 0.45309600000000005)
        {
            return Colour::fromFloatRGBA(0.998077662437524, 0.9404075355632449, 0.6490580545943867, 1.0);
        }
        if (val <= 0.457002)
        {
            return Colour::fromFloatRGBA(0.9982314494425221, 0.9451749327181853, 0.6570549788542868, 1.0);
        }
        if (val <= 0.46090800000000004)
        {
            return Colour::fromFloatRGBA(0.9983852364475202, 0.9499423298731258, 0.6650519031141868, 1.0);
        }
        if (val <= 0.46481400000000006)
        {
            return Colour::fromFloatRGBA(0.9985390234525182, 0.9547097270280661, 0.6730488273740869, 1.0);
        }
        if (val <= 0.46872)
        {
            return Colour::fromFloatRGBA(0.9986928104575163, 0.9594771241830066, 0.681045751633987, 1.0);
        }
        if (val <= 0.47262600000000005)
        {
            return Colour::fromFloatRGBA(0.9988465974625145, 0.9642445213379469, 0.689042675893887, 1.0);
        }
        if (val <= 0.47653200000000007)
        {
            return Colour::fromFloatRGBA(0.9990003844675125, 0.9690119184928874, 0.697039600153787, 1.0);
        }
        if (val <= 0.48043800000000003)
        {
            return Colour::fromFloatRGBA(0.9991541714725106, 0.9737793156478277, 0.7050365244136869, 1.0);
        }
        if (val <= 0.48434400000000005)
        {
            return Colour::fromFloatRGBA(0.9993079584775086, 0.9785467128027682, 0.7130334486735871, 1.0);
        }
        if (val <= 0.48825)
        {
            return Colour::fromFloatRGBA(0.9994617454825068, 0.9833141099577085, 0.7210303729334872, 1.0);
        }
        if (val <= 0.49215600000000004)
        {
            return Colour::fromFloatRGBA(0.9996155324875048, 0.988081507112649, 0.7290272971933871, 1.0);
        }
        if (val <= 0.49606200000000006)
        {
            return Colour::fromFloatRGBA(0.9997693194925029, 0.9928489042675894, 0.7370242214532872, 1.0);
        }
        if (val <= 0.499968)
        {
            return Colour::fromFloatRGBA(0.9999231064975009, 0.9976163014225298, 0.7450211457131872, 1.0);
        }
        if (val <= 0.503874)
        {
            return Colour::fromFloatRGBA(0.998077662437524, 0.9992310649750096, 0.7460207612456747, 1.0);
        }
        if (val <= 0.50778)
        {
            return Colour::fromFloatRGBA(0.9942329873125721, 0.9976931949250288, 0.7400230680507497, 1.0);
        }
        if (val <= 0.511686)
        {
            return Colour::fromFloatRGBA(0.9903883121876201, 0.9961553248750481, 0.7340253748558248, 1.0);
        }
        if (val <= 0.5155919999999999)
        {
            return Colour::fromFloatRGBA(0.9865436370626682, 0.9946174548250672, 0.7280276816608997, 1.0);
        }
        if (val <= 0.519498)
        {
            return Colour::fromFloatRGBA(0.9826989619377164, 0.9930795847750865, 0.7220299884659749, 1.0);
        }
        if (val <= 0.523404)
        {
            return Colour::fromFloatRGBA(0.9788542868127643, 0.9915417147251058, 0.7160322952710496, 1.0);
        }
        if (val <= 0.52731)
        {
            return Colour::fromFloatRGBA(0.9750096116878124, 0.9900038446751249, 0.7100346020761246, 1.0);
        }
        if (val <= 0.531216)
        {
            return Colour::fromFloatRGBA(0.9711649365628605, 0.9884659746251442, 0.7040369088811996, 1.0);
        }
        if (val <= 0.535122)
        {
            return Colour::fromFloatRGBA(0.9673202614379085, 0.9869281045751634, 0.6980392156862746, 1.0);
        }
        if (val <= 0.539028)
        {
            return Colour::fromFloatRGBA(0.9634755863129566, 0.9853902345251826, 0.6920415224913495, 1.0);
        }
        if (val <= 0.542934)
        {
            return Colour::fromFloatRGBA(0.9596309111880047, 0.9838523644752019, 0.6860438292964245, 1.0);
        }
        if (val <= 0.54684)
        {
            return Colour::fromFloatRGBA(0.9557862360630527, 0.9823144944252211, 0.6800461361014996, 1.0);
        }
        if (val <= 0.550746)
        {
            return Colour::fromFloatRGBA(0.9519415609381008, 0.9807766243752404, 0.6740484429065745, 1.0);
        }
        if (val <= 0.554652)
        {
            return Colour::fromFloatRGBA(0.9480968858131489, 0.9792387543252595, 0.6680507497116495, 1.0);
        }
        if (val <= 0.558558)
        {
            return Colour::fromFloatRGBA(0.944252210688197, 0.9777008842752788, 0.6620530565167244, 1.0);
        }
        if (val <= 0.562464)
        {
            return Colour::fromFloatRGBA(0.940407535563245, 0.976163014225298, 0.6560553633217994, 1.0);
        }
        if (val <= 0.56637)
        {
            return Colour::fromFloatRGBA(0.9365628604382931, 0.9746251441753172, 0.6500576701268744, 1.0);
        }
        if (val <= 0.570276)
        {
            return Colour::fromFloatRGBA(0.932718185313341, 0.9730872741253365, 0.6440599769319494, 1.0);
        }
        if (val <= 0.574182)
        {
            return Colour::fromFloatRGBA(0.9288735101883892, 0.9715494040753557, 0.6380622837370243, 1.0);
        }
        if (val <= 0.578088)
        {
            return Colour::fromFloatRGBA(0.9250288350634372, 0.9700115340253749, 0.6320645905420993, 1.0);
        }
        if (val <= 0.581994)
        {
            return Colour::fromFloatRGBA(0.9211841599384853, 0.9684736639753941, 0.6260668973471745, 1.0);
        }
        if (val <= 0.5859)
        {
            return Colour::fromFloatRGBA(0.9173394848135333, 0.9669357939254134, 0.6200692041522493, 1.0);
        }
        if (val <= 0.5898059999999999)
        {
            return Colour::fromFloatRGBA(0.9134948096885814, 0.9653979238754326, 0.6140715109573243, 1.0);
        }
        if (val <= 0.593712)
        {
            return Colour::fromFloatRGBA(0.9096501345636295, 0.9638600538254518, 0.6080738177623992, 1.0);
        }
        if (val <= 0.597618)
        {
            return Colour::fromFloatRGBA(0.9058054594386775, 0.9623221837754711, 0.6020761245674742, 1.0);
        }
        if (val <= 0.601524)
        {
            return Colour::fromFloatRGBA(0.9019607843137256, 0.9607843137254902, 0.5960784313725491, 1.0);
        }
        if (val <= 0.60543)
        {
            return Colour::fromFloatRGBA(0.8928873510188392, 0.9570934256055365, 0.5979238754325259, 1.0);
        }
        if (val <= 0.609336)
        {
            return Colour::fromFloatRGBA(0.8838139177239526, 0.9534025374855826, 0.5997693194925028, 1.0);
        }
        if (val <= 0.613242)
        {
            return Colour::fromFloatRGBA(0.874740484429066, 0.9497116493656287, 0.6016147635524798, 1.0);
        }
        if (val <= 0.617148)
        {
            return Colour::fromFloatRGBA(0.8656670511341794, 0.9460207612456749, 0.6034602076124567, 1.0);
        }
        if (val <= 0.621054)
        {
            return Colour::fromFloatRGBA(0.8565936178392929, 0.942329873125721, 0.6053056516724337, 1.0);
        }
        if (val <= 0.62496)
        {
            return Colour::fromFloatRGBA(0.8475201845444063, 0.9386389850057671, 0.6071510957324106, 1.0);
        }
        if (val <= 0.628866)
        {
            return Colour::fromFloatRGBA(0.8384467512495197, 0.9349480968858133, 0.6089965397923875, 1.0);
        }
        if (val <= 0.632772)
        {
            return Colour::fromFloatRGBA(0.8293733179546331, 0.9312572087658594, 0.6108419838523644, 1.0);
        }
        if (val <= 0.636678)
        {
            return Colour::fromFloatRGBA(0.8202998846597465, 0.9275663206459055, 0.6126874279123413, 1.0);
        }
        if (val <= 0.640584)
        {
            return Colour::fromFloatRGBA(0.8112264513648599, 0.9238754325259517, 0.6145328719723183, 1.0);
        }
        if (val <= 0.64449)
        {
            return Colour::fromFloatRGBA(0.8021530180699736, 0.920184544405998, 0.6163783160322952, 1.0);
        }
        if (val <= 0.648396)
        {
            return Colour::fromFloatRGBA(0.7930795847750868, 0.916493656286044, 0.6182237600922722, 1.0);
        }
        if (val <= 0.652302)
        {
            return Colour::fromFloatRGBA(0.7840061514802001, 0.9128027681660901, 0.6200692041522491, 1.0);
        }
        if (val <= 0.656208)
        {
            return Colour::fromFloatRGBA(0.7749327181853136, 0.9091118800461362, 0.6219146482122261, 1.0);
        }
        if (val <= 0.660114)
        {
            return Colour::fromFloatRGBA(0.765859284890427, 0.9054209919261824, 0.623760092272203, 1.0);
        }
        if (val <= 0.6640199999999999)
        {
            return Colour::fromFloatRGBA(0.7567858515955403, 0.9017301038062285, 0.6256055363321799, 1.0);
        }
        if (val <= 0.667926)
        {
            return Colour::fromFloatRGBA(0.7477124183006538, 0.8980392156862746, 0.6274509803921569, 1.0);
        }
        if (val <= 0.671832)
        {
            return Colour::fromFloatRGBA(0.7386389850057672, 0.8943483275663208, 0.6292964244521337, 1.0);
        }
        if (val <= 0.675738)
        {
            return Colour::fromFloatRGBA(0.7295655517108807, 0.8906574394463669, 0.6311418685121107, 1.0);
        }
        if (val <= 0.679644)
        {
            return Colour::fromFloatRGBA(0.720492118415994, 0.8869665513264131, 0.6329873125720876, 1.0);
        }
        if (val <= 0.68355)
        {
            return Colour::fromFloatRGBA(0.7114186851211075, 0.8832756632064592, 0.6348327566320646, 1.0);
        }
        if (val <= 0.687456)
        {
            return Colour::fromFloatRGBA(0.7023452518262209, 0.8795847750865053, 0.6366782006920415, 1.0);
        }
        if (val <= 0.691362)
        {
            return Colour::fromFloatRGBA(0.6932718185313343, 0.8758938869665515, 0.6385236447520184, 1.0);
        }
        if (val <= 0.695268)
        {
            return Colour::fromFloatRGBA(0.6841983852364477, 0.8722029988465976, 0.6403690888119954, 1.0);
        }
        if (val <= 0.699174)
        {
            return Colour::fromFloatRGBA(0.6751249519415612, 0.8685121107266437, 0.6422145328719723, 1.0);
        }
        if (val <= 0.70308)
        {
            return Colour::fromFloatRGBA(0.6652825836216842, 0.8645905420991927, 0.6432141484044599, 1.0);
        }
        if (val <= 0.706986)
        {
            return Colour::fromFloatRGBA(0.6546712802768171, 0.8604382929642448, 0.6433679354094579, 1.0);
        }
        if (val <= 0.710892)
        {
            return Colour::fromFloatRGBA(0.6440599769319495, 0.8562860438292965, 0.643521722414456, 1.0);
        }
        if (val <= 0.714798)
        {
            return Colour::fromFloatRGBA(0.6334486735870821, 0.8521337946943485, 0.6436755094194541, 1.0);
        }
        if (val <= 0.718704)
        {
            return Colour::fromFloatRGBA(0.6228373702422147, 0.8479815455594003, 0.6438292964244522, 1.0);
        }
        if (val <= 0.72261)
        {
            return Colour::fromFloatRGBA(0.6122260668973474, 0.8438292964244523, 0.6439830834294502, 1.0);
        }
        if (val <= 0.726516)
        {
            return Colour::fromFloatRGBA(0.60161476355248, 0.8396770472895041, 0.6441368704344483, 1.0);
        }
        if (val <= 0.730422)
        {
            return Colour::fromFloatRGBA(0.5910034602076126, 0.835524798154556, 0.6442906574394464, 1.0);
        }
        if (val <= 0.734328)
        {
            return Colour::fromFloatRGBA(0.5803921568627453, 0.8313725490196079, 0.6444444444444445, 1.0);
        }
        if (val <= 0.738234)
        {
            return Colour::fromFloatRGBA(0.5697808535178779, 0.8272202998846598, 0.6445982314494426, 1.0);
        }
        if (val <= 0.74214)
        {
            return Colour::fromFloatRGBA(0.5591695501730105, 0.8230680507497117, 0.6447520184544406, 1.0);
        }
        if (val <= 0.746046)
        {
            return Colour::fromFloatRGBA(0.5485582468281431, 0.8189158016147636, 0.6449058054594388, 1.0);
        }
        if (val <= 0.749952)
        {
            return Colour::fromFloatRGBA(0.5379469434832758, 0.8147635524798155, 0.6450595924644368, 1.0);
        }
        if (val <= 0.753858)
        {
            return Colour::fromFloatRGBA(0.5273356401384084, 0.8106113033448674, 0.6452133794694349, 1.0);
        }
        if (val <= 0.757764)
        {
            return Colour::fromFloatRGBA(0.516724336793541, 0.8064590542099193, 0.6453671664744329, 1.0);
        }
        if (val <= 0.76167)
        {
            return Colour::fromFloatRGBA(0.5061130334486736, 0.8023068050749712, 0.6455209534794311, 1.0);
        }
        if (val <= 0.765576)
        {
            return Colour::fromFloatRGBA(0.4955017301038063, 0.7981545559400232, 0.6456747404844291, 1.0);
        }
        if (val <= 0.769482)
        {
            return Colour::fromFloatRGBA(0.48489042675893923, 0.7940023068050751, 0.6458285274894272, 1.0);
        }
        if (val <= 0.773388)
        {
            return Colour::fromFloatRGBA(0.47427912341407163, 0.7898500576701268, 0.6459823144944252, 1.0);
        }
        if (val <= 0.777294)
        {
            return Colour::fromFloatRGBA(0.46366782006920426, 0.7856978085351788, 0.6461361014994234, 1.0);
        }
        if (val <= 0.7812)
        {
            return Colour::fromFloatRGBA(0.4530565167243369, 0.7815455594002307, 0.6462898885044214, 1.0);
        }
        if (val <= 0.785106)
        {
            return Colour::fromFloatRGBA(0.4424452133794695, 0.7773933102652826, 0.6464436755094195, 1.0);
        }
        if (val <= 0.789012)
        {
            return Colour::fromFloatRGBA(0.43183391003460214, 0.7732410611303344, 0.6465974625144175, 1.0);
        }
        if (val <= 0.792918)
        {
            return Colour::fromFloatRGBA(0.42122260668973477, 0.7690888119953864, 0.6467512495194156, 1.0);
        }
        if (val <= 0.796824)
        {
            return Colour::fromFloatRGBA(0.4106113033448674, 0.7649365628604383, 0.6469050365244137, 1.0);
        }
        if (val <= 0.80073)
        {
            return Colour::fromFloatRGBA(0.4, 0.7607843137254902, 0.6470588235294118, 1.0);
        }
        if (val <= 0.804636)
        {
            return Colour::fromFloatRGBA(0.39200307574009996, 0.7518646674356017, 0.6507497116493657, 1.0);
        }
        if (val <= 0.808542)
        {
            return Colour::fromFloatRGBA(0.38400615148019995, 0.7429450211457131, 0.6544405997693196, 1.0);
        }
        if (val <= 0.812448)
        {
            return Colour::fromFloatRGBA(0.3760092272202999, 0.7340253748558246, 0.6581314878892733, 1.0);
        }
        if (val <= 0.816354)
        {
            return Colour::fromFloatRGBA(0.3680123029603999, 0.7251057285659361, 0.6618223760092272, 1.0);
        }
        if (val <= 0.82026)
        {
            return Colour::fromFloatRGBA(0.3600153787004998, 0.7161860822760476, 0.6655132641291811, 1.0);
        }
        if (val <= 0.824166)
        {
            return Colour::fromFloatRGBA(0.35201845444059976, 0.7072664359861591, 0.669204152249135, 1.0);
        }
        if (val <= 0.828072)
        {
            return Colour::fromFloatRGBA(0.34402153018069975, 0.6983467896962706, 0.6728950403690889, 1.0);
        }
        if (val <= 0.831978)
        {
            return Colour::fromFloatRGBA(0.33602460592079997, 0.6894271434063823, 0.6765859284890426, 1.0);
        }
        if (val <= 0.835884)
        {
            return Colour::fromFloatRGBA(0.3280276816608997, 0.6805074971164936, 0.6802768166089965, 1.0);
        }
        if (val <= 0.83979)
        {
            return Colour::fromFloatRGBA(0.3200307574009996, 0.6715878508266051, 0.6839677047289504, 1.0);
        }
        if (val <= 0.843696)
        {
            return Colour::fromFloatRGBA(0.31203383314109956, 0.6626682045367166, 0.6876585928489043, 1.0);
        }
        if (val <= 0.847602)
        {
            return Colour::fromFloatRGBA(0.30403690888119955, 0.6537485582468281, 0.6913494809688582, 1.0);
        }
        if (val <= 0.851508)
        {
            return Colour::fromFloatRGBA(0.29603998462129955, 0.6448289119569396, 0.6950403690888121, 1.0);
        }
        if (val <= 0.855414)
        {
            return Colour::fromFloatRGBA(0.2880430603613995, 0.6359092656670511, 0.6987312572087659, 1.0);
        }
        if (val <= 0.85932)
        {
            return Colour::fromFloatRGBA(0.2800461361014994, 0.6269896193771626, 0.7024221453287197, 1.0);
        }
        if (val <= 0.863226)
        {
            return Colour::fromFloatRGBA(0.27204921184159936, 0.6180699730872741, 0.7061130334486736, 1.0);
        }
        if (val <= 0.867132)
        {
            return Colour::fromFloatRGBA(0.26405228758169935, 0.6091503267973857, 0.7098039215686275, 1.0);
        }
        if (val <= 0.871038)
        {
            return Colour::fromFloatRGBA(0.2560553633217993, 0.6002306805074971, 0.7134948096885814, 1.0);
        }
        if (val <= 0.874944)
        {
            return Colour::fromFloatRGBA(0.24805843906189928, 0.5913110342176086, 0.7171856978085352, 1.0);
        }
        if (val <= 0.87885)
        {
            return Colour::fromFloatRGBA(0.24006151480199925, 0.58239138792772, 0.7208765859284891, 1.0);
        }
        if (val <= 0.882756)
        {
            return Colour::fromFloatRGBA(0.23206459054209921, 0.5734717416378317, 0.7245674740484429, 1.0);
        }
        if (val <= 0.8866620000000001)
        {
            return Colour::fromFloatRGBA(0.22406766628219915, 0.564552095347943, 0.7282583621683968, 1.0);
        }
        if (val <= 0.890568)
        {
            return Colour::fromFloatRGBA(0.21607074202229912, 0.5556324490580546, 0.7319492502883507, 1.0);
        }
        if (val <= 0.894474)
        {
            return Colour::fromFloatRGBA(0.2080738177623993, 0.5467128027681664, 0.7356401384083044, 1.0);
        }
        if (val <= 0.89838)
        {
            return Colour::fromFloatRGBA(0.20007689350249905, 0.5377931564782776, 0.7393310265282584, 1.0);
        }
        if (val <= 0.902286)
        {
            return Colour::fromFloatRGBA(0.19946174548250672, 0.5289504036908881, 0.7391003460207612, 1.0);
        }
        if (val <= 0.906192)
        {
            return Colour::fromFloatRGBA(0.20622837370242214, 0.5201845444059977, 0.7349480968858132, 1.0);
        }
        if (val <= 0.910098)
        {
            return Colour::fromFloatRGBA(0.21299500192233756, 0.5114186851211072, 0.730795847750865, 1.0);
        }
        if (val <= 0.914004)
        {
            return Colour::fromFloatRGBA(0.21976163014225297, 0.5026528258362168, 0.726643598615917, 1.0);
        }
        if (val <= 0.91791)
        {
            return Colour::fromFloatRGBA(0.2265282583621684, 0.4938869665513264, 0.7224913494809688, 1.0);
        }
        if (val <= 0.921816)
        {
            return Colour::fromFloatRGBA(0.2332948865820838, 0.485121107266436, 0.7183391003460208, 1.0);
        }
        if (val <= 0.925722)
        {
            return Colour::fromFloatRGBA(0.24006151480199922, 0.47635524798154555, 0.7141868512110727, 1.0);
        }
        if (val <= 0.929628)
        {
            return Colour::fromFloatRGBA(0.24682814302191466, 0.4675893886966551, 0.7100346020761246, 1.0);
        }
        if (val <= 0.933534)
        {
            return Colour::fromFloatRGBA(0.25359477124183005, 0.45882352941176474, 0.7058823529411765, 1.0);
        }
        if (val <= 0.93744)
        {
            return Colour::fromFloatRGBA(0.2603613994617455, 0.45005767012687425, 0.7017301038062284, 1.0);
        }
        if (val <= 0.941346)
        {
            return Colour::fromFloatRGBA(0.2671280276816609, 0.4412918108419839, 0.6975778546712803, 1.0);
        }
        if (val <= 0.945252)
        {
            return Colour::fromFloatRGBA(0.27389465590157636, 0.4325259515570934, 0.6934256055363321, 1.0);
        }
        if (val <= 0.9491580000000001)
        {
            return Colour::fromFloatRGBA(0.2806612841214917, 0.423760092272203, 0.6892733564013841, 1.0);
        }
        if (val <= 0.953064)
        {
            return Colour::fromFloatRGBA(0.2874279123414072, 0.4149942329873126, 0.6851211072664359, 1.0);
        }
        if (val <= 0.95697)
        {
            return Colour::fromFloatRGBA(0.2941945405613224, 0.4062283737024224, 0.680968858131488, 1.0);
        }
        if (val <= 0.9608760000000001)
        {
            return Colour::fromFloatRGBA(0.300961168781238, 0.3974625144175317, 0.6768166089965397, 1.0);
        }
        if (val <= 0.964782)
        {
            return Colour::fromFloatRGBA(0.30772779700115344, 0.3886966551326413, 0.6726643598615917, 1.0);
        }
        if (val <= 0.968688)
        {
            return Colour::fromFloatRGBA(0.31449442522106885, 0.37993079584775086, 0.6685121107266436, 1.0);
        }
        if (val <= 0.972594)
        {
            return Colour::fromFloatRGBA(0.3212610534409842, 0.3711649365628604, 0.6643598615916955, 1.0);
        }
        if (val <= 0.9765)
        {
            return Colour::fromFloatRGBA(0.3280276816608997, 0.36239907727797005, 0.6602076124567474, 1.0);
        }
        if (val <= 0.980406)
        {
            return Colour::fromFloatRGBA(0.3347943098808151, 0.35363321799307956, 0.6560553633217993, 1.0);
        }
        if (val <= 0.984312)
        {
            return Colour::fromFloatRGBA(0.3415609381007305, 0.3448673587081892, 0.6519031141868512, 1.0);
        }
        if (val <= 0.988218)
        {
            return Colour::fromFloatRGBA(0.34832756632064593, 0.33610149942329876, 0.647750865051903, 1.0);
        }
        if (val <= 0.992124)
        {
            return Colour::fromFloatRGBA(0.35509419454056135, 0.3273356401384083, 0.643598615916955, 1.0);
        }
        if (val <= 0.99603)
        {
            return Colour::fromFloatRGBA(0.36186082276047676, 0.3185697808535179, 0.6394463667820068, 1.0);
        }
        if (val <= 0.999936)
        {
            return Colour::fromFloatRGBA(0.3686274509803922, 0.30980392156862746, 0.6352941176470588, 1.0);
        }

        return Colour::fromFloatRGBA(0.3686274509803922, 0.30980392156862746, 0.6352941176470588, 1.0);
    }

    Colour colourFromRdGy(float val)
    {
        if (val <= 0.003906)
        {
            return Colour::fromFloatRGBA(0.403921568627451, 0.0, 0.12156862745098039, 1.0);
        }
        if (val <= 0.007812)
        {
            return Colour::fromFloatRGBA(0.4154555940023068, 0.003690888119953864, 0.12341407151095732, 1.0);
        }
        if (val <= 0.011718000000000001)
        {
            return Colour::fromFloatRGBA(0.4269896193771626, 0.007381776239907728, 0.12525951557093426, 1.0);
        }
        if (val <= 0.015624)
        {
            return Colour::fromFloatRGBA(0.43852364475201844, 0.011072664359861591, 0.12710495963091117, 1.0);
        }
        if (val <= 0.019530000000000002)
        {
            return Colour::fromFloatRGBA(0.45005767012687425, 0.014763552479815456, 0.12895040369088812, 1.0);
        }
        if (val <= 0.023436000000000002)
        {
            return Colour::fromFloatRGBA(0.4615916955017301, 0.01845444059976932, 0.13079584775086506, 1.0);
        }
        if (val <= 0.027342)
        {
            return Colour::fromFloatRGBA(0.47312572087658594, 0.022145328719723183, 0.132641291810842, 1.0);
        }
        if (val <= 0.031248)
        {
            return Colour::fromFloatRGBA(0.48465974625144176, 0.02583621683967705, 0.1344867358708189, 1.0);
        }
        if (val <= 0.035154000000000005)
        {
            return Colour::fromFloatRGBA(0.4961937716262976, 0.02952710495963091, 0.13633217993079585, 1.0);
        }
        if (val <= 0.039060000000000004)
        {
            return Colour::fromFloatRGBA(0.5077277970011534, 0.03321799307958478, 0.13817762399077277, 1.0);
        }
        if (val <= 0.042966000000000004)
        {
            return Colour::fromFloatRGBA(0.5192618223760093, 0.03690888119953864, 0.1400230680507497, 1.0);
        }
        if (val <= 0.046872000000000004)
        {
            return Colour::fromFloatRGBA(0.5307958477508651, 0.0405997693194925, 0.14186851211072665, 1.0);
        }
        if (val <= 0.050778000000000004)
        {
            return Colour::fromFloatRGBA(0.5423298731257209, 0.044290657439446365, 0.1437139561707036, 1.0);
        }
        if (val <= 0.054684)
        {
            return Colour::fromFloatRGBA(0.5538638985005767, 0.04798154555940023, 0.1455594002306805, 1.0);
        }
        if (val <= 0.05859)
        {
            return Colour::fromFloatRGBA(0.5653979238754325, 0.0516724336793541, 0.14740484429065745, 1.0);
        }
        if (val <= 0.062496)
        {
            return Colour::fromFloatRGBA(0.5769319492502883, 0.05536332179930796, 0.14925028835063436, 1.0);
        }
        if (val <= 0.066402)
        {
            return Colour::fromFloatRGBA(0.5884659746251442, 0.05905420991926182, 0.1510957324106113, 1.0);
        }
        if (val <= 0.07030800000000001)
        {
            return Colour::fromFloatRGBA(0.6, 0.06274509803921569, 0.15294117647058825, 1.0);
        }
        if (val <= 0.07421400000000002)
        {
            return Colour::fromFloatRGBA(0.6115340253748558, 0.06643598615916955, 0.1547866205305652, 1.0);
        }
        if (val <= 0.07812000000000001)
        {
            return Colour::fromFloatRGBA(0.6230680507497116, 0.07012687427912341, 0.1566320645905421, 1.0);
        }
        if (val <= 0.08202600000000002)
        {
            return Colour::fromFloatRGBA(0.6346020761245674, 0.07381776239907728, 0.15847750865051904, 1.0);
        }
        if (val <= 0.08593200000000001)
        {
            return Colour::fromFloatRGBA(0.6461361014994232, 0.07750865051903114, 0.16032295271049596, 1.0);
        }
        if (val <= 0.08983800000000002)
        {
            return Colour::fromFloatRGBA(0.6576701268742791, 0.081199538638985, 0.1621683967704729, 1.0);
        }
        if (val <= 0.09374400000000001)
        {
            return Colour::fromFloatRGBA(0.669204152249135, 0.08489042675893888, 0.16401384083044984, 1.0);
        }
        if (val <= 0.09765000000000001)
        {
            return Colour::fromFloatRGBA(0.6807381776239907, 0.08858131487889273, 0.16585928489042678, 1.0);
        }
        if (val <= 0.10155600000000001)
        {
            return Colour::fromFloatRGBA(0.6922722029988466, 0.09227220299884659, 0.1677047289504037, 1.0);
        }
        if (val <= 0.10546200000000001)
        {
            return Colour::fromFloatRGBA(0.7008073817762399, 0.09965397923875433, 0.17124183006535948, 1.0);
        }
        if (val <= 0.109368)
        {
            return Colour::fromFloatRGBA(0.7063437139561707, 0.11072664359861592, 0.17647058823529413, 1.0);
        }
        if (val <= 0.11327400000000001)
        {
            return Colour::fromFloatRGBA(0.7118800461361015, 0.12179930795847752, 0.18169934640522878, 1.0);
        }
        if (val <= 0.11718)
        {
            return Colour::fromFloatRGBA(0.7174163783160322, 0.1328719723183391, 0.1869281045751634, 1.0);
        }
        if (val <= 0.12108600000000001)
        {
            return Colour::fromFloatRGBA(0.7229527104959631, 0.14394463667820068, 0.19215686274509805, 1.0);
        }
        if (val <= 0.124992)
        {
            return Colour::fromFloatRGBA(0.7284890426758939, 0.15501730103806227, 0.1973856209150327, 1.0);
        }
        if (val <= 0.128898)
        {
            return Colour::fromFloatRGBA(0.7340253748558246, 0.16608996539792387, 0.20261437908496732, 1.0);
        }
        if (val <= 0.132804)
        {
            return Colour::fromFloatRGBA(0.7395617070357554, 0.1771626297577854, 0.20784313725490194, 1.0);
        }
        if (val <= 0.13671)
        {
            return Colour::fromFloatRGBA(0.7450980392156863, 0.18823529411764706, 0.2130718954248366, 1.0);
        }
        if (val <= 0.140616)
        {
            return Colour::fromFloatRGBA(0.7506343713956171, 0.19930795847750865, 0.21830065359477124, 1.0);
        }
        if (val <= 0.144522)
        {
            return Colour::fromFloatRGBA(0.7561707035755478, 0.21038062283737025, 0.22352941176470587, 1.0);
        }
        if (val <= 0.148428)
        {
            return Colour::fromFloatRGBA(0.7617070357554786, 0.22145328719723176, 0.2287581699346405, 1.0);
        }
        if (val <= 0.152334)
        {
            return Colour::fromFloatRGBA(0.7672433679354095, 0.2325259515570934, 0.23398692810457516, 1.0);
        }
        if (val <= 0.15624)
        {
            return Colour::fromFloatRGBA(0.7727797001153403, 0.243598615916955, 0.2392156862745098, 1.0);
        }
        if (val <= 0.160146)
        {
            return Colour::fromFloatRGBA(0.778316032295271, 0.2546712802768166, 0.24444444444444444, 1.0);
        }
        if (val <= 0.164052)
        {
            return Colour::fromFloatRGBA(0.7838523644752018, 0.2657439446366781, 0.24967320261437903, 1.0);
        }
        if (val <= 0.167958)
        {
            return Colour::fromFloatRGBA(0.7893886966551327, 0.2768166089965398, 0.2549019607843137, 1.0);
        }
        if (val <= 0.171864)
        {
            return Colour::fromFloatRGBA(0.7949250288350634, 0.28788927335640135, 0.26013071895424833, 1.0);
        }
        if (val <= 0.17577)
        {
            return Colour::fromFloatRGBA(0.8004613610149942, 0.298961937716263, 0.265359477124183, 1.0);
        }
        if (val <= 0.179676)
        {
            return Colour::fromFloatRGBA(0.805997693194925, 0.3100346020761245, 0.2705882352941176, 1.0);
        }
        if (val <= 0.183582)
        {
            return Colour::fromFloatRGBA(0.8115340253748559, 0.3211072664359862, 0.2758169934640523, 1.0);
        }
        if (val <= 0.187488)
        {
            return Colour::fromFloatRGBA(0.8170703575547866, 0.33217993079584773, 0.28104575163398693, 1.0);
        }
        if (val <= 0.191394)
        {
            return Colour::fromFloatRGBA(0.8226066897347174, 0.34325259515570933, 0.28627450980392155, 1.0);
        }
        if (val <= 0.1953)
        {
            return Colour::fromFloatRGBA(0.8281430219146482, 0.35432525951557087, 0.2915032679738562, 1.0);
        }
        if (val <= 0.199206)
        {
            return Colour::fromFloatRGBA(0.833679354094579, 0.3653979238754325, 0.29673202614379085, 1.0);
        }
        if (val <= 0.20311200000000001)
        {
            return Colour::fromFloatRGBA(0.8392156862745098, 0.3764705882352941, 0.30196078431372547, 1.0);
        }
        if (val <= 0.207018)
        {
            return Colour::fromFloatRGBA(0.8438292964244521, 0.3870818915801615, 0.3101114955786236, 1.0);
        }
        if (val <= 0.210924)
        {
            return Colour::fromFloatRGBA(0.8484429065743945, 0.39769319492502875, 0.31826220684352163, 1.0);
        }
        if (val <= 0.21483)
        {
            return Colour::fromFloatRGBA(0.8530565167243368, 0.4083044982698962, 0.3264129181084198, 1.0);
        }
        if (val <= 0.218736)
        {
            return Colour::fromFloatRGBA(0.8576701268742791, 0.41891580161476355, 0.3345636293733179, 1.0);
        }
        if (val <= 0.222642)
        {
            return Colour::fromFloatRGBA(0.8622837370242215, 0.42952710495963087, 0.34271434063821604, 1.0);
        }
        if (val <= 0.226548)
        {
            return Colour::fromFloatRGBA(0.8668973471741638, 0.44013840830449813, 0.35086505190311407, 1.0);
        }
        if (val <= 0.230454)
        {
            return Colour::fromFloatRGBA(0.8715109573241061, 0.4507497116493656, 0.35901576316801226, 1.0);
        }
        if (val <= 0.23436)
        {
            return Colour::fromFloatRGBA(0.8761245674740484, 0.46136101499423293, 0.3671664744329104, 1.0);
        }
        if (val <= 0.238266)
        {
            return Colour::fromFloatRGBA(0.8807381776239908, 0.4719723183391003, 0.3753171856978085, 1.0);
        }
        if (val <= 0.242172)
        {
            return Colour::fromFloatRGBA(0.8853517877739331, 0.48258362168396757, 0.38346789696270656, 1.0);
        }
        if (val <= 0.246078)
        {
            return Colour::fromFloatRGBA(0.8899653979238754, 0.493194925028835, 0.3916186082276047, 1.0);
        }
        if (val <= 0.249984)
        {
            return Colour::fromFloatRGBA(0.8945790080738177, 0.5038062283737024, 0.39976931949250283, 1.0);
        }
        if (val <= 0.25389)
        {
            return Colour::fromFloatRGBA(0.8991926182237601, 0.5144175317185697, 0.4079200307574009, 1.0);
        }
        if (val <= 0.257796)
        {
            return Colour::fromFloatRGBA(0.9038062283737024, 0.5250288350634371, 0.41607074202229904, 1.0);
        }
        if (val <= 0.26170200000000005)
        {
            return Colour::fromFloatRGBA(0.9084198385236447, 0.5356401384083043, 0.424221453287197, 1.0);
        }
        if (val <= 0.265608)
        {
            return Colour::fromFloatRGBA(0.913033448673587, 0.5462514417531718, 0.43237216455209526, 1.0);
        }
        if (val <= 0.26951400000000003)
        {
            return Colour::fromFloatRGBA(0.9176470588235294, 0.5568627450980391, 0.44052287581699334, 1.0);
        }
        if (val <= 0.27342000000000005)
        {
            return Colour::fromFloatRGBA(0.9222606689734717, 0.5674740484429065, 0.4486735870818915, 1.0);
        }
        if (val <= 0.277326)
        {
            return Colour::fromFloatRGBA(0.926874279123414, 0.5780853517877739, 0.4568242983467896, 1.0);
        }
        if (val <= 0.28123200000000004)
        {
            return Colour::fromFloatRGBA(0.9314878892733564, 0.5886966551326411, 0.4649750096116877, 1.0);
        }
        if (val <= 0.28513800000000006)
        {
            return Colour::fromFloatRGBA(0.9361014994232987, 0.5993079584775085, 0.4731257208765858, 1.0);
        }
        if (val <= 0.289044)
        {
            return Colour::fromFloatRGBA(0.940715109573241, 0.6099192618223759, 0.4812764321414839, 1.0);
        }
        if (val <= 0.29295000000000004)
        {
            return Colour::fromFloatRGBA(0.9453287197231833, 0.6205305651672431, 0.48942714340638194, 1.0);
        }
        if (val <= 0.296856)
        {
            return Colour::fromFloatRGBA(0.9499423298731257, 0.6311418685121106, 0.49757785467128013, 1.0);
        }
        if (val <= 0.30076200000000003)
        {
            return Colour::fromFloatRGBA(0.954555940023068, 0.641753171856978, 0.5057285659361782, 1.0);
        }
        if (val <= 0.30466800000000005)
        {
            return Colour::fromFloatRGBA(0.9575547866205306, 0.6512110726643597, 0.515109573241061, 1.0);
        }
        if (val <= 0.308574)
        {
            return Colour::fromFloatRGBA(0.9589388696655133, 0.659515570934256, 0.5257208765859284, 1.0);
        }
        if (val <= 0.31248000000000004)
        {
            return Colour::fromFloatRGBA(0.960322952710496, 0.6678200692041522, 0.5363321799307956, 1.0);
        }
        if (val <= 0.31638600000000006)
        {
            return Colour::fromFloatRGBA(0.9617070357554787, 0.6761245674740484, 0.546943483275663, 1.0);
        }
        if (val <= 0.320292)
        {
            return Colour::fromFloatRGBA(0.9630911188004614, 0.6844290657439446, 0.5575547866205304, 1.0);
        }
        if (val <= 0.32419800000000004)
        {
            return Colour::fromFloatRGBA(0.9644752018454441, 0.6927335640138407, 0.5681660899653976, 1.0);
        }
        if (val <= 0.32810400000000006)
        {
            return Colour::fromFloatRGBA(0.9658592848904268, 0.701038062283737, 0.5787773933102651, 1.0);
        }
        if (val <= 0.33201)
        {
            return Colour::fromFloatRGBA(0.9672433679354094, 0.7093425605536331, 0.5893886966551325, 1.0);
        }
        if (val <= 0.33591600000000005)
        {
            return Colour::fromFloatRGBA(0.9686274509803922, 0.7176470588235293, 0.5999999999999999, 1.0);
        }
        if (val <= 0.339822)
        {
            return Colour::fromFloatRGBA(0.9700115340253749, 0.7259515570934255, 0.6106113033448672, 1.0);
        }
        if (val <= 0.34372800000000003)
        {
            return Colour::fromFloatRGBA(0.9713956170703576, 0.7342560553633217, 0.6212226066897346, 1.0);
        }
        if (val <= 0.34763400000000005)
        {
            return Colour::fromFloatRGBA(0.9727797001153403, 0.7425605536332179, 0.631833910034602, 1.0);
        }
        if (val <= 0.35154)
        {
            return Colour::fromFloatRGBA(0.9741637831603229, 0.7508650519031141, 0.6424452133794694, 1.0);
        }
        if (val <= 0.35544600000000004)
        {
            return Colour::fromFloatRGBA(0.9755478662053056, 0.7591695501730102, 0.6530565167243365, 1.0);
        }
        if (val <= 0.35935200000000006)
        {
            return Colour::fromFloatRGBA(0.9769319492502884, 0.7674740484429066, 0.6636678200692041, 1.0);
        }
        if (val <= 0.363258)
        {
            return Colour::fromFloatRGBA(0.9783160322952711, 0.7757785467128027, 0.6742791234140715, 1.0);
        }
        if (val <= 0.36716400000000005)
        {
            return Colour::fromFloatRGBA(0.9797001153402538, 0.7840830449826989, 0.6848904267589389, 1.0);
        }
        if (val <= 0.37107)
        {
            return Colour::fromFloatRGBA(0.9810841983852365, 0.7923875432525951, 0.6955017301038062, 1.0);
        }
        if (val <= 0.37497600000000003)
        {
            return Colour::fromFloatRGBA(0.9824682814302191, 0.8006920415224913, 0.7061130334486736, 1.0);
        }
        if (val <= 0.37888200000000005)
        {
            return Colour::fromFloatRGBA(0.9838523644752019, 0.8089965397923875, 0.7167243367935409, 1.0);
        }
        if (val <= 0.382788)
        {
            return Colour::fromFloatRGBA(0.9852364475201846, 0.8173010380622837, 0.7273356401384083, 1.0);
        }
        if (val <= 0.38669400000000004)
        {
            return Colour::fromFloatRGBA(0.9866205305651673, 0.8256055363321797, 0.7379469434832755, 1.0);
        }
        if (val <= 0.39060000000000006)
        {
            return Colour::fromFloatRGBA(0.98800461361015, 0.833910034602076, 0.748558246828143, 1.0);
        }
        if (val <= 0.394506)
        {
            return Colour::fromFloatRGBA(0.9893886966551326, 0.8422145328719722, 0.7591695501730104, 1.0);
        }
        if (val <= 0.39841200000000004)
        {
            return Colour::fromFloatRGBA(0.9907727797001153, 0.8505190311418684, 0.7697808535178777, 1.0);
        }
        if (val <= 0.40231800000000006)
        {
            return Colour::fromFloatRGBA(0.9921568627450981, 0.8588235294117647, 0.7803921568627451, 1.0);
        }
        if (val <= 0.40622400000000003)
        {
            return Colour::fromFloatRGBA(0.9924644367550942, 0.8643598615916954, 0.7890042291426375, 1.0);
        }
        if (val <= 0.41013000000000005)
        {
            return Colour::fromFloatRGBA(0.9927720107650904, 0.8698961937716263, 0.7976163014225298, 1.0);
        }
        if (val <= 0.414036)
        {
            return Colour::fromFloatRGBA(0.9930795847750865, 0.8754325259515571, 0.8062283737024222, 1.0);
        }
        if (val <= 0.41794200000000004)
        {
            return Colour::fromFloatRGBA(0.9933871587850827, 0.8809688581314877, 0.8148404459823144, 1.0);
        }
        if (val <= 0.42184800000000006)
        {
            return Colour::fromFloatRGBA(0.9936947327950788, 0.8865051903114186, 0.8234525182622069, 1.0);
        }
        if (val <= 0.425754)
        {
            return Colour::fromFloatRGBA(0.994002306805075, 0.8920415224913494, 0.8320645905420991, 1.0);
        }
        if (val <= 0.42966000000000004)
        {
            return Colour::fromFloatRGBA(0.9943098808150711, 0.8975778546712803, 0.8406766628219915, 1.0);
        }
        if (val <= 0.43356600000000006)
        {
            return Colour::fromFloatRGBA(0.9946174548250672, 0.903114186851211, 0.8492887351018839, 1.0);
        }
        if (val <= 0.437472)
        {
            return Colour::fromFloatRGBA(0.9949250288350635, 0.9086505190311418, 0.8579008073817762, 1.0);
        }
        if (val <= 0.44137800000000005)
        {
            return Colour::fromFloatRGBA(0.9952326028450597, 0.9141868512110727, 0.8665128796616686, 1.0);
        }
        if (val <= 0.44528400000000007)
        {
            return Colour::fromFloatRGBA(0.9955401768550558, 0.9197231833910035, 0.8751249519415609, 1.0);
        }
        if (val <= 0.44919000000000003)
        {
            return Colour::fromFloatRGBA(0.995847750865052, 0.9252595155709341, 0.8837370242214532, 1.0);
        }
        if (val <= 0.45309600000000005)
        {
            return Colour::fromFloatRGBA(0.9961553248750481, 0.930795847750865, 0.8923490965013456, 1.0);
        }
        if (val <= 0.457002)
        {
            return Colour::fromFloatRGBA(0.9964628988850442, 0.9363321799307959, 0.900961168781238, 1.0);
        }
        if (val <= 0.46090800000000004)
        {
            return Colour::fromFloatRGBA(0.9967704728950404, 0.9418685121107266, 0.9095732410611304, 1.0);
        }
        if (val <= 0.46481400000000006)
        {
            return Colour::fromFloatRGBA(0.9970780469050365, 0.9474048442906574, 0.9181853133410227, 1.0);
        }
        if (val <= 0.46872)
        {
            return Colour::fromFloatRGBA(0.9973856209150327, 0.9529411764705882, 0.9267973856209151, 1.0);
        }
        if (val <= 0.47262600000000005)
        {
            return Colour::fromFloatRGBA(0.9976931949250288, 0.9584775086505191, 0.9354094579008074, 1.0);
        }
        if (val <= 0.47653200000000007)
        {
            return Colour::fromFloatRGBA(0.998000768935025, 0.9640138408304498, 0.9440215301806998, 1.0);
        }
        if (val <= 0.48043800000000003)
        {
            return Colour::fromFloatRGBA(0.9983083429450211, 0.9695501730103805, 0.9526336024605919, 1.0);
        }
        if (val <= 0.48434400000000005)
        {
            return Colour::fromFloatRGBA(0.9986159169550173, 0.9750865051903114, 0.9612456747404844, 1.0);
        }
        if (val <= 0.48825)
        {
            return Colour::fromFloatRGBA(0.9989234909650134, 0.9806228373702423, 0.9698577470203767, 1.0);
        }
        if (val <= 0.49215600000000004)
        {
            return Colour::fromFloatRGBA(0.9992310649750096, 0.986159169550173, 0.9784698193002691, 1.0);
        }
        if (val <= 0.49606200000000006)
        {
            return Colour::fromFloatRGBA(0.9995386389850057, 0.9916955017301038, 0.9870818915801615, 1.0);
        }
        if (val <= 0.499968)
        {
            return Colour::fromFloatRGBA(0.9998462129950019, 0.9972318339100346, 0.9956939638600538, 1.0);
        }
        if (val <= 0.503874)
        {
            return Colour::fromFloatRGBA(0.9976163014225298, 0.9976163014225298, 0.9976163014225298, 1.0);
        }
        if (val <= 0.50778)
        {
            return Colour::fromFloatRGBA(0.9928489042675894, 0.9928489042675894, 0.9928489042675894, 1.0);
        }
        if (val <= 0.511686)
        {
            return Colour::fromFloatRGBA(0.988081507112649, 0.988081507112649, 0.988081507112649, 1.0);
        }
        if (val <= 0.5155919999999999)
        {
            return Colour::fromFloatRGBA(0.9833141099577086, 0.9833141099577086, 0.9833141099577086, 1.0);
        }
        if (val <= 0.519498)
        {
            return Colour::fromFloatRGBA(0.9785467128027683, 0.9785467128027683, 0.9785467128027683, 1.0);
        }
        if (val <= 0.523404)
        {
            return Colour::fromFloatRGBA(0.9737793156478278, 0.9737793156478278, 0.9737793156478278, 1.0);
        }
        if (val <= 0.52731)
        {
            return Colour::fromFloatRGBA(0.9690119184928874, 0.9690119184928874, 0.9690119184928874, 1.0);
        }
        if (val <= 0.531216)
        {
            return Colour::fromFloatRGBA(0.964244521337947, 0.964244521337947, 0.964244521337947, 1.0);
        }
        if (val <= 0.535122)
        {
            return Colour::fromFloatRGBA(0.9594771241830066, 0.9594771241830066, 0.9594771241830066, 1.0);
        }
        if (val <= 0.539028)
        {
            return Colour::fromFloatRGBA(0.9547097270280662, 0.9547097270280662, 0.9547097270280662, 1.0);
        }
        if (val <= 0.542934)
        {
            return Colour::fromFloatRGBA(0.9499423298731258, 0.9499423298731258, 0.9499423298731258, 1.0);
        }
        if (val <= 0.54684)
        {
            return Colour::fromFloatRGBA(0.9451749327181853, 0.9451749327181853, 0.9451749327181853, 1.0);
        }
        if (val <= 0.550746)
        {
            return Colour::fromFloatRGBA(0.940407535563245, 0.940407535563245, 0.940407535563245, 1.0);
        }
        if (val <= 0.554652)
        {
            return Colour::fromFloatRGBA(0.9356401384083045, 0.9356401384083045, 0.9356401384083045, 1.0);
        }
        if (val <= 0.558558)
        {
            return Colour::fromFloatRGBA(0.9308727412533642, 0.9308727412533642, 0.9308727412533642, 1.0);
        }
        if (val <= 0.562464)
        {
            return Colour::fromFloatRGBA(0.9261053440984237, 0.9261053440984237, 0.9261053440984237, 1.0);
        }
        if (val <= 0.56637)
        {
            return Colour::fromFloatRGBA(0.9213379469434834, 0.9213379469434834, 0.9213379469434834, 1.0);
        }
        if (val <= 0.570276)
        {
            return Colour::fromFloatRGBA(0.9165705497885429, 0.9165705497885429, 0.9165705497885429, 1.0);
        }
        if (val <= 0.574182)
        {
            return Colour::fromFloatRGBA(0.9118031526336026, 0.9118031526336026, 0.9118031526336026, 1.0);
        }
        if (val <= 0.578088)
        {
            return Colour::fromFloatRGBA(0.9070357554786621, 0.9070357554786621, 0.9070357554786621, 1.0);
        }
        if (val <= 0.581994)
        {
            return Colour::fromFloatRGBA(0.9022683583237219, 0.9022683583237219, 0.9022683583237219, 1.0);
        }
        if (val <= 0.5859)
        {
            return Colour::fromFloatRGBA(0.8975009611687813, 0.8975009611687813, 0.8975009611687813, 1.0);
        }
        if (val <= 0.5898059999999999)
        {
            return Colour::fromFloatRGBA(0.892733564013841, 0.892733564013841, 0.892733564013841, 1.0);
        }
        if (val <= 0.593712)
        {
            return Colour::fromFloatRGBA(0.8879661668589005, 0.8879661668589005, 0.8879661668589005, 1.0);
        }
        if (val <= 0.597618)
        {
            return Colour::fromFloatRGBA(0.8831987697039602, 0.8831987697039602, 0.8831987697039602, 1.0);
        }
        if (val <= 0.601524)
        {
            return Colour::fromFloatRGBA(0.8784313725490197, 0.8784313725490197, 0.8784313725490197, 1.0);
        }
        if (val <= 0.60543)
        {
            return Colour::fromFloatRGBA(0.8725874663590928, 0.8725874663590928, 0.8725874663590928, 1.0);
        }
        if (val <= 0.609336)
        {
            return Colour::fromFloatRGBA(0.8667435601691659, 0.8667435601691659, 0.8667435601691659, 1.0);
        }
        if (val <= 0.613242)
        {
            return Colour::fromFloatRGBA(0.860899653979239, 0.860899653979239, 0.860899653979239, 1.0);
        }
        if (val <= 0.617148)
        {
            return Colour::fromFloatRGBA(0.8550557477893119, 0.8550557477893119, 0.8550557477893119, 1.0);
        }
        if (val <= 0.621054)
        {
            return Colour::fromFloatRGBA(0.849211841599385, 0.849211841599385, 0.849211841599385, 1.0);
        }
        if (val <= 0.62496)
        {
            return Colour::fromFloatRGBA(0.8433679354094581, 0.8433679354094581, 0.8433679354094581, 1.0);
        }
        if (val <= 0.628866)
        {
            return Colour::fromFloatRGBA(0.8375240292195311, 0.8375240292195311, 0.8375240292195311, 1.0);
        }
        if (val <= 0.632772)
        {
            return Colour::fromFloatRGBA(0.8316801230296041, 0.8316801230296041, 0.8316801230296041, 1.0);
        }
        if (val <= 0.636678)
        {
            return Colour::fromFloatRGBA(0.8258362168396772, 0.8258362168396772, 0.8258362168396772, 1.0);
        }
        if (val <= 0.640584)
        {
            return Colour::fromFloatRGBA(0.8199923106497502, 0.8199923106497502, 0.8199923106497502, 1.0);
        }
        if (val <= 0.64449)
        {
            return Colour::fromFloatRGBA(0.8141484044598235, 0.8141484044598235, 0.8141484044598235, 1.0);
        }
        if (val <= 0.648396)
        {
            return Colour::fromFloatRGBA(0.8083044982698964, 0.8083044982698964, 0.8083044982698964, 1.0);
        }
        if (val <= 0.652302)
        {
            return Colour::fromFloatRGBA(0.8024605920799694, 0.8024605920799694, 0.8024605920799694, 1.0);
        }
        if (val <= 0.656208)
        {
            return Colour::fromFloatRGBA(0.7966166858900424, 0.7966166858900424, 0.7966166858900424, 1.0);
        }
        if (val <= 0.660114)
        {
            return Colour::fromFloatRGBA(0.7907727797001155, 0.7907727797001155, 0.7907727797001155, 1.0);
        }
        if (val <= 0.6640199999999999)
        {
            return Colour::fromFloatRGBA(0.7849288735101885, 0.7849288735101885, 0.7849288735101885, 1.0);
        }
        if (val <= 0.667926)
        {
            return Colour::fromFloatRGBA(0.7790849673202616, 0.7790849673202616, 0.7790849673202616, 1.0);
        }
        if (val <= 0.671832)
        {
            return Colour::fromFloatRGBA(0.7732410611303346, 0.7732410611303346, 0.7732410611303346, 1.0);
        }
        if (val <= 0.675738)
        {
            return Colour::fromFloatRGBA(0.7673971549404077, 0.7673971549404077, 0.7673971549404077, 1.0);
        }
        if (val <= 0.679644)
        {
            return Colour::fromFloatRGBA(0.7615532487504807, 0.7615532487504807, 0.7615532487504807, 1.0);
        }
        if (val <= 0.68355)
        {
            return Colour::fromFloatRGBA(0.7557093425605538, 0.7557093425605538, 0.7557093425605538, 1.0);
        }
        if (val <= 0.687456)
        {
            return Colour::fromFloatRGBA(0.7498654363706267, 0.7498654363706267, 0.7498654363706267, 1.0);
        }
        if (val <= 0.691362)
        {
            return Colour::fromFloatRGBA(0.7440215301806998, 0.7440215301806998, 0.7440215301806998, 1.0);
        }
        if (val <= 0.695268)
        {
            return Colour::fromFloatRGBA(0.7381776239907729, 0.7381776239907729, 0.7381776239907729, 1.0);
        }
        if (val <= 0.699174)
        {
            return Colour::fromFloatRGBA(0.732333717800846, 0.732333717800846, 0.732333717800846, 1.0);
        }
        if (val <= 0.70308)
        {
            return Colour::fromFloatRGBA(0.7254901960784316, 0.7254901960784316, 0.7254901960784316, 1.0);
        }
        if (val <= 0.706986)
        {
            return Colour::fromFloatRGBA(0.7176470588235299, 0.7176470588235299, 0.7176470588235299, 1.0);
        }
        if (val <= 0.710892)
        {
            return Colour::fromFloatRGBA(0.7098039215686276, 0.7098039215686276, 0.7098039215686276, 1.0);
        }
        if (val <= 0.714798)
        {
            return Colour::fromFloatRGBA(0.7019607843137257, 0.7019607843137257, 0.7019607843137257, 1.0);
        }
        if (val <= 0.718704)
        {
            return Colour::fromFloatRGBA(0.6941176470588237, 0.6941176470588237, 0.6941176470588237, 1.0);
        }
        if (val <= 0.72261)
        {
            return Colour::fromFloatRGBA(0.6862745098039217, 0.6862745098039217, 0.6862745098039217, 1.0);
        }
        if (val <= 0.726516)
        {
            return Colour::fromFloatRGBA(0.6784313725490198, 0.6784313725490198, 0.6784313725490198, 1.0);
        }
        if (val <= 0.730422)
        {
            return Colour::fromFloatRGBA(0.6705882352941178, 0.6705882352941178, 0.6705882352941178, 1.0);
        }
        if (val <= 0.734328)
        {
            return Colour::fromFloatRGBA(0.6627450980392158, 0.6627450980392158, 0.6627450980392158, 1.0);
        }
        if (val <= 0.738234)
        {
            return Colour::fromFloatRGBA(0.6549019607843138, 0.6549019607843138, 0.6549019607843138, 1.0);
        }
        if (val <= 0.74214)
        {
            return Colour::fromFloatRGBA(0.6470588235294119, 0.6470588235294119, 0.6470588235294119, 1.0);
        }
        if (val <= 0.746046)
        {
            return Colour::fromFloatRGBA(0.6392156862745099, 0.6392156862745099, 0.6392156862745099, 1.0);
        }
        if (val <= 0.749952)
        {
            return Colour::fromFloatRGBA(0.6313725490196079, 0.6313725490196079, 0.6313725490196079, 1.0);
        }
        if (val <= 0.753858)
        {
            return Colour::fromFloatRGBA(0.623529411764706, 0.623529411764706, 0.623529411764706, 1.0);
        }
        if (val <= 0.757764)
        {
            return Colour::fromFloatRGBA(0.615686274509804, 0.615686274509804, 0.615686274509804, 1.0);
        }
        if (val <= 0.76167)
        {
            return Colour::fromFloatRGBA(0.607843137254902, 0.607843137254902, 0.607843137254902, 1.0);
        }
        if (val <= 0.765576)
        {
            return Colour::fromFloatRGBA(0.6000000000000001, 0.6000000000000001, 0.6000000000000001, 1.0);
        }
        if (val <= 0.769482)
        {
            return Colour::fromFloatRGBA(0.5921568627450984, 0.5921568627450984, 0.5921568627450984, 1.0);
        }
        if (val <= 0.773388)
        {
            return Colour::fromFloatRGBA(0.5843137254901961, 0.5843137254901961, 0.5843137254901961, 1.0);
        }
        if (val <= 0.777294)
        {
            return Colour::fromFloatRGBA(0.5764705882352942, 0.5764705882352942, 0.5764705882352942, 1.0);
        }
        if (val <= 0.7812)
        {
            return Colour::fromFloatRGBA(0.5686274509803921, 0.5686274509803921, 0.5686274509803921, 1.0);
        }
        if (val <= 0.785106)
        {
            return Colour::fromFloatRGBA(0.5607843137254902, 0.5607843137254902, 0.5607843137254902, 1.0);
        }
        if (val <= 0.789012)
        {
            return Colour::fromFloatRGBA(0.5529411764705883, 0.5529411764705883, 0.5529411764705883, 1.0);
        }
        if (val <= 0.792918)
        {
            return Colour::fromFloatRGBA(0.5450980392156863, 0.5450980392156863, 0.5450980392156863, 1.0);
        }
        if (val <= 0.796824)
        {
            return Colour::fromFloatRGBA(0.5372549019607844, 0.5372549019607844, 0.5372549019607844, 1.0);
        }
        if (val <= 0.80073)
        {
            return Colour::fromFloatRGBA(0.5294117647058824, 0.5294117647058824, 0.5294117647058824, 1.0);
        }
        if (val <= 0.804636)
        {
            return Colour::fromFloatRGBA(0.5204921184159939, 0.5204921184159939, 0.5204921184159939, 1.0);
        }
        if (val <= 0.808542)
        {
            return Colour::fromFloatRGBA(0.5115724721261053, 0.5115724721261053, 0.5115724721261053, 1.0);
        }
        if (val <= 0.812448)
        {
            return Colour::fromFloatRGBA(0.5026528258362168, 0.5026528258362168, 0.5026528258362168, 1.0);
        }
        if (val <= 0.816354)
        {
            return Colour::fromFloatRGBA(0.49373317954632834, 0.49373317954632834, 0.49373317954632834, 1.0);
        }
        if (val <= 0.82026)
        {
            return Colour::fromFloatRGBA(0.48481353325643983, 0.48481353325643983, 0.48481353325643983, 1.0);
        }
        if (val <= 0.824166)
        {
            return Colour::fromFloatRGBA(0.4758938869665513, 0.4758938869665513, 0.4758938869665513, 1.0);
        }
        if (val <= 0.828072)
        {
            return Colour::fromFloatRGBA(0.4669742406766628, 0.4669742406766628, 0.4669742406766628, 1.0);
        }
        if (val <= 0.831978)
        {
            return Colour::fromFloatRGBA(0.45805459438677454, 0.45805459438677454, 0.45805459438677454, 1.0);
        }
        if (val <= 0.835884)
        {
            return Colour::fromFloatRGBA(0.4491349480968858, 0.4491349480968858, 0.4491349480968858, 1.0);
        }
        if (val <= 0.83979)
        {
            return Colour::fromFloatRGBA(0.4402153018069973, 0.4402153018069973, 0.4402153018069973, 1.0);
        }
        if (val <= 0.843696)
        {
            return Colour::fromFloatRGBA(0.4312956555171088, 0.4312956555171088, 0.4312956555171088, 1.0);
        }
        if (val <= 0.847602)
        {
            return Colour::fromFloatRGBA(0.4223760092272203, 0.4223760092272203, 0.4223760092272203, 1.0);
        }
        if (val <= 0.851508)
        {
            return Colour::fromFloatRGBA(0.4134563629373318, 0.4134563629373318, 0.4134563629373318, 1.0);
        }
        if (val <= 0.855414)
        {
            return Colour::fromFloatRGBA(0.4045367166474433, 0.4045367166474433, 0.4045367166474433, 1.0);
        }
        if (val <= 0.85932)
        {
            return Colour::fromFloatRGBA(0.3956170703575548, 0.3956170703575548, 0.3956170703575548, 1.0);
        }
        if (val <= 0.863226)
        {
            return Colour::fromFloatRGBA(0.3866974240676663, 0.3866974240676663, 0.3866974240676663, 1.0);
        }
        if (val <= 0.867132)
        {
            return Colour::fromFloatRGBA(0.37777777777777777, 0.37777777777777777, 0.37777777777777777, 1.0);
        }
        if (val <= 0.871038)
        {
            return Colour::fromFloatRGBA(0.36885813148788926, 0.36885813148788926, 0.36885813148788926, 1.0);
        }
        if (val <= 0.874944)
        {
            return Colour::fromFloatRGBA(0.35993848519800076, 0.35993848519800076, 0.35993848519800076, 1.0);
        }
        if (val <= 0.87885)
        {
            return Colour::fromFloatRGBA(0.35101883890811225, 0.35101883890811225, 0.35101883890811225, 1.0);
        }
        if (val <= 0.882756)
        {
            return Colour::fromFloatRGBA(0.34209919261822375, 0.34209919261822375, 0.34209919261822375, 1.0);
        }
        if (val <= 0.8866620000000001)
        {
            return Colour::fromFloatRGBA(0.33317954632833524, 0.33317954632833524, 0.33317954632833524, 1.0);
        }
        if (val <= 0.890568)
        {
            return Colour::fromFloatRGBA(0.32425990003844674, 0.32425990003844674, 0.32425990003844674, 1.0);
        }
        if (val <= 0.894474)
        {
            return Colour::fromFloatRGBA(0.31534025374855845, 0.31534025374855845, 0.31534025374855845, 1.0);
        }
        if (val <= 0.89838)
        {
            return Colour::fromFloatRGBA(0.3064206074586697, 0.3064206074586697, 0.3064206074586697, 1.0);
        }
        if (val <= 0.902286)
        {
            return Colour::fromFloatRGBA(0.2980392156862745, 0.2980392156862745, 0.2980392156862745, 1.0);
        }
        if (val <= 0.906192)
        {
            return Colour::fromFloatRGBA(0.2901960784313725, 0.2901960784313725, 0.2901960784313725, 1.0);
        }
        if (val <= 0.910098)
        {
            return Colour::fromFloatRGBA(0.2823529411764706, 0.2823529411764706, 0.2823529411764706, 1.0);
        }
        if (val <= 0.914004)
        {
            return Colour::fromFloatRGBA(0.2745098039215686, 0.2745098039215686, 0.2745098039215686, 1.0);
        }
        if (val <= 0.91791)
        {
            return Colour::fromFloatRGBA(0.26666666666666666, 0.26666666666666666, 0.26666666666666666, 1.0);
        }
        if (val <= 0.921816)
        {
            return Colour::fromFloatRGBA(0.2588235294117647, 0.2588235294117647, 0.2588235294117647, 1.0);
        }
        if (val <= 0.925722)
        {
            return Colour::fromFloatRGBA(0.25098039215686274, 0.25098039215686274, 0.25098039215686274, 1.0);
        }
        if (val <= 0.929628)
        {
            return Colour::fromFloatRGBA(0.24313725490196075, 0.24313725490196075, 0.24313725490196075, 1.0);
        }
        if (val <= 0.933534)
        {
            return Colour::fromFloatRGBA(0.23529411764705882, 0.23529411764705882, 0.23529411764705882, 1.0);
        }
        if (val <= 0.93744)
        {
            return Colour::fromFloatRGBA(0.22745098039215683, 0.22745098039215683, 0.22745098039215683, 1.0);
        }
        if (val <= 0.941346)
        {
            return Colour::fromFloatRGBA(0.2196078431372549, 0.2196078431372549, 0.2196078431372549, 1.0);
        }
        if (val <= 0.945252)
        {
            return Colour::fromFloatRGBA(0.2117647058823529, 0.2117647058823529, 0.2117647058823529, 1.0);
        }
        if (val <= 0.9491580000000001)
        {
            return Colour::fromFloatRGBA(0.20392156862745098, 0.20392156862745098, 0.20392156862745098, 1.0);
        }
        if (val <= 0.953064)
        {
            return Colour::fromFloatRGBA(0.196078431372549, 0.196078431372549, 0.196078431372549, 1.0);
        }
        if (val <= 0.95697)
        {
            return Colour::fromFloatRGBA(0.18823529411764728, 0.18823529411764728, 0.18823529411764728, 1.0);
        }
        if (val <= 0.9608760000000001)
        {
            return Colour::fromFloatRGBA(0.1803921568627451, 0.1803921568627451, 0.1803921568627451, 1.0);
        }
        if (val <= 0.964782)
        {
            return Colour::fromFloatRGBA(0.17254901960784313, 0.17254901960784313, 0.17254901960784313, 1.0);
        }
        if (val <= 0.968688)
        {
            return Colour::fromFloatRGBA(0.16470588235294117, 0.16470588235294117, 0.16470588235294117, 1.0);
        }
        if (val <= 0.972594)
        {
            return Colour::fromFloatRGBA(0.1568627450980392, 0.1568627450980392, 0.1568627450980392, 1.0);
        }
        if (val <= 0.9765)
        {
            return Colour::fromFloatRGBA(0.14901960784313725, 0.14901960784313725, 0.14901960784313725, 1.0);
        }
        if (val <= 0.980406)
        {
            return Colour::fromFloatRGBA(0.1411764705882353, 0.1411764705882353, 0.1411764705882353, 1.0);
        }
        if (val <= 0.984312)
        {
            return Colour::fromFloatRGBA(0.13333333333333333, 0.13333333333333333, 0.13333333333333333, 1.0);
        }
        if (val <= 0.988218)
        {
            return Colour::fromFloatRGBA(0.12549019607843137, 0.12549019607843137, 0.12549019607843137, 1.0);
        }
        if (val <= 0.992124)
        {
            return Colour::fromFloatRGBA(0.11764705882352941, 0.11764705882352941, 0.11764705882352941, 1.0);
        }
        if (val <= 0.99603)
        {
            return Colour::fromFloatRGBA(0.10980392156862745, 0.10980392156862745, 0.10980392156862745, 1.0);
        }
        if (val <= 0.999936)
        {
            return Colour::fromFloatRGBA(0.10196078431372549, 0.10196078431372549, 0.10196078431372549, 1.0);
        }

        return Colour::fromFloatRGBA(0.10196078431372549, 0.10196078431372549, 0.10196078431372549, 1.0);
    }

    Colour colourFromGreys(float val)
    {
        if (val <= 0.003906)
        {
            return Colour::fromFloatRGBA(1.0, 1.0, 1.0, 1.0);
        }
        if (val <= 0.007812)
        {
            return Colour::fromFloatRGBA(0.9981545559400231, 0.9981545559400231, 0.9981545559400231, 1.0);
        }
        if (val <= 0.011718000000000001)
        {
            return Colour::fromFloatRGBA(0.9963091118800461, 0.9963091118800461, 0.9963091118800461, 1.0);
        }
        if (val <= 0.015624)
        {
            return Colour::fromFloatRGBA(0.9944636678200692, 0.9944636678200692, 0.9944636678200692, 1.0);
        }
        if (val <= 0.019530000000000002)
        {
            return Colour::fromFloatRGBA(0.9926182237600922, 0.9926182237600922, 0.9926182237600922, 1.0);
        }
        if (val <= 0.023436000000000002)
        {
            return Colour::fromFloatRGBA(0.9907727797001153, 0.9907727797001153, 0.9907727797001153, 1.0);
        }
        if (val <= 0.027342)
        {
            return Colour::fromFloatRGBA(0.9889273356401385, 0.9889273356401385, 0.9889273356401385, 1.0);
        }
        if (val <= 0.031248)
        {
            return Colour::fromFloatRGBA(0.9870818915801615, 0.9870818915801615, 0.9870818915801615, 1.0);
        }
        if (val <= 0.035154000000000005)
        {
            return Colour::fromFloatRGBA(0.9852364475201846, 0.9852364475201846, 0.9852364475201846, 1.0);
        }
        if (val <= 0.039060000000000004)
        {
            return Colour::fromFloatRGBA(0.9833910034602076, 0.9833910034602076, 0.9833910034602076, 1.0);
        }
        if (val <= 0.042966000000000004)
        {
            return Colour::fromFloatRGBA(0.9815455594002307, 0.9815455594002307, 0.9815455594002307, 1.0);
        }
        if (val <= 0.046872000000000004)
        {
            return Colour::fromFloatRGBA(0.9797001153402537, 0.9797001153402537, 0.9797001153402537, 1.0);
        }
        if (val <= 0.050778000000000004)
        {
            return Colour::fromFloatRGBA(0.9778546712802768, 0.9778546712802768, 0.9778546712802768, 1.0);
        }
        if (val <= 0.054684)
        {
            return Colour::fromFloatRGBA(0.9760092272202999, 0.9760092272202999, 0.9760092272202999, 1.0);
        }
        if (val <= 0.05859)
        {
            return Colour::fromFloatRGBA(0.9741637831603229, 0.9741637831603229, 0.9741637831603229, 1.0);
        }
        if (val <= 0.062496)
        {
            return Colour::fromFloatRGBA(0.972318339100346, 0.972318339100346, 0.972318339100346, 1.0);
        }
        if (val <= 0.066402)
        {
            return Colour::fromFloatRGBA(0.970472895040369, 0.970472895040369, 0.970472895040369, 1.0);
        }
        if (val <= 0.07030800000000001)
        {
            return Colour::fromFloatRGBA(0.9686274509803922, 0.9686274509803922, 0.9686274509803922, 1.0);
        }
        if (val <= 0.07421400000000002)
        {
            return Colour::fromFloatRGBA(0.9667820069204152, 0.9667820069204152, 0.9667820069204152, 1.0);
        }
        if (val <= 0.07812000000000001)
        {
            return Colour::fromFloatRGBA(0.9649365628604383, 0.9649365628604383, 0.9649365628604383, 1.0);
        }
        if (val <= 0.08202600000000002)
        {
            return Colour::fromFloatRGBA(0.9630911188004614, 0.9630911188004614, 0.9630911188004614, 1.0);
        }
        if (val <= 0.08593200000000001)
        {
            return Colour::fromFloatRGBA(0.9612456747404844, 0.9612456747404844, 0.9612456747404844, 1.0);
        }
        if (val <= 0.08983800000000002)
        {
            return Colour::fromFloatRGBA(0.9594002306805075, 0.9594002306805075, 0.9594002306805075, 1.0);
        }
        if (val <= 0.09374400000000001)
        {
            return Colour::fromFloatRGBA(0.9575547866205305, 0.9575547866205305, 0.9575547866205305, 1.0);
        }
        if (val <= 0.09765000000000001)
        {
            return Colour::fromFloatRGBA(0.9557093425605536, 0.9557093425605536, 0.9557093425605536, 1.0);
        }
        if (val <= 0.10155600000000001)
        {
            return Colour::fromFloatRGBA(0.9538638985005767, 0.9538638985005767, 0.9538638985005767, 1.0);
        }
        if (val <= 0.10546200000000001)
        {
            return Colour::fromFloatRGBA(0.9520184544405997, 0.9520184544405997, 0.9520184544405997, 1.0);
        }
        if (val <= 0.109368)
        {
            return Colour::fromFloatRGBA(0.9501730103806229, 0.9501730103806229, 0.9501730103806229, 1.0);
        }
        if (val <= 0.11327400000000001)
        {
            return Colour::fromFloatRGBA(0.9483275663206459, 0.9483275663206459, 0.9483275663206459, 1.0);
        }
        if (val <= 0.11718)
        {
            return Colour::fromFloatRGBA(0.946482122260669, 0.946482122260669, 0.946482122260669, 1.0);
        }
        if (val <= 0.12108600000000001)
        {
            return Colour::fromFloatRGBA(0.9446366782006921, 0.9446366782006921, 0.9446366782006921, 1.0);
        }
        if (val <= 0.124992)
        {
            return Colour::fromFloatRGBA(0.9427912341407151, 0.9427912341407151, 0.9427912341407151, 1.0);
        }
        if (val <= 0.128898)
        {
            return Colour::fromFloatRGBA(0.9408227604767397, 0.9408227604767397, 0.9408227604767397, 1.0);
        }
        if (val <= 0.132804)
        {
            return Colour::fromFloatRGBA(0.9379930795847751, 0.9379930795847751, 0.9379930795847751, 1.0);
        }
        if (val <= 0.13671)
        {
            return Colour::fromFloatRGBA(0.9351633986928104, 0.9351633986928104, 0.9351633986928104, 1.0);
        }
        if (val <= 0.140616)
        {
            return Colour::fromFloatRGBA(0.9323337178008458, 0.9323337178008458, 0.9323337178008458, 1.0);
        }
        if (val <= 0.144522)
        {
            return Colour::fromFloatRGBA(0.9295040369088812, 0.9295040369088812, 0.9295040369088812, 1.0);
        }
        if (val <= 0.148428)
        {
            return Colour::fromFloatRGBA(0.9266743560169166, 0.9266743560169166, 0.9266743560169166, 1.0);
        }
        if (val <= 0.152334)
        {
            return Colour::fromFloatRGBA(0.9238446751249519, 0.9238446751249519, 0.9238446751249519, 1.0);
        }
        if (val <= 0.15624)
        {
            return Colour::fromFloatRGBA(0.9210149942329873, 0.9210149942329873, 0.9210149942329873, 1.0);
        }
        if (val <= 0.160146)
        {
            return Colour::fromFloatRGBA(0.9181853133410227, 0.9181853133410227, 0.9181853133410227, 1.0);
        }
        if (val <= 0.164052)
        {
            return Colour::fromFloatRGBA(0.915355632449058, 0.915355632449058, 0.915355632449058, 1.0);
        }
        if (val <= 0.167958)
        {
            return Colour::fromFloatRGBA(0.9125259515570934, 0.9125259515570934, 0.9125259515570934, 1.0);
        }
        if (val <= 0.171864)
        {
            return Colour::fromFloatRGBA(0.9096962706651288, 0.9096962706651288, 0.9096962706651288, 1.0);
        }
        if (val <= 0.17577)
        {
            return Colour::fromFloatRGBA(0.9068665897731641, 0.9068665897731641, 0.9068665897731641, 1.0);
        }
        if (val <= 0.179676)
        {
            return Colour::fromFloatRGBA(0.9040369088811996, 0.9040369088811996, 0.9040369088811996, 1.0);
        }
        if (val <= 0.183582)
        {
            return Colour::fromFloatRGBA(0.9012072279892349, 0.9012072279892349, 0.9012072279892349, 1.0);
        }
        if (val <= 0.187488)
        {
            return Colour::fromFloatRGBA(0.8983775470972702, 0.8983775470972702, 0.8983775470972702, 1.0);
        }
        if (val <= 0.191394)
        {
            return Colour::fromFloatRGBA(0.8955478662053056, 0.8955478662053056, 0.8955478662053056, 1.0);
        }
        if (val <= 0.1953)
        {
            return Colour::fromFloatRGBA(0.892718185313341, 0.892718185313341, 0.892718185313341, 1.0);
        }
        if (val <= 0.199206)
        {
            return Colour::fromFloatRGBA(0.8898885044213763, 0.8898885044213763, 0.8898885044213763, 1.0);
        }
        if (val <= 0.20311200000000001)
        {
            return Colour::fromFloatRGBA(0.8870588235294118, 0.8870588235294118, 0.8870588235294118, 1.0);
        }
        if (val <= 0.207018)
        {
            return Colour::fromFloatRGBA(0.8842291426374471, 0.8842291426374471, 0.8842291426374471, 1.0);
        }
        if (val <= 0.210924)
        {
            return Colour::fromFloatRGBA(0.8813994617454826, 0.8813994617454826, 0.8813994617454826, 1.0);
        }
        if (val <= 0.21483)
        {
            return Colour::fromFloatRGBA(0.8785697808535179, 0.8785697808535179, 0.8785697808535179, 1.0);
        }
        if (val <= 0.218736)
        {
            return Colour::fromFloatRGBA(0.8757400999615532, 0.8757400999615532, 0.8757400999615532, 1.0);
        }
        if (val <= 0.222642)
        {
            return Colour::fromFloatRGBA(0.8729104190695887, 0.8729104190695887, 0.8729104190695887, 1.0);
        }
        if (val <= 0.226548)
        {
            return Colour::fromFloatRGBA(0.870080738177624, 0.870080738177624, 0.870080738177624, 1.0);
        }
        if (val <= 0.230454)
        {
            return Colour::fromFloatRGBA(0.8672510572856593, 0.8672510572856593, 0.8672510572856593, 1.0);
        }
        if (val <= 0.23436)
        {
            return Colour::fromFloatRGBA(0.8644213763936948, 0.8644213763936948, 0.8644213763936948, 1.0);
        }
        if (val <= 0.238266)
        {
            return Colour::fromFloatRGBA(0.8615916955017301, 0.8615916955017301, 0.8615916955017301, 1.0);
        }
        if (val <= 0.242172)
        {
            return Colour::fromFloatRGBA(0.8587620146097654, 0.8587620146097654, 0.8587620146097654, 1.0);
        }
        if (val <= 0.246078)
        {
            return Colour::fromFloatRGBA(0.8559323337178009, 0.8559323337178009, 0.8559323337178009, 1.0);
        }
        if (val <= 0.249984)
        {
            return Colour::fromFloatRGBA(0.8531026528258362, 0.8531026528258362, 0.8531026528258362, 1.0);
        }
        if (val <= 0.25389)
        {
            return Colour::fromFloatRGBA(0.8501191849288735, 0.8501191849288735, 0.8501191849288735, 1.0);
        }
        if (val <= 0.257796)
        {
            return Colour::fromFloatRGBA(0.8466743560169165, 0.8466743560169165, 0.8466743560169165, 1.0);
        }
        if (val <= 0.26170200000000005)
        {
            return Colour::fromFloatRGBA(0.8432295271049597, 0.8432295271049597, 0.8432295271049597, 1.0);
        }
        if (val <= 0.265608)
        {
            return Colour::fromFloatRGBA(0.8397846981930027, 0.8397846981930027, 0.8397846981930027, 1.0);
        }
        if (val <= 0.26951400000000003)
        {
            return Colour::fromFloatRGBA(0.8363398692810458, 0.8363398692810458, 0.8363398692810458, 1.0);
        }
        if (val <= 0.27342000000000005)
        {
            return Colour::fromFloatRGBA(0.8328950403690888, 0.8328950403690888, 0.8328950403690888, 1.0);
        }
        if (val <= 0.277326)
        {
            return Colour::fromFloatRGBA(0.8294502114571318, 0.8294502114571318, 0.8294502114571318, 1.0);
        }
        if (val <= 0.28123200000000004)
        {
            return Colour::fromFloatRGBA(0.826005382545175, 0.826005382545175, 0.826005382545175, 1.0);
        }
        if (val <= 0.28513800000000006)
        {
            return Colour::fromFloatRGBA(0.822560553633218, 0.822560553633218, 0.822560553633218, 1.0);
        }
        if (val <= 0.289044)
        {
            return Colour::fromFloatRGBA(0.819115724721261, 0.819115724721261, 0.819115724721261, 1.0);
        }
        if (val <= 0.29295000000000004)
        {
            return Colour::fromFloatRGBA(0.8156708958093042, 0.8156708958093042, 0.8156708958093042, 1.0);
        }
        if (val <= 0.296856)
        {
            return Colour::fromFloatRGBA(0.8122260668973471, 0.8122260668973471, 0.8122260668973471, 1.0);
        }
        if (val <= 0.30076200000000003)
        {
            return Colour::fromFloatRGBA(0.8087812379853903, 0.8087812379853903, 0.8087812379853903, 1.0);
        }
        if (val <= 0.30466800000000005)
        {
            return Colour::fromFloatRGBA(0.8053364090734333, 0.8053364090734333, 0.8053364090734333, 1.0);
        }
        if (val <= 0.308574)
        {
            return Colour::fromFloatRGBA(0.8018915801614763, 0.8018915801614763, 0.8018915801614763, 1.0);
        }
        if (val <= 0.31248000000000004)
        {
            return Colour::fromFloatRGBA(0.7984467512495195, 0.7984467512495195, 0.7984467512495195, 1.0);
        }
        if (val <= 0.31638600000000006)
        {
            return Colour::fromFloatRGBA(0.7950019223375625, 0.7950019223375625, 0.7950019223375625, 1.0);
        }
        if (val <= 0.320292)
        {
            return Colour::fromFloatRGBA(0.7915570934256055, 0.7915570934256055, 0.7915570934256055, 1.0);
        }
        if (val <= 0.32419800000000004)
        {
            return Colour::fromFloatRGBA(0.7881122645136487, 0.7881122645136487, 0.7881122645136487, 1.0);
        }
        if (val <= 0.32810400000000006)
        {
            return Colour::fromFloatRGBA(0.7846674356016916, 0.7846674356016916, 0.7846674356016916, 1.0);
        }
        if (val <= 0.33201)
        {
            return Colour::fromFloatRGBA(0.7812226066897348, 0.7812226066897348, 0.7812226066897348, 1.0);
        }
        if (val <= 0.33591600000000005)
        {
            return Colour::fromFloatRGBA(0.7777777777777778, 0.7777777777777778, 0.7777777777777778, 1.0);
        }
        if (val <= 0.339822)
        {
            return Colour::fromFloatRGBA(0.7743329488658208, 0.7743329488658208, 0.7743329488658208, 1.0);
        }
        if (val <= 0.34372800000000003)
        {
            return Colour::fromFloatRGBA(0.770888119953864, 0.770888119953864, 0.770888119953864, 1.0);
        }
        if (val <= 0.34763400000000005)
        {
            return Colour::fromFloatRGBA(0.767443291041907, 0.767443291041907, 0.767443291041907, 1.0);
        }
        if (val <= 0.35154)
        {
            return Colour::fromFloatRGBA(0.76399846212995, 0.76399846212995, 0.76399846212995, 1.0);
        }
        if (val <= 0.35544600000000004)
        {
            return Colour::fromFloatRGBA(0.7605536332179932, 0.7605536332179932, 0.7605536332179932, 1.0);
        }
        if (val <= 0.35935200000000006)
        {
            return Colour::fromFloatRGBA(0.7571088043060361, 0.7571088043060361, 0.7571088043060361, 1.0);
        }
        if (val <= 0.363258)
        {
            return Colour::fromFloatRGBA(0.7536639753940793, 0.7536639753940793, 0.7536639753940793, 1.0);
        }
        if (val <= 0.36716400000000005)
        {
            return Colour::fromFloatRGBA(0.7502191464821223, 0.7502191464821223, 0.7502191464821223, 1.0);
        }
        if (val <= 0.37107)
        {
            return Colour::fromFloatRGBA(0.7467743175701653, 0.7467743175701653, 0.7467743175701653, 1.0);
        }
        if (val <= 0.37497600000000003)
        {
            return Colour::fromFloatRGBA(0.7433294886582085, 0.7433294886582085, 0.7433294886582085, 1.0);
        }
        if (val <= 0.37888200000000005)
        {
            return Colour::fromFloatRGBA(0.7393771626297578, 0.7393771626297578, 0.7393771626297578, 1.0);
        }
        if (val <= 0.382788)
        {
            return Colour::fromFloatRGBA(0.7345790080738178, 0.7345790080738178, 0.7345790080738178, 1.0);
        }
        if (val <= 0.38669400000000004)
        {
            return Colour::fromFloatRGBA(0.7297808535178778, 0.7297808535178778, 0.7297808535178778, 1.0);
        }
        if (val <= 0.39060000000000006)
        {
            return Colour::fromFloatRGBA(0.7249826989619378, 0.7249826989619378, 0.7249826989619378, 1.0);
        }
        if (val <= 0.394506)
        {
            return Colour::fromFloatRGBA(0.7201845444059978, 0.7201845444059978, 0.7201845444059978, 1.0);
        }
        if (val <= 0.39841200000000004)
        {
            return Colour::fromFloatRGBA(0.7153863898500576, 0.7153863898500576, 0.7153863898500576, 1.0);
        }
        if (val <= 0.40231800000000006)
        {
            return Colour::fromFloatRGBA(0.7105882352941176, 0.7105882352941176, 0.7105882352941176, 1.0);
        }
        if (val <= 0.40622400000000003)
        {
            return Colour::fromFloatRGBA(0.7057900807381776, 0.7057900807381776, 0.7057900807381776, 1.0);
        }
        if (val <= 0.41013000000000005)
        {
            return Colour::fromFloatRGBA(0.7009919261822376, 0.7009919261822376, 0.7009919261822376, 1.0);
        }
        if (val <= 0.414036)
        {
            return Colour::fromFloatRGBA(0.6961937716262976, 0.6961937716262976, 0.6961937716262976, 1.0);
        }
        if (val <= 0.41794200000000004)
        {
            return Colour::fromFloatRGBA(0.6913956170703577, 0.6913956170703577, 0.6913956170703577, 1.0);
        }
        if (val <= 0.42184800000000006)
        {
            return Colour::fromFloatRGBA(0.6865974625144176, 0.6865974625144176, 0.6865974625144176, 1.0);
        }
        if (val <= 0.425754)
        {
            return Colour::fromFloatRGBA(0.6817993079584775, 0.6817993079584775, 0.6817993079584775, 1.0);
        }
        if (val <= 0.42966000000000004)
        {
            return Colour::fromFloatRGBA(0.6770011534025375, 0.6770011534025375, 0.6770011534025375, 1.0);
        }
        if (val <= 0.43356600000000006)
        {
            return Colour::fromFloatRGBA(0.6722029988465975, 0.6722029988465975, 0.6722029988465975, 1.0);
        }
        if (val <= 0.437472)
        {
            return Colour::fromFloatRGBA(0.6674048442906575, 0.6674048442906575, 0.6674048442906575, 1.0);
        }
        if (val <= 0.44137800000000005)
        {
            return Colour::fromFloatRGBA(0.6626066897347175, 0.6626066897347175, 0.6626066897347175, 1.0);
        }
        if (val <= 0.44528400000000007)
        {
            return Colour::fromFloatRGBA(0.6578085351787775, 0.6578085351787775, 0.6578085351787775, 1.0);
        }
        if (val <= 0.44919000000000003)
        {
            return Colour::fromFloatRGBA(0.6530103806228374, 0.6530103806228374, 0.6530103806228374, 1.0);
        }
        if (val <= 0.45309600000000005)
        {
            return Colour::fromFloatRGBA(0.6482122260668974, 0.6482122260668974, 0.6482122260668974, 1.0);
        }
        if (val <= 0.457002)
        {
            return Colour::fromFloatRGBA(0.6434140715109573, 0.6434140715109573, 0.6434140715109573, 1.0);
        }
        if (val <= 0.46090800000000004)
        {
            return Colour::fromFloatRGBA(0.6386159169550173, 0.6386159169550173, 0.6386159169550173, 1.0);
        }
        if (val <= 0.46481400000000006)
        {
            return Colour::fromFloatRGBA(0.6338177623990773, 0.6338177623990773, 0.6338177623990773, 1.0);
        }
        if (val <= 0.46872)
        {
            return Colour::fromFloatRGBA(0.6290196078431373, 0.6290196078431373, 0.6290196078431373, 1.0);
        }
        if (val <= 0.47262600000000005)
        {
            return Colour::fromFloatRGBA(0.6242214532871972, 0.6242214532871972, 0.6242214532871972, 1.0);
        }
        if (val <= 0.47653200000000007)
        {
            return Colour::fromFloatRGBA(0.6194232987312572, 0.6194232987312572, 0.6194232987312572, 1.0);
        }
        if (val <= 0.48043800000000003)
        {
            return Colour::fromFloatRGBA(0.6146251441753172, 0.6146251441753172, 0.6146251441753172, 1.0);
        }
        if (val <= 0.48434400000000005)
        {
            return Colour::fromFloatRGBA(0.6098269896193772, 0.6098269896193772, 0.6098269896193772, 1.0);
        }
        if (val <= 0.48825)
        {
            return Colour::fromFloatRGBA(0.6050288350634372, 0.6050288350634372, 0.6050288350634372, 1.0);
        }
        if (val <= 0.49215600000000004)
        {
            return Colour::fromFloatRGBA(0.6002306805074972, 0.6002306805074972, 0.6002306805074972, 1.0);
        }
        if (val <= 0.49606200000000006)
        {
            return Colour::fromFloatRGBA(0.5954325259515572, 0.5954325259515572, 0.5954325259515572, 1.0);
        }
        if (val <= 0.499968)
        {
            return Colour::fromFloatRGBA(0.590634371395617, 0.590634371395617, 0.590634371395617, 1.0);
        }
        if (val <= 0.503874)
        {
            return Colour::fromFloatRGBA(0.586082276047674, 0.586082276047674, 0.586082276047674, 1.0);
        }
        if (val <= 0.50778)
        {
            return Colour::fromFloatRGBA(0.5817762399077279, 0.5817762399077279, 0.5817762399077279, 1.0);
        }
        if (val <= 0.511686)
        {
            return Colour::fromFloatRGBA(0.5774702037677817, 0.5774702037677817, 0.5774702037677817, 1.0);
        }
        if (val <= 0.5155919999999999)
        {
            return Colour::fromFloatRGBA(0.5731641676278355, 0.5731641676278355, 0.5731641676278355, 1.0);
        }
        if (val <= 0.519498)
        {
            return Colour::fromFloatRGBA(0.5688581314878894, 0.5688581314878894, 0.5688581314878894, 1.0);
        }
        if (val <= 0.523404)
        {
            return Colour::fromFloatRGBA(0.5645520953479432, 0.5645520953479432, 0.5645520953479432, 1.0);
        }
        if (val <= 0.52731)
        {
            return Colour::fromFloatRGBA(0.560246059207997, 0.560246059207997, 0.560246059207997, 1.0);
        }
        if (val <= 0.531216)
        {
            return Colour::fromFloatRGBA(0.5559400230680508, 0.5559400230680508, 0.5559400230680508, 1.0);
        }
        if (val <= 0.535122)
        {
            return Colour::fromFloatRGBA(0.5516339869281046, 0.5516339869281046, 0.5516339869281046, 1.0);
        }
        if (val <= 0.539028)
        {
            return Colour::fromFloatRGBA(0.5473279507881584, 0.5473279507881584, 0.5473279507881584, 1.0);
        }
        if (val <= 0.542934)
        {
            return Colour::fromFloatRGBA(0.5430219146482123, 0.5430219146482123, 0.5430219146482123, 1.0);
        }
        if (val <= 0.54684)
        {
            return Colour::fromFloatRGBA(0.5387158785082661, 0.5387158785082661, 0.5387158785082661, 1.0);
        }
        if (val <= 0.550746)
        {
            return Colour::fromFloatRGBA(0.5344098423683199, 0.5344098423683199, 0.5344098423683199, 1.0);
        }
        if (val <= 0.554652)
        {
            return Colour::fromFloatRGBA(0.5301038062283737, 0.5301038062283737, 0.5301038062283737, 1.0);
        }
        if (val <= 0.558558)
        {
            return Colour::fromFloatRGBA(0.5257977700884275, 0.5257977700884275, 0.5257977700884275, 1.0);
        }
        if (val <= 0.562464)
        {
            return Colour::fromFloatRGBA(0.5214917339484814, 0.5214917339484814, 0.5214917339484814, 1.0);
        }
        if (val <= 0.56637)
        {
            return Colour::fromFloatRGBA(0.5171856978085352, 0.5171856978085352, 0.5171856978085352, 1.0);
        }
        if (val <= 0.570276)
        {
            return Colour::fromFloatRGBA(0.512879661668589, 0.512879661668589, 0.512879661668589, 1.0);
        }
        if (val <= 0.574182)
        {
            return Colour::fromFloatRGBA(0.5085736255286428, 0.5085736255286428, 0.5085736255286428, 1.0);
        }
        if (val <= 0.578088)
        {
            return Colour::fromFloatRGBA(0.5042675893886966, 0.5042675893886966, 0.5042675893886966, 1.0);
        }
        if (val <= 0.581994)
        {
            return Colour::fromFloatRGBA(0.4999615532487506, 0.4999615532487506, 0.4999615532487506, 1.0);
        }
        if (val <= 0.5859)
        {
            return Colour::fromFloatRGBA(0.4956555171088043, 0.4956555171088043, 0.4956555171088043, 1.0);
        }
        if (val <= 0.5898059999999999)
        {
            return Colour::fromFloatRGBA(0.4913494809688581, 0.4913494809688581, 0.4913494809688581, 1.0);
        }
        if (val <= 0.593712)
        {
            return Colour::fromFloatRGBA(0.48704344482891193, 0.48704344482891193, 0.48704344482891193, 1.0);
        }
        if (val <= 0.597618)
        {
            return Colour::fromFloatRGBA(0.48273740868896575, 0.48273740868896575, 0.48273740868896575, 1.0);
        }
        if (val <= 0.601524)
        {
            return Colour::fromFloatRGBA(0.47843137254901963, 0.47843137254901963, 0.47843137254901963, 1.0);
        }
        if (val <= 0.60543)
        {
            return Colour::fromFloatRGBA(0.47412533640907345, 0.47412533640907345, 0.47412533640907345, 1.0);
        }
        if (val <= 0.609336)
        {
            return Colour::fromFloatRGBA(0.46981930026912727, 0.46981930026912727, 0.46981930026912727, 1.0);
        }
        if (val <= 0.613242)
        {
            return Colour::fromFloatRGBA(0.4655132641291811, 0.4655132641291811, 0.4655132641291811, 1.0);
        }
        if (val <= 0.617148)
        {
            return Colour::fromFloatRGBA(0.4612072279892349, 0.4612072279892349, 0.4612072279892349, 1.0);
        }
        if (val <= 0.621054)
        {
            return Colour::fromFloatRGBA(0.45690119184928873, 0.45690119184928873, 0.45690119184928873, 1.0);
        }
        if (val <= 0.62496)
        {
            return Colour::fromFloatRGBA(0.45259515570934256, 0.45259515570934256, 0.45259515570934256, 1.0);
        }
        if (val <= 0.628866)
        {
            return Colour::fromFloatRGBA(0.44844290657439445, 0.44844290657439445, 0.44844290657439445, 1.0);
        }
        if (val <= 0.632772)
        {
            return Colour::fromFloatRGBA(0.44438292964244525, 0.44438292964244525, 0.44438292964244525, 1.0);
        }
        if (val <= 0.636678)
        {
            return Colour::fromFloatRGBA(0.440322952710496, 0.440322952710496, 0.440322952710496, 1.0);
        }
        if (val <= 0.640584)
        {
            return Colour::fromFloatRGBA(0.4362629757785467, 0.4362629757785467, 0.4362629757785467, 1.0);
        }
        if (val <= 0.64449)
        {
            return Colour::fromFloatRGBA(0.4322029988465976, 0.4322029988465976, 0.4322029988465976, 1.0);
        }
        if (val <= 0.648396)
        {
            return Colour::fromFloatRGBA(0.4281430219146482, 0.4281430219146482, 0.4281430219146482, 1.0);
        }
        if (val <= 0.652302)
        {
            return Colour::fromFloatRGBA(0.424083044982699, 0.424083044982699, 0.424083044982699, 1.0);
        }
        if (val <= 0.656208)
        {
            return Colour::fromFloatRGBA(0.42002306805074974, 0.42002306805074974, 0.42002306805074974, 1.0);
        }
        if (val <= 0.660114)
        {
            return Colour::fromFloatRGBA(0.4159630911188005, 0.4159630911188005, 0.4159630911188005, 1.0);
        }
        if (val <= 0.6640199999999999)
        {
            return Colour::fromFloatRGBA(0.4119031141868512, 0.4119031141868512, 0.4119031141868512, 1.0);
        }
        if (val <= 0.667926)
        {
            return Colour::fromFloatRGBA(0.40784313725490196, 0.40784313725490196, 0.40784313725490196, 1.0);
        }
        if (val <= 0.671832)
        {
            return Colour::fromFloatRGBA(0.40378316032295275, 0.40378316032295275, 0.40378316032295275, 1.0);
        }
        if (val <= 0.675738)
        {
            return Colour::fromFloatRGBA(0.3997231833910035, 0.3997231833910035, 0.3997231833910035, 1.0);
        }
        if (val <= 0.679644)
        {
            return Colour::fromFloatRGBA(0.39566320645905423, 0.39566320645905423, 0.39566320645905423, 1.0);
        }
        if (val <= 0.68355)
        {
            return Colour::fromFloatRGBA(0.39160322952710497, 0.39160322952710497, 0.39160322952710497, 1.0);
        }
        if (val <= 0.687456)
        {
            return Colour::fromFloatRGBA(0.3875432525951557, 0.3875432525951557, 0.3875432525951557, 1.0);
        }
        if (val <= 0.691362)
        {
            return Colour::fromFloatRGBA(0.3834832756632065, 0.3834832756632065, 0.3834832756632065, 1.0);
        }
        if (val <= 0.695268)
        {
            return Colour::fromFloatRGBA(0.37942329873125724, 0.37942329873125724, 0.37942329873125724, 1.0);
        }
        if (val <= 0.699174)
        {
            return Colour::fromFloatRGBA(0.375363321799308, 0.375363321799308, 0.375363321799308, 1.0);
        }
        if (val <= 0.70308)
        {
            return Colour::fromFloatRGBA(0.3713033448673587, 0.3713033448673587, 0.3713033448673587, 1.0);
        }
        if (val <= 0.706986)
        {
            return Colour::fromFloatRGBA(0.36724336793540957, 0.36724336793540957, 0.36724336793540957, 1.0);
        }
        if (val <= 0.710892)
        {
            return Colour::fromFloatRGBA(0.3631833910034602, 0.3631833910034602, 0.3631833910034602, 1.0);
        }
        if (val <= 0.714798)
        {
            return Colour::fromFloatRGBA(0.35912341407151094, 0.35912341407151094, 0.35912341407151094, 1.0);
        }
        if (val <= 0.718704)
        {
            return Colour::fromFloatRGBA(0.35506343713956173, 0.35506343713956173, 0.35506343713956173, 1.0);
        }
        if (val <= 0.72261)
        {
            return Colour::fromFloatRGBA(0.35100346020761247, 0.35100346020761247, 0.35100346020761247, 1.0);
        }
        if (val <= 0.726516)
        {
            return Colour::fromFloatRGBA(0.3469434832756632, 0.3469434832756632, 0.3469434832756632, 1.0);
        }
        if (val <= 0.730422)
        {
            return Colour::fromFloatRGBA(0.342883506343714, 0.342883506343714, 0.342883506343714, 1.0);
        }
        if (val <= 0.734328)
        {
            return Colour::fromFloatRGBA(0.33882352941176475, 0.33882352941176475, 0.33882352941176475, 1.0);
        }
        if (val <= 0.738234)
        {
            return Colour::fromFloatRGBA(0.3347635524798155, 0.3347635524798155, 0.3347635524798155, 1.0);
        }
        if (val <= 0.74214)
        {
            return Colour::fromFloatRGBA(0.3307035755478662, 0.3307035755478662, 0.3307035755478662, 1.0);
        }
        if (val <= 0.746046)
        {
            return Colour::fromFloatRGBA(0.32664359861591696, 0.32664359861591696, 0.32664359861591696, 1.0);
        }
        if (val <= 0.749952)
        {
            return Colour::fromFloatRGBA(0.3225836216839677, 0.3225836216839677, 0.3225836216839677, 1.0);
        }
        if (val <= 0.753858)
        {
            return Colour::fromFloatRGBA(0.3174163783160323, 0.3174163783160323, 0.3174163783160323, 1.0);
        }
        if (val <= 0.757764)
        {
            return Colour::fromFloatRGBA(0.31188004613610154, 0.31188004613610154, 0.31188004613610154, 1.0);
        }
        if (val <= 0.76167)
        {
            return Colour::fromFloatRGBA(0.3063437139561707, 0.3063437139561707, 0.3063437139561707, 1.0);
        }
        if (val <= 0.765576)
        {
            return Colour::fromFloatRGBA(0.30080738177623995, 0.30080738177623995, 0.30080738177623995, 1.0);
        }
        if (val <= 0.769482)
        {
            return Colour::fromFloatRGBA(0.2952710495963093, 0.2952710495963093, 0.2952710495963093, 1.0);
        }
        if (val <= 0.773388)
        {
            return Colour::fromFloatRGBA(0.28973471741637835, 0.28973471741637835, 0.28973471741637835, 1.0);
        }
        if (val <= 0.777294)
        {
            return Colour::fromFloatRGBA(0.2841983852364475, 0.2841983852364475, 0.2841983852364475, 1.0);
        }
        if (val <= 0.7812)
        {
            return Colour::fromFloatRGBA(0.27866205305651676, 0.27866205305651676, 0.27866205305651676, 1.0);
        }
        if (val <= 0.785106)
        {
            return Colour::fromFloatRGBA(0.27312572087658593, 0.27312572087658593, 0.27312572087658593, 1.0);
        }
        if (val <= 0.789012)
        {
            return Colour::fromFloatRGBA(0.26758938869665516, 0.26758938869665516, 0.26758938869665516, 1.0);
        }
        if (val <= 0.792918)
        {
            return Colour::fromFloatRGBA(0.26205305651672434, 0.26205305651672434, 0.26205305651672434, 1.0);
        }
        if (val <= 0.796824)
        {
            return Colour::fromFloatRGBA(0.25651672433679357, 0.25651672433679357, 0.25651672433679357, 1.0);
        }
        if (val <= 0.80073)
        {
            return Colour::fromFloatRGBA(0.25098039215686274, 0.25098039215686274, 0.25098039215686274, 1.0);
        }
        if (val <= 0.804636)
        {
            return Colour::fromFloatRGBA(0.24544405997693197, 0.24544405997693197, 0.24544405997693197, 1.0);
        }
        if (val <= 0.808542)
        {
            return Colour::fromFloatRGBA(0.23990772779700117, 0.23990772779700117, 0.23990772779700117, 1.0);
        }
        if (val <= 0.812448)
        {
            return Colour::fromFloatRGBA(0.23437139561707038, 0.23437139561707038, 0.23437139561707038, 1.0);
        }
        if (val <= 0.816354)
        {
            return Colour::fromFloatRGBA(0.22883506343713958, 0.22883506343713958, 0.22883506343713958, 1.0);
        }
        if (val <= 0.82026)
        {
            return Colour::fromFloatRGBA(0.22329873125720878, 0.22329873125720878, 0.22329873125720878, 1.0);
        }
        if (val <= 0.824166)
        {
            return Colour::fromFloatRGBA(0.21776239907727798, 0.21776239907727798, 0.21776239907727798, 1.0);
        }
        if (val <= 0.828072)
        {
            return Colour::fromFloatRGBA(0.2122260668973472, 0.2122260668973472, 0.2122260668973472, 1.0);
        }
        if (val <= 0.831978)
        {
            return Colour::fromFloatRGBA(0.20668973471741653, 0.20668973471741653, 0.20668973471741653, 1.0);
        }
        if (val <= 0.835884)
        {
            return Colour::fromFloatRGBA(0.2011534025374856, 0.2011534025374856, 0.2011534025374856, 1.0);
        }
        if (val <= 0.83979)
        {
            return Colour::fromFloatRGBA(0.1956170703575548, 0.1956170703575548, 0.1956170703575548, 1.0);
        }
        if (val <= 0.843696)
        {
            return Colour::fromFloatRGBA(0.190080738177624, 0.190080738177624, 0.190080738177624, 1.0);
        }
        if (val <= 0.847602)
        {
            return Colour::fromFloatRGBA(0.1845444059976932, 0.1845444059976932, 0.1845444059976932, 1.0);
        }
        if (val <= 0.851508)
        {
            return Colour::fromFloatRGBA(0.1790080738177624, 0.1790080738177624, 0.1790080738177624, 1.0);
        }
        if (val <= 0.855414)
        {
            return Colour::fromFloatRGBA(0.1734717416378316, 0.1734717416378316, 0.1734717416378316, 1.0);
        }
        if (val <= 0.85932)
        {
            return Colour::fromFloatRGBA(0.1679354094579008, 0.1679354094579008, 0.1679354094579008, 1.0);
        }
        if (val <= 0.863226)
        {
            return Colour::fromFloatRGBA(0.16239907727797, 0.16239907727797, 0.16239907727797, 1.0);
        }
        if (val <= 0.867132)
        {
            return Colour::fromFloatRGBA(0.1568627450980392, 0.1568627450980392, 0.1568627450980392, 1.0);
        }
        if (val <= 0.871038)
        {
            return Colour::fromFloatRGBA(0.15132641291810842, 0.15132641291810842, 0.15132641291810842, 1.0);
        }
        if (val <= 0.874944)
        {
            return Colour::fromFloatRGBA(0.14579008073817765, 0.14579008073817765, 0.14579008073817765, 1.0);
        }
        if (val <= 0.87885)
        {
            return Colour::fromFloatRGBA(0.14111495578623606, 0.14111495578623606, 0.14111495578623606, 1.0);
        }
        if (val <= 0.882756)
        {
            return Colour::fromFloatRGBA(0.13656286043829297, 0.13656286043829297, 0.13656286043829297, 1.0);
        }
        if (val <= 0.8866620000000001)
        {
            return Colour::fromFloatRGBA(0.13201076509034987, 0.13201076509034987, 0.13201076509034987, 1.0);
        }
        if (val <= 0.890568)
        {
            return Colour::fromFloatRGBA(0.12745866974240677, 0.12745866974240677, 0.12745866974240677, 1.0);
        }
        if (val <= 0.894474)
        {
            return Colour::fromFloatRGBA(0.12290657439446381, 0.12290657439446381, 0.12290657439446381, 1.0);
        }
        if (val <= 0.89838)
        {
            return Colour::fromFloatRGBA(0.11835447904652058, 0.11835447904652058, 0.11835447904652058, 1.0);
        }
        if (val <= 0.902286)
        {
            return Colour::fromFloatRGBA(0.11380238369857748, 0.11380238369857748, 0.11380238369857748, 1.0);
        }
        if (val <= 0.906192)
        {
            return Colour::fromFloatRGBA(0.10925028835063438, 0.10925028835063438, 0.10925028835063438, 1.0);
        }
        if (val <= 0.910098)
        {
            return Colour::fromFloatRGBA(0.10469819300269129, 0.10469819300269129, 0.10469819300269129, 1.0);
        }
        if (val <= 0.914004)
        {
            return Colour::fromFloatRGBA(0.10014609765474819, 0.10014609765474819, 0.10014609765474819, 1.0);
        }
        if (val <= 0.91791)
        {
            return Colour::fromFloatRGBA(0.09559400230680508, 0.09559400230680508, 0.09559400230680508, 1.0);
        }
        if (val <= 0.921816)
        {
            return Colour::fromFloatRGBA(0.09104190695886198, 0.09104190695886198, 0.09104190695886198, 1.0);
        }
        if (val <= 0.925722)
        {
            return Colour::fromFloatRGBA(0.08648981161091888, 0.08648981161091888, 0.08648981161091888, 1.0);
        }
        if (val <= 0.929628)
        {
            return Colour::fromFloatRGBA(0.08193771626297579, 0.08193771626297579, 0.08193771626297579, 1.0);
        }
        if (val <= 0.933534)
        {
            return Colour::fromFloatRGBA(0.07738562091503269, 0.07738562091503269, 0.07738562091503269, 1.0);
        }
        if (val <= 0.93744)
        {
            return Colour::fromFloatRGBA(0.07283352556708958, 0.07283352556708958, 0.07283352556708958, 1.0);
        }
        if (val <= 0.941346)
        {
            return Colour::fromFloatRGBA(0.06828143021914648, 0.06828143021914648, 0.06828143021914648, 1.0);
        }
        if (val <= 0.945252)
        {
            return Colour::fromFloatRGBA(0.06372933487120339, 0.06372933487120339, 0.06372933487120339, 1.0);
        }
        if (val <= 0.9491580000000001)
        {
            return Colour::fromFloatRGBA(0.05917723952326029, 0.05917723952326029, 0.05917723952326029, 1.0);
        }
        if (val <= 0.953064)
        {
            return Colour::fromFloatRGBA(0.05462514417531719, 0.05462514417531719, 0.05462514417531719, 1.0);
        }
        if (val <= 0.95697)
        {
            return Colour::fromFloatRGBA(0.05007304882737422, 0.05007304882737422, 0.05007304882737422, 1.0);
        }
        if (val <= 0.9608760000000001)
        {
            return Colour::fromFloatRGBA(0.045520953479431, 0.045520953479431, 0.045520953479431, 1.0);
        }
        if (val <= 0.964782)
        {
            return Colour::fromFloatRGBA(0.04096885813148789, 0.04096885813148789, 0.04096885813148789, 1.0);
        }
        if (val <= 0.968688)
        {
            return Colour::fromFloatRGBA(0.03641676278354479, 0.03641676278354479, 0.03641676278354479, 1.0);
        }
        if (val <= 0.972594)
        {
            return Colour::fromFloatRGBA(0.03186466743560169, 0.03186466743560169, 0.03186466743560169, 1.0);
        }
        if (val <= 0.9765)
        {
            return Colour::fromFloatRGBA(0.027312572087658596, 0.027312572087658596, 0.027312572087658596, 1.0);
        }
        if (val <= 0.980406)
        {
            return Colour::fromFloatRGBA(0.0227604767397155, 0.0227604767397155, 0.0227604767397155, 1.0);
        }
        if (val <= 0.984312)
        {
            return Colour::fromFloatRGBA(0.018208381391772388, 0.018208381391772388, 0.018208381391772388, 1.0);
        }
        if (val <= 0.988218)
        {
            return Colour::fromFloatRGBA(0.013656286043829291, 0.013656286043829291, 0.013656286043829291, 1.0);
        }
        if (val <= 0.992124)
        {
            return Colour::fromFloatRGBA(0.009104190695886194, 0.009104190695886194, 0.009104190695886194, 1.0);
        }
        if (val <= 0.99603)
        {
            return Colour::fromFloatRGBA(0.004552095347943097, 0.004552095347943097, 0.004552095347943097, 1.0);
        }
        if (val <= 0.999936)
        {
            return Colour::fromFloatRGBA(0.0, 0.0, 0.0, 1.0);
        }

        return Colour::fromFloatRGBA(0.0, 0.0, 0.0, 1.0);
    }
}
