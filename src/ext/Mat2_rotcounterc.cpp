/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Mat2_rotcounterc.cpp
 * Date (Started) - 05/13/19
 */

#include <iostream>
#include <vd1m/ext/Mat2_rotcounterc.hpp>
#include <cmath>
using namespace std;

/**
 * Default constructor
 */
vd1m::Mat2_rotcounterc::Mat2_rotcounterc() {
    for(int i = 0; i < 4; i++){
        matrix2_rotcounterc[i] = 0.0f;
    }
}

/**
 * Constructor that takes in theta (angle of rotation)
 * @param theta
 */
vd1m::Mat2_rotcounterc::Mat2_rotcounterc(float theta) {
    theta = theta * (M_PI / 180); //convert to radians
    matrix2_rotcounterc[0] = cosf(theta);
    matrix2_rotcounterc[1] = -sinf(theta);
    matrix2_rotcounterc[2] = sinf(theta);
    matrix2_rotcounterc[3] = cosf(theta);
}

/**
 * Rotate a Vec2 by theta
 * @param v
 * @return Vec2
 */
vd1m::Vec2 vd1m::Mat2_rotcounterc::operator*(const vd1m::Vec2 &v) {
    vd1m::Vec2 ret_vec2;
    ret_vec2.x = (matrix2_rotcounterc[0] * v.x) + (matrix2_rotcounterc[1] * v.y);
    ret_vec2.y = (matrix2_rotcounterc[2] * v.x) + (matrix2_rotcounterc[3] * v.y);

    return ret_vec2;
}

void vd1m::Mat2_rotcounterc::view() {
    cout << matrix2_rotcounterc[0] << "   " << matrix2_rotcounterc[1] << "\n" <<
            matrix2_rotcounterc[2] << "   " << matrix2_rotcounterc[3] << "\n" << endl;
}

