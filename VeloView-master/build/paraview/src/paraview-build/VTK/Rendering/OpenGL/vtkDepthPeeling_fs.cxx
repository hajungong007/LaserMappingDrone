/* DO NOT EDIT.
 * Generated by ../../../bin/vtkEncodeString-pv4.3
 * 
 * Define the vtkDepthPeeling_fs string.
 *
 * Generated from file: /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/Rendering/OpenGL/vtkDepthPeeling_fs.glsl
 */
#include "vtkDepthPeeling_fs.h"
const char *vtkDepthPeeling_fs =
"// ============================================================================\n"
"//\n"
"//  Program:   Visualization Toolkit\n"
"//  Module:    vtkDepthPeeling_fs.glsl\n"
"//\n"
"//  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"//  All rights reserved.\n"
"//  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.\n"
"//\n"
"//     This software is distributed WITHOUT ANY WARRANTY; without even\n"
"//     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR\n"
"//     PURPOSE.  See the above copyright notice for more information.\n"
"//\n"
"// ============================================================================\n"
"\n"
"//\n"
"// Fragment shader used by the depth peeling algorithm.\n"
"\n"
"#version 110\n"
"\n"
"#extension GL_ARB_texture_rectangle: enable\n"
"\n"
"uniform sampler2DRectShadow shadowTex;\n"
"uniform sampler2DRectShadow opaqueShadowTex;\n"
"uniform float offsetX;\n"
"uniform float offsetY;\n"
"\n"
"void propFuncFS();\n"
"\n"
"void main()\n"
"{\n"
"  vec4 r0=gl_FragCoord;\n"
"  r0.x=r0.x-offsetX;\n"
"  r0.y=r0.y-offsetY;\n"
"  float r1=shadow2DRect(opaqueShadowTex,r0.xyz).x;\n"
"  r1=r1-0.5;\n"
"  if(r1<0.0)\n"
"    {\n"
"    discard;\n"
"    }\n"
"  r0.x=shadow2DRect(shadowTex,r0.xyz).x;\n"
"  r0.x=r0.x-0.5;\n"
"  if(r0.x<0.0)\n"
"    {\n"
"    discard;\n"
"    }\n"
"  propFuncFS();\n"
"}\n"
"\n";

