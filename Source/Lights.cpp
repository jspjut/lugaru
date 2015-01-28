/*
Copyright (C) 2003, 2010 - Wolfire Games

This file is part of Lugaru.

Lugaru is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

/**> HEADER FILES <**/
#include "Lights.h"

void SetUpLight(Light* whichsource, int whichlight){
	static float qattenuation[]={0.0002f};
	static float cattenuation[]={1.5f};
	static float lattenuation[]={0.5f};
	static float zattenuation[]={0.0f};

	//Initialize lights

	if(whichlight==0){
		GLfloat LightAmbient[]=		{ whichsource->ambient[0], whichsource->ambient[1], whichsource->ambient[2], 1.0f};
		GLfloat LightDiffuse[]=		{ whichsource->color[0], whichsource->color[1], whichsource->color[2], 1.0f };
		GLfloat LightPosition[]=	{ whichsource->location.x, whichsource->location.y, whichsource->location.z, 0.0f };

		//glLightfv(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, qattenuation);
		glLightfv(GL_LIGHT0, GL_POSITION, LightPosition);
		glLightfv(GL_LIGHT0, GL_AMBIENT, LightAmbient);		
		glLightfv(GL_LIGHT0, GL_DIFFUSE, LightDiffuse);		
		glEnable(GL_LIGHT0);	
	}

	if(whichlight==1){
		GLfloat LightAmbient[]=		{ 0, 0, 0, 1.0f};
		GLfloat LightDiffuse[]=		{ whichsource->color[0], whichsource->color[1], whichsource->color[2], 1.0f };
		GLfloat LightPosition[]=	{ whichsource->location.x, whichsource->location.y, whichsource->location.z, 1.0f };

		glLightfv(GL_LIGHT1, GL_QUADRATIC_ATTENUATION, qattenuation);
		glLightfv(GL_LIGHT1, GL_POSITION, LightPosition);
		glLightfv(GL_LIGHT1, GL_AMBIENT, LightAmbient);		
		glLightfv(GL_LIGHT1, GL_DIFFUSE, LightDiffuse);		
		glEnable(GL_LIGHT1);	
	}

	if(whichlight==2){
		GLfloat LightAmbient[]=		{ 0, 0, 0, 1.0f};
		GLfloat LightDiffuse[]=		{ whichsource->color[0], whichsource->color[1], whichsource->color[2], 1.0f };
		GLfloat LightPosition[]=	{ whichsource->location.x, whichsource->location.y, whichsource->location.z, 1.0f };

		glLightfv(GL_LIGHT2, GL_QUADRATIC_ATTENUATION, qattenuation);
		glLightfv(GL_LIGHT2, GL_POSITION, LightPosition);
		glLightfv(GL_LIGHT2, GL_AMBIENT, LightAmbient);		
		glLightfv(GL_LIGHT2, GL_DIFFUSE, LightDiffuse);		
		glEnable(GL_LIGHT2);	
	}

	if(whichlight==3){
		GLfloat LightAmbient[]=		{ 0, 0, 0, 1.0f};
		GLfloat LightDiffuse[]=		{ whichsource->color[0], whichsource->color[1], whichsource->color[2], 1.0f };
		GLfloat LightPosition[]=	{ whichsource->location.x, whichsource->location.y, whichsource->location.z, 1.0f };

		glLightfv(GL_LIGHT3, GL_QUADRATIC_ATTENUATION, qattenuation);
		glLightfv(GL_LIGHT3, GL_POSITION, LightPosition);
		glLightfv(GL_LIGHT3, GL_AMBIENT, LightAmbient);		
		glLightfv(GL_LIGHT3, GL_DIFFUSE, LightDiffuse);		
		glEnable(GL_LIGHT3);	
	}

	if(whichlight==4){
		GLfloat LightAmbient[]=		{ 0, 0, 0, 1.0f};
		GLfloat LightDiffuse[]=		{ whichsource->color[0], whichsource->color[1], whichsource->color[2], 1.0f };
		GLfloat LightPosition[]=	{ whichsource->location.x, whichsource->location.y, whichsource->location.z, 1.0f };

		glLightfv(GL_LIGHT4, GL_QUADRATIC_ATTENUATION, qattenuation);
		glLightfv(GL_LIGHT4, GL_POSITION, LightPosition);
		glLightfv(GL_LIGHT4, GL_AMBIENT, LightAmbient);		
		glLightfv(GL_LIGHT4, GL_DIFFUSE, LightDiffuse);		
		glEnable(GL_LIGHT4);	
	}

	if(whichlight==5){
		GLfloat LightAmbient[]=		{ 0, 0, 0, 1.0f};
		GLfloat LightDiffuse[]=		{ whichsource->color[0], whichsource->color[1], whichsource->color[2], 1.0f };
		GLfloat LightPosition[]=	{ whichsource->location.x, whichsource->location.y, whichsource->location.z, 1.0f };

		glLightfv(GL_LIGHT5, GL_QUADRATIC_ATTENUATION, qattenuation);
		glLightfv(GL_LIGHT5, GL_POSITION, LightPosition);
		glLightfv(GL_LIGHT5, GL_AMBIENT, LightAmbient);		
		glLightfv(GL_LIGHT5, GL_DIFFUSE, LightDiffuse);		
		glEnable(GL_LIGHT5);	
	}

	if(whichlight==6){
		GLfloat LightAmbient[]=		{ 0, 0, 0, 1.0f};
		GLfloat LightDiffuse[]=		{ whichsource->color[0], whichsource->color[1], whichsource->color[2], 1.0f };
		GLfloat LightPosition[]=	{ whichsource->location.x, whichsource->location.y, whichsource->location.z, 1.0f };

		glLightfv(GL_LIGHT6, GL_QUADRATIC_ATTENUATION, qattenuation);
		glLightfv(GL_LIGHT6, GL_POSITION, LightPosition);
		glLightfv(GL_LIGHT6, GL_AMBIENT, LightAmbient);		
		glLightfv(GL_LIGHT6, GL_DIFFUSE, LightDiffuse);		
		glEnable(GL_LIGHT6);	
	}

	if(whichlight==7){
		GLfloat LightAmbient[]=		{ 0, 0, 0, 1.0f};
		GLfloat LightDiffuse[]=		{ whichsource->color[0], whichsource->color[1], whichsource->color[2], 1.0f };
		GLfloat LightPosition[]=	{ whichsource->location.x, whichsource->location.y, whichsource->location.z, 1.0f };

		glLightfv(GL_LIGHT7, GL_QUADRATIC_ATTENUATION, qattenuation);
		glLightfv(GL_LIGHT7, GL_POSITION, LightPosition);
		glLightfv(GL_LIGHT7, GL_AMBIENT, LightAmbient);		
		glLightfv(GL_LIGHT7, GL_DIFFUSE, LightDiffuse);		
		glEnable(GL_LIGHT7);	
	}
}

void SetUpMainLight(Light* whichsource, int whichlight, float ambientr, float ambientg, float ambientb){
	static float qattenuation[]={0.0f};

	//Initialize lights

	if(whichlight==0){
		GLfloat LightAmbient[]=		{ ambientr, ambientg, ambientb, 1.0f};
		GLfloat LightDiffuse[]=		{ whichsource->color[0], whichsource->color[1], whichsource->color[2], 1.0f };
		GLfloat LightPosition[]=	{ whichsource->location.x, whichsource->location.y, whichsource->location.z, 1.0f };

		glLightfv(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, qattenuation);
		glLightfv(GL_LIGHT0, GL_POSITION, LightPosition);
		glLightfv(GL_LIGHT0, GL_AMBIENT, LightAmbient);		
		glLightfv(GL_LIGHT0, GL_DIFFUSE, LightDiffuse);		
		glEnable(GL_LIGHT0);	
	}
}
