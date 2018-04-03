#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

float w=0;
float h=0;

GLfloat scale = 1.0f;
 
GLint ancho = 800;
GLint alto = 600;

 
 void reshape(int w, int h)
 {
	 glViewport(0, 0,(GLsizei) w,(GLsizei) h);
	 glMatrixMode(GL_PROJECTION);
	 glLoadIdentity();
	
	 glOrtho(-15, 15, -20, 20, -20, 20);

	 glMatrixMode(GL_MODELVIEW);
	 
	 ancho = w;
	 alto = h;
 }



void display()
{
		glClearColor(1,1,1,1);
	 //  Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    
    glColor3f(0.0,0.0,0.0);
    
    glLoadIdentity();
    
    gluLookAt (4, 2, 3, 0, 0, 0, 0.0,1.0,0.0);
	glScalef (1.0, 2.0, 1.0);
	glScalef(scale, scale, scale);
	
	
	//pared de enfrente
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex3f(0.0f,2.0f,0.0f);
	glVertex3f(0.0f,-6.0f,0.0f);
	glVertex3f(0.0f,2.0f,-4.5f);
	glVertex3f(0.0f,-6.0f,-4.5f);
	
	glVertex3f(0.0f,-6.0f,-0.0f);
	glVertex3f(0.0f,-6.0f,-1.2);
	glVertex3f(0.0f,-6.0f,-4.5f);
	glVertex3f(0.0f,-6.0f,-3.4);

	glVertex3f(3.0f,2.0f,-4.5f);
	glVertex3f(3.0f,-6.0f,-4.5f);
	glVertex3f(3.0f,2.0f,-13.5f);
	glVertex3f(3.0f,-6.0f,-13.5f);
	glVertex3f(3.0f,-6.0f,-13.5f);
	glVertex3f(3.0f,-6.0f,-4.5f);

	glVertex3f(3.0f,-6.0f,-4.5f);
	glVertex3f(0.0f,-6.0f,-4.5f);

	glVertex3f(3.0f,-2.0f,-13.5f);
	glVertex3f(3.0f,-2.0f,-4.5f);

	glVertex3f(3.0f,-2.0f,-4.5f);
	glVertex3f(0.0f,-2.0f,-4.5f);
	glVertex3f(0.0f,-2.0f,-4.5f);
	glVertex3f(0.0f,-2.0f,0.0f);

	glEnd();

	//lineas techo
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex3f(3.0f,5.1f,-9.0f);
	glVertex3f(3.0f,1.8f,-13.75);
	glVertex3f(3.0f,1.8f,-13.75);
	glVertex3f(2.9f,1.8f,-13.50);
	glVertex3f(3.0f,5.1f,-9.0f);
	glVertex3f(3.0f,1.8f,-4.25);
	glVertex3f(3.2f,2.0f,-4.25);
	glVertex3f(0.2f,2.0f,-4.25);
	glVertex3f(0.2f,2.0f,-4.25);
	glVertex3f(0.0f,2.0f,0.0);
	glVertex3f(0.2f,1.8f,0.0f);
	glVertex3f(-4.25f,6.1f,0.0);
	glVertex3f(-4.25f,6.1f,0.0);
	glVertex3f(-9.9f,1.7f,0.0);
	glVertex3f(-9.9f,1.7f,0.0);
	glVertex3f(-9.5f,1.7f,0.0);
	glEnd();


	//parte de techo y pared lateral

	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex3f(-9.5f,2.0f,0.0);
	glVertex3f(-9.5f,-2.5f,0.0);
	glVertex3f(0.0f,-2.0f,0.0f);
	glVertex3f(-9.5f,-2.0f,0.0f);
	glVertex3f(-4.25f,6.1f,0.0);
	glVertex3f(-4.25f,6.1f,-5.75);
	glVertex3f(-4.25f,6.1f,-8.9);
	glVertex3f(-4.25f,6.1f,-13.50);
	glVertex3f(-4.25f,6.1f,-5.75);
	glVertex3f(-2.70f,5.6f,-5.75);
	glVertex3f(-2.70f,5.6f,-5.75);
	glVertex3f(-2.70f,5.6f,-7.75);
	glVertex3f(-2.70f,5.6f,-5.75);
	glVertex3f(-2.70f,7.1f,-5.75);
	glVertex3f(-2.70f,5.6f,-7.75);
	glVertex3f(-2.70f,7.1f,-7.75);

	glVertex3f(-5.00f,5.9f,-5.75);
	glVertex3f(-5.00f,7.1f,-5.75);
	glVertex3f(-5.00f,7.1f,-7.75);
	glVertex3f(-2.70f,7.1f,-7.75);
	glVertex3f(-5.00f,7.1f,-7.75);
	glVertex3f(-5.00f,7.1f,-5.75);
	glVertex3f(-5.00f,7.1f,-5.75);
	glVertex3f(-2.70f,7.1f,-5.75);
	glVertex3f(-2.70f,7.1f,-5.75);
	glVertex3f(-2.70f,7.1f,-7.75);

	glEnd();


	//techo parte derecha
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex3f(3.0f,5.1f,-9.0);
	glVertex3f(-2.0f,5.1f,-9.0);
	glVertex3f(-2.0f,5.1f,-9.0);
	glVertex3f(0.0f,2.0f,-4.5f);
	glVertex3f(-4.25f,6.1f,-13.50);
	glVertex3f(0.0f,2.9f,-13.4);
	glEnd();

	//estructura garaje
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex3f(-1.5f,-2.5f,0.0f);
	glVertex3f(-1.5f,-4.0,0.0f);
	glVertex3f(-1.5f,-5.6f,0.0f);
	glVertex3f(-1.5f,-6.0f,0.0f);
	glVertex3f(-1.5f,-3.0f,0.5f);	
	glVertex3f(-1.5f,-3.25f,0.5f);
	glVertex3f(-1.5f,-5.97f,0.5f);
	glVertex3f(-1.5f,-5.60f,0.5f);
	glVertex3f(-1.5f,-6.0f,0.5f);
	glVertex3f(-1.7f,-6.0f,0.5f);
	
	glVertex3f(-1.7f,-5.7f,0.5f);
	glVertex3f(-1.7f,-6.0f,0.5f);
	glVertex3f(-1.7f,-3.0f,6.9f);
	glVertex3f(-1.5f,-3.0f,0.5f);


	glVertex3f(-1.5f,-2.5f,7.50f);
	glVertex3f(-1.5f,-6.0f,7.50f);
	glVertex3f(-1.5f,-3.0f,7.0f);
	glVertex3f(-1.5f,-6.0f,7.0f);


	glVertex3f(-1.5f,-2.5f,0.0f);
	glVertex3f(-9.5f,-2.5f,0.0f);

	glVertex3f(-1.5f,-1.5f,3.75f);
	glVertex3f(-9.5f,-1.5f,3.75f);

	glVertex3f(-9.5f,-2.5f,0.0f);
	glVertex3f(-9.5f,-1.5f,3.75f);

	glVertex3f(-1.5f,-6.0f,7.5f);
	glVertex3f(-9.5f,-6.0f,7.5f);
	glVertex3f(-1.5f,-6.0f,7.5f);
	glVertex3f(-1.5f,-6.0f,7.0f);
	glVertex3f(-1.5f,-6.0f,0.5f);
	glVertex3f(-1.5f,-6.0f,0.0f);
	glVertex3f(-9.5f,-6.0f,7.5f);
	glVertex3f(-9.5f,-2.5f,7.5f);

	glVertex3f(-9.5f,-2.5f,7.5f);
	glVertex3f(-9.5f,-1.5f,3.75f);

	glEnd();



	//techo garaje
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex3f(-9.7f,-2.5f,7.5f);
	glVertex3f(-1.5f,-2.5f,7.5f);
	glVertex3f(-1.5f,-2.5f,7.5f);
	glVertex3f(-1.5f,-1.5f,3.75f);
	glVertex3f(-1.5f,-1.5f,3.75f);
	glVertex3f(-1.5f,-2.5f,0.0f);
	
	glEnd();

	//puerta garaje
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex3f(-1.5f,-3.0f,0.7f);
	glVertex3f(1.0f,-5.0f,0.7f);

	glVertex3f(1.0f,-5.0f,0.7f);
	glVertex3f(1.0f,-5.0f,7.2f);
	glVertex3f(1.0f,-5.0f,7.2f);
	glVertex3f(-1.2f,-3.0f,7.2f);

	glEnd();


	//ventana garaje
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex3f(-2.95f,-4.5f,7.5f);
	glVertex3f(-2.95f,-3.0f,7.5f);
	glVertex3f(-2.95f,-3.0f,7.5f);
	glVertex3f(-4.4f,-3.0f,7.5f);
	glVertex3f(-4.4f,-4.5f,7.5f);
	glVertex3f(-2.95f,-4.5f,7.5f);
	glVertex3f(-4.4f,-3.0f,7.5f);
	glVertex3f(-4.4f,-4.5f,7.5f);


	glVertex3f(-4.4f,-3.1f,7.3f);
	glVertex3f(-4.4f,-4.4f,7.3f);
	glVertex3f(-4.4f,-4.4f,7.3f);
	glVertex3f(-3.2f,-4.4f,7.3f);
	glVertex3f(-4.4f,-4.4f,7.3f);
	glVertex3f(-4.4f,-4.5f,7.5f);
	glVertex3f(-3.0f,-4.45f,7.5f);
	glVertex3f(-3.0f,-2.99f,7.5f);

	glEnd();


	//ventana lateral
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex3f(-8.34f,-0.84f,0.0f);
	glVertex3f(-8.34f,1.52f,0.0f);
	glVertex3f(-8.34f,-0.84f,0.0f);
	glVertex3f(-5.79f,-0.84f,0.0f);
	glVertex3f(-8.34f,1.52f,0.0f);
	glVertex3f(-5.79f,1.52f,0.0f);
	glVertex3f(-5.79f,-0.84f,0.0f);
	glVertex3f(-5.79f,1.52f,0.0f);

	glVertex3f(-5.81f,-0.84f,0.0f);
	glVertex3f(-5.81f,1.52f,0.0f);

	glVertex3f(-8.34f,-0.75f,-0.3f);
	glVertex3f(-8.34f,1.46f,-0.3f);
	glVertex3f(-8.34f,-0.75f,-0.3f);
	glVertex3f(-6.15f,-0.75f,-0.3f);
	glVertex3f(-8.34f,-0.84f,0.0f);
	glVertex3f(-8.34f,-0.75f,-0.3f);

	glVertex3f(-4.34f,-0.84f,0.0f);
	glVertex3f(-4.34f,1.52f,0.0f);
	glVertex3f(-4.34f,-0.84f,0.0f);
	glVertex3f(-1.79f,-0.84f,0.0f);
	glVertex3f(-4.34f,1.52f,0.0f);
	glVertex3f(-1.79f,1.52f,0.0f);
	glVertex3f(-1.79f,-0.84f,0.0f);
	glVertex3f(-1.79f,1.52f,0.0f);

	glVertex3f(-1.81f,-0.84f,0.0f);
	glVertex3f(-1.81f,1.52f,0.0f);

	glVertex3f(-4.34f,-0.75f,-0.3f);
	glVertex3f(-4.34f,1.46f,-0.3f);
	glVertex3f(-4.34f,-0.75f,-0.3f);
	glVertex3f(-2.15f,-0.75f,-0.3f);

	glVertex3f(-4.34f,-0.84f,0.0f);
	glVertex3f(-4.34f,-0.75f,-0.3f);

	glEnd();
	


	//ventana frente
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex3f(0.0f,-0.77f,-1.0f);
	glVertex3f(0.0f,1.60f,-1.0f);
	glVertex3f(0.0f,-0.77f,-1.0f);
	glVertex3f(0.0f,-0.77f,-3.33f);
	glVertex3f(0.0f,-0.77f,-3.33f);
	glVertex3f(0.0f,1.60f,-3.33f);
	glVertex3f(0.0f,1.60f,-3.33f);
	glVertex3f(0.0f,1.60f,-1.0f);

	glVertex3f(0.0f,-0.87f,-3.33f);
	glVertex3f(-0.3f,-0.67f,-3.33f);
	glVertex3f(-0.3f,-0.67f,-3.33f);
	glVertex3f(0.0f,-0.87f,-3.43f);

	glVertex3f(0.0f,-0.87f,-0.9f);
	glVertex3f(0.0f,1.70f,-0.9f);
	glVertex3f(0.0f,-0.87f,-0.9f);
	glVertex3f(0.0f,-0.87f,-3.43f);

	glVertex3f(0.0f,-0.87f,-3.43f);
	glVertex3f(0.0f,1.70f,-3.43f);
	glVertex3f(0.0f,1.70f,-3.43f);
	glVertex3f(0.0f,1.70f,-0.9f);

	glVertex3f(-0.3f,-0.67f,-1.2f);
	glVertex3f(-0.3f,-0.67f,-3.33f);

	glVertex3f(-0.3f,-0.67f,-3.33f);
	glVertex3f(-0.3f,1.50f,-3.33f);


	glEnd();


	//puerta 
	glLineWidth(1);
	glBegin(GL_LINES);
	
	//parte sobre la puerta
	glVertex3f(0.0f,-2.6,-0.9f);
	glVertex3f(0.0f,-3.4f,-0.9f);
	glVertex3f(0.0f,-3.4f,-0.9f);
	glVertex3f(1.0f,-3.4f,-0.9f);
	glVertex3f(1.0f,-3.4f,-0.9f);
	glVertex3f(0.0f,-2.6,-0.9f);
	glVertex3f(1.0f,-3.3f,-0.78f);
	glVertex3f(0.1f,-2.6,-0.78f);
	glVertex3f(0.0f,-2.6,-3.4f);
	glVertex3f(0.0f,-2.6,-0.9f);
	glVertex3f(0.0f,-2.6,-3.4f);
	glVertex3f(1.0f,-3.4f,-3.4f);
	glVertex3f(1.0f,-3.4f,-3.4f);
	glVertex3f(1.0f,-3.4f,-0.78f);

	//marco puerta
	glVertex3f(0.0f,-6.0,-1.2f);
	glVertex3f(0.0f,-3.5f,-1.2f);
	glVertex3f(0.0f,-6.0,-3.4f);
	glVertex3f(0.0f,-3.7f,-3.4f);
	glVertex3f(0.0f,-5.9,-1.2f);
	glVertex3f(0.0f,-5.9,-3.4f);

	//cuadros interiores de la puerta
	glVertex3f(0.0f,-5.65,-1.5f);
	glVertex3f(0.0f,-4.65,-1.5f);
	glVertex3f(0.0f,-4.15,-1.5f);
	glVertex3f(0.0f,-3.6f,-1.5f);

	glVertex3f(0.0f,-5.63,-2.0f);
	glVertex3f(0.0f,-4.65f,-2.0f);
	glVertex3f(0.0f,-4.13,-2.0f);
	glVertex3f(0.0f,-3.7f,-2.0f);

	glVertex3f(0.0f,-5.65,-2.1f);
	glVertex3f(0.0f,-4.65f,-2.1f);
	glVertex3f(0.0f,-4.15,-2.1f);
	glVertex3f(0.0f,-3.7f,-2.1f);

	glVertex3f(0.0f,-5.65f,-1.5f);
	glVertex3f(0.0f,-5.65f,-2.0f);
	glVertex3f(0.0f,-5.63,-1.5f);
	glVertex3f(0.0f,-5.63,-2.1f);
	glVertex3f(0.0f,-4.63f,-1.5f);
	glVertex3f(0.0f,-4.63f,-2.1f);

	glVertex3f(0.0f,-4.15,-1.5f);
	glVertex3f(0.0f,-4.15f,-2.1f);
	glVertex3f(0.0f,-4.10,-1.5f);
	glVertex3f(0.0f,-4.10f,-2.0f);

	glVertex3f(0.0f,-5.63,-2.0f);
	glVertex3f(0.0f,-4.65f,-2.0f);
	glVertex3f(0.0f,-4.13,-2.0f);
	glVertex3f(0.0f,-3.7f,-2.0f);

	glVertex3f(0.0f,-5.65,-2.4f);
	glVertex3f(0.0f,-4.65f,-2.4f);

	glVertex3f(0.0f,-5.61,-2.4f);
	glVertex3f(0.0f,-5.61,-2.9f);
	glVertex3f(0.0f,-5.65,-2.4f);
	glVertex3f(0.0f,-5.65,-3.0f);

	glVertex3f(0.0f,-4.65f,-2.4f);
	glVertex3f(0.0f,-4.65f,-3.0f);

	glVertex3f(0.0f,-4.15,-2.4f);
	glVertex3f(0.0f,-3.7f,-2.4f);

	glVertex3f(0.0f,-4.15,-3.0f);
	glVertex3f(0.0f,-3.7f,-3.0f);

	glVertex3f(0.0f,-5.65,-3.0f);
	glVertex3f(0.0f,-4.65f,-3.0f);

	glVertex3f(0.0f,-4.15,-2.4f);
	glVertex3f(0.0f,-4.15,-3.0f);
	glVertex3f(0.0f,-4.13,-2.4f);
	glVertex3f(0.0f,-4.13,-3.0f);
	glVertex3f(0.0f,-4.13,-2.9f);
	glVertex3f(0.0f,-3.7,-2.9f);

	glVertex3f(0.0f,-5.65,-2.9f);
	glVertex3f(0.0f,-4.65f,-2.9f);
	
	glEnd();

	
	//lineas de derecha cuadros interior de puerta
	glLineWidth(1.5);
	glBegin(GL_LINES);

	glVertex3f(0.0f,-5.65,-2.1f);
	glVertex3f(0.0f,-4.65f,-2.1f);
	glVertex3f(0.0f,-4.15,-2.1f);
	glVertex3f(0.0f,-3.7f,-2.1f);
	glVertex3f(0.0f,-5.65,-3.0f);
	glVertex3f(0.0f,-4.65f,-3.0f);
	glVertex3f(0.0f,-4.15,-3.0f);
	glVertex3f(0.0f,-3.7f,-3.0f);

	glEnd();


	//lineas de abajo de cuadros interior puerta
	glLineWidth(1.5);
	glBegin(GL_LINES);
	glVertex3f(0.0f,-5.65,-1.5f);
	glVertex3f(0.0f,-5.65,-2.1f);
	glVertex3f(0.0f,-4.15,-1.5f);
	glVertex3f(0.0f,-4.15,-2.1f);
	glVertex3f(0.0f,-5.65,-2.4f);
	glVertex3f(0.0f,-5.65,-3.0f);
	glVertex3f(0.0f,-4.15,-2.4f);
	glVertex3f(0.0f,-4.15,-3.0f);

	glEnd();

	//rectangulo centro puerta
	glLineWidth(1);
	glBegin(GL_LINE_LOOP);

	glVertex3f(0.0f,-4.50f,-2.55f);
	glVertex3f(0.0f,-4.50f,-1.95f);
	glVertex3f(0.0f,-4.30f,-1.95f);
	glVertex3f(0.0f,-4.30f,-2.55f);
	glEnd();


	//linea de centro de ventanas laterales
	glLineWidth(1);
	glBegin(GL_LINES);
	
	glVertex3f(-7.12f,1.52f,0.0f);
	glVertex3f(-7.12f,-0.65f,0.0f);
	glVertex3f(-6.98f,1.52f,0.0f);
	glVertex3f(-6.98f,-0.635f,0.0f);
	
	
	glVertex3f(-3.12f,1.52f,0.0f);
	glVertex3f(-3.12f,-0.635f,0.0f);
	glVertex3f(-2.98f,1.52f,0.0f);
	glVertex3f(-2.98f,-0.635f,0.0f);

	glEnd();

	//ventana derechas superior 
	glLineWidth(1);
	glBegin(GL_LINES);

	glVertex3f(3.0f,2.50f,-6.5f);
	glVertex3f(3.0f,-0.5f,-6.5f);
	glVertex3f(3.0f,2.50f,-6.5f);
	glVertex3f(3.0f,2.50f,-11.5f);
	glVertex3f(3.0f,2.50f,-11.5f);
	glVertex3f(3.0f,-0.5f,-11.5f);
	glVertex3f(3.0f,-0.5f,-11.5f);
	glVertex3f(3.0f,-0.5f,-6.5f);

	//borde interno de ventana derecha
	glVertex3f(2.7f,2.35f,-6.8f);
	glVertex3f(2.7f,-0.4f,-6.8f);
	glVertex3f(2.7f,2.35f,-6.8f);
	glVertex3f(2.7f,2.35f,-11.5f);
	glVertex3f(2.7f,2.35f,-11.5f);
	glVertex3f(2.7f,-0.45f,-11.5f);
	glVertex3f(2.7f,-0.40f,-11.5f);
	glVertex3f(2.7f,-0.40f,-6.8f);
	
	//marcos
	glVertex3f(2.7f,-0.45f,-11.5f);
	glVertex3f(3.0f,-0.5f,-11.5f);
	glVertex3f(3.0f,2.35f,-8.16f);
	glVertex3f(3.0f,-0.4f,-8.16f);
	glVertex3f(2.8f,2.35f,-8.16f);
	glVertex3f(2.8f,-0.35f,-8.16f);
	glVertex3f(2.8f,-0.30f,-8.16f);
	glVertex3f(2.8f,-0.30f,-6.7f);
	glVertex3f(3.1f,2.40f,-8.16f);
	glVertex3f(3.1f,-0.35f,-8.16f);
	glVertex3f(3.0f,2.4f,-9.833f);
	glVertex3f(3.0f,-0.35f,-9.833);
	glVertex3f(2.8f,2.35f,-9.833f);
	glVertex3f(2.8f,-0.32f,-9.833);
	glVertex3f(2.8f,-0.32f,-9.833);
	glVertex3f(3.1f,-0.25f,-8.16f);
	glVertex3f(2.8f,-0.30f,-8.16f);
	glVertex3f(2.8f,-0.30f,-6.7f);
	glVertex3f(3.1f,2.42f,-9.833f);
	glVertex3f(3.1f,-0.30f,-9.833);
	glVertex3f(3.1f,-0.25f,-9.833);
	glVertex3f(3.1f,-0.25f,-11.25f);

	glEnd();

	//ventana derecha inferior
	glLineWidth(1);
	glBegin(GL_LINES);
		
	glVertex3f(3.0f,-2.50f,-6.5f);
	glVertex3f(3.0f,-5.0f,-6.5f);
	glVertex3f(3.0f,-2.50f,-6.5f);
	glVertex3f(3.0f,-2.50f,-11.5f);
	glVertex3f(3.0f,-2.50f,-11.5f);
	glVertex3f(3.0f,-5.0f,-11.5f);
	glVertex3f(3.0f,-5.0f,-11.5f);
	glVertex3f(3.0f,-5.0f,-6.5f);
	

	//borde interno
	glVertex3f(2.7f,-2.65f,-6.8f);
	glVertex3f(2.7f,-4.9f,-6.8f);
	glVertex3f(2.7f,-2.65,-6.8f);
	glVertex3f(2.7f,-2.65,-11.5f);
	glVertex3f(2.7f,-2.60,-11.5f);
	glVertex3f(2.7f,-4.9,-11.5f);
	glVertex3f(2.7f,-4.9,-11.5f);
	glVertex3f(2.7f,-4.9f,-6.8f);
	glVertex3f(2.7f,-4.9,-11.5f);
	glVertex3f(3.0f,-5.0f,-11.5f);
	
	//marcos de ventana inferior derecha
	glVertex3f(3.0f,-2.60f,-8.16f);
	glVertex3f(3.0f,-4.8f,-8.16f);
	glVertex3f(2.8f,-2.55f,-8.16f);
	glVertex3f(2.8f,-4.8f,-8.16f);
	glVertex3f(2.8f,-4.8f,-8.16f);
	glVertex3f(2.8f,-4.8f,-6.7f);
	glVertex3f(3.1f,-2.55f,-8.16f);
	glVertex3f(3.1f,-4.7f,-8.16f);
	glVertex3f(3.1f,-4.7f,-8.16f);
	glVertex3f(2.8f,-4.8f,-9.833);

	glVertex3f(3.0f,-2.60f,-9.833f);
	glVertex3f(3.0f,-4.8f,-9.833);
	glVertex3f(2.8f,-2.65f,-9.833f);
	glVertex3f(2.8f,-4.8f,-9.833);
	glVertex3f(3.1f,-2.60f,-9.833f);
	glVertex3f(3.1f,-4.7f,-9.833);

	glVertex3f(3.1f,-4.7f,-9.833);
	glVertex3f(3.1f,-4.7f,-11.25);


	glEnd();


	//tapete de puerta
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex3f(0.1f,-6.0f,-1.2);
	glVertex3f(0.1f,-6.0f,-3.4);	
	glVertex3f(0.1f,-6.0f,-3.4);
	glVertex3f(1.60f,-6.0f,-3.4);
	glEnd();



	//linea de tapete
	glLineWidth(1);
	glBegin(GL_LINES);

	//lineas exteriores
	glVertex3f(1.5f,-6.0f,-3.4);
	glVertex3f(1.5f,-6.0f,-1.2);
	glVertex3f(1.5f,-6.0f,-1.2);
	glVertex3f(0.0f,-6.0f,-1.2);

	//lineas interiores
	glVertex3f(1.4f,-5.9f,-3.0);
	glVertex3f(1.4f,-5.9f,-1.2);	
	glVertex3f(1.4f,-5.9f,-1.2);
	glVertex3f(0.1f,-6.0f,-1.5);

	//union de lineas interiores
	glVertex3f(1.5f,-6.0f,-1.2);
	glVertex3f(1.4f,-5.9f,-1.2);
	
	glEnd();


    glFlush();
    glutSwapBuffers();
 
}
 

 
int main(int argc, char* argv[])
{
 
    //  Inicializar los parámetros GLUT y de usuario proceso
    glutInit(&argc,argv);
 
    // Solicitar ventana con color real y doble buffer con Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (700, 600);
    glutInitWindowPosition (300, 70);
    // Crear ventana
    glutCreateWindow("ejercicio 6");
    
    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);
    glutReshapeFunc(reshape);
    // Funciones de retrollamada
    glutDisplayFunc(display);
    //glutKeyboardFunc(keyboard);
    //glutSpecialFunc(specialKeys);
 
    // Pasar el control de eventos a GLUT
    glutMainLoop();
 
    // Regresar al sistema operativo
    return 0;
 
}

