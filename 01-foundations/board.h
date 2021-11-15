#pragma once

#include <vector>
#include <iostream>

namespace foundations
{
    enum class BoardSlot
    {
        Empty = 0,
        Obstacle = 1,
    };

    class Board final
    {
    public:
        explicit Board(const std::vector<std::vector<int>> &input);
        ~Board() = default;

        const std::vector<BoardSlot> &operator[](const int row) const;
        
        std::vector<std::vector<BoardSlot>>::const_iterator begin() const;
        std::vector<std::vector<BoardSlot>>::const_iterator end() const;

    private:
        std::vector<std::vector<BoardSlot>> slots_;
    };

    std::ostream &operator<<(std::ostream &out, const Board &board);
}