#include "screenUtils.hpp"

void displayRasterText(float x, float y, float z, char *stringToDisplay) {
    glRasterPos3f(x, y, z);
    for (char *c = stringToDisplay; *c != '\0'; c++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }
}


// int LoadImage(char *filename) {
//     ILboolean success;
//     ILuint image;

//     ilGenImages(1, &image);          /* Generation of one image name */
//     ilBindImage(image);              /* Binding of image name */
//     success = ilLoadImage(filename); /* Loading of the image filename by DevIL */

//     if (success) /* If no error occured: */
//     {
//         /* Convert every colour component into unsigned byte. If your image contains alpha channel you can replace IL_RGB with IL_RGBA */
//         success = ilConvertImage(IL_RGBA, IL_UNSIGNED_BYTE);
//         if (!success) {
//             return -1;
//         }
//     } else
//         return -1;
//     return image;
// }


// void reshape(GLsizei newwidth, GLsizei newheight) {
//     glViewport(0, 0, x_window = newwidth, y_window = newheight);
//     glMatrixMode(GL_PROJECTION);
//     glLoadIdentity();
//     glOrtho(0.0, x_window, y_window, 0.0, 0.0, 100.0);
//     glMatrixMode(GL_MODELVIEW);
//     glutPostRedisplay();
// }
