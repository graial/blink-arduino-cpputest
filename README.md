# Build and compile
using [Arduino-CLI](https://arduino.github.io/arduino-cli/)

1. Set environment variables (for convenience):
`FQBN=arduino:esp32:nano_nora:PartitionScheme=spiffs && PORT=</dev/ttyUSB0 OR COM3> FILENAME=blink-arduino-cpputest.ino`

2.Compile
`arduino-cli compile --fqbn $FQBN $FILENAME --output-dir build`

3. Upload
`arduino-cli upload -p $PORT --fqbn $FQBN $FILENAME --input-dir build`

You can also chain the commands together like so:
`arduino-cli compile --fqbn $FQBN $FILENAME --output-dir build && arduino-cli upload -p $PORT --fqbn $FQBN $FILENAME --input-dir build && arduino-cli monitor -p $PORT`

in case of this error on Linux:
`dfu-util: No DFU capable USB device available`
download and execute [this script](https://github.com/arduino/ArduinoCore-mbed/blob/main/post_install.sh)

## Test

1. Build the docker image (one time only, or on Dockerfile updates):
`sudo docker pull jwgrenning/cpputest-runner`

2. Run the tests:
`./unit-tests/docker/run.sh "make -C unit-tests"`
