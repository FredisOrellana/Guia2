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

	 glOrtho(-12 , 18, -16, 14, -15, 15);
	
	 glMatrixMode(GL_MODELVIEW);
	 
	 ancho = w;
	 alto = h;
 }


void display()
{
	glClearColor(1,1,1,1);

	//Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);
    glLoadIdentity();
    gluLookAt (1, 2, 3, 0, 0, 0, 0, 1, 0);
    glScalef (1.0, 2.0, 1.0);


	////lineas contorno
	glBegin(GL_LINES);
	glVertex3f(-2.0f,6.0f,0.0f);
	glVertex3f(14.0f,6.0f,0.0f);
	glVertex3f(14.0f,6.0f,0.0f);
	glVertex3f(14.0f,-6.0f,2.0f);
	glVertex3f(14.0f,-6.0f,-2.0f);
	glVertex3f(14.0f,6.0f,0.0f);
	glVertex3f(14.0f,-6.0f,2.0f);
	glVertex3f(14.0f,-6.0f,-2.0f);
	glVertex3f(14.0f,-6.0f,2.0f);
	glVertex3f(-6.0f,-6.0f,2.0f);
	glVertex3f(14.0f,-6.0f,-2.0f);
	glVertex3f(-6.0f,-6.0f,-2.0f);
	
	glVertex3f(-6.0f,-6.0f,-2.0f);
	glVertex3f(-6.0f,-6.0f,2.0f);
	glEnd();
	
	////parte de arriba de los cuadros
	glBegin(GL_LINES);
	glVertex3f(-6.0f,2.0f,2.0f);
	glVertex3f(-6.0f,6.0f,0.0f);
	glVertex3f(-6.0f,6.0f,0.0f);
	glVertex3f(-6.0f,2.0f,-2.0f);
	glVertex3f(-2.0f,2.0f,2.0f);
	glVertex3f(-2.0f,6.0f,0.0f);
	glVertex3f(-2.0f,6.0f,0.0f);
	glVertex3f(-2.0f,2.0f,-2.0f);
	glVertex3f(-6.0f,6.0f,0.0f);
	glVertex3f(-2.0f,6.0f,0.0f);
	glEnd();
	
	////pilares
	glBegin(GL_LINES);
	glVertex3f(-6.0f,-6.0f,2.0f);
	glVertex3f(-6.0f,2.0f,2.0f);
	glVertex3f(-4.0f,-4.0f,4.0f);
	glVertex3f(-4.0f,4.0f,4.0f);
	glVertex3f(-2.65f,-6.7f,0.0f);
	glVertex3f(-2.65f,1.4f,0.0f);
	glVertex3f(-1.35f,-5.3f,0.0f);
	glVertex3f(-1.35f,2.7f,0.0f);
	glEnd();
	
	////cuadro de arriba
	glBegin(GL_LINES);
	glVertex3f(-6.0f,2.0f,-2.0f);
	glVertex3f(-6.0f,2.0f,2.0f);
	glVertex3f(-6.0f,2.0f,2.0f);
	glVertex3f(-2.0f,2.0f,2.0f);
	glVertex3f(-2.0f,2.0f,2.0f);
	glVertex3f(-2.0f,2.0f,-2.0f);
	glVertex3f(-2.0f,2.0f,-2.0f);
	glVertex3f(-6.0f,2.0f,-2.0f);
	glEnd();

	
	////cuadro de abajo
	glBegin(GL_LINES);
	glVertex3f(-6.0f,-2.0f,-2.0f);
	glVertex3f(-6.0f,-2.0f,2.0f);
	glVertex3f(-6.0f,-2.0f,2.0f);
	glVertex3f(-2.0f,-2.0f,2.0f);
	glVertex3f(-2.0f,-2.0f,-2.0f);
	glVertex3f(-6.0f,-2.0f,-2.0f);
	glVertex3f(-6.0f,-2.0f,-2.0f);
	glVertex3f(-6.0f,-2.0f,2.0f);
	glVertex3f(-6.0f,-2.0f,2.0f);
	glVertex3f(-2.0f,-2.0f,2.0f);
	glVertex3f(-2.0f,-2.0f,2.0f);
	glVertex3f(-2.0f,-2.0f,-2.0f);
	glVertex3f(-2.0f,-2.0f,-2.0f);
	glVertex3f(-6.0f,-2.0f,-2.0f);
	glEnd();
	
	

	////Rampa
	glBegin(GL_LINES);
	glVertex3f(-2.65f,-2.6f,0.0f);
	glVertex3f(-2.5f,-6.0f,8.0f);
	glVertex3f(-2.5f,-6.0f,8.0f);
	glVertex3f(-6.5f,-6.0f,8.0f);
	glVertex3f(-6.5f,-6.0f,8.0f);
	glVertex3f(-6.6f,-2.6f,0.0f);
	glEnd();

	////amacas lineas
	glBegin(GL_LINES);
	glVertex3f(2.0f,6.65f,2.0f);
	glVertex3f(2.0f,-3.0f,2.0f);
	glVertex3f(5.0f,6.65f,2.0f);
	glVertex3f(5.0f,-3.0f,2.0f);
	glVertex3f(8.0f,6.65f,2.0f);
	glVertex3f(8.0f,-3.0f,2.0f);
	glVertex3f(11.0f,6.65f,2.0f);
	glVertex3f(11.0f,-3.0f,2.0f);
	glVertex3f(2.0f,-3.0f,2.5f);
	glVertex3f(2.0f,-3.0f,1.5f);
	glVertex3f(5.0f,-3.0f,1.5f);
	glVertex3f(5.0f,-3.0f,2.5f);
	glVertex3f(8.0f,-3.0f,2.5f);
	glVertex3f(8.0f,-3.0f,1.5f);
	glVertex3f(11.0f,-3.0f,2.5f);
	glVertex3f(11.0f,-3.0f,1.5f);

	////base de amacas
	glVertex3f(2.0f,-3.0f,2.5f);
	glVertex3f(5.0f,-3.0f,2.5f);
	glVertex3f(2.0f,-3.0f,1.5f);
	glVertex3f(5.0f,-3.0f,1.5f);
	glVertex3f(8.0f,-3.0f,2.5f);
	glVertex3f(11.0f,-3.0f,2.5f);
	glVertex3f(8.0f,-3.0f,1.5f);
	glVertex3f(11.0f,-3.0f,1.5f);

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
    glutInitWindowSize (1000, 600);
    glutInitWindowPosition (150, 30);
    // Crear ventana
    glutCreateWindow("ejercicio 3");
    
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

