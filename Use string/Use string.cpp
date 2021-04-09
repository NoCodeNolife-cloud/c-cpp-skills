#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>//头文件

using namespace std;

const int NUM = 26;//总数

const string wordlist[NUM] = { "apiary","beetle","cereal","danger","ensign","florid","garage","health","insult","jackal","keeper","loaner","manage","nonce","onset","plaid","quilt","remote","stolid","train","useful","valid","whence","xenon","yearn","zippy" };//字符串数组
int main() {//主程序
	srand(time(NULL));//随机种子
	char play;
	cout << "Will you play a word game?<y/n> ";
	cin >> play;
	play = tolower(play);//将play变为小写
	while (play == 'y') {//输入“y”
		string target = wordlist[rand() % NUM];//随机一个字符串
		int length = target.length();
		string attempt(length, '-');//-填充
		string badchars;
		int guesses = 6;
		cout << "Guess my secret word. It has " << length << " letters, and you guess" << endl << "one letter at a time. You get " << guesses << " wrong guesses." << endl;
		cout << "Your word: " << attempt << endl;
		while (guesses > 0 && attempt != target) {
			char letter;
			cout << "Guess a letter: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos) {
				cout << "You already guessed that. Try again." << endl;
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos) {//判断正误
				cout << "Oh, bad guess!" << endl;
				--guesses;
				badchars += letter;//加在letter尾部
			}
			else {
				cout << "Good guess!" << endl;
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos) {
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "Your word: " << attempt << endl;
			if (attempt != target) {
				if (badchars.length() > 0) {
					cout << "Bad chioces: " << badchars << endl;
				}
				cout << guesses << " bad guesses left" << endl;
			}
		}
		if (guesses > 0) {
			cout << "That's right!" << endl;
		}
		else {
			cout << "Sorry, the word is " << target << "." << endl;
		}
		cout << "Will you play another? <y/n> ";
		cin >> play;
		play = tolower(play);
	}//输入“n”
	cout << "Bye" << endl;
	return 0;
}