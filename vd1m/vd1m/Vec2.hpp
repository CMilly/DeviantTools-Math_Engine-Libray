/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Vec2.hpp
 * Date (Started) - 05/13/19
 */

#ifndef VDEFIANT1_MATH_ENGINE_VEC2_HPP
#define VDEFIANT1_MATH_ENGINE_VEC2_HPP

namespace vd1m{
    /**
     * Vector2 class
     * - Represents a Vector in 2-Dimensional space
     */
    class Vec2 {
    private:
    public:
        float x;
        float y;

        Vec2();
        Vec2(float _x, float _y);
        Vec2& operator=(const Vec2 &v2);
        Vec2& operator+(const Vec2 &v2);
        Vec2& operator+=(const Vec2 &v2);
        Vec2& operator-(const Vec2 &v2);
        Vec2& operator-=(const Vec2 &v2);
        Vec2& operator *(const float &k);
        Vec2& operator *=(const float &k);
        Vec2& operator /(const float &k);
        Vec2& operator /=(const float &k);
        float dotp(const Vec2 &v2);
        float magnitude();
        void normalize();
        void to_string();
    };
}

#endif //VDEFIANT1_MATH_ENGINE_VEC2_HPP
