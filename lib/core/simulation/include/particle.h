#pragma once
#include "vector3.h"

class Particle {
    
    public:
        Vector3 position;
        double charge;

        Particle(const Vector3& pos, double q) : position(pos), charge(q) {}
};