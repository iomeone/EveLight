#pragma once

#include "entity.h"
#include <glm/glm.hpp>

class Ball : public Entity {
public:
    Ball(float x, float y, float width, float height, uint texId);
    ~Ball() {}
    float GetRadius() { return mWidth / 2; }
    void Update(Game *game, uint ticks) override;
};