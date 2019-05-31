//
// Created by cameron on 5/30/2019.
//

#ifndef VDEFIANT1_MATH_ENGINE_MAT3_ROTX_HPP
#define VDEFIANT1_MATH_ENGINE_MAT3_ROTX_HPP

#include <vd1m/Vec3.hpp>

namespace vd1m{

    class Mat3_rotX{
    private:
        float matrix3_rotx[9];
    public:
        Mat3_rotX();
        Mat3_rotX(float theta);
        Vec3 operator*(const Vec3 &v);
        void view();
    };
}

#endif //VDEFIANT1_MATH_ENGINE_MAT3_ROTX_HPP
