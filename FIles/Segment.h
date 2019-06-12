/*
 * Segment.h
 *
 *  Created on: May 5, 2019
 *      Author: zoytx
 */

#ifndef SEGMENT_H_
#define SEGMENT_H_
#include"MoveableObject.h"

class Segment: public MoveableObject {

public:
	int getdirection(){
			return this->direction;
		}
	int direction;
	int s;
		void draw();
		void Move(int x,int y);

		void Fireshots(int x,int y);
		Segment();
		Segment(int x,int y,int dir);
		virtual ~Segment();
};

#endif /* SEGMENT_H_ */
