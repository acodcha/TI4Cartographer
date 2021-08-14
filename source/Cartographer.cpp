#include "Board6Players.hpp"
#include "Instructions.hpp"
#include "SelectedSystemIds.hpp"

namespace ti4cartographer {

void generate_board(const Instructions& instructions, const SelectedSystemIds& selected_system_ids) {
  switch (instructions.board_layout()) {
    case BoardLayout::Players2:
      // TODO.
      break;
    case BoardLayout::Players3:
      // TODO.
      break;
    case BoardLayout::Players4Regular:
      // TODO.
      break;
    case BoardLayout::Players4Large:
      // TODO.
      break;
    case BoardLayout::Players5Regular:
      // TODO.
      break;
    case BoardLayout::Players5Small:
      // TODO.
      break;
    case BoardLayout::Players5Large:
      // TODO.
      break;
    case BoardLayout::Players6:
      {
        const Board6Players board{instructions.board_layout(), instructions.board_aggression(), instructions.number_of_iterations(), selected_system_ids};
      }
      break;
    case BoardLayout::Players7Regular:
      // TODO.
      break;
    case BoardLayout::Players7Large:
      // TODO.
      break;
    case BoardLayout::Players8Regular:
      // TODO.
      break;
    case BoardLayout::Players8Large:
      // TODO.
      break;
  }
}

} // namespace ti4cartographer

int main(int argc, char *argv[]) {
  const ti4cartographer::Instructions instructions{argc, argv};
  const ti4cartographer::SelectedSystemIds selected_system_ids{instructions.game_version(), instructions.board_layout()};
  ti4cartographer::generate_board(instructions, selected_system_ids);
  return EXIT_SUCCESS;
}
