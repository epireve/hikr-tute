// This file was generated based on /dev.local/hikr/hikr.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[6];

namespace g{

// public static generated class hikr_bundle :0
// {
// static hikr_bundle() :0
static void hikr_bundle__cctor__fn(uType* __type)
{
    hikr_bundle::background6d136236_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[1/*"background-...*/]);
    hikr_bundle::EditHikePage90aa522b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[2/*"edithikepag...*/]);
    hikr_bundle::HomePagebf85d50f_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[3/*"homepage-a6...*/]);
    hikr_bundle::nature69d04e3d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[4/*"nature-15b9...*/]);
    hikr_bundle::SplashPage49bc05f9_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[5/*"splashpage-...*/]);
}

static void hikr_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("hikr");
    ::STRINGS[1] = uString::Const("background-01212485.jpg");
    ::STRINGS[2] = uString::Const("edithikepage-c2b43310.js");
    ::STRINGS[3] = uString::Const("homepage-a66ffa00.js");
    ::STRINGS[4] = uString::Const("nature-15b9e892.mp4");
    ::STRINGS[5] = uString::Const("splashpage-7fac3464.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&hikr_bundle::background6d136236_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&hikr_bundle::EditHikePage90aa522b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&hikr_bundle::HomePagebf85d50f_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&hikr_bundle::nature69d04e3d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&hikr_bundle::SplashPage49bc05f9_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("background6d136236", 0),
        new uField("EditHikePage90aa522b", 1),
        new uField("HomePagebf85d50f", 2),
        new uField("nature69d04e3d", 3),
        new uField("SplashPage49bc05f9", 4));
}

uClassType* hikr_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("hikr_bundle", options);
    type->fp_build_ = hikr_bundle_build;
    type->fp_cctor_ = hikr_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::background6d136236_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::EditHikePage90aa522b_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::HomePagebf85d50f_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::nature69d04e3d_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::SplashPage49bc05f9_;
// }

} // ::g
