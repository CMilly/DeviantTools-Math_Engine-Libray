/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Mat4_scale.cpp
 * Date (Started) - 05/13/19
 */

#include <vd1m/ext/Mat4_scale.hpp>

/**
 * Default constructor
 */
vd1m::Mat4_scale::Mat4_scale() {
    for(int i = 0; i < 16; i++){
        matrix4_scale[i] = 0.0f;
    }
}

/**
 * Constructor that takes in one scalar for all positions (x,y,z)
 * @param _s
 */
vd1m::Mat4_scale::Mat4_scale(float _s) {
    matrix4_scale[0] = _s;
    matrix4_scale[5] = _s;
    matrix4_scale[10] = _s;
    matrix4_scale[15] = 1.0f;
}

/**
 * Constructor that takes multiple scalars for multiple positions (x,y,z)
 * @param _sX
 * @param _sY
 * @param _sZ
 */
vd1m::Mat4_scale::Mat4_scale(float _sX, float _sY, float _sZ) {
    matrix4_scale[0] = _sX;
    matrix4_scale[5] = _sY;
    matrix4_scale[10] = _sZ;
    matrix4_scale[15] = 1.0f;
}
