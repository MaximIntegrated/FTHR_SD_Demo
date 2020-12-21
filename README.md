# FTHR_SD_Demo
This example program writes "Hello World!" into a file named "myfile.txt" on the card inserted into the microSD card connector.

# MBED Support
Please switch to appropriate branch for your mbed-os version. 
For mbed v6.6 run below commands after cloning repository.
1. `git checkout -b demo-with-mbedv6-6 origin/mbed-v6.6`
2. `mbedtools compile -t GCC_ARM -m MAX32630FTHR`
To try demo with the latest mbed-os please update `mbed-os.lib` file to point latest.
