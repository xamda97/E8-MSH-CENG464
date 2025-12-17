#pragma once
#include <string>

class Device {
private:
    std::string name;

public:
    explicit Device(const std::string& n) : name(n) {}
    std::string getName() const { return name; }
};
