#include "DeviceManager.h"
#include "Device.h"
#include <algorithm>

void DeviceManager::addDevice(Device* device) {
    if (device) devices.push_back(device);
}

Device* DeviceManager::findDevice(std::string key) {
    for (auto* d : devices) {
        if (d && d->getName() == key) return d;
    }
    return nullptr;
}

void DeviceManager::removeDevice(Device* device) {
    if (!device) return;

    auto it = std::find(devices.begin(), devices.end(), device);
    if (it != devices.end()) {
        devices.erase(it);
        delete device;
    }
}
