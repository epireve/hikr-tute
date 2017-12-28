namespace hikr
{
    [Uno.Compiler.UxGenerated]
    public partial class Button: Fuse.Controls.Panel
    {
        string _field_Text;
        [global::Uno.UX.UXOriginSetter("SetText")]
        public string Text
        {
            get { return _field_Text; }
            set { SetText(value, null); }
        }
        public void SetText(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Text)
            {
                _field_Text = value;
                OnPropertyChanged("Text", origin);
            }
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        static Button()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Button()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp1 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::hikr.Text();
            temp_Value_inst = new hikr_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Property(temp1, hikr_accessor_hikr_Button_Text.Singleton);
            var temp3 = new global::Fuse.Controls.Rectangle();
            var temp4 = new global::Fuse.Effects.DropShadow();
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
            var temp6 = new global::Fuse.Gestures.WhilePressed();
            var temp7 = new global::Fuse.Animations.Scale();
            this.Margin = float4(10f, 10f, 10f, 10f);
            this.Padding = float4(10f, 10f, 10f, 10f);
            temp3.CornerRadius = float4(4f, 4f, 4f, 4f);
            temp3.Color = float4(0.07058824f, 0.372549f, 0.3882353f, 1f);
            temp3.Layer = Fuse.Layer.Background;
            temp3.Children.Add(temp4);
            temp4.Size = 2f;
            temp4.Angle = 90f;
            temp4.Distance = 1f;
            temp4.Spread = 0.2f;
            temp4.Color = float4(0f, 0f, 0f, 0.3764706f);
            temp.FontSize = 16f;
            temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp.Bindings.Add(temp5);
            temp6.Animators.Add(temp7);
            temp7.Factor = 0.95f;
            temp7.Duration = 0.08;
            temp7.Easing = Fuse.Animations.Easing.QuadraticOut;
            this.Children.Add(temp3);
            this.Children.Add(temp);
            this.Children.Add(temp6);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
}
