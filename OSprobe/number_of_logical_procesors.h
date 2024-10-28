#pragma once

#include <iostream>
#include <windows.h>

void print_number_of_logical_procesors() {
    SYSTEM_INFO system_info;
    GetSystemInfo(&system_info);

    DWORD number_of_logical_procesors= system_info.dwNumberOfProcessors;

    std::cout << "Number of logical processors: " << number_of_logical_procesors << std::endl;
}