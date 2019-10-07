#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "user.h"
#include "data.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};


  User user;
  Data data;
  while (true) {
	  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
	  Controller controller;
	  Game game(kGridWidth, kGridHeight);
	  game.Run(controller, renderer, kMsPerFrame, user);
	  // Get end of party statistics
	  string name = user.GetName();
	  int score = game.GetScore();
	  int size = game.GetSize();
	  // Print out
	  std::cout << "Game has terminated successfully!\n";
	  std::cout << "Player: " << name << "\n";
	  std::cout << "Score: " << score << "\n";
	  std::cout << "Size: " << size << "\n";
	  // Write game data to file
	  data.WriteInFile(name, score, size);
	  // Kill renderer
	  renderer.~Renderer();
	  // Check if the user wants to play again
	  bool again = user.Continue();
	  if (!again) {
	  	break;
	  }
	}
  data.PrintTop5(); 
  return 0;
}