# SimpleDebug

A simple debugging library for Arduino and ESP32 that allows you to easily toggle debug code on and off.

## Installation

### Arduino IDE

1. Download the library as a ZIP file.
2. Open the Arduino IDE.
3. Go to `Sketch` > `Include Library` > `Add .ZIP Library`.
4. Select the downloaded ZIP file.

### PlatformIO

Add the following to your `platformio.ini`:

```ini
lib_deps =
  https://github.com/LeeorNahum/SimpleDebug.git
```

## Usage

To enable debugging, add `#define DEBUG_ENABLE` before including the `SimpleDebug.h` header file. Then use the `DEBUG` macro to include debug statements in your code.

```cpp
#define DEBUG_ENABLE
#include <SimpleDebug.h>
```
