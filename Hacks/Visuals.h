#pragma once

enum class FrameStage;
class GameEvent;

namespace Visuals
{
    void playerModel(FrameStage stage) noexcept;
    void remove3dSky() noexcept;
    void disablePostProcessing(FrameStage stage) noexcept;
    void reduceFlashEffect() noexcept;
    void showVelocity() noexcept;
}
