/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Mat2_rotcounterc.hpp
 * Date (Started) - 05/13/19
 */

#ifndef VDEFIANT1_MATH_ENGINE_MAT2_ROTCOUNTERC_HPP
#define VDEFIANT1_MATH_ENGINE_MAT2_ROTCOUNTERC_HPP

#include <vd1m/Vec2.hpp>

namespace vd1m{

    /**
     * Class that represents a 2-D Matrix for counter-clockwise rotation
     */
    class Mat2_rotcounterc{
    private:
        float matrix2_rotcounterc[4];
    public:
        Mat2_rotcounterc();
        Mat2_rotcounterc(float theta);
        Vec2 operator*(const vd1m::Vec2 &v);
        void view();
    };
}

#endif //VDEFIANT1_MATH_ENGINE_MAT2_ROTCOUNTERC_HPP
