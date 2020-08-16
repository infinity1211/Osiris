#pragma once

enum class FrameStage;
class GameEvent;
struct ImDrawList;
struct UserCmd;

namespace Misc
{
    void edgejump(UserCmd* cmd) noexcept;
    void jumpbug(UserCmd* cmd) noexcept;
    void spectatorList() noexcept;
    void noscopeCrosshair(ImDrawList* drawlist) noexcept;
    void recoilCrosshair(ImDrawList* drawList) noexcept;
    void fastPlant(UserCmd*) noexcept;
    void drawBombTimer() noexcept;
    void quickReload(UserCmd*) noexcept;
    void bunnyHop(UserCmd*) noexcept;
    void nadePredict() noexcept;
    void drawAimbotFov() noexcept;
    void fixMovement(UserCmd* cmd, float yaw) noexcept;
    void revealRanks(UserCmd* cmd) noexcept;
    void autoStrafe(UserCmd* cmd) noexcept;
    void removeCrouchCooldown(UserCmd* cmd) noexcept;
    void knifeBot(UserCmd* cmd) noexcept;
    void edgeBug(float frametime, UserCmd* cmd) noexcept;
    void autoZeus(UserCmd* cmd) noexcept;
    void purchaseList(GameEvent* event = nullptr) noexcept;
}
