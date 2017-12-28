// This file was generated based on /dev.local/hikr/.uno/ux13/HomePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HomePage;}
namespace g{struct HomePage__Template;}

namespace g{

// public partial sealed class HomePage.Template :6
// {
::g::Uno::UX::Template_type* HomePage__Template_typeof();
void HomePage__Template__ctor_1_fn(HomePage__Template* __this, ::g::HomePage* parent, ::g::HomePage* parentInstance);
void HomePage__Template__New1_fn(HomePage__Template* __this, uObject** __retval);
void HomePage__Template__New2_fn(::g::HomePage* parent, ::g::HomePage* parentInstance, HomePage__Template** __retval);

struct HomePage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::HomePage*> __parent1;
    uWeak< ::g::HomePage*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> __self_Text_inst1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return HomePage__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::HomePage* parent, ::g::HomePage* parentInstance);
    static HomePage__Template* New2(::g::HomePage* parent, ::g::HomePage* parentInstance);
};
// }

} // ::g
