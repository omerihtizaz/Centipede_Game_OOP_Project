/*
 * Segments.h
 *
 *  Created on: May 3, 2019
 *      Author: zoytx
 */

#ifndef LAZYSEGMENTS_H_
#define LAZYSEGMENTS_H_
#include"Segment.h"
class LazySegments: public Segment {

	int direction;
public:
	int getdirection(){
			return this->direction;
		}
	int Health=1;
	void draw();
	int gethealth(){
			return Health;
		}
		void sethealth(int x){
				Health =x;
			}
	int takex(int x);
	int takey(int y);
	void Move(int x,int y);

	void Fireshots(int x,int y);
	LazySegments();
	LazySegments(int x,int y,int dir);

	virtual ~LazySegments();
};

#endif /* LAZYSEGMENTS_H_ */
