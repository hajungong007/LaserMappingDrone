// ClientServer wrapper for vtkSMCompoundSourceProxyDefinitionBuilder object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSMCompoundSourceProxyDefinitionBuilder.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSMCompoundSourceProxyDefinitionBuilderClientServerNewCommand(void* /*ctx*/)
{
  return vtkSMCompoundSourceProxyDefinitionBuilder::New();
}


int VTK_EXPORT vtkSMCompoundSourceProxyDefinitionBuilderCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSMCompoundSourceProxyDefinitionBuilder *op = vtkSMCompoundSourceProxyDefinitionBuilder::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSMCompoundSourceProxyDefinitionBuilder.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMCompoundSourceProxyDefinitionBuilder  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
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
    vtkSMCompoundSourceProxyDefinitionBuilder  *temp20;
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
    vtkSMCompoundSourceProxyDefinitionBuilder  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Reset",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Reset();
      return 1;
      }
    }
  if (!strcmp("AddProxy",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkSMProxy  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMProxy"))
      {
      op->AddProxy(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ExposeProperty",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    char    *temp1;
    char    *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->ExposeProperty(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("ExposeOutputPort",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    char    *temp1;
    char    *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->ExposeOutputPort(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("ExposeOutputPort",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    unsigned int      temp1;
    char    *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->ExposeOutputPort(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfProxies",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetNumberOfProxies();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    vtkSMProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetProxy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkSMProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetProxy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxyName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetProxyName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SaveDefinition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVXMLElement  *temp0;
    vtkPVXMLElement  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVXMLElement"))
      {
      temp20 = (op)->SaveDefinition(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkSMObject";
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
  vtkmsg << "Object type: vtkSMCompoundSourceProxyDefinitionBuilder, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSMCompoundSourceProxyDefinitionBuilder_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSMCompoundSourceProxyDefinitionBuilder", vtkSMCompoundSourceProxyDefinitionBuilderClientServerNewCommand);
    csi->AddCommandFunction("vtkSMCompoundSourceProxyDefinitionBuilder", vtkSMCompoundSourceProxyDefinitionBuilderCommand);
    }
}
