#include <iostream>
#include <cmath>
#include "particle.h"
#include "vector3.h"
#include <iostream>



Vector3 calculateForce(Particle p1, Particle p2) {
    Vector3 displacement = p1.position - p2.position;
    double distanceSquared = displacement.squaredMagnitude();
    double columbsConstant = 8.9875517873681764e+9;
    double distance = sqrt(distanceSquared); 
    double forceMagnitude = columbsConstant * p1.charge * p2.charge / distanceSquared;
    Vector3 direction = displacement / distance;
    return forceMagnitude * direction;
}

int main() {
    Vector3 p1_v(0, 0, 0);
    double p1_c = 1;
    Particle p1(p1_v, p1_c);

    Vector3 p2_v(10, 0, 0);
    double p2_c = 1;
    Particle p2(p2_v, p2_c);

    Vector3 force = calculateForce(p1, p2);
    std::cout << "Force: " << force.x << " " << force.y << " " << force.z << std::endl;
    return 0;
}