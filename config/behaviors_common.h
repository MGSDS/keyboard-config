#pragma once

/ {
    behaviors {
        hrml: hrml {
            compatible = "zmk,behavior-hold-tap";
            label = "HRML";
            bindings = <&kp>, <&kp>;

            #binding-cells = <2>;
            flavor = "balanced";
            tapping-term-ms = <200>;
            quick-tap-ms = <175>;
            require-prior-idle-ms = <125>;
            hold-trigger-key-positions = <RHK THK>;
            hold-trigger-on-release;
        };

        hrmr: hrmr {
            compatible = "zmk,behavior-hold-tap";
            label = "HRMR";
            bindings = <&kp>, <&kp>;

            #binding-cells = <2>;
            flavor = "balanced";
            tapping-term-ms = <200>;
            quick-tap-ms = <175>;
            require-prior-idle-ms = <125>;
            hold-trigger-key-positions = <LHK THK>;
            hold-trigger-on-release;
        };

        hrpl: hrpl {
            compatible = "zmk,behavior-hold-tap";
            label = "HRPL";
            bindings = <&kp>, <&kp>;

            #binding-cells = <2>;
            flavor = "balanced";
            tapping-term-ms = <250>;
            quick-tap-ms = <175>;
            require-prior-idle-ms = <125>;
            hold-trigger-key-positions = <RHK THK>;
            hold-trigger-on-release;
        };

        hrpr: hrpr {
            compatible = "zmk,behavior-hold-tap";
            label = "HRPR";
            bindings = <&kp>, <&kp>;

            #binding-cells = <2>;
            flavor = "balanced";
            tapping-term-ms = <250>;
            quick-tap-ms = <175>;
            require-prior-idle-ms = <125>;
            hold-trigger-key-positions = <LHK THK>;
            hold-trigger-on-release;
        };
    };
};
