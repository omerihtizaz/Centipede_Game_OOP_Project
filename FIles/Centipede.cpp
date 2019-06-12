/*
 * Centipede.cpp
 *
 *  Created on: May 5, 2019
 *      Author: zoytx
 */

#include "Centipede.h"

Centipede::Centipede() {

creature[0]=new MagicSegments(500,820,1);
creature[0]->Health=99;
for(int x=1;x<20;x++){
	creature[x]=new LazySegments(creature[x-1]->getPostion().getXaxis()-(10),creature[x-1]->getPostion().getYaxis(),1);
	creature[x]->Health=1;
}
 Mushroom afterdeath;

}

Centipede::Centipede(int x,int y,int dir) {
if (dir==1){
creature[0]=new MagicSegments(x,y-10,0);
for(int x=1;x<20;x++){
	creature[x]=new LazySegments(creature[x-1]->getPostion().getXaxis()+10,creature[x-1]->getPostion().getYaxis(),0);
}
}else{
	creature[0]=new MagicSegments(x,y-10,1);
	for(int x=1;x<20;x++){
		creature[x]=new LazySegments(creature[x-1]->getPostion().getXaxis()-10,creature[x-1]->getPostion().getYaxis(),1);


}
}}


void Centipede::draw(){

	for(int x=0;x<20;x++){

		creature[x]->draw();
	}
}
	void Centipede::Move(int x,int y){
		/*this->getPostion().setXaxis(creature[0]->getPostion().getXaxis());
		this->getPostion().setYaxis(creature[0]->getPostion().getYaxis());*/
		if(x==488)
	{for(int x=0;x<20;x++)
	creature[x]->Move(0,0);}
		else if(y==488)
			{for(int x=0;x<20;x++)
			creature[x]->Move(0,0);}


		else if(y>4540){
		if(this->creature[x]->takex(1415)!=99){
				int Thenew=x;
				//cout<<this->creature[x]->takex(1415);
				int newx=this->creature[x]->takex(x);
				int newy=this->creature[x]->takey(x);
				int newdir=this->creature[x]->direction;
					newdir=this->creature[x-1]->getdirection();
				this->creature[x]->getPostion().setYaxis(-10000);
				this->creature[x]->getPostion().setYaxis(-10000);
				if(x-1>=0){
				this->creature[x-1]=new MagicSegments(newx,newy,newdir);
				this->creature[x-1]->Health=99;}


				for(int x=0;x<20;x++){
					//cout<<this->creature[x]->takex(1415);
				}
					for(;Thenew<20;Thenew++){
						if(creature[x]->takex(1415==99)){

							//cout<<"already broken";
							break;
					}

				}
			}
		else
		{

		}
		}
	else
		creature[x]->Move(1,0);

	}




	int Centipede::takey(int x){
		if(x>=555 and x<1413)
		return this->creature[x-555]->takex(7077);
		else
		return this->creature[x]->getPostion().getYaxis();

	}
int Centipede::takex(int x){
	if(x>1413){
		return this->creature[x-1415]->takex(1415);
	}
	else if(x>=555 and x<1413)
				return this->creature[x-555]->takex(7077);
	else if(x>99990){
		return this->creature[5]->takex(7077);
	}
				else
		return this->creature[x]->getPostion().getXaxis();

}
	void Centipede::Fireshots(int x,int y){
	if(x==455 and y==455){
		for(int check=0;check<20;check++)
			if(this->creature[check]->takex(1415)==99 ){
			int xax=this->creature[check]->takex(x);
			int yax=this->creature[check]->takey(x);
			int dire=this->creature[check]->getdirection();

			this->creature[check]= new LazySegments(xax,yax,dire);
			this->creature[check]->sethealth(33);
			this->creature[check]->takey(4686);
			cout<<"done";

			}

	}

	else if(x==5898 and y==5898){
		for(int check=0;check<20;check++)
			if(this->creature[check]->takex(1415)==33){
			int xax=this->creature[check]->takex(x);
			int yax=this->creature[check]->takey(x);
			int dir=this->creature[check]->getdirection();

			this->creature[check]= new MagicSegments(xax,yax,dir);
			this->creature[check]->sethealth(99);
			cout<<"done";

			}

	}
		else
this->creature[x]->Move(1,0);


		}
		/*if(creature[5]->direction==1){
		Centipede temp(this->getPostion().getXaxis(),this->getPostion().getYaxis(),2);
		for(int x=0;x<20;x++)
				{
					creature[x]->getPostion().setXaxis(temp.creature[x]->getPostion().getXaxis());

					creature[x]->getPostion().setYaxis(temp.creature[x]->getPostion().getYaxis());
				}
		}
		else{
		Centipede temp(this->getPostion().getXaxis(),this->getPostion().getYaxis(),1);

		for(int x=0;x<20;x++)
		{
			creature[x]->getPostion().setXaxis(temp.creature[x]->getPostion().getXaxis());

			creature[x]->getPostion().setYaxis(temp.creature[x]->getPostion().getYaxis());
		}
	}*/
	Centipede::~Centipede() {
		// TODO Auto-generated destructor stub
}


