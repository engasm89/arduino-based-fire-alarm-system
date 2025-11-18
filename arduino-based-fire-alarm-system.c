/*
 * Course: Arduino Based Fire Alarm System
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Arduino Based Fire Alarm System" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/arduino-based-fire-alarm-system/
 * Repository: https://github.com/engasm89/arduino-based-fire-alarm-system
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

/*
 * Course: Arduino Based Fire Alarm System
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Arduino Based Fire Alarm System
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Arduino Based Fire Alarm System
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Arduino Based Fire Alarm System
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for status messages
#include <unistd.h> // Include POSIX sleep for timing

// Define sensor and actuator states (simulated)
static int smoke_level = 0; // Initialize smoke level value
static int buzzer_on = 0; // Initialize buzzer state (0=OFF,1=ON)
static int led_on = 0; // Initialize alarm LED state

// Threshold for triggering alarm
static const int SMOKE_THRESHOLD = 5; // Define smoke threshold

// Program entry point implementing alarm logic
// Main routine: orchestrates the arduino based fire alarm system scenario
int main(void) { // Main function implementation function
  printf("Arduino Based Fire Alarm System (IoT Safety)\n"); // Print header
  for (int t = 0; t < 12; ++t) { // Loop over 12 samples
    smoke_level = (t % 4 == 0) ? 7 : 2; // Simulate periodic spikes
    int alarm = (smoke_level >= SMOKE_THRESHOLD); // Compute alarm condition
    buzzer_on = alarm ? 1 : 0; // Set buzzer state based on alarm
    led_on = alarm ? 1 : 0; // Set LED state based on alarm
    printf("{\"smoke\":%d,\"alarm\":%d,\"buzzer\":%d,\"led\":%d}\n", smoke_level, alarm, buzzer_on, led_on); // Print JSON
    usleep(500000); // Delay 500 ms
  } // End sampling loop
  return 0; // Exit successfully
} // End of main function

