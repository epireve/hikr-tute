// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Diagnostics/Debug.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Diagnostics{struct Debug;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public static class Debug :26
// {
uClassType* Debug_typeof();
void Debug__EmitLog_fn(uString* message, int* type);
void Debug__Log4_fn(uString* message, int* type);

struct Debug : uObject
{
    static uSStrong<uDelegate*> _logHandler_;
    static uSStrong<uDelegate*>& _logHandler() { return _logHandler_; }
    static uSStrong<uString*> _indentStr_;
    static uSStrong<uString*>& _indentStr() { return _indentStr_; }

    static void EmitLog(uString* message, int type);
    static void Log4(uString* message, int type);
};
// }

}}} // ::g::Uno::Diagnostics
