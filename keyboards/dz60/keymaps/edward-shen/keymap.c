#include QMK_KEYBOARD_H

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))

// Macro shortnames

enum custom_keycodes {
  TBLFLP = SAFE_RANGE,
  SHRUG,
  LENNY
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Standard layout
	LAYOUT_60_ansi(
		KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_6,   KC_7,   KC_8,  KC_9,    KC_0,   KC_MINS, KC_EQL,           KC_BSPC,
		KC_TAB ,          KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
		KC_CAPS,          KC_A,    KC_S,    KC_D,   KC_F,    KC_G,   KC_H,   KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSPO,          KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT, KC_SLSH,          KC_RSPC,
		KC_LCTL, KC_LGUI,          KC_LALT,                  KC_SPC,                         TT(1),  MO(2),            KC_APP,  MO(4)),

  // Function layer
  LAYOUT_60_ansi(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_BSPC,
		KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_SYSREQ, KC_DEL,
		KC_TRNS, KC_INS, KC_HOME, KC_PGUP, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_DEL, KC_END, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG(1), KC_TRNS, KC_TRNS, KC_TRNS),

  // Full width lowercase
	LAYOUT_60_ansi(
		KC_TRNS, TBLFLP, SHRUG, LENNY, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, UC(0xFF51), UC(0xFF57), UC(0xFF45), UC(0xFF52), UC(0xFF54), UC(0xFF59), UC(0xFF55), UC(0xFF49), UC(0xFF4F), UC(0xFF50), KC_TRNS, KC_TRNS, KC_TRNS,
		TG(3), UC(0xFF41), UC(0xFF53), UC(0xFF44), UC(0xFF46), UC(0xFF47), UC(0xFF48), UC(0xFF4A), UC(0xFF4B), UC(0xFF4C), KC_TRNS, KC_TRNS, KC_TRNS,
		MO(3), UC(0xFF5A), UC(0xFF58), UC(0xFF43), UC(0xFF56), UC(0xFF42), UC(0xFF4E), UC(0xFF4D), KC_TRNS, KC_TRNS, KC_TRNS, MO(3),
		KC_TRNS, KC_TRNS, KC_TRNS, UC(0x3000), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  // Full width uppercase
	LAYOUT_60_ansi(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, UC(0xFF31), UC(0xFF37), UC(0xFF25), UC(0xFF32), UC(0xFF34), UC(0xFF39), UC(0xFF35), UC(0xFF29), UC(0xFF2F), UC(0xFF30), KC_TRNS, KC_TRNS, KC_TRNS,
	    TG(3), UC(0xFF21), UC(0xFF33), UC(0xFF24), UC(0xFF26), UC(0xFF27), UC(0xFF28), UC(0xFF2A), UC(0xFF2B), UC(0xFF2C), KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, UC(0xFF3A), UC(0xFF38), UC(0xFF23), UC(0xFF36), UC(0xFF22), UC(0xFF2E), UC(0xFF2D), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, UC(0x3000), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  // Keyboard controller keys
	LAYOUT_60_ansi(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC, BL_TOGG, BL_INC, BL_STEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};

// Honestly I don't know what's this used for
// So I'm just casually going to comment it out
// I don't think it was necessary since we don't have per-key lights
/*
void led_set_user(uint8_t usb_led) {
    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
        DDRB |= (1 << 2); PORTB &= ~(1 << 2);
    } else {
        DDRB &= ~(1 << 2); PORTB &= ~(1 << 2);
    }
}
*/

/**
 * Just a shorthand for sending unicode through macros. On every unicode input
 * we need to call two other functions before sending in the keycode, since
 * unicode input is OS dependent.
 */
void send_unicode(uint16_t keycode) {
  unicode_input_start();
  register_hex(keycode);
  unicode_input_finish();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case TBLFLP: // Sends (╯°□°)╯︵┻━┻
                send_unicode(0x0028);
                send_unicode(0x256F);
                send_unicode(0x00B0);
                send_unicode(0x25A1);
                send_unicode(0x00B0);
                send_unicode(0x0029);
                send_unicode(0x256F);
                send_unicode(0xFE35);
                send_unicode(0x253B);
                send_unicode(0x2501);
                send_unicode(0x253B);
                return false;
            case SHRUG: // Sends ¯\_(ツ)_/¯
                send_unicode(0x00AF);
                SEND_STRING("\\_(");
                send_unicode(0x30C4);
                SEND_STRING(")_/");
                send_unicode(0x00AF);
                return false;
            case LENNY: // Sends ( ͡° ͜ʖ ͡°)
                SEND_STRING("( ");
                send_unicode(0x0361);
                send_unicode(0x00B0);
                SEND_STRING(" ");
                send_unicode(0x035C);
                send_unicode(0x0296);
                SEND_STRING(" ");
                send_unicode(0x0361);
                send_unicode(0x00B0);
                SEND_STRING(")");
        }
    }
    return true;
};

/**
 * Things to do for keyboard startup. As of right now, simply set our unicode
 * input method to linux input
 */
void matrix_init_user(void) {
  set_unicode_input_mode(UC_LNX);
}

uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {
    case 0:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case 1:
        rgblight_setrgb (0xFF,  0x00, 0x00);
        break;
    case 2:
        rgblight_setrgb (0x00,  0xFF, 0x00);
        break;
    case 3:
        rgblight_setrgb (0x7A,  0x00, 0xFF);
        break;
    default: //  for any other layers, or the default layer
        rgblight_setrgb (0x00,  0xFF, 0xFF);
        break;
    }
  return state;
}
