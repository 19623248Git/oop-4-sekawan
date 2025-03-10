#include "vehicle.hpp"

Vehicle::Vehicle(){
    this->serial = 0;
    this->category = "mobil";
    this->brand =  "XXX";
    this->releaseYear = 0;
}

Vehicle::Vehicle(int serial, std::string category, std::string brand, int releaseYear){
    this->serial = serial;
    this->category = category;

    // lowercase the string
    for (auto& x : this->category){
        x = tolower(x);
    }

    this->brand = brand;
    this->releaseYear = releaseYear;
}

Vehicle::Vehicle(const Vehicle& other){
    this->serial = other.serial;
    this->category = other.category;

    // lowercase the string
    for (auto& x : this->category){
        x = tolower(x);
    }

    this->brand = other.brand;
    this->releaseYear = other.releaseYear;
}

Vehicle::~Vehicle(){
    
}

void Vehicle::printInfo(){
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "No: " << this->serial << std::endl;
    std::cout << "Category: " << this->category << std::endl;
    std::cout << "Brand: " << this->brand << std::endl;
    std::cout << "Release Year: " << this->releaseYear << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
}

int Vehicle::biayaSewa(int lamaSewa){

    if(this->category=="bus"){
        return 1000000*lamaSewa;
    }
    else if(this->category=="minibus"){
        if(lamaSewa <= 5){
            return 5*1000000;
        }
        else{
            return (5*1000000) + (500000*(lamaSewa-5));
        }
    }
    else if(this->category=="mobil"){
        return 500000*lamaSewa;
    }
    else{
        std::cout << "maaf kategori kendaraan tidak ditemukan!" << std::endl;
    }

    return 0;
}

