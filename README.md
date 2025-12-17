# E8-MSH-CENG464
CENG 464 – Monitoring Smart Home (MSH) Term Project  
Group E8

## DeviceManager Component – MSH Project

**Author:** Hamda (SN: s220201802)

### Overview
This component implements the **DeviceManager** for the My Sweet Home (MSH) smart home application.  
It is responsible for **managing the lifecycle of devices**, including storing devices, locating devices by identifier, and **safely removing devices** from the system.

The DeviceManager acts as a **core data-management subsystem** and does not handle user interaction or logging directly.

---

### Responsibilities
- **Device Storage**: Maintains an internal list of all registered devices
- **Device Lookup**: Finds devices using a unique device key (type + ID)
- **Safe Removal**: Removes devices from the internal list without leaving invalid references
- **System Consistency**: Ensures removed devices are no longer accessible by other subsystems

---

### Requirements Covered
This component satisfies the following Low-Level Requirements (LLRs):

- **LLR-R1**: Device selection for removal (supported via lookup by unique key)
- **LLR-R2**: Safe removal from internal device list
- **LLR-R3**: Consistency with other subsystems after device removal
- **LLR-R4**: Proper handling of invalid or non-existing device IDs
- **LLR-R5**: Supports logging of removal operations (handled externally)

---

### Interface
```cpp
void addDevice(Device* device);
Device* findDevice(std::string name);
void removeDevice(Device* device);
