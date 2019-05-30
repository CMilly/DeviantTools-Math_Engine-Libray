#include <iostream>
#include <vd1m/Vec2.hpp>
#include <vd1m/ext/Mat2_rotclock.hpp>
using namespace std;
int main() {
    vd1m::Mat2_rotclock mat2_rotc(90.0f);
    vd1m::Vec2 vec2(0,0);
    vd1m::Vec2 vec2_rot;
    vec2.to_string();
    cout << "\n" << endl;
    vec2_rot = mat2_rotc * vec2;
    vec2_rot.to_string();
}