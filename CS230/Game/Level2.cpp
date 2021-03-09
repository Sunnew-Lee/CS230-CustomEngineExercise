/*--------------------------------------------------------------
Copyright (C) 2021 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
File Name: Level2.cpp
Project: CS230
Author: sunwoo.lee
Creation date: 03/08/2021
-----------------------------------------------------------------*/
#include "../Engine/Engine.h"	//GetGameStateManager
#include "Screens.h"
#include "Level2.h"

Level2::Level2() : levelNext(CS230::InputKey::Keyboard::Enter), levelReload(CS230::InputKey::Keyboard::R){}

void Level2::Load() {
}
void Level2::Update() {
	if (levelNext.IsKeyReleased()) {
		Engine::GetGameStateManager().Shutdown();
	}
#ifdef _DEBUG
	if (levelReload.IsKeyReleased()) {
		Engine::GetGameStateManager().ReloadState();
	}
#endif
}
void Level2::Unload() {
}