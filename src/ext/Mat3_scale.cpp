/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Mat3_scale.cpp
 * Date (Started) - 05/13/19
 */

#include <vd1m/ext/Mat3_scale.hpp>

/**
 * Default constructor for Mat3_scale class
 */
vd1m::Mat3_scale::Mat3_scale() {
    for(int i = 0; i < 9; i++){
        matrix3_scale[i] = 0.0f;
    }
}

/**
 * Constructor that takes one scalar and sets it to all positions of (x,y,z)
 * @param _s
 */
vd1m::Mat3_scale::Mat3_scale(const float _s) {
    matrix3_scale[0] = _s;
    matrix3_scale[4] = _s;
    matrix3_scale[8] = _s;
}

/**
 * Constructor that takes three scalars all in relation to position of (x,y,z)
 * @param _sX
 * @param _sY
 * @param _sZ
 */
vd1m::Mat3_scale::Mat3_scale(const float _sX, const float _sY, const float _sZ) {
    matrix3_scale[0] = _sX;
    matrix3_scale[4] = _sY;
    matrix3_scale[8] = _sZ;
}

/**
 * Overloaded operator *
 * Multiply a scaling matrix by a given Vec3
 * @param _v
 * @return Vec3
 */
vd1m::Vec3 vd1m::Mat3_scale::operator*(const vd1m::Vec3 &_v) {
    vd1m::Vec3 vec3_s;
    vec3_s.x = _v.x * matrix3_scale[0];
    vec3_s.y = _v.y * matrix3_scale[4];
    vec3_s.z = _v.z * matrix3_scale[8];
    return vec3_s;
}

/**
 * Overloaded operator *=
 * Multiply a scaling matrix by a given Vec3
 * @param _v
 * @return Vec3
 */
vd1m::Vec3 vd1m::Mat3_scale::operator*=(const vd1m::Vec3 &_v) {
    vd1m::Vec3 vec3_s;
    vec3_s.x = _v.x * matrix3_scale[0];
    vec3_s.y = _v.y * matrix3_scale[4];
    vec3_s.z = _v.z * matrix3_scale[8];
    return vec3_s;
}

