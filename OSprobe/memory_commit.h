#pragma once
#include <iostream>
#include <Windows.h>

void print_memory_commit() {

    MEMORYSTATUSEX memory_status;
    memory_status.dwLength = sizeof(memory_status);

    if (GlobalMemoryStatusEx(&memory_status)) {
        std::cout << "Total Committed Memory: "
            << memory_status.ullTotalPhys - memory_status.ullAvailPhys << " bytes" << std::endl;

        std::cout << "Commit Limit: "
            << memory_status.ullTotalPageFile << " bytes" << std::endl;
    }
    else {
        std::cerr << "Error retrieving memory information." << std::endl;
    }
}