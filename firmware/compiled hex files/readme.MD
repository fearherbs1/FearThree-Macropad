Default:  
```

    /* Base */
    [_BASE] = LAYOUT(
        KC_LCTL,    LT(_FN1, KC_C),    LT(_FN2, KC_V)
    ),
    /* FN 1 */
    [_FN1] = LAYOUT(
        RESET, XXXXXXX,  RESET
    ),
    /* FN 2 */
    [_FN2] = LAYOUT(
        PROG, PROG,  XXXXXXX
    )
```

PROG = SEND_STRING("Three keys is all a programmer needs!")  


VIA:   
```
    [0] = LAYOUT(
        KC_LCTL,    KC_C,    LT(1, KC_V)
    ),
    [1] = LAYOUT(
        RESET, XXXXXXX,  XXXXXXX
    ),
    [2] = LAYOUT(
        KC_TRNS, KC_TRNS,  KC_TRNS
    ),
    [3] = LAYOUT(
        KC_TRNS, KC_TRNS,  KC_TRNS
    )

```
