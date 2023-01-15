#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Seed the random number generator
  srand(time(NULL));

  // Initialize variables for the game
  int player_choice, computer_choice;
  int player_wins = 0, computer_wins = 0;

  // Run the game until one player reaches 3 wins
  while (player_wins < 3 && computer_wins < 3) {
    printf("Enter your choice (0 = rock, 1 = paper, 2 = scissors): ");
    scanf("%d", &player_choice);

    // Generate a random choice for the computer
    computer_choice = rand() % 3;

    // Determine the winner
    if (player_choice == computer_choice) {
      printf("It's a tie!\n");
    } else if (player_choice == 0 && computer_choice == 2) {
      printf("You win! Rock beats scissors.\n");
      player_wins++;
    } else if (player_choice == 1 && computer_choice == 0) {
      printf("You win! Paper beats rock.\n");
      player_wins++;
    } else if (player_choice == 2 && computer_choice == 1) {
      printf("You win! Scissors beat paper.\n");
      player_wins++;
    } else {
      printf("You lose.\n");
      computer_wins++;
    }
  }

  // Display the final result
  if (player_wins == 3) {
    printf("Congratulations, you won the game!\n");
  } else {
    printf("Sorry, you lost the game. Better luck next time.\n");
  }

  return 0;
}

