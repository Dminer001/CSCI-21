/*
 * Name        : lab_3.cpp
 * Author      : Dustin Miner
 * Description : Using branching statements, looping statements and string and
 *               character functions complete the functions
 */

#include "lab_3.h"
#include <ctype.h>

/*
 * Tell the story of Goldilocks. For example, if item is "bed" and number is 1,
 * the story will say "This bed is too soft". "item" parameter will be passed
 * in as all lowercase characters
 * Cases:
 * -item: "porridge", number: 1, return "This porridge is too hot"
 * -item: "porridge", number: 2, return "This porridge is too cold"
 * -item: "porridge", number: 3, return "This porridge is just right"
 * -item: "chair", number: 1, return "This chair is too big"
 * -item: "chair", number: 2, return "This chair is too small"
 * -item: "chair", number: 3, return "This chair is just right"
 * -item: "bed", number: 1, return "This bed is too hard"
 * -item: "bed", number: 2, return "This bed is too soft"
 * -item: "bed", number: 3, return "This bed is just right"
 * @param string item - Represents the item in the story ("porridge", "chair",
 *                      and "bed" are the only legal values -- will default to
 *                      "bed" on invalid argument)
 * @param int number - which item (1, 2, and 3 are the only legal values -- will
 *                     default to 3 on invalid argument)
 * @return string - The output string specified in the documentation above
 */
string Goldilocks(string item, int number) {
  // CODE HERE
  if (item == "porridge") {
    switch (number) {
      case 1: {
        return "This porridge is too hot\n";
      }  break;
      
      case 2: {
        return "This porridge is too cold\n";
      }  break;
      
      case 3: {
      default :
        return "This porridge is just right\n";
      }  break;
  }
  } else if (item == "chair") {
        switch (number) {
      case 1: {
        return "This chair is too big\n";
      }  break;
      
      case 2: {
        return "This chair is too small\n";
      }  break;
      
      case 3:
      default : {
        return "This chair is just right\n";
      }  break;
  }
    
  } else if (item == "bed") {
        switch (number) {
      case 1: {
          return "This bed is too hard\n";
       }  break;
      
      case 2: {
         return "This bed is too soft\n";
      }  break;
      
      case 3:
      default : {
         return "This bed is just right\n";
      }  break;
      
          
      }
  }
  return "";

}

/*
 * Compute the outcome of a round of a rock-scissor-paper game. Lowercase or
 * uppercase values for player_one and player_two arguments are acceptable.
 * Possible inputs: 'R' rock, 'S' scissor, 'P' paper
 * Conditions
 * -rocks beats scissors
 * -scissors beats paper
 * -paper beats rock
 * @param char player_one - Represents player one's "play" ('R', 'S', or 'P')
 * @param char player_two - Represents player two's "play" ('R', 'S', or 'P')
 * @return int - 1 if player one wins, 2 if player two wins, 3 on a draw,
 *               0 if invalud inputs
 */
int RockScissorPaper(char player_one, char player_two) {
  // YOU MUST USE A SWITCH IN THIS FUNCTION
  // CODE HERE
  switch (toupper(player_one)) {
    case 'R': {
      if (toupper(player_two) == 'R') {
      return 3;
    } else if (toupper(player_two) == 'P') {
      return 2;
    } else if (toupper(player_two) == 'S') {
      return 1;
    } else
    return 0;
    
    }
    break;
    case 'P': {
      if (toupper(player_two) == 'P') {
      return 3;
    } else if (toupper(player_two) == 'S') {
      return 2;
    } else if (toupper(player_two) == 'R') {
      return 1;
    } else
    return 0;
    
    }
    break;
    case 'S': {
      if (toupper(player_two) == 'S') {
      return 3;
    } else if (toupper(player_two) == 'R') {
      return 2;
    } else if (toupper(player_two) == 'P') {
      return 1;
    } else
    return 0;
    }
    break;
    default :
    return 0;
  }
  
  
}

/*
 * Return the input string with all characters converted to lowercase.
 * @param string input - The string that will be converted to all lowercase
 * @return string - a string containing the converted input string
 */
string ToLower(string input) {
  // CODE HERE
  int length = input.length();
  for (int i = 0; i < length; i++) {
    if (input.at(i) >= 65 && input.at(i) <= 90) {
      input.at(i) += 32;
    }
  }
  return input;
}

/*
 * Return the input string with all characters converted to uppercase.
 * @param string input - The string that will be converted to all uppercase
 * @return string - a string containing the converted input string
 */
string ToUpper(string input) {
  // CODE HERE
  int length = input.length();
    for (int i = 0; i < length; i++) {
    if (input.at(i) >= 97 && input.at(i) <= 122) {
      input.at(i) -= 32;
    }
  }
  return input;
}

int main() {
    string item = "";
    int number = 0;
    for (int i = 1; i < 4; i++) {
        item = "porridge";
        number = i;
        cout << Goldilocks(item, number);
    }
        for (int i = 1; i < 4; i++) {
        item = "chair";
        number = i;
        cout << Goldilocks(item, number);
    }
        for (int i = 1; i < 4; i++) {
        item = "bed";
        number = i;
        cout << Goldilocks(item, number);
    }
    string input = "hEll0";
    cout << ToUpper(input) << endl;
    cout << ToLower(input) << endl;
    RockScissorPaper('P', 'P');
    
    
}

