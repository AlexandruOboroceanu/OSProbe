#pragma once
#include <windows.h>
#include <iostream>

void print_page_size() {
    SYSTEM_INFO system_info;
    GetSystemInfo(&system_info);

    DWORD page_size = system_info.dwPageSize;

    std::cout << "Page size: " << page_size << " bytes" << std::endl;
}