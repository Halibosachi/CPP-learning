#include <iostream>
#include <optional>

// Simulates reading a hardware fan profile. 
// Returns an fan speed (85%) if the profile exists, or an empty state (std::nullopt) if missing.
std::optional<int> readCustomFanCurve(bool profile_exists){
    // We use std::make_optional(85) here instead of just '85' because the ternary operator (?) 
    // requires both the true and false outcomes to resolve to the exact same data type.
   return profile_exists ? std::make_optional(85) : std::nullopt;
}

int main() {
    // Test Case 1: Simulating a missing configuration file
    auto user_profile = readCustomFanCurve(false);                                 

    // .value_or() attempts to read the optional value. 
    // Since 'user_profile' is empty here, it safely falls back to our 60% default to prevent overheating.
    int safe_fan_speed =  user_profile.value_or(60);                                

    std::cout << "Fan speed set to: " << safe_fan_speed << "%\n";

    // Test Case 2: Simulating a successfully loaded configuration file
    user_profile = readCustomFanCurve(true);

    // This time, the optional contains '85'. .value_or() extracts it and ignores the '60' default.
    safe_fan_speed =  user_profile.value_or(60);

    std::cout << "Fan speed set to: " << safe_fan_speed << "%\n";

    
    return 0;
}