#include "player.hpp"

Player::Player(string playerName, ECcolor color()) {

}

ostream& Player::print(ostream& playerOutput) {
    playerOutput << "Player Name: " << playerName << endl;
    playerOutput << "Player's color: " << color() << endl;
    playerOutput << "Player's score: " << score << endl;
    playerOutput << "The scoreboard: " << scoreboard << endl;
}

ECcolor Player::color(color()) {
    return color();
}

int Player::getScore() {
    return score;
}

bool Player::wonColumn(int colNum) {
    scoreboard[score] = colNum;
    score++;
    if (colNum >= 3) {
        cout << "You won!" << endl;
        return true;
    }
    else {
        cout << "You lost!" << endl;
        return false;
    }
}
