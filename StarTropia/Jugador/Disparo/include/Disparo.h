/*
	Jesus Torres - 0640386
	Alfredo Gallardo - 0630563

*/

#ifndef DISPARO_H
#define DISPARO_H

#include "../../../moveAgent/include/moveAgent.h"
#include "../../../Target/include/Target.h"
#include "../../../Resources/Libs/Materiales.h"
#include "../../../Resources/Libs/Luces.h"

#include <GL/glut.h>
#include <math.h>

// Clase Disparo que lleva los disparos de la Nave
class Disparo: public moveAgent{
	public:
	//Atributos
	   	int ID;
    	int Light;
    	float vx,vy,vz;
        c_material *material;
        GLuint lista;
		c_luz *luz;
		
		Disparo(int ID);
		Target *Objetivo;
	//Funciones		
		virtual ~Disparo();
		void Assign(GLfloat x,GLfloat y,GLfloat z,GLfloat Angle,GLfloat Look,Target *Objetivo = NULL);
		void Update(GLfloat Actualz);
		void Draw();
		bool Collision(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);
	private:
		void UpdateObj();
		void UpdateSObj(GLfloat Actualz);

};

#endif
