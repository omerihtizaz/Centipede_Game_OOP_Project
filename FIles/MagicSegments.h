/*
 * MagicSegments.h
 *
 *  Created on: May 4, 2019
 *      Author: zoytx
 */

#ifndef MAGICSEGMENTS_H_
#define MAGICSEGMENTS_H_
#include"Segment.h"
class MagicSegments: public Segment  {
protected:
int s;

public:
int getdirection(){
		return this->direction;
	}
int Health=99;int gethealth(){
	return Health;
}
void sethealth(int x){
		Health =x;
	}
int takex(int x);

int takey(int x);
int direction;
	void draw();
	void Move(int x,int y);

	void Fireshots(int x,int y);
	MagicSegments();
	MagicSegments(int x,int y,int dir);
	virtual ~MagicSegments();
};

#endif /* MAGICSEGMENTS_H_ */
