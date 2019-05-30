/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Mat2_rotclock.hpp
 * Date (Started) - 05/13/19
 */

#ifndef VDEFIANT1_MATH_ENGINE_MAT2_ROTCLOCK_HPP
#define VDEFIANT1_MATH_ENGINE_MAT2_ROTCLOCK_HPP

#include <vd1m/Vec2.hpp>

namespace vd1m{

    /**
     * Class that represents a 2-D clockwise rotation matrix
     */
    class Mat2_rotclock{
    private:
        float matrix2_rotclock[4];
    public:
        Mat2_rotclock();
        Mat2_rotclock(float theta);
        Vec2 operator*(const Vec2 &v);
    };
}

#endif //VDEFIANT1_MATH_ENGINE_MAT2_ROTCLOCK_HPP
