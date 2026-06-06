namespace rgb_matrix {
namespace internal {

bool Rp1PioIsActive() { return false; }
bool Rp1RioIsActive() { return false; }

bool Rp1PioPlatformDetected() { return false; }
bool Rp1RioPlatformDetected() { return false; }

bool Rp1PioShouldActivate(const char*, int, int) { return false; }
bool Rp1RioShouldActivate(const char*, int, int) { return false; }

bool Rp1RioBackendRequested() { return false; }

void Rp1PioSetEnabled(bool) {}
void Rp1RioSetEnabled(bool) {}

void Rp1PioSetGpioSlowdown(int) {}
void Rp1RioSetGpioSlowdown(int) {}

void Rp1PioInitOrDie(...) {}
void Rp1RioInitOrDie(...) {}

void Rp1PioInitializePanels(...) {}
void Rp1RioInitializePanels(...) {}

void Rp1PioDumpFramebuffer(...) {}
void Rp1RioDumpFramebuffer(...) {}

void Rp1PioDeinit() {}
void Rp1RioDeinit() {}

}
}
