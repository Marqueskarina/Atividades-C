#include <stdio.h>
#include <math.h>

int main() {
    
    double h = 10;  // altura inicial em metros
    double v = 20;  // velocidade inicial em m/s
    double ang = 45;  // ângulo de lançamento em graus
    double g = 9.81;  // aceleração da gravidade em m/s^2
    double dt = 0.01;  // intervalo de tempo em segundos
    
    double x = 0;
    double y = h;
    double t = 0;
    
    double vx = v * cos(ang * M_PI / 180);
    double vy = v * sin(ang * M_PI / 180);
    
    while (y >= 0) {
        x = vx * t;
        y = h + vy * t - 0.5 * g * t * t;
        printf("Posição atual: (%.2f, %.2f)\n", x, y);
        t += dt;
    }
    
    return 0;
}
