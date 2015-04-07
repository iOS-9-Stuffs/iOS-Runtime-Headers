/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebVideoFullscreenController;

@interface WebVideoFullscreenController : NSObject {
    struct WebVideoFullscreenControllerChangeObserver { 
        int (**_vptr$WebVideoFullscreenChangeObserver)(); 
        WebVideoFullscreenController *_target; 
    } _changeObserver;
    struct RefPtr<WebCore::WebVideoFullscreenInterfaceAVKit> { 
        struct WebVideoFullscreenInterfaceAVKit {} *m_ptr; 
    } _interface;
    struct RefPtr<WebCore::HTMLMediaElement> { 
        struct HTMLMediaElement {} *m_ptr; 
    } _mediaElement;
    struct RefPtr<WebCore::WebVideoFullscreenModelMediaElement> { 
        struct WebVideoFullscreenModelMediaElement {} *m_ptr; 
    } _model;
    struct RetainPtr<CALayer> { 
        void *m_ptr; 
    } _videoFullscreenLayer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didCleanupFullscreen;
- (void)didEnterFullscreen;
- (void)didExitFullscreen;
- (void)didSetupFullscreen;
- (void)enterFullscreen:(id)arg1;
- (void)exitFullscreen;
- (id)init;
- (struct HTMLMediaElement { int (**x1)(); struct Weak<WebCore::JSDOMWrapper> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; struct Node {} *x10; struct Node {} *x11; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl> { struct QualifiedNameImpl {} *x_1_2_1; } x_12_1_1; } x12; struct RefPtr<WebCore::ElementData> { struct ElementData {} *x_13_1_1; } x13; int (**x14)(); int (**x15)(); int (**x16)(); int (**x17)(); struct ScriptExecutionContext {} *x18; unsigned int x19; int (**x20)(); int (**x21)(); int (**x22)(); int (**x23)(); int (**x24)(); int (**x25)(); struct Timer<WebCore::HTMLMediaElement> { int (**x_26_1_1)(); double x_26_1_2; double x_26_1_3; double x_26_1_4; int x_26_1_5; unsigned int x_26_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_26_1_7; struct function<void ()>={type=[12C] {} x_26_1_8; struct __base<void ()> {} *x_26_1_9; } x26; }*)mediaElement;
- (void)requestHideAndExitFullscreen;
- (void)setMediaElement:(struct HTMLMediaElement { int (**x1)(); struct Weak<WebCore::JSDOMWrapper> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; struct Node {} *x10; struct Node {} *x11; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl> { struct QualifiedNameImpl {} *x_1_2_1; } x_12_1_1; } x12; struct RefPtr<WebCore::ElementData> { struct ElementData {} *x_13_1_1; } x13; int (**x14)(); int (**x15)(); int (**x16)(); int (**x17)(); struct ScriptExecutionContext {} *x18; unsigned int x19; int (**x20)(); int (**x21)(); int (**x22)(); int (**x23)(); int (**x24)(); int (**x25)(); struct Timer<WebCore::HTMLMediaElement> { int (**x_26_1_1)(); double x_26_1_2; double x_26_1_3; double x_26_1_4; int x_26_1_5; unsigned int x_26_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_26_1_7; struct function<void ()>={type=[12C] {} x_26_1_8; struct __base<void ()> {} *x_26_1_9; } x26; }*)arg1;

@end