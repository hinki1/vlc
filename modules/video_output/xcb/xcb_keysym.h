    /* This list MUST be in XK_* incremental order (see keysymdef.h),
     * so that binary search works.
     * Multiple X keys can match the same VLC key.
     * X key symbols must be in the first column of the struct. */
        { XK_BackSpace,     KEY_BACKSPACE, },
        { XK_Tab,           KEY_TAB, },
        { XK_Return,        KEY_ENTER, },
        { XK_Pause,         KEY_PAUSE },
        { XK_Escape,        KEY_ESC, },
        { XK_Home,          KEY_HOME, },
        { XK_Left,          KEY_LEFT, },
        { XK_Up,            KEY_UP, },
        { XK_Right,         KEY_RIGHT, },
        { XK_Down,          KEY_DOWN, },
        { XK_Page_Up,       KEY_PAGEUP, },
        { XK_Page_Down,     KEY_PAGEDOWN, },
        { XK_End,           KEY_END, },
        { XK_Begin,         KEY_HOME, },
        { XK_Print,         KEY_PRINT },
        { XK_Insert,        KEY_INSERT, },
        { XK_Menu,          KEY_MENU },
        { XK_Cancel,        KEY_BROWSER_STOP },

        /* Numeric pad keys */
        { XK_KP_Space,      ' ', },
        { XK_KP_Tab,        KEY_TAB, },
        { XK_KP_Enter,      KEY_ENTER, },
        { XK_KP_F1,         KEY_F1, },
        { XK_KP_F2,         KEY_F2, },
        { XK_KP_F3,         KEY_F3, },
        { XK_KP_F4,         KEY_F4, },
        { XK_KP_Home,       KEY_HOME, },
        { XK_KP_Left,       KEY_LEFT, },
        { XK_KP_Up,         KEY_UP, },
        { XK_KP_Right,      KEY_RIGHT, },
        { XK_KP_Down,       KEY_DOWN, },
        { XK_KP_Page_Up,    KEY_PAGEUP, },
        { XK_KP_Page_Down,  KEY_PAGEDOWN, },
        { XK_KP_End,        KEY_END, },
        { XK_KP_Begin,      KEY_HOME, }, /* KP middle (5 without numlock) */
        { XK_KP_Insert,     KEY_INSERT, },
        { XK_KP_Delete,     KEY_DELETE, },
        { XK_KP_Multiply,   '*', },
        { XK_KP_Add,        '+', },
        { XK_KP_Separator,  ',', },
        { XK_KP_Subtract,   '-', },
        { XK_KP_Decimal,    ',', }, /* FIXME: I don't know that key */
        { XK_KP_Divide,     '/', },
        { XK_KP_0,          '0', },
        { XK_KP_1,          '1', },
        { XK_KP_2,          '2', },
        { XK_KP_3,          '3', },
        { XK_KP_4,          '4', },
        { XK_KP_5,          '5', },
        { XK_KP_6,          '6', },
        { XK_KP_7,          '7', },
        { XK_KP_8,          '8', },
        { XK_KP_9,          '9', },
        { XK_KP_Equal,      '=', },

        { XK_F1,            KEY_F1, },
        { XK_F2,            KEY_F2, },
        { XK_F3,            KEY_F3, },
        { XK_F4,            KEY_F4, },
        { XK_F5,            KEY_F5, },
        { XK_F6,            KEY_F6, },
        { XK_F7,            KEY_F7, },
        { XK_F8,            KEY_F8, },
        { XK_F9,            KEY_F9, },
        { XK_F10,           KEY_F10, },
        { XK_F11,           KEY_F11, },
        { XK_F12,           KEY_F12, },
        { XK_Delete,        KEY_DELETE, },

        /* XFree86 extensions */
        { XF86XK_MonBrightnessUp,  KEY_BRIGHTNESS_UP },
        { XF86XK_MonBrightnessDown, KEY_BRIGHTNESS_DOWN },
        { XF86XK_AudioLowerVolume, KEY_VOLUME_DOWN, },
        { XF86XK_AudioMute,        KEY_VOLUME_MUTE, },
        { XF86XK_AudioRaiseVolume, KEY_VOLUME_UP, },
        { XF86XK_AudioPlay,        KEY_MEDIA_PLAY_PAUSE, },
        { XF86XK_AudioStop,        KEY_MEDIA_STOP, },
        { XF86XK_AudioPrev,        KEY_MEDIA_PREV_TRACK, },
        { XF86XK_AudioNext,        KEY_MEDIA_NEXT_TRACK, },
        { XF86XK_HomePage,         KEY_BROWSER_HOME, },
        { XF86XK_Search,           KEY_BROWSER_SEARCH, },
        { XF86XK_AudioRecord,      KEY_MEDIA_RECORD, },
        { XF86XK_Back,             KEY_BROWSER_BACK, },
        { XF86XK_Forward,          KEY_BROWSER_FORWARD, },
        { XF86XK_Stop,             KEY_BROWSER_STOP, },
        { XF86XK_Refresh,          KEY_BROWSER_REFRESH, },
        { XF86XK_Favorites,        KEY_BROWSER_FAVORITES, },
        { XF86XK_AudioPause,       KEY_MEDIA_PLAY_PAUSE, },
        { XF86XK_AudioRewind,      KEY_MEDIA_REWIND, },
        { XF86XK_Reload,           KEY_BROWSER_REFRESH, },
        { XF86XK_ZoomIn,           KEY_ZOOM_IN, },
        { XF86XK_ZoomOut,          KEY_ZOOM_OUT, },
        { XF86XK_AudioForward,     KEY_MEDIA_FORWARD, },
        { XF86XK_AudioRepeat,      KEY_MEDIA_REPEAT, },
        { XF86XK_AudioRandomPlay,  KEY_MEDIA_SHUFFLE, },
        { XF86XK_Subtitle,         KEY_MEDIA_SUBTITLE, },
        { XF86XK_AudioCycleTrack,  KEY_MEDIA_AUDIO, },
        { XF86XK_CycleAngle,       KEY_MEDIA_ANGLE, },
        { XF86XK_FrameBack,        KEY_MEDIA_FRAME_PREV, },
        { XF86XK_FrameForward,     KEY_MEDIA_FRAME_NEXT, },
        { XF86XK_Time,             KEY_MEDIA_TIME, },
        { XF86XK_Select,           KEY_MEDIA_SELECT, },
        { XF86XK_View,             KEY_MEDIA_VIEW, },
        { XF86XK_TopMenu,          KEY_MEDIA_MENU, },
