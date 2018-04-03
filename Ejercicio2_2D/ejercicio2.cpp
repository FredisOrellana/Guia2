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
	
	 glMatrixMode(GL_MODELVIEW);
	 
	 ancho = w;
	 alto = h;
 }

void display(void)
{
	
	
	glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);
  
        
	////circulo 1
    glColor3f(0.0,0.0,0.0);
    //gruesor, radio ,espesor 3D,puntos a graficar
    glTranslatef(-2.0, 4.0, 0.0);
    glutSolidTorus(1.0, 3.0, 20.0, 360.0);
    
    glEnd();
    
    
    ////dibujando engranes
	    ////1
	glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(4.0f,-0.3f,0.0f);   
    glVertex3f(3.7f,1.5f,0.0f);    
    glVertex3f(5.3f,1.2f,0.0f);    
    glVertex3f(5.4f,0.4f,0.0f);
    
    glEnd();
    
    ////2
	glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(3.4f,2.1f,0.0f);   
    glVertex3f(2.2f,3.3f,0.0f);    
    glVertex3f(3.6f,4.1f,0.0f);    
    glVertex3f(4.15f,3.55f,0.0f);
    
    glEnd();
    
    ////3
	glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(1.5f,3.6f,0.0f);   
    glVertex3f(-0.4f,3.9f,0.0f);    
    glVertex3f(0.5f,5.4f,0.0f);    
    glVertex3f(1.2f,5.3f,0.0f);
    
    glEnd();
    
     ////4
	glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(-1.0f,3.8f,0.0f);   
    glVertex3f(-2.7f,2.9f,0.0f);    
    glVertex3f(-2.9f,4.6f,0.0f);    
    glVertex3f(-2.1f,5.0f,0.0f);
    
    glEnd();
  
    ////5
	glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(-3.1f,2.4f,0.0f);   
    glVertex3f(-3.9f,0.8f,0.0f);    
    glVertex3f(-5.1f,2.0f,0.0f);    
    glVertex3f(-4.7f,2.8f,0.0f);
    
    glEnd();
    
    ////6
	glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(-4.0f,0.3f,0.0f);   
    glVertex3f(-3.7f,-1.5f,0.0f);    
    glVertex3f(-5.3f,-1.2f,0.0f);    
    glVertex3f(-5.4f,-0.4f,0.0f);
    
    glEnd();
    
    ////7
	glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(-3.4f,-2.1f,0.0f);   
    glVertex3f(-2.2f,-3.3f,0.0f);    
    glVertex3f(-3.6f,-4.1f,0.0f);    
    glVertex3f(-4.15f,-3.55f,0.0f);
    
    glEnd();
    
    ////8
	glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(-1.5f,-3.6f,0.0f);   
    glVertex3f(0.4f,-3.9f,0.0f);    
    glVertex3f(-0.5f,-5.4f,0.0f);    
    glVertex3f(-1.2f,-5.3f,0.0f);
    
    glEnd();
    
    ////9
	glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(1.0f,-3.8f,0.0f);   
    glVertex3f(2.7f,-2.9f,0.0f);    
    glVertex3f(2.9f,-4.6f,0.0f);    
    glVertex3f(2.1f,-5.0f,0.0f);
    
    glEnd();
    
    ////10
	glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(3.1f,-2.4f,0.0f);   
    glVertex3f(3.9f,-0.8f,0.0f);    
    glVertex3f(5.1f,-2.0f,0.0f);    
    glVertex3f(4.7f,-2.8f,0.0f);
    
    glEnd();
    
    ////circulo 2
    glColor3f(0.43,0.43,0.43);
    //gruesor, radio ,espesor 3D,puntos a graficar
    glTranslatef(8.0, -5.5, 0.0);
    glutSolidTorus(1.0, 3.0, 20.0, 360.0);
    
    glEnd();
    
    ////dibujando engranes 
	    ////1
	glBegin(GL_QUADS);
    glVertex3f(4.0f,-0.3f,0.0f);   
    glVertex3f(3.7f,1.5f,0.0f);    
    glVertex3f(5.3f,1.2f,0.0f);    
    glVertex3f(5.4f,0.4f,0.0f);
    
    glEnd();
    
    ////2
	glBegin(GL_QUADS);
    glVertex3f(3.4f,2.1f,0.0f);   
    glVertex3f(2.2f,3.3f,0.0f);    
    glVertex3f(3.6f,4.1f,0.0f);    
    glVertex3f(4.15f,3.55f,0.0f);
    
    glEnd();
    
    ////3
	glBegin(GL_QUADS);
    glVertex3f(1.5f,3.6f,0.0f);   
    glVertex3f(-0.4f,3.9f,0.0f);    
    glVertex3f(0.5f,5.4f,0.0f);    
    glVertex3f(1.2f,5.3f,0.0f);
    
    glEnd();
    
     ////4
	glBegin(GL_QUADS);
    glVertex3f(-1.0f,3.8f,0.0f);   
    glVertex3f(-2.7f,2.9f,0.0f);    
    glVertex3f(-2.9f,4.6f,0.0f);    
    glVertex3f(-2.1f,5.0f,0.0f);
    
    glEnd();
  
    ////5
	glBegin(GL_QUADS);
    glVertex3f(-3.1f,2.4f,0.0f);   
    glVertex3f(-3.9f,0.8f,0.0f);    
    glVertex3f(-5.1f,2.0f,0.0f);    
    glVertex3f(-4.7f,2.8f,0.0f);
    
    glEnd();
    
    ////6
	glBegin(GL_QUADS);
    glVertex3f(-4.0f,0.3f,0.0f);   
    glVertex3f(-3.7f,-1.5f,0.0f);    
    glVertex3f(-5.3f,-1.2f,0.0f);    
    glVertex3f(-5.4f,-0.4f,0.0f);
    
    glEnd();
    
    ////7
	glBegin(GL_QUADS);
    glVertex3f(-3.4f,-2.1f,0.0f);   
    glVertex3f(-2.2f,-3.3f,0.0f);    
    glVertex3f(-3.6f,-4.1f,0.0f);    
    glVertex3f(-4.15f,-3.55f,0.0f);
    
    glEnd();
    
    ////8
	glBegin(GL_QUADS);
    glVertex3f(-1.5f,-3.6f,0.0f);   
    glVertex3f(0.4f,-3.9f,0.0f);    
    glVertex3f(-0.5f,-5.4f,0.0f);    
    glVertex3f(-1.2f,-5.3f,0.0f);
    
    glEnd();
    
    ////9
	glBegin(GL_QUADS);
    glVertex3f(1.0f,-3.8f,0.0f);   
    glVertex3f(2.7f,-2.9f,0.0f);    
    glVertex3f(2.9f,-4.6f,0.0f);    
    glVertex3f(2.1f,-5.0f,0.0f);
    
    glEnd();
    
    ////10
	glBegin(GL_QUADS);
    glVertex3f(3.1f,-2.4f,0.0f);   
    glVertex3f(3.9f,-0.8f,0.0f);    
    glVertex3f(5.1f,-2.0f,0.0f);    
    glVertex3f(4.7f,-2.8f,0.0f);
    
    glEnd();
    
    
    ////circulo 3
    glColor3f(0.0,0.7,0.2);
    //gruesor, radio ,espesor 3D,puntos a graficar
    glTranslatef(-16.0, -0.3, 0.0);
    glutSolidTorus(1.0, 3.0, 20.0, 360.0);
    
    glEnd();
    
    ////dibujando engranes
	////1
	glBegin(GL_QUADS);
    glVertex3f(4.0f,-0.3f,0.0f);   
    glVertex3f(3.7f,1.5f,0.0f);    
    glVertex3f(5.3f,1.2f,0.0f);    
    glVertex3f(5.4f,0.4f,0.0f);
    
    glEnd();
    
    ////2
	glBegin(GL_QUADS);
    glVertex3f(3.4f,2.1f,0.0f);   
    glVertex3f(2.2f,3.3f,0.0f);    
    glVertex3f(3.6f,4.1f,0.0f);    
    glVertex3f(4.15f,3.55f,0.0f);
    
    glEnd();
    
    ////3
	glBegin(GL_QUADS);
    glVertex3f(1.5f,3.6f,0.0f);   
    glVertex3f(-0.4f,3.9f,0.0f);    
    glVertex3f(0.5f,5.4f,0.0f);    
    glVertex3f(1.2f,5.3f,0.0f);
    
    glEnd();
    
     ////4
	glBegin(GL_QUADS);
    glVertex3f(-1.0f,3.8f,0.0f);   
    glVertex3f(-2.7f,2.9f,0.0f);    
    glVertex3f(-2.9f,4.6f,0.0f);    
    glVertex3f(-2.1f,5.0f,0.0f);
    
    glEnd();
  
    ////5
	glBegin(GL_QUADS);
    glVertex3f(-3.1f,2.4f,0.0f);   
    glVertex3f(-3.9f,0.8f,0.0f);    
    glVertex3f(-5.1f,2.0f,0.0f);    
    glVertex3f(-4.7f,2.8f,0.0f);
    
    glEnd();
    
    ////6
	glBegin(GL_QUADS);
    glVertex3f(-4.0f,0.3f,0.0f);   
    glVertex3f(-3.7f,-1.5f,0.0f);    
    glVertex3f(-5.3f,-1.2f,0.0f);    
    glVertex3f(-5.4f,-0.4f,0.0f);
    
    glEnd();
    
    ////7
	glBegin(GL_QUADS);
    glVertex3f(-3.4f,-2.1f,0.0f);   
    glVertex3f(-2.2f,-3.3f,0.0f);    
    glVertex3f(-3.6f,-4.1f,0.0f);    
    glVertex3f(-4.15f,-3.55f,0.0f);
    
    glEnd();
    
    ////8
	glBegin(GL_QUADS);
    glVertex3f(-1.5f,-3.6f,0.0f);   
    glVertex3f(0.4f,-3.9f,0.0f);    
    glVertex3f(-0.5f,-5.4f,0.0f);    
    glVertex3f(-1.2f,-5.3f,0.0f);
    
    glEnd();
    
    ////9
	glBegin(GL_QUADS);
    glVertex3f(1.0f,-3.8f,0.0f);   
    glVertex3f(2.7f,-2.9f,0.0f);    
    glVertex3f(2.9f,-4.6f,0.0f);    
    glVertex3f(2.1f,-5.0f,0.0f);
    
    glEnd();
    
    ////10
	glBegin(GL_QUADS);
    glVertex3f(3.1f,-2.4f,0.0f);   
    glVertex3f(3.9f,-0.8f,0.0f);    
    glVertex3f(5.1f,-2.0f,0.0f);    
    glVertex3f(4.7f,-2.8f,0.0f);
    
    glEnd();
    
	
		
    glFlush();
    glutSwapBuffers();


}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
    glOrtho(-17.0, 15.0, -15.0, 15.0, -15.0, 15.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (400, 100);
    glutCreateWindow ("Ejercicio 2");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
