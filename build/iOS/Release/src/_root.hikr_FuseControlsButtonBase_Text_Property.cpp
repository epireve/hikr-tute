// This file was generated based on '.uno/ux13/hikr.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_FuseControlsButtonBase_Text_Property.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class hikr_FuseControlsButtonBase_Text_Property :27
// {
static void hikr_FuseControlsButtonBase_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::ButtonBase_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.ButtonBase*/], offsetof(hikr_FuseControlsButtonBase_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* hikr_FuseControlsButtonBase_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(hikr_FuseControlsButtonBase_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("hikr_FuseControlsButtonBase_Text_Property", options);
    type->fp_build_ = hikr_FuseControlsButtonBase_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))hikr_FuseControlsButtonBase_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))hikr_FuseControlsButtonBase_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))hikr_FuseControlsButtonBase_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))hikr_FuseControlsButtonBase_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public hikr_FuseControlsButtonBase_Text_Property(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) :30
void hikr_FuseControlsButtonBase_Text_Property__ctor_3_fn(hikr_FuseControlsButtonBase_Text_Property* __this, ::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :32
void hikr_FuseControlsButtonBase_Text_Property__Get1_fn(hikr_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[0/*Fuse.Controls.ButtonBase*/]))->Text(), void();
}

// public hikr_FuseControlsButtonBase_Text_Property New(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) :30
void hikr_FuseControlsButtonBase_Text_Property__New1_fn(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector* name, hikr_FuseControlsButtonBase_Text_Property** __retval)
{
    *__retval = hikr_FuseControlsButtonBase_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :31
void hikr_FuseControlsButtonBase_Text_Property__get_Object_fn(hikr_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :33
void hikr_FuseControlsButtonBase_Text_Property__Set1_fn(hikr_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[0/*Fuse.Controls.ButtonBase*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :34
void hikr_FuseControlsButtonBase_Text_Property__get_SupportsOriginSetter_fn(hikr_FuseControlsButtonBase_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public hikr_FuseControlsButtonBase_Text_Property(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) [instance] :30
void hikr_FuseControlsButtonBase_Text_Property::ctor_3(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public hikr_FuseControlsButtonBase_Text_Property New(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) [static] :30
hikr_FuseControlsButtonBase_Text_Property* hikr_FuseControlsButtonBase_Text_Property::New1(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector name)
{
    hikr_FuseControlsButtonBase_Text_Property* obj1 = (hikr_FuseControlsButtonBase_Text_Property*)uNew(hikr_FuseControlsButtonBase_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
