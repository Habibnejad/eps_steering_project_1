#include <stdio.h>
#include <math.h>

// Simple placeholder EPS steering control program
int main() {
    // simulate receiving desired steering angle from driver input
    double desired_angle_deg = 0.0;

    // Simulate control loop update
    for (int i = 0; i < 100; i++) {
        // Here you would read sensors and compute control signals
        // Placeholder: output the desired angle
        printf("Set steering angle to %.2f degrees\n", desired_angle_deg);

        // update desired angle (example sawtooth)
        desired_angle_deg += 0.5;
        if (desired_angle_deg > 30.0) {
            desired_angle_deg = -30.0;
        }
    }
    return 0;
}
