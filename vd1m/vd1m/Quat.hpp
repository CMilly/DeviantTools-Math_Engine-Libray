/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Quat.hpp
 * Date (Started) - 05/13/19
 */

#ifndef VDEFIANT1_MATH_ENGINE_QUAT_HPP
#define VDEFIANT1_MATH_ENGINE_QUAT_HPP

#include <vd1m/Vec3.hpp>

namespace vd1m{
    class Quat {
    private:
        Vec3 v;
        float w;
    public:
        Quat();
        Quat(float _w, const vd1m::Vec3 &_v);
        Quat(const vd1m::Vec3 &_v, float theta);
        Quat& operator=(const Quat &q2);
        Quat& operator+(const Quat &q2);
        Quat& operator+=(const Quat &q2);
        Quat& operator-(const Quat &q2);
        Quat& operator-=(const Quat &q2);
        Quat operator*(Quat q2);
        Quat operator*=(Quat q2);
        Vec3 operator*(const vd1m::Vec3 &_v);
        Quat& operator*(const float &k);
        Quat& operator*=(const float &k);
        Quat& scale(const float &k);
        float norm();
        Quat& normalize();
        Quat& conjugate();
        Quat& inverse();
        Quat& real();
        Quat& pure();
        Quat& unit(float theta, const vd1m::Vec3 &_v);
        float dotp(const Quat &q2);
        Vec3 rotate(vd1m::Vec3 _v);
        void to_string();
    };
}

#endif //VDEFIANT1_MATH_ENGINE_QUAT_HPP
