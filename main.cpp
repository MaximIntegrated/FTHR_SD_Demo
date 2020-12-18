#include "mbed.h"
#include "ThisThread.h"
#include "SDBlockDevice.h"
#include "FATFileSystem.h"


DigitalOut rLED(LED1);
DigitalOut gLED(LED2);

SDBlockDevice sd(MBED_CONF_SD_SPI_MOSI, MBED_CONF_SD_SPI_MISO, MBED_CONF_SD_SPI_CLK, MBED_CONF_SD_SPI_CS);
FATFileSystem fs("sd", &sd);

// main() runs in its own thread in the OS
// (note the calls to Thread::wait below for delays)
int main()
{
    printf("SD Card Example\n");
    gLED = LED_ON;
    rLED = LED_ON;

    FILE *fp = fopen("/sd/myfile.txt", "w");
    
    fprintf(fp, "Hello World\n");
    fclose(fp);

    rLED = LED_OFF;

    while (true) {
        gLED = !gLED;
        ThisThread::sleep_for(500ms);
    }
}

