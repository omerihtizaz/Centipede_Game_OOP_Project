/*
 * Centipede.h
 *
 *  Created on: May 5, 2019
 *      Author: zoytx
 */

#ifndef CENTIPEDE_H_
#define CENTIPEDE_H_
#include"Segment.h"
#include"Mushroom.h"
#include"MoveableObject.h"
class Centipede: public MoveableObject{
	Segment *creature[20];
public:
	Centipede();
	Centipede(int x,int y,int dir);
	virtual ~Centipede();
	void draw();
	int takex(int x);
	int takey(int x);
	int getdirection(){
		return this->direction;
	}
	int gethealth(){
		return Health;
	}
	void sethealth(int x){
			Health =x;
		}
	void Move(int x,int y);
	void Fireshots(int x,int y);

};

#endif /* CENTIPEDE_H_ */
