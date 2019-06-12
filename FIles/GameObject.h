/*
 * GameObject.h
 *
 *  Created on: Apr 29, 2019
 *      Author: zoytx
 */

#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_
#include"Position.h"


class GameObject {
	 Position postion;
public:
	int Health=0;
	int direction=0;
	virtual void draw()=0;
	GameObject();
	virtual ~GameObject();
	virtual int takex(int x)=0;
	virtual int takey(int x)=0;
	virtual int getdirection()=0;
	virtual void sethealth(int x)=0;
	virtual int gethealth()=0;
	Position& getPostion();
	virtual void Move(int x,int y)=0;
	void setPostion( Position& postion);
	virtual void Fireshots(int x,int y)=0;

};

#endif /* GAMEOBJECT_H_ */
