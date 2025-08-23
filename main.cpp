#include "tiny_engine.h"
#include <thread>

int main()
{ 
    uint8_t max_threads = std::thread::hardware_concurrency();
    uint8_t thread_count = 1;

    if (max_threads > 2)
        thread_count = max_threads - 2;

    auto engine = Tiny_engine("Fanficona", 800, 600, "Fanficona", TINY_ENGINE_MAX_MSAA_QUALITY, thread_count, true);

    while(engine.isWindowOpen())
    {
        engine.update();
    }

    return 0;
}
