#pragma once

class Vector3 {
    public:
        double x, y, z;

        Vector3(): x(0), y(0), z(0) {}
        Vector3(double x, double y, double z): x(x), y(y), z(z) {}

        Vector3 operator+(const Vector3& rhs) const;
        Vector3 operator-(const Vector3& rhs) const;
        Vector3 operator*(const Vector3& rhs) const;
        Vector3 operator*(const double& rhs) const;
        Vector3 operator/(const Vector3& rhs) const;

        double dot(const Vector3& rhs) const;
        Vector3 cross(const Vector3& rhs) const;
};