/*
 * Score.h
 *
 *  Created on: May 6, 2019
 *      Author: zoytx
 */

#ifndef SCORE_H_
#define SCORE_H_
#include"GameObject.h"

class Score:public GameObject {


public:
	int getdirection(){
			return this->direction;
		}
	int score;
		int Lives;
		int Timer=0;
	Score();
	int gethealth(){
			return Health;
		}
		void sethealth(int x){
				Health =x;
			}
	virtual ~Score();

	int takex(int x);

	int takey(int x);
	int direction;
	void draw();
	void Move(int x,int y);
	void Fireshots(int x,int y);



};

#endif /* SCORE_H_ */
