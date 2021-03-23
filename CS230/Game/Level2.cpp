/*--------------------------------------------------------------
Copyright (C) 2021 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
File Name: Level2.cpp
Project: CS230
Author: sunwoo.lee
Creation date: 03/08/2021
-----------------------------------------------------------------*/
#include "../Engine/Engine.h"	// GetWindow(), GetGameStateManager()
#include "Level2.h"

Level2::Level2() 
	: levelNext(CS230::InputKey::Keyboard::Enter), levelReload(CS230::InputKey::Keyboard::R), ship(math::vec2(Engine::GetWindow().GetSize() / 2))
{}

void Level2::Load() {
	ship.Load();
}
void Level2::Update(double dt) {
	ship.Update(dt);
	if (levelNext.IsKeyReleased() == true) {
		Engine::GetGameStateManager().Shutdown();
	}
#ifdef _DEBUG
	if (levelReload.IsKeyReleased() == true) {
		Engine::GetGameStateManager().ReloadState();
	}
#endif
}
void Level2::Unload() {
}

void Level2::Draw()
{
	Engine::GetWindow().Clear(0x000000ff);
	ship.Draw();
}
