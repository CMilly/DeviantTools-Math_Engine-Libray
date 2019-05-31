/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Mat2_rotclock.cpp
 * Date (Started) - 05/13/19
 */

#include <vd1m/ext/Mat2_rotclock.hpp>
#include <vd1m/Vec2.hpp>
#include <cmath>

/**
 * Default constructor
 */
vd1m::Mat2_rotclock::Mat2_rotclock() {
    for(int i = 0; i < 4; i++){
        matrix2_rotclock[i] = 0.0f;
    }
}

/**
 * Constructor that takes in theta (angle of rotation)
 * @param theta
 */
vd1m::Mat2_rotclock::Mat2_rotclock(float theta) {
    theta = 2 * M_PI * (theta / 360); //convert to radians

    matrix2_rotclock[0] = cosf(theta);
    matrix2_rotclock[1] = sinf(theta);
    matrix2_rotclock[2] = -sinf(theta);
    matrix2_rotclock[3] = cosf(theta);
}

/**
 * Rotate Vec2 by theta
 * @param v
 * @return Vec2
 */
vd1m::Vec2 vd1m::Mat2_rotclock::operator*(const vd1m::Vec2 &v) {
    vd1m::Vec2 ret_vec2;
    ret_vec2.x = (matrix2_rotclock[0] * v.x) + (matrix2_rotclock[1] * v.y);
    ret_vec2.y = (matrix2_rotclock[2] * v.x) + (matrix2_rotclock[3] * v.y);

    return ret_vec2;
}

