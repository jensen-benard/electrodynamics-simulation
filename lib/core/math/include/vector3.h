#pragma once

class Vector3 {
    public:
        double x, y, z;

        Vector3(): x(0), y(0), z(0) {}
        Vector3(double x, double y, double z): x(x), y(y), z(z) {}

        inline Vector3 operator+(const Vector3& rhs) const {
            return Vector3(x + rhs.x, y + rhs.y, z + rhs.z);
        }

        inline Vector3 operator-(const Vector3& rhs) const {
            return Vector3(x - rhs.x, y - rhs.y, z - rhs.z);
        }

        inline Vector3 operator*(const Vector3& rhs) const {
            return Vector3(x * rhs.x, y * rhs.y, z * rhs.z);
        }

        inline Vector3 operator*(const double& rhs) const {
            return Vector3(x * rhs, y * rhs, z * rhs);
        }

        inline Vector3 operator/(const Vector3& rhs) const {
            return Vector3(x / rhs.x, y / rhs.y, z / rhs.z);
        }

        inline Vector3 operator/(const double& rhs) const {
            return Vector3(x / rhs, y / rhs, z / rhs);
        }

        inline double dot(const Vector3& rhs) const {
            return x * rhs.x + y * rhs.y + z * rhs.z;
        }

        inline Vector3 cross(const Vector3& rhs) const {
            return Vector3(y * rhs.z - z * rhs.y, z * rhs.x - x * rhs.z, x * rhs.y - y * rhs.x);
        }

        inline double squaredMagnitude() const {
            return x * x + y * y + z * z;
        }

};

inline Vector3 operator*(const double& lhs, const Vector3& rhs) {
    return rhs * lhs;
}