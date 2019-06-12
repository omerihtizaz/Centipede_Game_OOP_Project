/*
 * Fleas.h
 *
 *  Created on: May 6, 2019
 *      Author: zoytx
 */

#ifndef FLEAS_H_
#define FLEAS_H_
#include"MoveableObject.h"
#include"Fireshot.h"

class Fleas:public MoveableObject{

public:
	Fleas();
	int getdirection(){
			return this->direction;
		}
	Fleas(int x,int y);
	int gethealth(){
			return Health;
		}
		void sethealth(int x){
				Health =x;
			}
	int takex(int x);
	int takey(int x);

	virtual ~Fleas();
	virtual void draw();
	virtual void Move(int x,int y);
	void Fireshots(int x,int y);

};

#endif /* FLEAS_H_ */
