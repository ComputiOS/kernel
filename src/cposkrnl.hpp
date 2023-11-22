#pragma once

#include "memory/map.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <string>

namespace cposkrnl {
    // Make ComputiOS system, and place it at 0x80000000 in RAM
    int makeSys() {

    }

    // Stop all operation and show a stop error screen.
    void provokeError(string err_text) {

    }

    // Perform full hardware check
    int performHwCheck() {

    }

    namespace lowlvl {
        // Enables interrupts
        void enableInts() {}
    };

    namespace acpi {
        // Power off PC when keypress is detected.
        void shutdownOnKey() {
            
        }
    };
};