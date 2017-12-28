// This file was generated based on '.uno/ux13/HomePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_FuseControlsButtonBase_Text_Property.h>
#include <_root.HomePage.h>
#include <_root.HomePage.Template.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[3];
static uType* TYPES[2];

namespace g{

// public partial sealed class HomePage.Template :6
// {
// static Template() :17
static void HomePage__Template__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    HomePage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void HomePage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::STRINGS[1] = uString::Const("name");
    ::STRINGS[2] = uString::Const("goToHike");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::HomePage_typeof(), offsetof(HomePage__Template, __parent1), uFieldFlagsWeak,
        ::g::HomePage_typeof(), offsetof(HomePage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(HomePage__Template, __self_Text_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(HomePage__Template, temp_eb1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HomePage__Template::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* HomePage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
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

// public override sealed object New() :20
void HomePage__Template__New1_fn(HomePage__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Button* __self1 = ::g::Fuse::Controls::Button::New5();
    __this->__self_Text_inst1 = ::g::hikr_FuseControlsButtonBase_Text_Property::New1(__self1, HomePage__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"name"*/]);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"goToHike"*/]);
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Text_inst1, (uObject*)temp, 3);
    __this->temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb1);
    return *__retval = __self1, void();
}

// public Template New(HomePage parent, HomePage parentInstance) :10
void HomePage__Template__New2_fn(::g::HomePage* parent, ::g::HomePage* parentInstance, HomePage__Template** __retval)
{
    *__retval = HomePage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector HomePage__Template::__selector0_;

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
