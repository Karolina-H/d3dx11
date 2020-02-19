#include "kTimer.h"

using namespace std::chrono;

kTimer::kTimer() noexcept
{
	last = steady_clock::now();
}

float kTimer::Mark() noexcept
{
	const auto old = last;
	last = steady_clock::now();
	const duration<float> frameTime = last - old;
	return frameTime.count();
}

float kTimer::Peek() const noexcept
{
	return duration<float>(steady_clock::now() - last).count();
}
