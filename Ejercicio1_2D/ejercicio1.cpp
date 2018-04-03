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

	
    // media circunferencia de estructura 
    glColor3f(0.0f,0.0f,0.0f);
    double i, cx,cy;
    
    glBegin(GL_POINTS);
    for (i=0.275; i<=2.87; i+=0.001)
    {
		cx=9.5*cos(i) +0.0;
		cy=11*sin(i) -7.0;
		glVertex2f(cx,cy); 
		
	}
	 glEnd();
	 
	// media circunferencia de abajo
	glColor3f(0.0f,0.0f,0.0f);
	 double imc, cxmc,cymc;
    
    glBegin(GL_POINTS);
    for (imc=0.278; imc<=2.865; imc+=0.001)
    {
		cxmc=9.2*cos(imc) +0.0;
		cymc=10.8*sin(imc) -7.0;
		glVertex2f(cxmc,cymc); 
		
	}
	 glEnd();
	 
	 /////lado izquierdo
    //// 
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-10.0f,-0.2f,0.0f);
	glVertex3f(-7.47f,-0.2f,0.0f);

	
    glEnd();
    
    //// 
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-10.0f,0.1f,0.0f);
	glVertex3f(-7.23f,0.1f,0.0f);
	
    glEnd();
    
    ////	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-10.0f,0.1f,0.0f);
	glVertex3f(-10.0f,-0.2f,0.0f);
	
    glEnd();
    
     ////	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-10.2f,0.25f,0.0f);
	glVertex3f(-7.13f,0.25f,0.0f);
	
    glEnd();
    
     ////	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-10.2f,0.1f,0.0f);
	glVertex3f(-10.2f,0.25f,0.0f);
	
    glEnd();
    
     ////	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-10.0f,0.1f,0.0f);
	glVertex3f(-10.2f,0.1f,0.0f);
	
    glEnd();
	
	////bases lado izquierdo
	 ////base 1
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-9.15f,-0.2f,0.0f);
	glVertex3f(-9.15f,-4.0f,0.0f);
	
    glEnd();
    
    ////base circulo
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-9.15f,-4.05f,0.0f);
	glVertex3f(-8.85f,-4.05f,0.0f);
	
    glEnd();
    
    
	////	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-8.95f,-0.2f,0.0f);
	glVertex3f(-8.95f,-3.3f,0.0f);
	
    glEnd();
    
    ////base 1 trabezaño 1	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-9.45f,-0.2f,0.0f);
	glVertex3f(-9.15f,-0.9f,0.0f);
	
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-9.7f,-0.2f,0.0f);
	glVertex3f(-9.15f,-1.3f,0.0f);
	
    glEnd();
    
    ////base 1 trabezaño 2	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-8.65f,-0.2f,0.0f);
	glVertex3f(-8.95f,-0.9f,0.0f);
	
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-8.4f,-0.2f,0.0f);
	glVertex3f(-8.95f,-1.3f,0.0f);
	
    glEnd();
    
     ////base 2 izquierda
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-8.1f,-0.2f,0.0f);
	glVertex3f(-8.1f,-1.25f,0.0f);
	
    glEnd();
    
     ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-8.0f,-0.2f,0.0f);
	glVertex3f(-8.0f,-1.15f,0.0f);
	
    glEnd();
    
    ////centro
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(7.15f,-0.2f,0.0f);
	glVertex3f(-7.15f,-0.2f,0.0f);
	
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(6.95f,0.1f,0.0f);
	glVertex3f(-6.95f,0.1f,0.0f);
	
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(6.84f,0.25f,0.0f);
	glVertex3f(-6.84f,0.25f,0.0f);
	
    glEnd();
    
     ////base 1 centro
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-6.05f,0.25f,0.0f);
	glVertex3f(-6.05f,1.15f,0.0f);
	
    glEnd();
       
     ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-5.95f,0.25f,0.0f);
	glVertex3f(-5.95f,1.25f,0.0f);
	
    glEnd();
    
    ////base 2 centro
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-4.05f,0.25f,0.0f);
	glVertex3f(-4.05f,2.7f,0.0f);
	
    glEnd();
       
     ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-3.95f,0.25f,0.0f);
	glVertex3f(-3.95f,2.8f,0.0f);
	
    glEnd();
    
    ////base 3 centro
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-2.05f,0.25f,0.0f);
	glVertex3f(-2.05f,3.53f,0.0f);
	
    glEnd();
       
     ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-1.95f,0.25f,0.0f);
	glVertex3f(-1.95f,3.55f,0.0f);
	
    glEnd();
    
    ////base 4 centro
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(-0.05f,0.25f,0.0f);
	glVertex3f(-0.05f,3.8f,0.0f);
	
    glEnd();
       
     ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.05f,0.25f,0.0f);
	glVertex3f(0.05f,3.8f,0.0f);
	
    glEnd();
    
         ////base 7 centro
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(6.05f,0.25f,0.0f);
	glVertex3f(6.05f,1.15f,0.0f);
	
    glEnd();
       
     ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(5.95f,0.25f,0.0f);
	glVertex3f(5.95f,1.25f,0.0f);
	
    glEnd();
    
    ////base 6 centro
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(4.05f,0.25f,0.0f);
	glVertex3f(4.05f,2.7f,0.0f);
	
    glEnd();
       
     ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(3.95f,0.25f,0.0f);
	glVertex3f(3.95f,2.8f,0.0f);
	
    glEnd();
    
    ////base 7 centro
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(2.05f,0.25f,0.0f);
	glVertex3f(2.05f,3.53f,0.0f);
	
    glEnd();
       
     ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(1.95f,0.25f,0.0f);
	glVertex3f(1.95f,3.55f,0.0f);
	
    glEnd();
    
    
     /////lado derecho
    //// 
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(10.0f,-0.2f,0.0f);
	glVertex3f(7.47f,-0.2f,0.0f);

	
    glEnd();
    
    //// 
	glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(10.0f,0.1f,0.0f);
	glVertex3f(7.23f,0.1f,0.0f);
	
    glEnd();
    
    ////	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(10.0f,0.1f,0.0f);
	glVertex3f(10.0f,-0.2f,0.0f);
	
    glEnd();
    
     ////	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(10.2f,0.25f,0.0f);
	glVertex3f(7.13f,0.25f,0.0f);
	
    glEnd();
    
     ////	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(10.2f,0.1f,0.0f);
	glVertex3f(10.2f,0.25f,0.0f);
	
    glEnd();
    
     ////	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(10.0f,0.1f,0.0f);
	glVertex3f(10.2f,0.1f,0.0f);
	
    glEnd();
	
	////bases lado derecho
	 ////base 1
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(9.15f,-0.2f,0.0f);
	glVertex3f(9.15f,-4.0f,0.0f);
	
    glEnd();
    
        ////base circulo
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(9.15f,-4.05f,0.0f);
	glVertex3f(8.85f,-4.05f,0.0f);
	
    glEnd();
    
	////	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(8.95f,-0.2f,0.0f);
	glVertex3f(8.95f,-3.3f,0.0f);
	
    glEnd();
    
    ////base 1 trabezaño 1	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(9.45f,-0.2f,0.0f);
	glVertex3f(9.15f,-0.9f,0.0f);
	
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(9.7f,-0.2f,0.0f);
	glVertex3f(9.15f,-1.3f,0.0f);
	
    glEnd();
    
    ////base 1 trabezaño 2	
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(8.65f,-0.2f,0.0f);
	glVertex3f(8.95f,-0.9f,0.0f);
	
    glEnd();
    
    ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(8.4f,-0.2f,0.0f);
	glVertex3f(8.95f,-1.3f,0.0f);
	
    glEnd();
    
     ////base 2 derecha
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(8.1f,-0.2f,0.0f);
	glVertex3f(8.1f,-1.25f,0.0f);
	
    glEnd();
    
     ////
    glBegin(GL_LINES);
	
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(8.0f,-0.2f,0.0f);
	glVertex3f(8.0f,-1.15f,0.0f);
	
    glEnd();
 
 
 
	
		
    glFlush();
    glutSwapBuffers();


}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
    glOrtho(-12.0, 12.0, -12.0, 12.0, -12.0, 12.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 500);
    glutInitWindowPosition (400, 100);
    glutCreateWindow ("Ejercicio 1");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

