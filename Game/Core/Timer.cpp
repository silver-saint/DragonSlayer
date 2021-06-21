#include <Core/Timer.h>

void Timer::startRecording() {
    start = std::chrono::high_resolution_clock::now();
}

void Timer::stopRecording() {
    auto endTime = std::chrono::high_resolution_clock::now();
    auto st = std::chrono::time_point_cast<std::chrono::microseconds>(start).time_since_epoch().count();
    auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTime).time_since_epoch().count();

    auto dt = end - st;

    duration = (double)dt * 0.001;
}

double Timer::getDuration() const {
    return duration;
}