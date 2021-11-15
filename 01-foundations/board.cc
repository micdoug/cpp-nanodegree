#include "board.h"

namespace foundations
{
    Board::Board(const std::vector<std::vector<int>> &input)
    {
        for (const auto &row : input)
        {
            std::vector<BoardSlot> parsed_row;
            for (const auto &value : row)
            {
                if (value == 0)
                {
                    parsed_row.push_back(BoardSlot::Empty);
                }
                else if (value == 1)
                {
                    parsed_row.push_back(BoardSlot::Obstacle);
                }
                else
                {
                    throw std::invalid_argument("invalid value for board slot");
                }
            }
            slots_.push_back(std::move(parsed_row));
        }
    }

    const std::vector<BoardSlot> &Board::operator[](const int row) const
    {
        return slots_[row];
    }

    std::vector<std::vector<BoardSlot>>::const_iterator Board::begin() const
    {
        return slots_.cbegin();
    }
    std::vector<std::vector<BoardSlot>>::const_iterator Board::end() const
    {
        return slots_.cend();
    }

    std::ostream &operator<<(std::ostream &out, const Board &board)
    {
        for (const auto &row : board)
        {
            for (const auto &slot : row)
            {
                out << (slot == BoardSlot::Empty ? "0    " : "⛰️    ");
            }
            out << std::endl;
        }
        return out;
    }
}