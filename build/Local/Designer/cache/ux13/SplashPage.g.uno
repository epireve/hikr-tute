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
        var temp2 = new global::Fuse.Controls.Grid();
        var temp3 = new global::Fuse.Controls.StackPanel();
        var temp4 = new global::hikr.Text();
        var temp5 = new global::hikr.Text();
        var temp6 = new global::hikr.Button();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp);
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/SplashPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/SplashPage.js"));
        temp2.RowCount = 2;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp6);
        temp3.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp4.Value = "Hikr";
        temp4.FontSize = 70f;
        temp4.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp5.Value = "Get Out There!";
        temp5.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp5.Opacity = 0.5f;
        temp6.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp6.Margin = float4(50f, 0f, 50f, 0f);
        temp6.Text = "Get Started";
        temp6.FontSize = 18f;
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb3.OnEvent);
        temp6.Bindings.Add(temp_eb3);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb3);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
