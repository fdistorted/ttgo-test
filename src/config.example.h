#include <Arduino.h>
#include "lmic.h"

// This EUI must be in little-endian format, so least-significant-byte
// first. When copying an EUI from ttnctl output, this means to reverse
// the bytes.
// This should also be in little endian format, see above.
//For TTN issued EUIs the last bytes should be 0xD5, 0xB3,
// 0x70.
static const u1_t PROGMEM APPEUI[8]={ ...  };   // Chose LSB mode on the console and then copy it here.

static const u1_t PROGMEM DEVEUI[8]={ ... };   // LSB mode


// This key should be in big endian format (or, since it is not really a
// number but a block of memory, endianness does not really apply). In
// practice, a key taken from ttnctl can be copied as-is.
// The key shown here is the semtech default key.
static const u1_t PROGMEM APPKEY[16] = {...}; // MSB mode
