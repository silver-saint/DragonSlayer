#pragma once
#include <Core/Core.h>

class Timer {
public:
    Timer() = default;

    void startRecording();
    void stopRecording();

    [[nodiscard]] double getDuration() const;

    ~Timer() = default;
private:
    double duration = 0;
    std::chrono::time_point<std::chrono::high_resolution_clock> start;
};