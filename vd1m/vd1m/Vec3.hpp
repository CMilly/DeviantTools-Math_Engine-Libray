/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Vec3.hpp
 * Date (Started) - 05/13/19
 */

#ifndef VDEFIANT1_MATH_ENGINE_VEC3_HPP
#define VDEFIANT1_MATH_ENGINE_VEC3_HPP

namespace vd1m{
    /**
     * Vector3 class
     * - Represents a Vector in 3-Dimensional space
     */
    class Vec3{
    private:
    public:
        float x;
        float y;
        float z;

        Vec3();
        Vec3(float _x, float _y, float _z);
        Vec3(const Vec3 &v2);
        Vec3& operator=(const Vec3 &v2);
        Vec3& operator+(const Vec3 &v2);
        Vec3& operator+=(const Vec3 &v2);
        Vec3& operator-(const Vec3 &v2);
        Vec3& operator-=(const Vec3 &v2);
        Vec3& operator*(const Vec3 &v2);
        Vec3& operator*=(const Vec3 &v2);
        Vec3& operator *(const float &k);
        Vec3& operator *=(const float &k);
        Vec3& operator /(const float &k);
        Vec3& operator /=(const float &k);
        float dotp(const Vec3 &v2);
        Vec3 crossp(const Vec3 &v2);
        float magnitude();
        void normalize();
        void to_string();
    };
}

#endif //VDEFIANT1_MATH_ENGINE_VEC3_HPP
