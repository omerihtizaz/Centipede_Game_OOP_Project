/*
 * Fireshot.h
 *
 *  Created on: May 3, 2019
 *      Author: zoytx
 */

#ifndef FIRESHOT_H_
#define FIRESHOT_H_
#include"MoveableObject.h"
#include"util.h"

class Fireshot: public MoveableObject {

public:
	Fireshot();
	int getdirection(){
			return this->direction;
		}
	int gethealth(){
			return Health;
		}
		void sethealth(int x){
				Health =x;
			}
	int takex(int x);
	int takey(int x);
	void Damage();
	Fireshot(int x,int y);
	virtual ~Fireshot();
	 void draw();
	void Move(int x,int y);
	void Fireshots(int x,int y);

};

#endif /* FIRESHOT_H_ */
