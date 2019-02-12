//============================================================================
// Name        : MathGame.cpp
// Author      : AdrianChua
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <ctime>
#include <string>

int main(void) {
	//START

	// SHOW TITLE SCREEN


	//IF player pressed play


		// YES: SET SCORE TO 0
	bool game_over = false;
	bool quit_game = false;

		while( ! quit_game ){


		int score = 0;

		int lives = 3;


		//NO: CONTINUE SHOWING TITLE SCREEN

		while( ! game_over ){


		srand( time(0) );

		char operators[4];// = { '+', '-' ,'*' ,'/'  };

		operators[0] = '+';
		operators[1] = '-';
		operators[2] = '*';
		operators[3] = '/';

		int num1 = rand() % 11;  //Generate first number
		int num2 = rand() % 11; //Generate second number
		int op_idx = rand() % 3; //Generate operation //0:+, 1:-, 2:*, 3:/

		int correct_answer = 0;


		if( op_idx == 0){
			correct_answer = num1 + num2;

		}else if( op_idx == 1){
			correct_answer = num1 - num2;

		}else if( op_idx == 2){
			correct_answer = num1 * num2;

		}else if( op_idx == 3){
			correct_answer = num1 / num2;

		}

		int user_answer;

		std::cout << num1 << operators[op_idx] << num2 << " = ? " << std::endl;
		//std::cout << num1 << " + " << num2 << " = " << correct_answer << std::endl;

		//Get answer from user
		std::cout << "your guess: ";
		std::cin >> user_answer;


		std::cout << "your answer was: " << user_answer << std::endl;



		if (user_answer == correct_answer){//If answer correct
			std::cout << "Your answer is correct" << std::endl;
			score += 1;
		}else{//If answer not correct
			std::cout << "Your answer is wrong" << std::endl;
			lives -= 1;
		}


		std::cout << "Your Score is " << score << std::endl;
		std::cout << "Your Lives are " << lives << std::endl;


		//IF life = 0
		if (lives <= 0){
			std::cout << "Show Game Over" << std::endl;
			game_over = true;
		}


		}// end of one round

		}



		int a;
		std::cin >> a;



	return EXIT_SUCCESS;
}
