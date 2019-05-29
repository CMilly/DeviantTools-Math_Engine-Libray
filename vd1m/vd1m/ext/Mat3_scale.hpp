/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Mat3_scale.hpp
 * Date (Started) - 05/13/19
 */

#ifndef VDEFIANT1_MATH_ENGINE_MAT3_SCALE_HPP
#define VDEFIANT1_MATH_ENGINE_MAT3_SCALE_HPP

#include <vd1m/Vec3.hpp>

namespace vd1m{

    /**
     * Class that represents a 3x3 scaling Matrix
     */
    class Mat3_scale{
    private:
        float matrix3_scale[9];
    public:
        Mat3_scale();
        Mat3_scale(float _s);
        Mat3_scale(float _sX, float _sY, float _sZ);
        vd1m::Vec3 operator*(const vd1m::Vec3 &_v);
        vd1m::Vec3 operator*=(const vd1m::Vec3 &_v);
    };
}

#endif //VDEFIANT1_MATH_ENGINE_MAT3_SCALE_HPP
