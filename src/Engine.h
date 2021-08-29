#pragma once

#include "olcPixelGameEngine.h"

class Engine : public olc::PixelGameEngine {
    bool OnUserCreate() override;

    bool OnUserUpdate(float fElapsedTime) override;
};
