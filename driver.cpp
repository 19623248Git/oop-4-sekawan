#include <iostream>
#include "vehicle.hpp"
#include "vehicle_collection.hpp"

int main(){
    
    Vehicle v1;
    Vehicle v2(100, "bus", "ImBus", 1900);
    Vehicle v3(200, "minibus", "ImMiniBus", 1901);
    Vehicle v4 = v1;

    v1.printInfo();
    std::cout << "v1 biayaSewa(10): " << v1.biayaSewa(10) << std::endl;
    v2.printInfo();
    std::cout << "v2 biayaSewa(10): " << v2.biayaSewa(10) << std::endl;
    v3.printInfo();
    std::cout << "v3 biayaSewa(10): " << v3.biayaSewa(10) << std::endl;
    v4.printInfo();
    std::cout << "v4 biayaSewa(10): " << v4.biayaSewa(10) << std::endl;

    VehicleCollection vc1(1);
    VehicleCollection vc2(2);
    VehicleCollection vc3(3);
    VehicleCollection vc4(4);

    vc1 << v1;
    vc2 << vc1 << v2;
    vc3 << vc2 << v3;
    vc4 << vc3 << v4;

    VehicleCollection vc5 = vc1;

    std::cout << "vc1 printAll method" << std::endl;
    vc1.printAll();
    std::cout << "vc2 printAll method" << std::endl;
    vc2.printAll();
    std::cout << "vc3 printAll method" << std::endl;
    vc3.printAll();
    std::cout << "vc4 printAll method" << std::endl;
    vc4.printAll();
    std::cout << "vc5 printAll method" << std::endl;
    vc5.printAll();

    return 0;
}