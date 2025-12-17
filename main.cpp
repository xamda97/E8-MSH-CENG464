#include <iostream>
#include "DeviceManager.h"
#include "Device.h"

int main() {
    std::cout << "--- DeviceManager Remove Test ---\n";

    DeviceManager dm;

    dm.addDevice(new Device("C-1"));
    dm.addDevice(new Device("L-7"));
    dm.addDevice(new Device("T-2"));

    Device* lamp = dm.findDevice("L-7");
    std::cout << "Find L-7: " << (lamp ? "FOUND" : "NOT FOUND") << "\n";

    dm.removeDevice(lamp);
    std::cout << "Removed L-7\n";

    Device* lampAgain = dm.findDevice("L-7");
    std::cout << "Find L-7 after remove: "
              << (lampAgain ? "FOUND" : "NOT FOUND") << "\n";

    return 0;
}
