// ClientServer wrapper for vtkTextureMapToSphere object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkTextureMapToSphere.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkTextureMapToSphereClientServerNewCommand(void* /*ctx*/)
{
  return vtkTextureMapToSphere::New();
}


int VTK_EXPORT vtkTextureMapToSphereCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkTextureMapToSphere *op = vtkTextureMapToSphere::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkTextureMapToSphere.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("GetClassName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetClassName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsA",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsA(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NewInstance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTextureMapToSphere  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SafeDownCast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObject  *temp0;
    vtkTextureMapToSphere  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTextureMapToSphere  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCenter",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetCenter(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetCenter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetCenter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCenter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetCenter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAutomaticSphereGeneration",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAutomaticSphereGeneration(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAutomaticSphereGeneration",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutomaticSphereGeneration();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AutomaticSphereGenerationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutomaticSphereGenerationOn();
      return 1;
      }
    }
  if (!strcmp("AutomaticSphereGenerationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutomaticSphereGenerationOff();
      return 1;
      }
    }
  if (!strcmp("SetPreventSeam",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPreventSeam(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPreventSeam",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPreventSeam();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PreventSeamOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PreventSeamOn();
      return 1;
      }
    }
  if (!strcmp("PreventSeamOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PreventSeamOff();
      return 1;
      }
    }

  {
    const char* commandName = "vtkDataSetAlgorithm";
    if (arlu->HasCommandFunction(commandName) &&
        arlu->CallCommandFunction(commandName, op, method, msg, resultStream)) { return 1; }
  }
  if(resultStream.GetNumberOfMessages() > 0 &&
     resultStream.GetCommand(0) == vtkClientServerStream::Error &&
     resultStream.GetNumberOfArguments(0) > 1)
    {
    /* A superclass wrapper prepared a special message. */
    return 0;
    }
  vtkOStrStreamWrapper vtkmsg;
  vtkmsg << "Object type: vtkTextureMapToSphere, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkTextureMapToSphere_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkTextureMapToSphere", vtkTextureMapToSphereClientServerNewCommand);
    csi->AddCommandFunction("vtkTextureMapToSphere", vtkTextureMapToSphereCommand);
    }
}
