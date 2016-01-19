/* DO NOT EDIT.
 * Generated by ../../../bin/vtkEncodeString-pv4.3
 * 
 * Define the vtkGPUVolumeRayCastMapper_OneComponentFS string.
 *
 * Generated from file: /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/Rendering/VolumeOpenGL/vtkGPUVolumeRayCastMapper_OneComponentFS.glsl
 */
#include "vtkGPUVolumeRayCastMapper_OneComponentFS.h"
const char *vtkGPUVolumeRayCastMapper_OneComponentFS =
"/*=========================================================================\n"
"\n"
"  Program:   Visualization Toolkit\n"
"  Module:    vtkGPUVolumeRayCastMapper_OneComponentFS.glsl\n"
"\n"
"  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"  All rights reserved.\n"
"  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.\n"
"\n"
"     This software is distributed WITHOUT ANY WARRANTY; without even\n"
"     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR\n"
"     PURPOSE.  See the above copyright notice for more information.\n"
"\n"
"=========================================================================*/\n"
"\n"
"// Fragment shader that implements scalarFromValue() and colorFromValue() in\n"
"// the case of a one-component dataset.\n"
"// The functions are used in composite mode.\n"
"\n"
"#version 110\n"
"\n"
"// \"value\" is a sample of the dataset.\n"
"// Think of \"value\" as an object.\n"
"\n"
"uniform sampler1D colorTexture;\n"
"\n"
"float scalarFromValue(vec4 value)\n"
"{\n"
"  return value.x;\n"
"}\n"
"\n"
"vec4 colorFromValue(vec4 value)\n"
"{\n"
"  return texture1D(colorTexture,value.x);\n"
"}\n"
"\n";

