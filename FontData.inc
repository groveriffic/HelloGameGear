; Tiles with font data
;
; $00 -- " "
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $01 -- "!"
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $02 -- """
.db %01101100, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $03 -- "#"
.db %00110110, %00000000, %00000000, %00000000
.db %00110110, %00000000, %00000000, %00000000
.db %01111111, %00000000, %00000000, %00000000
.db %00110110, %00000000, %00000000, %00000000
.db %01111111, %00000000, %00000000, %00000000
.db %00110110, %00000000, %00000000, %00000000
.db %00110110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $04 -- "$"
.db %00001100, %00000000, %00000000, %00000000
.db %00111111, %00000000, %00000000, %00000000
.db %01101000, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %00001011, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $05 -- "$"
.db %01100000, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $06 -- "&"
.db %00111000, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %00111000, %00000000, %00000000, %00000000
.db %01101101, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111011, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $07 -- "'"
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $08 -- "("
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $09 -- ")"
.db %00110000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $0a -- "*"
.db %00000000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $0b -- "+"
.db %00000000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $0c -- ","
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000

; $0d -- "-"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $0e -- "."
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $0f -- "/"
.db %00000000, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $10 -- "0"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01101110, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %01110110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $11 -- "1"
.db %00011000, %00000000, %00000000, %00000000
.db %00111000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $12 -- "2"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $13 -- "3"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00011100, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $14 -- "4"
.db %00001100, %00000000, %00000000, %00000000
.db %00011100, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $15 -- "5"
.db %01111110, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $16 -- "6"
.db %00011100, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $17 -- "7"
.db %01111110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $18 -- "8"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $19 -- "9"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00111000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $1a -- ":"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $1b -- ";"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000

; $1c -- "<"
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $1d -- "="
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $1e -- ">"
.db %00110000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $1f -- "?"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $20 -- "@"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01101110, %00000000, %00000000, %00000000
.db %01101010, %00000000, %00000000, %00000000
.db %01101110, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $21 -- "A"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $22 -- "B"
.db %01111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $23 -- "C"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $24 -- "D"
.db %01111000, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %01111000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $25 -- "E"
.db %01111110, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $26 -- "F"
.db %01111110, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $27 -- "G"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01101110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $28 -- "H"
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $29 -- "I"
.db %01111110, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $2a -- "J"
.db %00111110, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %00111000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $2b -- "K"
.db %01100110, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %01111000, %00000000, %00000000, %00000000
.db %01110000, %00000000, %00000000, %00000000
.db %01111000, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $2c -- "L"
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $2d -- "M"
.db %01100011, %00000000, %00000000, %00000000
.db %01110111, %00000000, %00000000, %00000000
.db %01111111, %00000000, %00000000, %00000000
.db %01101011, %00000000, %00000000, %00000000
.db %01101011, %00000000, %00000000, %00000000
.db %01100011, %00000000, %00000000, %00000000
.db %01100011, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $2e -- "N"
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01110110, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %01101110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $2f -- "O"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $30 -- "P"
.db %01111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $31 -- "Q"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01101010, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %00110110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $32 -- "R"
.db %01111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $33 -- "S"
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $34 -- "T"
.db %01111110, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $35 -- "U"
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $36 -- "V"
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $37 -- "W"
.db %01100011, %00000000, %00000000, %00000000
.db %01100011, %00000000, %00000000, %00000000
.db %01101011, %00000000, %00000000, %00000000
.db %01101011, %00000000, %00000000, %00000000
.db %01111111, %00000000, %00000000, %00000000
.db %01110111, %00000000, %00000000, %00000000
.db %01100011, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $38 -- "X"
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $39 -- "Y"
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $3a -- "Z"
.db %01111110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $3b -- "["
.db %01111100, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $3c -- "\"
.db %00000000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $3d -- "]"
.db %00111110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $3e -- "^"
.db %00011000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01000010, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $3f -- "_"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %11111111, %00000000, %00000000, %00000000

; $40 -- "‘"
.db %00011100, %00000000, %00000000, %00000000
.db %00110110, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $41 -- "a"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $42 -- "b"
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $43 -- "c"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $44 -- "d"
.db %00000110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $45 -- "e"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $46 -- "f"
.db %00011100, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $47 -- "g"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000

; $48 -- "h"
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $49 -- "i"
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00111000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $4a -- "j"
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00111000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %01110000, %00000000, %00000000, %00000000

; $4b -- "k"
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %01111000, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $4c -- "l"
.db %00111000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $4d -- "m"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00110110, %00000000, %00000000, %00000000
.db %01111111, %00000000, %00000000, %00000000
.db %01101011, %00000000, %00000000, %00000000
.db %01101011, %00000000, %00000000, %00000000
.db %01100011, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $4e -- "n"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $4f -- "o"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $50 -- "p"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000

; $51 -- "q"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00000111, %00000000, %00000000, %00000000

; $52 -- "r"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %01101100, %00000000, %00000000, %00000000
.db %01110110, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $53 -- "s"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %01100000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $54 -- "t"
.db %00110000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %01111100, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00011100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $55 -- "u"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $56 -- "v"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $57 -- "w"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %01100011, %00000000, %00000000, %00000000
.db %01101011, %00000000, %00000000, %00000000
.db %01101011, %00000000, %00000000, %00000000
.db %01111111, %00000000, %00000000, %00000000
.db %00110110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $58 -- "x"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $59 -- "y"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %01100110, %00000000, %00000000, %00000000
.db %00111110, %00000000, %00000000, %00000000
.db %00000110, %00000000, %00000000, %00000000
.db %00111100, %00000000, %00000000, %00000000

; $5a -- "z"
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %01111110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $5b -- "{"
.db %00001100, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %01110000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00001100, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $5c -- "|"
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $5d -- "}"
.db %00110000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00001110, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00011000, %00000000, %00000000, %00000000
.db %00110000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000

; $5e -- "~"
.db %00110001, %00000000, %00000000, %00000000
.db %01101011, %00000000, %00000000, %00000000
.db %01000110, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000
.db %00000000, %00000000, %00000000, %00000000