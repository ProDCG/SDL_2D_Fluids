#include "../include/sph.h"
#include "../include/particle.h"
#include <stdlib.h>

#define PARTICLE_COUNT 1000

Particle particles[PARTICLE_COUNT];

void initSPH() {
    initParticles(particles, PARTICLE_COUNT);
}

void updateSPH() {

}
void cleanupSPH() {
    
}


