#include "Engine.h"

int main() {
    Engine engine;

    if (engine.Construct(256, 240, 2, 2)) {
        engine.Start();
    }

    return 0;
}
