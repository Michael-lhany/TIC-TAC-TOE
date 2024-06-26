#ifndef PERFORMANCEMETRICS_H
#define PERFORMANCEMETRICS_H

#include <windows.h>
#include <psapi.h>

// Function to get CPU usage as a percentage
double getCpuUsage();

// Function to get memory usage in bytes
size_t getMemoryUsage();

#endif // PERFORMANCEMETRICS_H
