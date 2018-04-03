#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

float w=0;
float h=0;

 
GLint ancho = 500;
GLint alto = 500;

 
 void reshape(int w, int h)
 {
	 glViewport(0, 0,(GLsizei) w,(GLsizei) h);
	 glMatrixMode(GL_PROJECTION);
	 glLoadIdentity();
	
	 glOrtho( -10, 10, -10, 10, -10, 10);
	
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
 
    // Resetear transformaciones
    glLoadIdentity();
    
    gluLookAt (1, 1, 1, 0, 0, 0, 0, 1, 0);
    glScalef (1.0, 2.0, 1.0);
   
    ////cuadro grande
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.0f,3.0f,0.0f);
	glVertex3f(0.0f,0.0f,0.0f);
	glVertex3f(0.0f,0.0f,5.0f);
	glVertex3f(0.0f,3.0f,5.0f);
	glEnd();
	
	////exterior cuadro grande
	glBegin(GL_LINES);
	glVertex3f(0.0f,3.5f,0.0f);
	glVertex3f(1.5f,3.75f,0.0f);
	
	glVertex3f(1.5f,3.75f,0.0f);
	glVertex3f(0.0f,3.5f,0.0f);
	
	glVertex3f(0.0f,3.5f,0.0f);
	glVertex3f(0.0f,3.5f,6.0f);
	
	glVertex3f(0.0f,3.5f,6.0f);
	glVertex3f(0.0f,3.0f,5.0f);
	
	glVertex3f(0.0f,3.5f,6.0f);
	glVertex3f(0.0f,0.0f,6.0f);
	glEnd();
	
	////cuadro pequeño
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.0f,0.5f,4.0f);
	glVertex3f(0.0f,0.5f,1.0f);
	glVertex3f(0.0f,2.5f,1.0f);
	glVertex3f(0.0f,2.5f,4.0f);
	glEnd();
	
	////interior cuadro pequeño
	glBegin(GL_LINES);
	glVertex3f(0.0f,1.2f,4.0f);
	glVertex3f(0.0f,1.2f,2.5f);
	
	glVertex3f(0.0f,1.2f,2.5f);
	glVertex3f(0.0f,2.5f,2.5f);
	
	glVertex3f(0.0f,1.2f,2.5f);
	glVertex3f(0.0f,0.5f,1.0f);
	glEnd();
	
	////interior triangulo
	glBegin(GL_LINES);
	glVertex3f(0.0f,0.0f,0.0f);
	glVertex3f(5.0f,0.0f,0.0f);
	glEnd();
	
	////exterior triangulo
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.0f,3.0f,0.0f);
	glVertex3f(1.5f,3.75f,0.0f);
	glVertex3f(6.5f,0.75f,0.0f);
	glVertex3f(5.0f,0.0f,0.0f);
	glEnd();
	
	////interior parte de abajo
	glBegin(GL_LINES);
	glVertex3f(0.0f,0.0f,5.0f);
	glVertex3f(0.0f,-2.0f,1.0f);
	
	glVertex3f(5.0f,0.0f,0.0f);
	glVertex3f(1.0f,-2.0f,0.0f);
	glEnd();
	
	// circunferencia
    double i,cx,cz;
    
    glPointSize(1);
    glBegin(GL_POINTS);
    for (i=0;i<=8; i+=0.01)
    {
		cx=1.0*cos(i) + 0;
		cz=1.0*sin(i) + 0;
		glVertex3f(cx,-1.7,cz);
	}
	 glEnd();
	 
	 	// circunferencia union interior abajo
    double i1,cx1,cz1;
    
    glPointSize(1);
    glBegin(GL_POINTS);
    for (i1=0.0;i1<=1.7; i1+=0.01)
    {
		cx1=1.0*cos(i1) + 0;
		cz1=1.0*sin(i1) + 0;
		glVertex3f(cx1,-2.0,cz1);
	}
	 glEnd();
	 
	 	// circunferencia union exterior abajo
    double i2,cx2,cz2;
    
    glPointSize(1);
    glBegin(GL_POINTS);
    for (i2=0.0;i2<=1.7; i2+=0.01)
    {
		cx2=1.0*cos(i2) + 0;
		cz2=1.0*sin(i2) + 0;
		glVertex3f(cx2,-2.5,cz2);
	}
	 glEnd();
	

	////exterior parte de abajo
	glBegin(GL_LINES);
	glVertex3f(6.5f,0.75f,0.0f);
	glVertex3f(6.5f,0.25f,0.0f);
	
	glVertex3f(6.5f,0.25f,0.0f);
	glVertex3f(1.0f,-2.5f,0.0f);
	
	glVertex3f(0.0f,0.0f,6.0f);
	glVertex3f(0.0f,-2.5f,1.0f);
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
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (400, 100);
    // Crear ventana
    glutCreateWindow("ejercicio5_3D");
    
    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);
    glutReshapeFunc(reshape);
    // Funciones de retrollamada
    glutDisplayFunc(display);
 
    // Pasar el control de eventos a GLUT
    glutMainLoop();
 
    // Regresar al sistema operativo
    return 0;
 
}

