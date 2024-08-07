//
// Created by mason on 8/7/2024.
//

#ifndef SDL_2D_FLUIDS_PARTICLE_H
#define SDL_2D_FLUIDS_PARTICLE_H

typedef struct {
    float x, y;
    float vx, vy;
    float density, pressure;
} Particle;

void initParticles(Particle* particles, int count);

#endif //SDL_2D_FLUIDS_PARTICLE_H
