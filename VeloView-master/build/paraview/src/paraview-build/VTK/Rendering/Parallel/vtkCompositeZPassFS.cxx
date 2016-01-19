/* DO NOT EDIT.
 * Generated by ../../../bin/vtkEncodeString-pv4.3
 * 
 * Define the vtkCompositeZPassFS string.
 *
 * Generated from file: /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/Rendering/Parallel/vtkCompositeZPassFS.glsl
 */
#include "vtkCompositeZPassFS.h"
const char *vtkCompositeZPassFS =
"// ============================================================================\n"
"//\n"
"//  Program:   Visualization Toolkit\n"
"//  Module:    vtkCompositeZPassFS.glsl\n"
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
"// The following line handles system declarations such as\n"
"// default precisions, or defining precisions to null\n"
"//VTK::System::Dec\n"
"\n"
"varying vec2 tcoordVC;\n"
"uniform sampler2D depth;\n"
"\n"
"void main(void)\n"
"{\n"
"  gl_FragDepth = texture2D(depth,tcoordVC).x;\n"
"}\n"
"\n";

