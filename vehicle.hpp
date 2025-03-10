// MyClass.hpp
#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <iostream>

class Vehicle {
    
private:
    
    int serial;
    std::string category;
    std::string brand;
    int releaseYear;
    
public:
    // Default Constructor
    Vehicle();

    // User-Defined Constructor
    Vehicle(int serial, std::string category, std::string brand, int releaseYear);
    
    // Copy Constructor
    Vehicle(const Vehicle& other);
    
    // Destructor
    ~Vehicle();

    // Methods
    void printInfo();

    int biayaSewa(int lamaSewa);
    
};

#endif