[Uno.Compiler.UxGenerated]
public partial class HomePage: hikr.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly HomePage __parent;
        [Uno.WeakReference] internal readonly HomePage __parentInstance;
        public Template(HomePage parent, HomePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Rectangle();
            var temp = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 0.2666667f));
            __self.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
            __self.Fill = temp;
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly HomePage __parent;
        [Uno.WeakReference] internal readonly HomePage __parentInstance;
        public Template1(HomePage parent, HomePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string  temp_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb2;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Panel();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new hikr_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("name");
            var temp2 = new global::Fuse.Reactive.Data("goToHike");
            var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp4 = new global::Fuse.Gestures.WhilePressed();
            var temp5 = new global::Fuse.Animations.Scale();
            temp_eb2 = new global::Fuse.Reactive.EventBinding(temp2);
            __self.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
            __self.Margin = float4(0f, 0f, 0f, 0f);
            __self.Padding = float4(0f, 0f, 0f, 0f);
            __self.Opacity = 0.635f;
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb2.OnEvent);
            temp.Color = Fuse.Drawing.Colors.White;
            temp.Margin = float4(20f, 20f, 20f, 20f);
            temp.Bindings.Add(temp3);
            temp4.Animators.Add(temp5);
            temp5.Factor = 0.95f;
            temp5.Duration = 0.08;
            temp5.Easing = Fuse.Animations.Easing.QuadraticOut;
            __self.Children.Add(temp);
            __self.Children.Add(temp4);
            __self.Bindings.Add(temp_eb2);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    global::Uno.UX.Property<object  temp_Items_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static HomePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public HomePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new hikr_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("hikes");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.DockPanel();
        var temp4 = new global::hikr.Text();
        var temp5 = new global::Fuse.Controls.ScrollView();
        var temp6 = new global::Fuse.Controls.StackPanel();
        var temp7 = new Template(this, this);
        var temp8 = new Template1(this, this);
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Controls.Rectangle();
        var temp11 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 0.2666667f));
        temp2.LineNumber = 4;
        temp2.FileName = "Pages/HomePage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import("../../Pages/HomePage.js"));
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp4.Value = "Recent Hikes";
        temp4.FontSize = 30f;
        temp4.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp4.Margin = float4(0f, 50f, 0f, 50f);
        global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Top);
        temp5.Children.Add(temp6);
        temp6.Children.Add(temp);
        temp6.Children.Add(temp10);
        temp.Templates.Add(temp7);
        temp.Templates.Add(temp8);
        temp.Bindings.Add(temp9);
        temp10.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp10.Fill = temp11;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}
