/*--------------------------------------------------------------
Copyright (C) 2021 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
File Name: Background.h
Project: CS230
Author: Kevin Wright
Creation date: 2/11/2021
-----------------------------------------------------------------*/
#pragma once
#include <filesystem>               // std::filesystem::path
#include "..\Engine\Vec2.h"         // math::ivec2
#include "..\Engine\Component.h"

namespace CS230 {
    class Camera;
    class Texture;
}

class Background :public CS230::Component {
public:
    ~Background();
    void Add(const std::filesystem::path& texturePath, int level);
    void Draw(const CS230::Camera& camera);
    math::ivec2 Size(void);
private:
    struct ParallaxInfo {
        CS230::Texture* texturePtr{ nullptr };
        int level;
    };
    std::vector<ParallaxInfo> backgrounds;
};