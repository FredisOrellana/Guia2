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
    
	// haciendo el ejercicio 
	glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-10.5f,9.0f,0.0f);
	glVertex3f(11.5f,6.33f,0.0f);
	glVertex3f(13.0f,-7.0f,0.0f);	
	glVertex3f(-9.0f,-4.0f,0.0f);
	glVertex3f(-9.0f,6.0f,0.0f);
	glVertex3f(-10.5f,9.0f,0.0f);
	glVertex3f(-12.0f,3.0f,0.0f);
	glVertex3f(-12.0f,-7.0f,0.0f);
	glVertex3f(10.0f,-10.0f,0.0f);
	glVertex3f(13.0f,-7.0f,0.0f);
	glVertex3f(11.5f,6.33f,0.0f);
	
	
      
    glEnd();
    
    ////
	glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-12.0f,3.0f,0.0f);
	glVertex3f(-9.0f,6.0f,0.0f);
	glVertex3f(-4.0f,5.33f,0.0f);
	glVertex3f(-7.0f,2.33f,0.0f);
      
    glEnd();

	////
	glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-12.0f,-2.0f,0.0f);
	glVertex3f(-9.0f,1.0f,0.0f);
	glVertex3f(-4.0f,0.33f,0.0f);
	glVertex3f(-7.0f,-2.66f,0.0f);
      
    glEnd();

	////
	glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-7.0f,-2.66f,0.0f);
	glVertex3f(-7.0f,2.33f,0.0f);
	glVertex3f(-5.5f,8.34f,0.0f);
	glVertex3f(-4.0f,5.33f,0.0f);
	glVertex3f(-4.0f,0.33f,0.0f);
	
      
    glEnd();
    
    ////
	glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-12.0f,-2.0f,0.0f);
	glVertex3f(-15.0f,-12.0f,0.0f);
	glVertex3f(-10.0f,-12.0f,0.0f);
	glVertex3f(-7.0f,-2.66f,0.0f);
      
    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-9.0f,-4.0f,0.0f);
	glVertex3f(-12.0f,-7.0f,0.0f);

    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-7.0f,-2.66f,0.0f);
	glVertex3f(-7.0f,-7.66f,0.0f);

    glEnd();
    
     ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-4.0f,0.33f,0.0f);
	glVertex3f(-4.0f,-4.66f,0.0f);

    glEnd();
	
	////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(11.5f,6.33f,0.0f);
	glVertex3f(10.0f,-10.0f,0.0f);

    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-2.0f,8.0f,0.0f);
	glVertex3f(-2.0f,-4.0f,0.0f);

    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(1.5f,7.5f,0.0f);
	glVertex3f(1.5f,-4.5f,0.0f);


    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(4.6f,7.15f,0.0f);
	glVertex3f(4.6f,-4.9f,0.0f);


    glEnd();
    
    ////
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(8.0f,6.7f,0.0f);
	glVertex3f(8.0f,-5.4f,0.0f);


    glEnd();
    
    ////
	glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-2.5f,-4.5f,0.0f);
	glVertex3f(-1.5f,-3.5f,0.0f);
	glVertex3f(2.0f,-4.0f,0.0f);
	glVertex3f(1.0f,-5.0f,0.0f);
      
    glEnd();


    ////
	glBegin(GL_LINE_LOOP);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(4.0f,-5.4f,0.0f);
	glVertex3f(5.0f,-4.4f,0.0f);
	glVertex3f(8.5f,-4.9f,0.0f);
	glVertex3f(7.5f,-5.9f,0.0f);
      
    glEnd();
    
        
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
    glOrtho(-16.0, 16.0, -16.0, 16.0, -16.0, 16.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (700, 500);
    glutInitWindowPosition (400, 100);
    glutCreateWindow ("Ejercicio 3");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
