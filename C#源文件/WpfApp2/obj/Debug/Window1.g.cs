#pragma checksum "..\..\Window1.xaml" "{8829d00f-11b8-4213-878b-770e8597ac16}" "F988F96E3D009B3EC63300FBA8809BFA04F1F88EB23D870F02C7EC8089A8B409"
//------------------------------------------------------------------------------
// <auto-generated>
//     此代码由工具生成。
//     运行时版本:4.0.30319.42000
//
//     对此文件的更改可能会导致不正确的行为，并且如果
//     重新生成代码，这些更改将会丢失。
// </auto-generated>
//------------------------------------------------------------------------------

using System;
using System.Diagnostics;
using System.Windows;
using System.Windows.Automation;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Media.Effects;
using System.Windows.Media.Imaging;
using System.Windows.Media.Media3D;
using System.Windows.Media.TextFormatting;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Shell;
using WpfApp2;


namespace WpfApp2 {
    
    
    /// <summary>
    /// Window1
    /// </summary>
    public partial class Window1 : System.Windows.Window, System.Windows.Markup.IComponentConnector {
        
        
        #line 9 "..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Grid Window2;
        
        #line default
        #line hidden
        
        
        #line 14 "..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox T1;
        
        #line default
        #line hidden
        
        
        #line 15 "..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox T2;
        
        #line default
        #line hidden
        
        
        #line 16 "..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox T3;
        
        #line default
        #line hidden
        
        
        #line 17 "..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox T4;
        
        #line default
        #line hidden
        
        
        #line 18 "..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.DatePicker T5;
        
        #line default
        #line hidden
        
        
        #line 19 "..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.DatePicker T6;
        
        #line default
        #line hidden
        
        
        #line 20 "..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.CheckBox Checkbox1;
        
        #line default
        #line hidden
        
        
        #line 21 "..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.CheckBox Checkbox2;
        
        #line default
        #line hidden
        
        
        #line 22 "..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Label L1;
        
        #line default
        #line hidden
        
        
        #line 23 "..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Label L2;
        
        #line default
        #line hidden
        
        private bool _contentLoaded;
        
        /// <summary>
        /// InitializeComponent
        /// </summary>
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "4.0.0.0")]
        public void InitializeComponent() {
            if (_contentLoaded) {
                return;
            }
            _contentLoaded = true;
            System.Uri resourceLocater = new System.Uri("/静默拷文件;component/window1.xaml", System.UriKind.Relative);
            
            #line 1 "..\..\Window1.xaml"
            System.Windows.Application.LoadComponent(this, resourceLocater);
            
            #line default
            #line hidden
        }
        
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "4.0.0.0")]
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Never)]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Design", "CA1033:InterfaceMethodsShouldBeCallableByChildTypes")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1800:DoNotCastUnnecessarily")]
        void System.Windows.Markup.IComponentConnector.Connect(int connectionId, object target) {
            switch (connectionId)
            {
            case 1:
            
            #line 8 "..\..\Window1.xaml"
            ((WpfApp2.Window1)(target)).Loaded += new System.Windows.RoutedEventHandler(this.Window_Loaded);
            
            #line default
            #line hidden
            return;
            case 2:
            this.Window2 = ((System.Windows.Controls.Grid)(target));
            return;
            case 3:
            this.T1 = ((System.Windows.Controls.TextBox)(target));
            
            #line 14 "..\..\Window1.xaml"
            this.T1.LostFocus += new System.Windows.RoutedEventHandler(this.T1_LostFocus);
            
            #line default
            #line hidden
            
            #line 14 "..\..\Window1.xaml"
            this.T1.TextChanged += new System.Windows.Controls.TextChangedEventHandler(this.T1_TextChanged);
            
            #line default
            #line hidden
            return;
            case 4:
            this.T2 = ((System.Windows.Controls.TextBox)(target));
            
            #line 15 "..\..\Window1.xaml"
            this.T2.LostFocus += new System.Windows.RoutedEventHandler(this.T2_LostFocus);
            
            #line default
            #line hidden
            
            #line 15 "..\..\Window1.xaml"
            this.T2.TextChanged += new System.Windows.Controls.TextChangedEventHandler(this.T2_TextChanged);
            
            #line default
            #line hidden
            return;
            case 5:
            this.T3 = ((System.Windows.Controls.TextBox)(target));
            
            #line 16 "..\..\Window1.xaml"
            this.T3.LostFocus += new System.Windows.RoutedEventHandler(this.T3_LostFocus);
            
            #line default
            #line hidden
            return;
            case 6:
            this.T4 = ((System.Windows.Controls.TextBox)(target));
            
            #line 17 "..\..\Window1.xaml"
            this.T4.LostFocus += new System.Windows.RoutedEventHandler(this.T4_LostFocus);
            
            #line default
            #line hidden
            return;
            case 7:
            this.T5 = ((System.Windows.Controls.DatePicker)(target));
            return;
            case 8:
            this.T6 = ((System.Windows.Controls.DatePicker)(target));
            return;
            case 9:
            this.Checkbox1 = ((System.Windows.Controls.CheckBox)(target));
            
            #line 20 "..\..\Window1.xaml"
            this.Checkbox1.Checked += new System.Windows.RoutedEventHandler(this.Checkbox1_Checked);
            
            #line default
            #line hidden
            
            #line 20 "..\..\Window1.xaml"
            this.Checkbox1.Unchecked += new System.Windows.RoutedEventHandler(this.Checkbox1_Unchecked);
            
            #line default
            #line hidden
            return;
            case 10:
            this.Checkbox2 = ((System.Windows.Controls.CheckBox)(target));
            
            #line 21 "..\..\Window1.xaml"
            this.Checkbox2.Checked += new System.Windows.RoutedEventHandler(this.Checkbox2_Checked);
            
            #line default
            #line hidden
            
            #line 21 "..\..\Window1.xaml"
            this.Checkbox2.Unchecked += new System.Windows.RoutedEventHandler(this.Checkbox2_Unchecked);
            
            #line default
            #line hidden
            return;
            case 11:
            this.L1 = ((System.Windows.Controls.Label)(target));
            return;
            case 12:
            this.L2 = ((System.Windows.Controls.Label)(target));
            return;
            case 13:
            
            #line 26 "..\..\Window1.xaml"
            ((System.Windows.Controls.Button)(target)).Click += new System.Windows.RoutedEventHandler(this.Button_Click_1);
            
            #line default
            #line hidden
            return;
            case 14:
            
            #line 27 "..\..\Window1.xaml"
            ((System.Windows.Controls.Button)(target)).Click += new System.Windows.RoutedEventHandler(this.Button_Click);
            
            #line default
            #line hidden
            return;
            }
            this._contentLoaded = true;
        }
    }
}

