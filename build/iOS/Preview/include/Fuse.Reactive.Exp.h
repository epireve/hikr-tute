// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.2/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFloatOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Exp;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Exp :327
// {
::g::Fuse::Reactive::UnaryOperator_type* Exp_typeof();
void Exp__ctor_3_fn(Exp* __this, ::g::Fuse::Reactive::Expression* operand);
void Exp__New1_fn(::g::Fuse::Reactive::Expression* operand, Exp** __retval);

struct Exp : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* operand);
    static Exp* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
