// This file was generated based on '.uno/ux13/HomePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HomePage.h>
#include <_root.HomePage.Template.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class HomePage.Template :6
// {
// static Template() :15
static void HomePage__Template__cctor__fn(uType* __type)
{
}

static void HomePage__Template_build(uType* type)
{
    type->SetFields(2,
        ::g::HomePage_typeof(), offsetof(HomePage__Template, __parent1), uFieldFlagsWeak,
        ::g::HomePage_typeof(), offsetof(HomePage__Template, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* HomePage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(HomePage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("HomePage.Template", options);
    type->fp_build_ = HomePage__Template_build;
    type->fp_cctor_ = HomePage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))HomePage__Template__New1_fn;
    return type;
}

// public Template(HomePage parent, HomePage parentInstance) :10
void HomePage__Template__ctor_1_fn(HomePage__Template* __this, ::g::HomePage* parent, ::g::HomePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :18
void HomePage__Template__New1_fn(HomePage__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Rectangle* __self1 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.2666667f));
    __self1->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    __self1->Fill(temp);
    return *__retval = __self1, void();
}

// public Template New(HomePage parent, HomePage parentInstance) :10
void HomePage__Template__New2_fn(::g::HomePage* parent, ::g::HomePage* parentInstance, HomePage__Template** __retval)
{
    *__retval = HomePage__Template::New2(parent, parentInstance);
}

// public Template(HomePage parent, HomePage parentInstance) [instance] :10
void HomePage__Template::ctor_1(::g::HomePage* parent, ::g::HomePage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(HomePage parent, HomePage parentInstance) [static] :10
HomePage__Template* HomePage__Template::New2(::g::HomePage* parent, ::g::HomePage* parentInstance)
{
    HomePage__Template* obj1 = (HomePage__Template*)uNew(HomePage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
