//
// Created by adayoldbagel on 1/15/16.
//

#include <sstream>
#include "QuadTreeDrawer.h"
#include "LoadShaders.h"

namespace LaserMappingDrone {

    std::string QuadTreeDrawer::init(float aspectRatio) {

        std::stringstream log;

        // Create and bind a VAO
        glGenVertexArrays(1, &vao);
        glBindVertexArray(vao);

        // set up a simple shader that shades any triangle a single solid color.
        shader = loadShaders("Shaders/color.vert", "Shaders/color.frag", log);
        GLint shader_vertex = glGetAttribLocation(shader, "vertex");
        shader_modelMat = glGetUniformLocation(shader, "modelMat");
        shader_color = glGetUniformLocation(shader, "color");

        // Create the vertex buffer in GPU memory (nothing in it yet)
        GLuint vertices;
        glGenBuffers(1, &vertices);

        // this is the data that will be buffered up as vertices
        float corners[44] = {-1.0f, -1.0f, 0.5f, 1.0f,
                             1.0f, -1.0f, 0.5f, 1.0f,
                             1.0f, 1.0f, 0.5f, 1.0f,
                             1.0f, 1.0f, 0.5f, 1.0f,  // This part forms the corners of a square
                             -1.0f, 1.0f, 0.5f, 1.0f,
                             -1.0f, -1.0f, 0.5f, 1.0f,

                             0.0f, -1.0f, 0.5f, 1.0f,
                             0.0f, 1.0f, 0.5f, 1.0f,  // This part forms the endpoints of a cross
                             -1.0f, 0.0f, 0.5f, 1.0f,
                             1.0f, 0.0f, 0.5f, 1.0f,

                             0.0f, 0.0f, 0.5f, 1.0f}; // This part is just a for drawing a dot

        // Fill the vertex buff in GPU memory with the data from corners
        glBindBuffer(GL_ARRAY_BUFFER, vertices);
        glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 44, corners, GL_STATIC_DRAW);
        glEnableVertexAttribArray((GLuint) shader_vertex);
        glVertexAttribPointer((GLuint) shader_vertex, 4, GL_FLOAT, GL_FALSE, 0, 0);

        currentColor[0] = 0.f;
        currentColor[1] = 1.f;
        currentColor[2] = 0.f;

        localModelMat = glm::mat4();
        localModelMat = glm::scale(localModelMat, {aspectRatio, 1.f, 1.f});

        return log.str();
    }

    void QuadTreeDrawer::preDrawCommon() {
        // Bind the VAO
        glBindVertexArray(vao);
        // Tell GPU to use the colorShader program for following draw calls
        glUseProgram(shader);
        // Upload the model matrix to the colorShader program on the GPU
        glUniformMatrix4fv(shader_modelMat, 1, GL_FALSE, &matrixStack.back()[0][0]);
        // Upload the color you want to the colorShader program on the GPU
        glUniform3f(shader_color, currentColor[0], currentColor[1], currentColor[2]);
    }

    void QuadTreeDrawer::drawBorder() {
        preDrawCommon();
        // Execute the shader on the GPU (draw) for the vertices of the square
        glDrawArrays(GL_LINE_LOOP, 0, 6);
    }

    void QuadTreeDrawer::drawCross() {
        preDrawCommon();
        // Execute the shader on the GPU (draw) for the vertices of the cross
        glDrawArrays(GL_LINES, 6, 4);
    }

    void QuadTreeDrawer::drawDot() {
        preDrawCommon();
        // Execute the shader on the GPU (draw) for the vertices of the cross
        glDrawArrays(GL_POINTS, 10, 1);
    }

    void QuadTreeDrawer::translate(float x, float y) {
        localModelMat = glm::translate(localModelMat, {x, y, 0.f});
    }

    void QuadTreeDrawer::scale(float x, float y) {
        localModelMat = glm::scale(localModelMat, {x, y, 1.f});
    }

    void QuadTreeDrawer::setColor(float r, float g, float b) {
        currentColor[0] = r;
        currentColor[1] = g;
        currentColor[2] = b;
    }

    void QuadTreeDrawer::pushMat(glm::mat4&& mat) {
        matrixStack.push_back(mat);
    }

    void QuadTreeDrawer::popMat() {
        matrixStack.pop_back();
    }

    void QuadTreeDrawer::enterBranch(int whichQuadrant) {
        float x, y;
        switch(whichQuadrant) {
            case UP_L:
                x = -0.5f;
                y =  0.5f;
                break;
            case UP_R:
                x =  0.5f;
                y =  0.5f;
                break;
            case DN_L:
                x = -0.5f;
                y = -0.5f;
                break;
            case DN_R:
                x =  0.5f;
                y = -0.5f;
                break;
            default:
                x = 1.f;
                y = 1.f;
                break;
        }
        glm::mat4 scaleMat = {{0.5f, 0.f, 0.f, 0.f}, {0.f, 0.5f, 0.f, 0.f}, {0.f, 0.f, 1.f, 0.f}, {0.f, 0.f, 0.f, 1.f}};
        glm::mat4 transMat = {{1.f, 0.f, 0.f, 0.f}, {0.f, 1.f, 0.f, 0.f}, {0.f, 0.f, 1.f, 0.f}, {x, y, 0.f, 1.f}};
        pushMat(matrixStack.back() * transMat * scaleMat);
    }
}
