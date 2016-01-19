/* DO NOT EDIT.
 * Generated by ../../../bin/vtkEncodeString-pv4.3
 * 
 * Define the vtkCompositeZPassShader_fs string.
 *
 * Generated from file: /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/Rendering/Parallel/vtkCompositeZPassShader_fs.glsl
 */
#include "vtkCompositeZPassShader_fs.h"
const char *vtkCompositeZPassShader_fs =
"// ============================================================================\n"
"//\n"
"//  Program:   Visualization Toolkit\n"
"//  Module:    vtkCompositeZPassShader_fs.glsl\n"
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
"// Fragment shader used by the composite z render pass.\n"
"\n"
"#version 110\n"
"\n"
"uniform sampler2D depth;\n"
"\n"
"void main(void)\n"
"{\n"
"  vec2 tcoord=gl_TexCoord[0].st;\n"
"  gl_FragDepth=texture2D(depth,tcoord).x;\n"
"}\n"
"\n";

