/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Vec4.hpp
 * Date (Started) - 05/13/19
 */

#ifndef VDEFIANT1_MATH_ENGINE_VEC4_HPP
#define VDEFIANT1_MATH_ENGINE_VEC4_HPP

namespace vd1m{
    /**
     * Vector4 class
     * - Represents a Vector in 4-Dimensional space
     */
    class Vec4 {
    private:
    public:
        float x;
        float y;
        float z;
        float w;
        Vec4();
        Vec4(float _x, float _y, float _z, float _w);
        Vec4(const Vec4 &v2);
        Vec4& operator=(const Vec4 &v2);
        Vec4& operator+(const Vec4 &v2);
        Vec4& operator+=(const Vec4 &v2);
        Vec4& operator-(const Vec4 &v2);
        Vec4& operator-=(const Vec4 &v2);
        Vec4& operator *(const float &k);
        Vec4& operator *=(const float &k);
        Vec4& operator /(const float &k);
        Vec4& operator /=(const float &k);
        float dotp(const Vec4 &v2);
        Vec4 crossp(const Vec4 &v2);
        float magnitude();
        void normalize();
        void to_string();
    };
}

#endif //VDEFIANT1_MATH_ENGINE_VEC4_HPP
