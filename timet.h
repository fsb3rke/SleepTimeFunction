#pragma once
#include <Windows.h>
#include <iostream>

void SleepTime(DWORD sleep, DWORD sleepPower) {
    const int normalSleepPower = 10 * 10;
    if (sleepPower == 0)
    {
        Sleep(sleep * normalSleepPower);
    }
    else if (sleepPower != 0)
    {
        Sleep(sleep * sleepPower);
    }
}