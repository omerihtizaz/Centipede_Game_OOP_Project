/*
 * Player.h
 *
 *  Created on: Apr 30, 2019
 *      Author: zoytx
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include"MoveableObject.h"
#include"Fireshot.h"
#include"util.h"
class Player: public MoveableObject {

public:
	Player();
	Player(int x,int y);
	int getdirection(){
			return this->direction;
		}
	int takex(int x);
	int gethealth(){
			return Health;
		}
		void sethealth(int x){
				Health =x;
			}
	int takey(int x);

	virtual ~Player();
	virtual void draw();
	virtual void Move(int x,int y);
	void Fireshots(int x,int y);
	
};

#endif /* PLAYER_H_ */
