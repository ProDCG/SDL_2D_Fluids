#include <stdlib.h>
#include "../include/particle.h"

void initParticles(Particle* particles, int count) {
    for (int i = 0; i < count; i++) {
        particles[i].x = rand() % 800;
        particles[i].y = rand() % 800;
        particles[i].vx = 0;
        particles[i].vy = 0;
        particles[i].density = 0;
        particles[i].pressure = 0;
    }
}