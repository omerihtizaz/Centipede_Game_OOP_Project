/*
 * Score.cpp
 *
 *  Created on: May 6, 2019
 *      Author: zoytx
 */

#include "Score.h"

Score::Score() {
	// TODO Auto-generated constructor stub

}

Score::~Score() {
	// TODO Auto-generated destructor stub
}


int Score::takex(int x){
	score=score+x;
	return score;

}

int Score::takey(int x){
 return Timer;
}

void Score::draw(){
	DrawString( 50, 800, "Score="+to_string(score), colors[MISTY_ROSE]);

}
void Score::Move(int x,int y){
	cout<<"No Functionality score";

}
void Score::Fireshots(int x,int y){
	Timer=Timer+x;
	if(x==595 and y==595){
		Timer=0;
	}

}
