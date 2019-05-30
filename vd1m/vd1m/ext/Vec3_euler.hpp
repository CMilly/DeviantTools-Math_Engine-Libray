/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Vec3_euler.hpp
 * Date (Started) - 05/13/19
 */

#ifndef VDEFIANT1_MATH_ENGINE_VEC3_EULER_HPP
#define VDEFIANT1_MATH_ENGINE_VEC3_EULER_HPP

#include <vd1m/Vec3.hpp>

namespace vd1m{
    /**
     * Class that represents a 3-D Vector in relation to Euler angles and Mouse control
     */
    class Vec3_euler{
    private:
        float X; //pitch
        float Y; //yaw
        float Z; //roll
    public:
        Vec3_euler();
        Vec3_euler(float _X, float _Y, float _Z);
        Vec3 to_Vec3();
    };
}

#endif //VDEFIANT1_MATH_ENGINE_VEC3_EULER_HPP
