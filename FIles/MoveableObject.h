/*
 * MoveableObject.h
 *
 *  Created on: Apr 30, 2019
 *      Author: zoytx
 */

#ifndef BUILD_MOVEABLEOBJECT_H_
#define BUILD_MOVEABLEOBJECT_H_
#include"GameObject.h"
class MoveableObject: public GameObject {
protected:
	virtual void Move(int x,int y)=0;
public:
	int getdirection(){
			return this->direction;
		}
	MoveableObject();
	virtual ~MoveableObject();
	int gethealth(){
			return Health;
		}
		void sethealth(int x){
				Health =x;
			}
	virtual void Fireshots(int x,int y)=0;
};

#endif /* BUILD_MOVEABLEOBJECT_H_ */
