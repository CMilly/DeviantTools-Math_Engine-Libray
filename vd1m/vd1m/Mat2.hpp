/**
 * Created by: Cameron Mims
 * vDefiant1 Math Engine - Personal Project
 * File - Mat2.hpp
 * Date (Started) - 05/13/19
 */

#ifndef VDEFIANT1_MATH_ENGINE_MAT2_HPP
#define VDEFIANT1_MATH_ENGINE_MAT2_HPP

#include <vd1m/Vec2.hpp>
namespace vd1m{
    /**
     * Matrix2 class
     * - Represents a Matrix in 2-Dimensional space
     */
    class Mat2 {
    private:
        float matrix2[4];
    public:
        Mat2();
        Mat2(float e0, float e1,
                float e2, float e3);
        Mat2& operator=(const Mat2 &m2);
        Mat2& operator+(const Mat2 &m2);
        Mat2& operator+=(const Mat2 &m2);
        Mat2& operator-(const Mat2 &m2);
        Mat2& operator-=(const Mat2 &m2);
        Mat2& operator*(const float &k);
        Mat2& operator*=(const float &k);
        Mat2& operator*(const Mat2 &m2);
        Mat2& operator*=(const Mat2 &m2);
        Vec2 operator*(const Vec2 &v);
        Vec2 operator*=(const Vec2 &v);
        void set_as_identity();
        void set_as_rotation90_counter_clockwise();
        void set_as_rotationTheta_counter_clockwise(float theta);
        void set_as_rotation90_clockwise();
        void set_as_rotationTheta_clockwise(float theta);
        void transpose();
        float determinant();
        Mat2& inverse();
        void to_string();
    };
}

#endif //VDEFIANT1_MATH_ENGINE_MAT2_HPP
