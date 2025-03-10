// MyClass.hpp
#ifndef VEHICLE_COLLECTION_HPP
#define VEHICLE_COLLECTION_HPP

#include <iostream>
#include "vehicle.hpp"

class VehicleCollection {
    
private:
    
    Vehicle* storage;
    int size;
    int Neff;
    
public:
    // Default Constructor
    VehicleCollection();

    // User-Defined Constructor
    VehicleCollection(int size);
    
    // Copy Constructor
    VehicleCollection(const VehicleCollection& other);
    
    // Destructor
    ~VehicleCollection();

    // Methods
    void printAll();
    
    VehicleCollection& operator<<(const Vehicle& other);

    VehicleCollection& operator<<(const VehicleCollection& other);

};

#endif