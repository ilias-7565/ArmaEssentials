class ctrlEdit;
class Cfg3DEN {
    class Attributes {
        class Default;
        class Title: Default {
            class Controls {
                class Title;
            };
        };
        class Slider: Title {
            class Controls: Controls {
                class Title;
                class Value;
                class Edit;
            };
        };
        class SliderMultiplier: Slider {
            class Controls: Controls {
                class Title;
                class Value;
                class Edit;
            };
        };
        class GVAR(Slider): SliderMultiplier {
            class Controls: Controls {
                class Title: Title {
                };
                class Value: Value {
                    sliderRange[] = {0.6, 1.4};
                };
                class Edit: Edit {
                };
            };
        };
    };
    class Object {
        class AttributeCategories {
            class GVAR(attributes) {
                displayName = "GreenMag";
                collapsed = 1;
                class Attributes {
                    class GVAR(MagSkillCoef) {
                        displayName = CSTRING(eden_MagSkillCoef);
                        tooltip = CSTRING(eden_MagSkillCoef_tool);
                        property = QGVAR(MagSkillCoef);
                        control = QGVAR(Slider);

                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(MagSkillCoef),parseNumber (_value toFixed 1),true)]);
                        defaultValue = 1;

                        unique = 0;
                        condition = "objectControllable";
                        typeName = "NUMBER";
                    };
                    class GVAR(BeltSkillCoef) {
                        displayName = CSTRING(eden_BeltSkillCoef);
                        tooltip = CSTRING(eden_BeltSkillCoef_tool);
                        property = QGVAR(BeltSkillCoef);
                        control = QGVAR(Slider);

                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(BeltSkillCoef),parseNumber (_value toFixed 1),true)]);
                        defaultValue = 1;

                        unique = 0;
                        condition = "objectControllable";
                        typeName = "NUMBER";
                    };
                };
            };
        };
    };
};
