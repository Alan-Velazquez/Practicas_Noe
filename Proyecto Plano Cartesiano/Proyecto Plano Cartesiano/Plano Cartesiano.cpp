//#include <GL/glut.h>
//#include <cmath> // Para funciones matemáticas
//
//void mostrar(void);
//void inicializacion(void);
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowPosition(50, 100);
//    glutInitWindowSize(600, 400);
//    glutCreateWindow("Primer Cuadrante del Plano Cartesiano");
//
//    inicializacion();
//    glutDisplayFunc(mostrar);
//    glutMainLoop();
//    return 0;
//}
//
//void mostrar(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    // Dibujar ejes del primer cuadrante
//    glColor3f(0.0, 0.0, 0.0);  // Negro
//    glBegin(GL_LINES);
//    glVertex2i(50, 50); // Origen
//    glVertex2i(550, 50); // Eje X
//    glVertex2i(50, 50); // Origen
//    glVertex2i(50, 350); // Eje Y
//    glEnd();
//
//    // Dibujar con GL_TRIANGLE_FAN
//    glColor3f(1.0, 1.0, 0.0);  // Amarillo
//    glBegin(GL_TRIANGLE_FAN);
//    glVertex2i(200, 300); // Punto superior (centro del fan)
//    glVertex2i(250, 150);
//    glVertex2i(50, 200);
//    glVertex2i(350, 200);
//    glVertex2i(150, 150);
//    glEnd();
//
//    // Dibujar trapecio
//    glColor3f(0.0, 1.0, 0.0);  // Verde
//    glBegin(GL_LINE_LOOP);
//    glVertex2i(400, 100); // Punto inferior izquierdo
//    glVertex2i(550, 100); // Punto inferior derecho
//    glVertex2i(500, 200); // Punto superior derecho
//    glVertex2i(350, 200); // Punto superior izquierdo
//    glEnd();
//
//    glFlush();
//}
//
//void inicializacion(void) {
//    glClearColor(1.0, 1.0, 1.0, 0.0);
//    glMatrixMode(GL_PROJECTION);
//    gluOrtho2D(0.0, 600.0, 0.0, 400.0);
//}