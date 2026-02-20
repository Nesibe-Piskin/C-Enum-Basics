#include <stdio.h>

// Define an enumeration for temperature levels
enum Levels {
    LOW,    // 0
    MEDIUM, // 1
    HIGH    // 2
};

int main() {
    // Initialize the RoomTemperature variable with the LOW level
    enum Levels RoomTemperature = LOW;

    // Output the integer value associated with the enum constant
    printf("%d\n", RoomTemperature);

    return 0;
}