#include <iostream>
#include <vector>
using namespace std;
void nextMove(int player, vector <string> board){
	int px = 0, py = 0, flag=0;
	for(int i=0;i<8; i++) {
		for(int j=0;j<8; j++) {
			int x = board[i][j];
			if (x=='1' && flag==0) {
				if (i+1<8 && board[i+1][j]=='1' && j+1<8 && board[i][j+1]=='1') {
					px = i;
					py = j;
					flag = 1;
					break;
				}
				else if (i+1<8 && board[i+1][j]=='1') {
					px = i;
					py = j;
					flag = 1;
					break;
				}
				else if (j+1<8 && board[i][j+1]=='1') {
					px = i;
					py = j;
					flag = 1;
					break;
				}
				else {
					px = i;
					py = j;
					flag = 1;
					break;
				}
			}
		}
	}
	cout<<px<<" "<<py;
}
int main(void) {

    int player;
    vector <string> board;

    //If player is 1, I'm the first player.
    //If player is 2, I'm the second player.
    cin >> player;

    //Read the board now. The board is a 8x8 array filled with 1 or 0.
    for(int i=0; i<8; i++) {
        string s; cin >> s;
        board.push_back(s);
    }

    nextMove(player,board);

    return 0;
}
