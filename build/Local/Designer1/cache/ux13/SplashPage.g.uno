[Uno.Compiler.UxGenerated]
public partial class SplashPage: Fuse.Controls.Page
{
    static SplashPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SplashPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Grid();
        var temp1 = new global::Fuse.Controls.StackPanel();
        var temp2 = new global::hikr.Text();
        var temp3 = new global::hikr.Text();
        var temp4 = new global::hikr.Button();
        temp.RowCount = 2;
        temp.Children.Add(temp1);
        temp.Children.Add(temp4);
        temp1.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp1.Children.Add(temp2);
        temp1.Children.Add(temp3);
        temp2.Value = "Hikr";
        temp2.FontSize = 70f;
        temp2.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp3.Value = "Get Out There!";
        temp3.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp3.Opacity = 0.5f;
        temp4.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp4.Margin = float4(50f, 0f, 50f, 0f);
        temp4.Text = "Get Started";
        temp4.FontSize = 18f;
        this.Children.Add(temp);
    }
}
