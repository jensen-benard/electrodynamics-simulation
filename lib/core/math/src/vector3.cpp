#include "vector3.h"

Vector3 Vector3::operator+(const Vector3& rhs) const {
    return Vector3(x + rhs.x, y + rhs.y, z + rhs.z);
}


Vector3 Vector3::operator-(const Vector3& rhs) const {
    return Vector3(x - rhs.x, y - rhs.y, z - rhs.z);
}


Vector3 Vector3::operator*(const Vector3& rhs) const {
    return Vector3(x * rhs.x, y * rhs.y, z * rhs.z);
}


Vector3 Vector3::operator*(const double& rhs) const {
    return Vector3(x * rhs, y * rhs, z * rhs);
}


Vector3 Vector3::operator/(const Vector3& rhs) const {
    return Vector3(x / rhs.x, y / rhs.y, z / rhs.z);
}


double Vector3::dot(const Vector3& rhs) const {
    return x * rhs.x + y * rhs.y + z * rhs.z;
}


Vector3 Vector3::cross(const Vector3& rhs) const {
    return Vector3(y * rhs.z - z * rhs.y, z * rhs.x - x * rhs.z, x * rhs.y - y * rhs.x);
}
