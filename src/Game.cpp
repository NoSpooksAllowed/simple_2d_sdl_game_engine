#include <iostream>

#include "Game.h"
#include "Constants.h"

Game::Game() {
    this->isRunning = false;

}

Game::~Game() {}

bool Game::IsRunning() const {
    return this->isRuining;
}

float projectilePosX =