// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkFiltersPythonPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkFiltersPythonPython(); }

void initvtkFiltersPythonPython()
{
  static const char modulename[] = "vtkFiltersPythonPython";
  real_initvtkFiltersPythonPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkFiltersPythonPython(); }

void initlibvtkFiltersPythonPython()
{
  static const char modulename[] = "libvtkFiltersPythonPython";
  real_initvtkFiltersPythonPython(modulename);
}

