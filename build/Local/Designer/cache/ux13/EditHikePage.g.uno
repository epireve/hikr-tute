[Uno.Compiler.UxGenerated]
public partial class EditHikePage: Fuse.Controls.Page
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<string> temp5_Value_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static EditHikePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EditHikePage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new hikr_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp6 = new global::Fuse.Reactive.Data("name");
        var temp1 = new global::Fuse.Controls.TextBox();
        temp1_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp7 = new global::Fuse.Reactive.Data("name");
        var temp2 = new global::Fuse.Controls.TextBox();
        temp2_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp2, __selector0);
        var temp8 = new global::Fuse.Reactive.Data("location");
        var temp3 = new global::Fuse.Controls.TextBox();
        temp3_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp3, __selector0);
        var temp9 = new global::Fuse.Reactive.Data("distance");
        var temp4 = new global::Fuse.Controls.TextBox();
        temp4_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp4, __selector0);
        var temp10 = new global::Fuse.Reactive.Data("rating");
        var temp5 = new global::Fuse.Controls.TextBox();
        temp5_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp5, __selector0);
        var temp11 = new global::Fuse.Reactive.Data("comments");
        var temp12 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp13 = new global::Fuse.Controls.ScrollView();
        var temp14 = new global::Fuse.Controls.StackPanel();
        var temp15 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Controls.Text();
        var temp17 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp18 = new global::Fuse.Controls.Text();
        var temp19 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
        var temp20 = new global::Fuse.Controls.Text();
        var temp21 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp9, Fuse.Reactive.BindingMode.Default);
        var temp22 = new global::Fuse.Controls.Text();
        var temp23 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Controls.Text();
        var temp25 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp11, Fuse.Reactive.BindingMode.Default);
        temp12.LineNumber = 2;
        temp12.FileName = "Pages/EditHikePage.ux";
        temp12.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/EditHikePage.js"));
        temp13.Children.Add(temp14);
        temp14.Children.Add(temp);
        temp14.Children.Add(temp16);
        temp14.Children.Add(temp1);
        temp14.Children.Add(temp18);
        temp14.Children.Add(temp2);
        temp14.Children.Add(temp20);
        temp14.Children.Add(temp3);
        temp14.Children.Add(temp22);
        temp14.Children.Add(temp4);
        temp14.Children.Add(temp24);
        temp14.Children.Add(temp5);
        temp.Bindings.Add(temp15);
        temp16.Value = "Name:";
        temp1.Bindings.Add(temp17);
        temp18.Value = "Location:";
        temp2.Bindings.Add(temp19);
        temp20.Value = "Distance:";
        temp3.Bindings.Add(temp21);
        temp22.Value = "Rating (1-5):";
        temp4.Bindings.Add(temp23);
        temp24.Value = "Comments:";
        temp5.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp5.Bindings.Add(temp25);
        __g_nametable.This = this;
        this.Children.Add(temp12);
        this.Children.Add(temp13);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
