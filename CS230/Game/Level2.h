/*--------------------------------------------------------------
Copyright (C) 2021 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
File Name: Level2.h
Project: CS230
Author: sunwoo.lee
Creation date: 03/08/2021
-----------------------------------------------------------------*/
#pragma once
#include "..\Engine\GameState.h"
#include "..\Engine\Input.h"

class Level2 : public CS230::GameState {
public:
	Level2();
	void Load() override;
	void Update() override;
	void Unload() override;

	std::string GetName() override { return "Level 2"; }
private:
	CS230::InputKey levelNext;
	CS230::InputKey levelReload;
};