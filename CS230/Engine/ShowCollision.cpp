/*--------------------------------------------------------------
Copyright (C) 2021 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
File Name: ShowCollision.cpp
Project: CS230
Author: sunwoo.lee
Creation date: 5/05/2021
-----------------------------------------------------------------*/
#include "ShowCollision.h"

ShowCollision::ShowCollision(CS230::InputKey::Keyboard keyToUse) :showCollisionKey(keyToUse), enabled(false)
{}

void ShowCollision::Update(double)
{
	if (showCollisionKey.IsKeyReleased() == true)
	{
		enabled = IsEnabled() == true ? false : true;
	}
}

bool ShowCollision::IsEnabled()
{
	return enabled;
}
