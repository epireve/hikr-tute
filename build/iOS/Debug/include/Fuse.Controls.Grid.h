// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.4.2/Grid.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h 
#include <Fuse.Binding.h 
#include <Fuse.Controls.Panel.h 
#include <Fuse.Drawing.ISurfaceDrawable.h 
#include <Fuse.IActualPlacement.h 
#include <Fuse.INotifyUnrooted.h 
#include <Fuse.IProperties.h 
#include <Fuse.ITemplateSource.h 
#include <Fuse.Node.h 
#include <Fuse.Scripting.IScriptObject.h 
#include <Fuse.Triggers.Actions.ICollapse.h 
#include <Fuse.Triggers.Actions.IHide.h 
#include <Fuse.Triggers.Actions.IShow.h 
#include <Fuse.Visual.h 
#include <Uno.Collections.ICollection-1.h 
#include <Uno.Collections.IEnumerable-1.h 
#include <Uno.Collections.IList-1.h 
#include <Uno.UX.IPropertyListener.h 
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Layouts{struct GridLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Grid :59
// {
::g::Fuse::Controls::Panel_type* Grid_typeof();
void Grid__ctor_7_fn(Grid* __this);
void Grid__get_ColumnCount_fn(Grid* __this, int* __retval);
void Grid__set_ColumnCount_fn(Grid* __this, int* value);
void Grid__New4_fn(Grid** __retval);
void Grid__get_RowCount_fn(Grid* __this, int* __retval);
void Grid__set_RowCount_fn(Grid* __this, int* value);

struct Grid : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::GridLayout*  _gridLayout;

    void ctor_7();
    int ColumnCount();
    void ColumnCount(int value);
    int RowCount();
    void RowCount(int value);
    static Grid* New4();
};
// }

}}} // ::g::Fuse::Controls
