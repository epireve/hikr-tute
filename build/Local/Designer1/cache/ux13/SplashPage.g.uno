[Uno.Compiler.UxGenerated]
public partial class SplashPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb3"
    };
    static SplashPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SplashPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("goToHomePage");
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.Video();
        var temp3 = new global::Fuse.Controls.Grid();
        var temp4 = new global::Fuse.Controls.StackPanel();
        var temp5 = new global::hikr.Text();
        var temp6 = new global::hikr.Text();
        var temp7 = new global::hikr.Button();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp);
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/SplashPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/SplashPage.js"));
        temp2.IsLooping = true;
        temp2.AutoPlay = true;
        temp2.Layer = Fuse.Layer.Background;
        temp2.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/nature.mp4"));
        temp3.RowCount = 2;
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp7);
        temp4.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp6);
        temp5.Value = "Hikr";
        temp5.FontSize = 70f;
        temp5.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp6.Value = "Get Out There!";
        temp6.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp6.Opacity = 0.5f;
        temp7.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp7.Margin = float4(50f, 0f, 50f, 0f);
        temp7.Text = "Get Started";
        temp7.FontSize = 18f;
        global::Fuse.Gestures.Clicked.AddHandler(temp7, temp_eb3.OnEvent);
        temp7.Bindings.Add(temp_eb3);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb3);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
}
