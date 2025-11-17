#include <stdio.h> // Include I/O for status messages
#include <unistd.h> // Include POSIX sleep for timing

// Define sensor and actuator states (simulated)
static int smoke_level = 0; // Initialize smoke level value
static int buzzer_on = 0; // Initialize buzzer state (0=OFF,1=ON)
static int led_on = 0; // Initialize alarm LED state

// Threshold for triggering alarm
static const int SMOKE_THRESHOLD = 5; // Define smoke threshold

// Program entry point implementing alarm logic
int main(void) { // Begin main function
  printf("Arduino Based Fire Alarm System (IoT Safety)\n"); // Print header
  for (int t = 0; t < 12; ++t) { // Loop over 12 samples
    smoke_level = (t % 4 == 0) ? 7 : 2; // Simulate periodic spikes
    int alarm = (smoke_level >= SMOKE_THRESHOLD); // Compute alarm condition
    buzzer_on = alarm ? 1 : 0; // Set buzzer state based on alarm
    led_on = alarm ? 1 : 0; // Set LED state based on alarm
    printf("{\"smoke\":%d,\"alarm\":%d,\"buzzer\":%d,\"led\":%d}\n", smoke_level, alarm, buzzer_on, led_on); // Print JSON
    usleep(500000); // Delay 500 ms
  } // End sampling loop
  return 0; // Exit success
} // End main

