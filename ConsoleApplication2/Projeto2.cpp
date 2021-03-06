// ConsoleApplication2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include "string"
#include "iostream"
#include "vector"

using namespace std;

/*
Class Dictionary {
	Dictionary(dictionary_file)
	bool check_word(word)


	vector<string> list
}
Class Board {
	create(size_x,size_y)
	show(puzzle_2d_vector, possible_words) -- Mostra no ecra
}
Class Puzzle {
	create(size_x,size_y,name,vector<puzzle_word> load = none) -- O load permite carregar um puzzle pre criado
	insert(puzzle_word word) -- Utiliza o check_word para ver se cabe e depois insere e poem pretos
	check_word(puzzle_word word) -- Verifica se a palavra cabe
	possible_words() -- Pega em palavras random ate encaixar 10 com o check_word
	fill() -- Enche o puzzle com pretos
	verify() -- Verifica que todas as palavras existem e estao colocadas corretamente

	static save(puzzle,file) -- Salva o board para um ficheiro
	static load(file) -- Cria um vector<puzzle_word> com todas as palavras, para passar ao create()

	vector<puzzle_word> puzzle_words
	vector<vector<char>> puzzle_2d_vector
}
Class Menu {
	write()
	ask()

	vector<string> options

	-- Precisa de ser bem pensado, podemos dividir em varias partes 
}
Struct puzzle_word {
	char positionX
	char positionY
	char direction
	string word
}




*/

struct puzzle_word {
	char positionX;
	char positionY;
	char direction;
	string word;
};

class Puzzle {
	public:
		Puzzle(int size_x, int size_y, string name);
		Puzzle(int size_x, int size_y, string name, vector<puzzle_word> load_vector);
		bool insert(puzzle_word word);
	private:
		int size_x;
		int size_y;
		string name;
		vector<vector<char>> two_d_puzzle_vector;
};
Puzzle::Puzzle(int set_size_x, int set_size_y, string set_name) {
	size_x = set_size_x;
	size_y = set_size_y;
	name = set_name;
	for (int x = 0; x < set_size_x; x++) {
		for (int y = 0; y < set_size_y; y++) {
			two_d_puzzle_vector[x][y] = ' ';
		}
	}
}
Puzzle::Puzzle(int set_size_x, int set_size_y, string set_name, vector<puzzle_word> load_vector) {
	size_x = set_size_x;
	size_y = set_size_y;
	name = set_name;
	for (int x = 0; x < set_size_x; x++) {
		for (int y = 0; y < set_size_y; y++) {
			two_d_puzzle_vector[x][y] = ' ';
		}
	}
	for (int i = 0; i < load_vector.size(); i++) {
		puzzle_word word = load_vector[i];
		this->insert(word);
	}
}
bool Puzzle::insert(puzzle_word word) {
	int x_index = word.positionX - 'a';
	int y_index = word.positionY - 'A';
	vector<vector<char>> new_two_d_puzzle_vector = two_d_puzzle_vector;
	if (word.direction == 'h') {
		for (int i = 0; i < word.word.size(); i++) {

		}
	}
}



int main()
{
    return 0;
}

