/*=========================================================================

   Program: ParaView
   Module:    pqParaViewPlugin.cxx.in

   Copyright (c) 2005,2006 Sandia Corporation, Kitware Inc.
   All rights reserved.

   ParaView is a free software; you can redistribute it and/or modify it
   under the terms of the ParaView license version 1.2. 

   See License_v1.2.txt for the full ParaView license.
   A copy of this license can be obtained by contacting
   Kitware Inc.
   28 Corporate Drive
   Clifton Park, NY 12065
   USA

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

========================================================================*/
#include "StreamingParticles_Plugin.h"

#include "vtkObjectFactory.h"

#include "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/Plugins/StreamingParticles/vtkSMXML_StreamingParticles.h"

#include "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/Plugins/StreamingParticles/StreamingParticles_doc.h"

//-----------------------------------------------------------------------------
// Used to push a string returns from a function to a vector.
template <class T, class F>
void PushBack(T& vector, F& fun)
{
  char* text = fun();
  vector.push_back(text);
  delete []text;
}

//-----------------------------------------------------------------------------
#ifdef plugin_type_servermanager
# if defined(INITIALIZE_WRAPPING) || defined(INITIALIZE_EXTRA_CS_MODULES)
#  include "vtkClientServerInterpreterInitializer.h"
#  include "vtkClientServerInterpreter.h"

#   if defined(INITIALIZE_WRAPPING)
extern "C" void StreamingParticles_Initialize(vtkClientServerInterpreter *);
#   endif



extern "C" void VTK_EXPORT StreamingParticles_CombinedInitialize(
  vtkClientServerInterpreter *interp)
{
#   if defined(INITIALIZE_WRAPPING)
  StreamingParticles_Initialize(interp);
#   endif

  // Now initialize any extra kits as requested.
  
}
# endif
#endif

//-----------------------------------------------------------------------------
void StreamingParticles_Plugin::GetBinaryResources(
  std::vector<std::string>& resources)
{
  PushBack(resources, StreamingParticles_doc);

  (void)resources;
}

//-----------------------------------------------------------------------------
#ifdef plugin_type_gui


#endif

//-----------------------------------------------------------------------------
#ifdef plugin_type_servermanager
vtkClientServerInterpreterInitializer::InterpreterInitializationCallback
StreamingParticles_Plugin::GetInitializeInterpreterCallback()
{
# if defined(INITIALIZE_WRAPPING) || defined(INITIALIZE_EXTRA_CS_MODULES)
  return StreamingParticles_CombinedInitialize;
# endif
  return NULL;
}

//-----------------------------------------------------------------------------
void StreamingParticles_Plugin::GetXMLs(std::vector<std::string> &xmls)
{
  PushBack(xmls, StreamingParticlesStreamingParticlesInterfaces);

  (void)xmls;
}
#endif

//-----------------------------------------------------------------------------
#ifdef plugin_type_gui
QObjectList StreamingParticles_Plugin::interfaces()
{
  QObjectList ifaces;
#ifdef PUSH_BACK_PV_INTERFACES
  PUSH_BACK_PV_INTERFACES(ifaces);
#endif
  return ifaces;
}
#endif

//-----------------------------------------------------------------------------
#ifdef plugin_type_python


void StreamingParticles_Plugin::GetPythonSourceList(std::vector<std::string>& modules,
  std::vector<std::string>& sources,
  std::vector<int> &package_flags)
{
  const char *moduleNames[] = {
    
  };
  char *moduleSources[] = {
    
  };
  const int packageFlags[] = {
    
  };

  int num_modules = sizeof(moduleNames)/sizeof(const char *);
  for (int cc=0; cc < num_modules; cc++)
    {
    modules.push_back(moduleNames[cc]);
    sources.push_back(moduleSources[cc]);
    package_flags.push_back(packageFlags[cc]);

    // free allocated memory.
    delete moduleSources[cc];
    moduleSources[cc] = NULL;
    }
}
#endif

//-----------------------------------------------------------------------------
StreamingParticles_Plugin::StreamingParticles_Plugin()
{
#ifndef BUILD_SHARED_LIBS
# ifdef plugin_type_gui
  // For static builds, initialize the Qt resources as well as the Qt plugin.
  
  Q_IMPORT_PLUGIN(StreamingParticles)
# endif
#endif
}

//-----------------------------------------------------------------------------
// Mark this as a ParaView-ServerManager plugin.
PV_PLUGIN_EXPORT(StreamingParticles, StreamingParticles_Plugin)

//-----------------------------------------------------------------------------
#ifdef plugin_type_gui
// Required to mark this as a Qt plugin.
#if QT_VERSION >= 0x050000
Q_DECLARE_INTERFACE(StreamingParticles_Plugin, "com.kitware/paraview/StreamingParticles")
Q_PLUGIN_METADATA(IID "com.kitware/paraview/StreamingParticles")
#else
Q_EXPORT_PLUGIN2(StreamingParticles,  StreamingParticles_Plugin)
#endif
#endif
