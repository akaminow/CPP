#include <iostream>
#include<list>
#include<string>
#include<vector>
#include "hash.h"
class Hash{
	public:
		Hash (){
			num = 0;
		}
		void setPhrase(){
			char s;
			std::cout << "input something: ";
			std::cin >> s;
			while (s != '#'){
				phrase.push_back(s);
				std::cout << "input something: ";
				std::cin >> s;
				num++;
			}
		}
		void getPhrase(){
			for (int i = 0; i < num; i ++)
				std::cout << phrase.at(i);
		}

	private:
		std::vector<char> phrase;
		std::vector<char> lin;
		std::vector<char> re;
		int num;
		std::list<char> linked;
};
