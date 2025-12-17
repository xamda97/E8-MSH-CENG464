#pragma once
#include <vector>
#include <string>

class Device;

class DeviceManager {
private:
    std::vector<Device*> devices;

public:
    void addDevice(Device* device);
    Device* findDevice(std::string name);
    void removeDevice(Device* device);
};
