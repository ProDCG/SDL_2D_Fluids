#include "../include/renderer.h"
#include "../include/particle.h"
#include "../include/sph.h"

#include <math.h>

#define PI 3.14159265358979323846
#define PARTICLE_RADIUS 3

void drawCircle(SDL_Renderer* renderer, int cx, int cy, int radius) {
    int x, y;
    for (int i = 0; i < 360; i++) {
        double angle = i * (PI / 180.0);
        x = (int)(cx + radius * cos(angle));
        y = (int)(cy + radius * sin(angle));
        SDL_RenderDrawPoint(renderer, x, y);
    }
}

void render(SDL_Renderer* renderer) {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
    for (int i = 0; i < PARTICLE_COUNT; i++) {
        drawCircle(renderer, particles[i].x, particles[i].y, PARTICLE_RADIUS);
    }
}