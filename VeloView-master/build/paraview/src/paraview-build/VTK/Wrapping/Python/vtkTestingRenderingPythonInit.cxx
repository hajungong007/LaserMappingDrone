// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkTestingRenderingPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkTestingRenderingPython(); }

void initvtkTestingRenderingPython()
{
  static const char modulename[] = "vtkTestingRenderingPython";
  real_initvtkTestingRenderingPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkTestingRenderingPython(); }

void initlibvtkTestingRenderingPython()
{
  static const char modulename[] = "libvtkTestingRenderingPython";
  real_initvtkTestingRenderingPython(modulename);
}

