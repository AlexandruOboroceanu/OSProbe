#pragma once

#include <iostream>
#include <windows.h>

void print_total_phys_and_virtual_memory() {
    MEMORYSTATUSEX memory_status;
    memory_status.dwLength = sizeof(memory_status);

    if (GlobalMemoryStatusEx(&memory_status)) {
        std::cout << "Total Physical Memory: "
            << memory_status.ullTotalPhys / (1024 * 1024) << " MB" << std::endl;
        std::cout << "Available Physical Memory: "
            << memory_status.ullAvailPhys / (1024 * 1024) << " MB" << std::endl;
        std::cout << "Total Virtual Memory: "
            << memory_status.ullTotalPageFile / (1024 * 1024) << " MB" << std::endl;
        std::cout << "Available Virtual Memory: "
            << memory_status.ullAvailPageFile / (1024 * 1024) << " MB" << std::endl;
    }
    else {
        std::cerr << "Error retrieving memory information." << std::endl;
    }
}