/*
 * Mushroom.h
 *
 *  Created on: Apr 29, 2019
 *      Author: zoytx
 */

#ifndef MUSHROOM_H_
#define MUSHROOM_H_
#include"GameObject.h"
class Mushroom:public GameObject {


public:
	int Health=2;
	int getdirection(){
			return this->direction;
		}
	int takex(int x);
	int takey(int x);int gethealth(){
		return Health;
	}
	void sethealth(int x){
			Health =x;
		}
	Mushroom();
	Mushroom(int x,int y,int h);
	virtual void draw();
	virtual ~Mushroom();
	virtual void Move(int x,int y);
	virtual void Fireshots(int x,int y);
	

};

#endif /* MUSHROOM_H_ */
