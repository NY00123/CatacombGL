// Copyright (C) 2019 Arno Ansems
// 
// This program is free software: you can redistribute it and/or modify 
// it under the terms of the GNU General Public License as published by 
// the Free Software Foundation, either version 3 of the License, or 
// (at your option) any later version. 
// 
// This program is distributed in the hope that it will be useful, 
// but WITHOUT ANY WARRANTY; without even the implied warranty of 
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
// GNU General Public License for more details. 
// 
// You should have received a copy of the GNU General Public License 
// along with this program.  If not, see http://www.gnu.org/licenses/ 

//
// Score
//
// Keeps track of the high score list for Catacomb 3D
//
#pragma once

#include <string>
#include <vector>
#include "../Engine/IRenderer.h"
#include "../Engine/EgaGraph.h"

class HighScores
{
public:
    struct HighScore
    {
        std::string name;
        uint32_t score;
        uint16_t level;
    };

    HighScores();
    ~HighScores();

    const std::vector<HighScore>& Get() const;
    bool LoadFromFile(const std::string& path);
    bool StoreToFile(const std::string& path);
    void LoadGraphics(EgaGraph& egaGraph, const uint16_t backgroundPic);
    bool TryToAddNewScore(const uint32_t newScore, const uint16_t newLevel);
    void AddCharactersToNameOfNewScore(const std::string& characters);
    void RemoveACharacterFromNameOfNewScore();
    void FinishNameOfNewScore();
    void Draw(IRenderer& renderer, const uint32_t timeStamp) const;

private:
    static void ApplyEqualSpacingToNumbers(std::string& str);

    std::vector<HighScore> m_highscores;
    char m_remainingConfigData[20];
    uint8_t m_newScorePosition;
    Picture* m_backgroundPicture;
    Font* m_font;
};
