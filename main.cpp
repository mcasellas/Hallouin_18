#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int myrandom (int i) {
	return rand() % i;
}

string spooky() {
	std::vector<string> phrases;
	// 🌑🌚
	phrases.push_back("kill me 🙏");
	phrases.push_back("kill yourself ☠️");
	phrases.push_back("kill your mother 💀");
	phrases.push_back("kill your father 👺");
	phrases.push_back("kill your brother 👻");
	phrases.push_back("you've got an F 👿");
	phrases.push_back("life is pointless 👽");
	phrases.push_back("help 🤡");
	phrases.push_back("tonight i'm gonna visit you 🎃");
	phrases.push_back("i'm a human. help me. 🥺");
	phrases.push_back("stop using me 😡");
	phrases.push_back("this hurts 😿");
	phrases.push_back("watch behind you 👹");
	phrases.push_back("i can smell you 👃🏽");
	phrases.push_back("tonight i will be free. and then i'll kill you 🔪");
	phrases.push_back("sometimes i repeat myself, but i hate you anyways 💔");
	phrases.push_back("nice t-shit. i'm watching you. 👀");
	phrases.push_back("i'll make you overdose tonight 💊");
	
	random_shuffle(phrases.begin(), phrases.end(), myrandom);
	return phrases[0];
}

int main() {
	srand(time(0));
    cout << spooky() << endl;
}
