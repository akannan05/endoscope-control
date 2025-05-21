#include "mprls_imu_node/TCA9548A.hpp"

#include<iostream>
#include<chrono>
#include<thread>

int main() {
    TCA9548A mux;
    if (mux.init(1) < 0) {
        std::cerr << "failed to init TCA9548A on I2C bus 1\n";
        return 1;
    }

    std::cout << "Cycling through channels 0-1...\n"; 

    for (uint8_t ch = 0; ch <= 1; ch++) {
        std::cout << "enabling channel: " << static_cast<int>(ch) << std::endl;
        mux.set_channel(ch);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "disabling all channels...\n";
    mux.no_channel();

    return 0;
}
