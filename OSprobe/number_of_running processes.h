#pragma once

#include <iostream>
#include <windows.h>
#include <psapi.h> 

void print_number_of_proceses() {
    DWORD process_ids[1024];
    DWORD bytes_returned;

    if (!EnumProcesses(process_ids, sizeof(process_ids), &bytes_returned))
        std::cerr << "Error enumerating processes." << std::endl;

    DWORD process_count = bytes_returned / sizeof(DWORD);

    std::cout << "Number of running processes: " << process_count << std::endl;

}