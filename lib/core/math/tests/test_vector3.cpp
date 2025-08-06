#include "vector3.h"
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

const double margin = 1e-9;


TEST_CASE("Margin is valid", "[vector3][internal]") {
    REQUIRE(margin > 0);
    REQUIRE(margin < 1);
}


TEST_CASE("Vector 3 initialises empty", "[vector3]") {

    // Action
    Vector3 v;

    REQUIRE_THAT(v.x, Catch::Matchers::WithinAbs(0, margin));
    REQUIRE_THAT(v.y, Catch::Matchers::WithinAbs(0, margin));
    REQUIRE_THAT(v.x, Catch::Matchers::WithinAbs(0, margin));
}


TEST_CASE("Vector 3 initialises with values as doubles", "[vector3]") {
    double v_x = 1.234;
    double v_y = 2.345;
    double v_z = 3.456;

    // Action
    Vector3 v(v_x, v_y, v_z);

    REQUIRE_THAT(v.x, Catch::Matchers::WithinAbs(v_x, margin));
    REQUIRE_THAT(v.y, Catch::Matchers::WithinAbs(v_y, margin));
    REQUIRE_THAT(v.z, Catch::Matchers::WithinAbs(v_z, margin));
}


TEST_CASE("Vector3 can be added", "[vector3]") {
    double v1_x = 1;
    double v1_y = 2;
    double v1_z = 3;
    Vector3 v1(v1_x, v1_y, v1_z);

    double v2_x = 4;
    double v2_y = 5;
    double v2_z = 6;
    Vector3 v2(v2_x, v2_y, v2_z);

    double v3_x = v1_x + v2_x;
    double v3_y = v1_y + v2_y;
    double v3_z = v1_z + v2_z;

    // Action
    Vector3 v3 = v1 + v2;

    REQUIRE_THAT(v3.x, Catch::Matchers::WithinAbs(v3_x, margin));
    REQUIRE_THAT(v3.y, Catch::Matchers::WithinAbs(v3_y, margin));
    REQUIRE_THAT(v3.z, Catch::Matchers::WithinAbs(v3_z, margin));
}


TEST_CASE("Vector3 can be subtracted", "[vector3]") {
    double v1_x = 1;
    double v1_y = 2;
    double v1_z = 3;
    Vector3 v1(v1_x, v1_y, v1_z);

    double v2_x = 4;
    double v2_y = 5;
    double v2_z = 6;
    Vector3 v2(v2_x, v2_y, v2_z);

    double v3_x = v1_x - v2_x;
    double v3_y = v1_y - v2_y;
    double v3_z = v1_z - v2_z;

    // Action
    Vector3 v3 = v1 - v2;

    REQUIRE_THAT(v3.x, Catch::Matchers::WithinAbs(v3_x, margin));
    REQUIRE_THAT(v3.y, Catch::Matchers::WithinAbs(v3_y, margin));
    REQUIRE_THAT(v3.z, Catch::Matchers::WithinAbs(v3_z, margin));
}


TEST_CASE("Vector3 can be multiplied element wise", "[vector3]") {
    double v1_x = 1;
    double v1_y = 2;
    double v1_z = 3;
    Vector3 v1(v1_x, v1_y, v1_z);

    double v2_x = 4;
    double v2_y = 5;
    double v2_z = 6;
    Vector3 v2(v2_x, v2_y, v2_z);

    double v3_x = v1_x * v2_x;
    double v3_y = v1_y * v2_y;
    double v3_z = v1_z * v2_z;

    // Action
    Vector3 v3 = v1 * v2;

    REQUIRE_THAT(v3.x, Catch::Matchers::WithinAbs(v3_x, margin));
    REQUIRE_THAT(v3.y, Catch::Matchers::WithinAbs(v3_y, margin));
    REQUIRE_THAT(v3.z, Catch::Matchers::WithinAbs(v3_z, margin));
}


TEST_CASE("Vector3 can be divided element wise", "[vector3]") {
    double v1_x = 1;
    double v1_y = 2;
    double v1_z = 3;
    Vector3 v1(v1_x, v1_y, v1_z);

    double v2_x = 4;
    double v2_y = 5;
    double v2_z = 6;
    Vector3 v2(v2_x, v2_y, v2_z);

    double v3_x = v1_x / v2_x;
    double v3_y = v1_y / v2_y;
    double v3_z = v1_z / v2_z;

    // Action
    Vector3 v3 = v1 / v2;

    REQUIRE_THAT(v3.x, Catch::Matchers::WithinAbs(v3_x, margin));
    REQUIRE_THAT(v3.y, Catch::Matchers::WithinAbs(v3_y, margin));
    REQUIRE_THAT(v3.z, Catch::Matchers::WithinAbs(v3_z, margin));
}


TEST_CASE("Vector3 can be dot multiplied", "[vector3]") {
    double v1_x = 1;
    double v1_y = 2;
    double v1_z = 3;
    Vector3 v1(v1_x, v1_y, v1_z);

    double v2_x = 4;
    double v2_y = 5;
    double v2_z = 6;
    Vector3 v2(v2_x, v2_y, v2_z);

    double v3_dot = v1_x * v2_x + v1_y * v2_y + v1_z * v2_z;

    // Action
    double v3 = v1.dot(v2);

    REQUIRE_THAT(v3, Catch::Matchers::WithinAbs(v3_dot, margin));
}


TEST_CASE("Vector3 can be cross multiplied", "[vector3]") {
    double v1_x = 1;
    double v1_y = 2;
    double v1_z = 3;
    Vector3 v1(v1_x, v1_y, v1_z);

    double v2_x = 4;
    double v2_y = 5;
    double v2_z = 6;
    Vector3 v2(v2_x, v2_y, v2_z);

    double v3_x = v1_y * v2_z - v1_z * v2_y;
    double v3_y = v1_z * v2_x - v1_x * v2_z;
    double v3_z = v1_x * v2_y - v1_y * v2_x;

    // Action
    Vector3 v3 = v1.cross(v2);

    REQUIRE_THAT(v3.x, Catch::Matchers::WithinAbs(v3_x, margin));
    REQUIRE_THAT(v3.y, Catch::Matchers::WithinAbs(v3_y, margin));
    REQUIRE_THAT(v3.z, Catch::Matchers::WithinAbs(v3_z, margin));
}