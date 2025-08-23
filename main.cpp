#include "tiny_engine.h"

int main()
{ 
    auto engine = Tiny_engine("myapp", 800, 600, "test", TINY_ENGINE_MAX_MSAA_QUALITY, 2, true);

    while(engine.isWindowOpen())
    {
        engine.update();
    }

    return 0;
}
