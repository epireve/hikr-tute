// This file was generated based on hikr.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[3];

namespace g{

// public static generated class hikr_bundle :0
// {
// static hikr_bundle() :0
static void hikr_bundle__cctor__fn(uType* __type)
{
    hikr_bundle::EditHikePage90aa522b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[1/*"edithikepag...*/]);
    hikr_bundle::HomePagebf85d50f_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[2/*"homepage-a6...*/]);
}

static void hikr_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("hikr");
    ::STRINGS[1] = uString::Const("edithikepage-c2b43310.js");
    ::STRINGS[2] = uString::Const("homepage-a66ffa00.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&hikr_bundle::EditHikePage90aa522b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&hikr_bundle::HomePagebf85d50f_, uFieldFlagsStatic);
}

uClassType* hikr_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("hikr_bundle", options);
    type->fp_build_ = hikr_bundle_build;
    type->fp_cctor_ = hikr_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::EditHikePage90aa522b_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::HomePagebf85d50f_;
// }

} // ::g
