#include "vehicle_collection.hpp"

VehicleCollection::VehicleCollection(){
    this->size = 100;
    this->Neff = 0;
    this->storage = new Vehicle[size];
}

VehicleCollection::VehicleCollection(int size){
    this->size = size;
    this->Neff = 0;
    this->storage = new Vehicle[size];
}

VehicleCollection::VehicleCollection(const VehicleCollection& other){
    this->size = other.size;
    this->Neff = other.Neff;
    this->storage = new Vehicle[size];

    for(int i = 0; i < this->size; i++){
        this->storage[i] = other.storage[i];
    }
}

VehicleCollection::~VehicleCollection(){
    delete[] storage;
}

void VehicleCollection::printAll(){
    std::cout << "------------------ Vehicle Storage Collection ----------------------\n\n\n";
    
    for(int i = 0; i < this->Neff; i++){
        storage[i].printInfo();
    }

    std::cout << "\n\n--------------------------------------------------------------------" << std::endl;
}

VehicleCollection& VehicleCollection::operator<<(const Vehicle& other){
    
    if(this->Neff < this->size){
        this->storage[this->Neff] = other;
        this->Neff+=1;
    }
    else{
        std::cout<<"Collection is Full!"<<std::endl;
    }
    return*this;
}

VehicleCollection& VehicleCollection::operator<<(const VehicleCollection& other){
    for(int i = 0; i < other.Neff; i++){
        if(this->Neff < this->size){
            this->storage[this->Neff] = other.storage[i];
            Neff+=1;
        }
        else{
            std::cout<<"Collection is Full!"<<std::endl;
        }
    }
    return*this;
}