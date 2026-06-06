#include "rp1_pio_backend.h"
#include "rp1_rio_backend.h"

namespace rgb_matrix {
namespace internal {

bool Rp1PioPlatformDetected() { return false; }
bool Rp1PioConfigSupported(const char*, int, int) { return false; }
bool Rp1PioShouldActivate(const char*, int, int) { return false; }
void Rp1PioSetGpioSlowdown(int) {}
bool Rp1PioIsActive() { return false; }
void Rp1PioInitOrDie(const HardwareMapping&, int, int, int, int, int) {}
void Rp1PioInitializePanels(const HardwareMapping&, const char*, int) {}
void Rp1PioDumpFramebuffer(Framebuffer*, int) {}
void Rp1PioDeinit() {}

bool Rp1RioPlatformDetected() { return false; }
void Rp1RioSetEnabled(bool) {}
bool Rp1RioBackendRequested() { return false; }
bool Rp1RioShouldActivate(const char*, int, int) { return false; }
void Rp1RioSetGpioSlowdown(int) {}
bool Rp1RioIsActive() { return false; }
void Rp1RioInitOrDie(const HardwareMapping&, int, int, int, int, int) {}
void Rp1RioInitializePanels(const HardwareMapping&, const char*, int) {}
void Rp1RioDumpFramebuffer(Framebuffer*, int) {}
void Rp1RioDeinit() {}

}  // namespace internal
}  // namespace rgb_matrix
