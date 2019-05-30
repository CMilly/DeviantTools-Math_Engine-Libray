/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Mat2_rotcounterc.cpp
 * Date (Started) - 05/13/19
 */

#include <vd1m/ext/Mat2_rotcounterc.hpp>
#include <cmath>

vd1m::Mat2_rotcounterc::Mat2_rotcounterc() {
    for(int i = 0; i < 4; i++){
        matrix2_rotcounterc[i] = 0.0f;
    }
}

vd1m::Mat2_rotcounterc::Mat2_rotcounterc(float theta) {
    matrix2_rotcounterc[0] = cosf(theta);
    matrix2_rotcounterc[1] = -sinf(theta);
    matrix2_rotcounterc[2] = sinf(theta);
    matrix2_rotcounterc[3] = cosf(theta);
}

