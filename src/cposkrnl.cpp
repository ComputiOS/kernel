/**
 * ComputiOS Kernel
 * Version 0.01.1
 * Copyright (C) 2023 MML Tech LLC
*/

#include "cposkrnl.hpp"

int main() {
    int cpsys = cposkrnl::makeSys(); // Makes ComputiOS system cache and loads it into 0x80000000-0x8AAAAAAA
    if (cpsys == NULL) {
        cposkrnl::provokeError("A fault occured in the ComputiOS kernel. Press any key to restart."); // If it returns null (it's not there), show stop error screen
        cposkrnl::lowlvl::enableInts(); // Enable hardware interrupts
        cposkrnl::acpi::shutdownOnKey();
    }else{
        int hwcheck = cposkrnl::performHwCheck(); // Perform hardware check on CPU, RAM, GPU, storage, and I/O devices.
        if (hwcheck.cpuFreq <= 1000) {
            cposkrnl::provokeError("Your CPU needs to be at least 1GHz to use ComputiOS. Press any key to restart.");
        }
    }
}