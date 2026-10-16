#ifndef RTOW_H
#define RTOW_H

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <memory>

// -- c++ std usings --

using std::shared_ptr;
using std::make_shared;


// -- constants --

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;


// -- utility functions --

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.00;
}

/**
 * @brief Returns a random real number in range [0, 1]
 */
inline double random_double() {
    return std::rand() / (RAND_MAX + 1.0);
}

/**
 * @brief Returns a random real number in range [min, max]
 * @param min The minimum of the range, as double
 * @param max The maximum of the range, as double
 */
inline double random_double(double min, double max) {
    return min + (max - min) * random_double();
}


// -- common headers --

#include "color.h"
#include "ray.h"
#include "vec3.h"
#include "interval.h"

#endif // RTOW_H