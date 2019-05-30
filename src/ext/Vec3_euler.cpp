/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Vec3_euler.cpp
 * Date (Started) - 05/13/19
 */

#include <vd1m/ext/Vec3_euler.hpp>
#include <vd1m/Vec3.hpp>
#include <cmath>

/**
 * Default constructor
 */
vd1m::Vec3_euler::Vec3_euler() {
    X = 0;
    Y = 0;
    Z = 0;
}

/**
 * Constructor that takes in an X,Y,Z (pitch, yaw, roll) component
 * @param _X
 * @param _Y
 * @param _Z
 */
vd1m::Vec3_euler::Vec3_euler(float _X, float _Y, float _Z) {
    X = _X;
    Y = _Y;
    Z = _Z;
}

/**
 * Converts euler angles to Vec3
 * @return Vec3
 */
vd1m::Vec3 vd1m::Vec3_euler::to_Vec3() {
    vd1m::Vec3 ret_vec3;
    ret_vec3.x = cosf(Y) * cosf(X);
    ret_vec3.y = sinf(X);
    ret_vec3.z = sinf(Y) * cosf(X);

    return ret_vec3;
}
