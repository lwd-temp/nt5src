/*++

Copyright (c) 1998      Microsoft Corporation

Module Name:

        OPOS_HID.H

Abstract:

   Public Definitions of HID USAGES for Point Of Sale devices.

Environment:

    Kernel & user mode

Revision History:

    Oct-1998 : created by Ervin Peretz

--*/

typedef USHORT USAGE, *PUSAGE;


/*
 *  Usage Pages
 */
#define HID_USAGE_PAGE_BAR_CODE_SCANNER ((USAGE) 0x8C)




/*
 *  Usages for:         Bar Code Scanner (0x8C)
 */
#define HID_USAGE_BAR_CODE_BADGE_READER                         ((USAGE) 0x01)
#define HID_USAGE_BAR_CODE_SCANNER                              ((USAGE) 0x02)
#define HID_USAGE_BAR_CODE_DUMB_SCANNER                         ((USAGE) 0x03)
#define HID_USAGE_BAR_CODE_CORDLESS_SCANNER_BASE                ((USAGE) 0x04)
#define HID_USAGE_BAR_CODE_SCANNER_CRADLE                       ((USAGE) 0x05)
#define HID_USAGE_BAR_CODE_ATTRIBUTE_REPORT                     ((USAGE) 0x10)
#define HID_USAGE_BAR_CODE_SETTINGS_REPORT                      ((USAGE) 0x11)
#define HID_USAGE_BAR_CODE_SCANNED_DATA_REPORT                  ((USAGE) 0x12)
#define HID_USAGE_BAR_CODE_RAW_SCANNED_DATA_REPORT              ((USAGE) 0x13)
#define HID_USAGE_BAR_CODE_TRIGGER_REPORT                       ((USAGE) 0x14)
#define HID_USAGE_BAR_CODE_STATUS_REPORT                        ((USAGE) 0x15)
#define HID_USAGE_BAR_CODE_UPC_EAN_CONTROL_REPORT               ((USAGE) 0x16)
#define HID_USAGE_BAR_CODE_OTHER_1D_CONTROL_REPORT              ((USAGE) 0x17)
#define HID_USAGE_BAR_CODE_2D_CONTROL_REPORT                    ((USAGE) 0x18)
#define HID_USAGE_BAR_CODE_AIMING_POINTER_MODE                  ((USAGE) 0x20)
#define HID_USAGE_BAR_CODE_PRESENT_SENSOR                       ((USAGE) 0x21)
#define HID_USAGE_BAR_CODE_CLASS_1A_LASER                       ((USAGE) 0x22)
#define HID_USAGE_BAR_CODE_CLASS_2A_LASER                       ((USAGE) 0x23)
#define HID_USAGE_BAR_CODE_HEATER_PRESENT                       ((USAGE) 0x24)
#define HID_USAGE_BAR_CODE_CONTACT_SCANNER                      ((USAGE) 0x25)
#define HID_USAGE_BAR_CODE_ELEC_ARTICLE_SURV                    ((USAGE) 0x26)
#define HID_USAGE_BAR_CODE_ERROR_INDIC_LED                      ((USAGE) 0x27)
#define HID_USAGE_BAR_CODE_FIXED_BEEPER                         ((USAGE) 0x28)
#define HID_USAGE_BAR_CODE_GOOD_DECODE_INDIC_LED                ((USAGE) 0x29)
#define HID_USAGE_BAR_CODE_HANDS_FREE_SCANNING                  ((USAGE) 0x2A)
#define HID_USAGE_BAR_CODE_INTRINSICALLY_SAFE                   ((USAGE) 0x2B)
#define HID_USAGE_BAR_CODE_KLASSE_EINS_LASER                    ((USAGE) 0x2C)
#define HID_USAGE_BAR_CODE_LONG_RANGE_SCANNER                   ((USAGE) 0x2D)
#define HID_USAGE_BAR_CODE_MIRROR_SPEED_CONTROL                 ((USAGE) 0x2E)
#define HID_USAGE_BAR_CODE_NOTONFILE_LED                        ((USAGE) 0x2F)
#define HID_USAGE_BAR_CODE_PROGRAMMABLE_BEEPER                  ((USAGE) 0x30)
#define HID_USAGE_BAR_CODE_TRIGGERLESS                          ((USAGE) 0x31)
#define HID_USAGE_BAR_CODE_WAND                                 ((USAGE) 0x32)
#define HID_USAGE_BAR_CODE_WATER_RESISTANT                      ((USAGE) 0x33)
#define HID_USAGE_BAR_CODE_MULTIRANGE_SCANNER                   ((USAGE) 0x34)
#define HID_USAGE_BAR_CODE_PROXIMITY_SENSOR                     ((USAGE) 0x35)
#define HID_USAGE_BAR_CODE_FRAGMENT_DECODING                    ((USAGE) 0x3D)
#define HID_USAGE_BAR_CODE_SCANNER_READ_CONFIDENCE              ((USAGE) 0x3E)
#define HID_USAGE_BAR_CODE_ACTIVE_TIME                          ((USAGE) 0x45)
#define HID_USAGE_BAR_CODE_AIMING_LASER_PATTERN                 ((USAGE) 0x46)
#define HID_USAGE_BAR_CODE_PRESENT                              ((USAGE) 0x47)
#define HID_USAGE_BAR_CODE_BEEPER_STATE                         ((USAGE) 0x48)
#define HID_USAGE_BAR_CODE_LASER_ON_TIME                        ((USAGE) 0x49)
#define HID_USAGE_BAR_CODE_LASER_STATE                          ((USAGE) 0x4A)
#define HID_USAGE_BAR_CODE_LOCKOUT_TIME                         ((USAGE) 0x4B)
#define HID_USAGE_BAR_CODE_MOTOR_STATE                          ((USAGE) 0x4C)
#define HID_USAGE_BAR_CODE_MOTOR_TIMEOUT                        ((USAGE) 0x4D)
#define HID_USAGE_BAR_CODE_POWER_ON_RESET_SCANNER               ((USAGE) 0x4E)
#define HID_USAGE_BAR_CODE_PREVENT_BARCODE_READ                 ((USAGE) 0x4F)
#define HID_USAGE_BAR_CODE_INITIATE_BARCODE_READ                ((USAGE) 0x50)
#define HID_USAGE_BAR_CODE_TRIGGER_STATE                        ((USAGE) 0x51)
#define HID_USAGE_BAR_CODE_BLINKING_LASER_ON                    ((USAGE) 0x52)
#define HID_USAGE_BAR_CODE_CONTINUOUS_LASER_ON                  ((USAGE) 0x53)
#define HID_USAGE_BAR_CODE_LASER_ON_WHILE_TRIGGER_PULLED        ((USAGE) 0x54)
#define HID_USAGE_BAR_CODE_LASER_ON_AFTER_TRIGGER_RELEASE       ((USAGE) 0x55)
#define HID_USAGE_BAR_CODE_COMMIT_PARAMS_TO_NVM                 ((USAGE) 0x5D)
#define HID_USAGE_BAR_CODE_PARAM_SCANNING                       ((USAGE) 0x5E)
#define HID_USAGE_BAR_CODE_PARAMS_CHANGED                       ((USAGE) 0x5F)
#define HID_USAGE_BAR_CODE_SET_PARAM_DEFAULT_VALUES             ((USAGE) 0x60)
#define HID_USAGE_BAR_CODE_SCANNER_IN_CRADLE                    ((USAGE) 0x65)
#define HID_USAGE_BAR_CODE_SCANNER_IN_RANGE                     ((USAGE) 0x66)
#define HID_USAGE_BAR_CODE_AIM_DURATION                         ((USAGE) 0x6A)
#define HID_USAGE_BAR_CODE_GOOD_READ_LAMP_DURATION              ((USAGE) 0x6B)
#define HID_USAGE_BAR_CODE_GOOD_READ_LAMP_INTENSITY             ((USAGE) 0x6C)
#define HID_USAGE_BAR_CODE_GOOD_READ_LED                        ((USAGE) 0x6D)
#define HID_USAGE_BAR_CODE_GOOD_READ_TONE_FREQUENCY             ((USAGE) 0x6E)
#define HID_USAGE_BAR_CODE_GOOD_READ_TONE_LENGTH                ((USAGE) 0x6F)
#define HID_USAGE_BAR_CODE_GOOD_READ_TONE_VOLUME                ((USAGE) 0x70)
#define HID_USAGE_BAR_CODE_NO_READ_MESSAGE                      ((USAGE) 0x72)
#define HID_USAGE_BAR_CODE_NOT_ON_FILE_VOLUME                   ((USAGE) 0x73)
#define HID_USAGE_BAR_CODE_POWERUP_BEEP                         ((USAGE) 0x74)
#define HID_USAGE_BAR_CODE_SOUND_ERROR_BEEP                     ((USAGE) 0x75)
#define HID_USAGE_BAR_CODE_SOUND_GOOD_READ_BEEP                 ((USAGE) 0x76)
#define HID_USAGE_BAR_CODE_SOUND_NOT_ON_FILE_BEEP               ((USAGE) 0x77)
#define HID_USAGE_BAR_CODE_AFTER_DECODE                         ((USAGE) 0x78)
#define HID_USAGE_BAR_CODE_BEEP_OR_LAMP_AFTER_XMIT              ((USAGE) 0x79)
#define HID_USAGE_BAR_CODE_NO_BEEP_OR_LAMP                      ((USAGE) 0x7A)
#define HID_USAGE_BAR_CODE_BOOKLAND_EAN                         ((USAGE) 0x81)
#define HID_USAGE_BAR_CODE_CONVERT_EAN_8_TO_13                  ((USAGE) 0x82)
#define HID_USAGE_BAR_CODE_CONVERT_UPC_A_TO_EAN13               ((USAGE) 0x83)
#define HID_USAGE_BAR_CODE_CONVERT_UPC_E_TO_A                   ((USAGE) 0x84)
#define HID_USAGE_BAR_CODE_EAN13                                ((USAGE) 0x85)
#define HID_USAGE_BAR_CODE_EAN8                                 ((USAGE) 0x86)
#define HID_USAGE_BAR_CODE_EAN99_128_MANDATORY                  ((USAGE) 0x87)
#define HID_USAGE_BAR_CODE_EAN99_P5_128_OPTIONAL                ((USAGE) 0x88)
#define HID_USAGE_BAR_CODE_ENABLE_EAN_TWO_LABEL                 ((USAGE) 0x89)
#define HID_USAGE_BAR_CODE_UPC_EAN                              ((USAGE) 0x8A)
#define HID_USAGE_BAR_CODE_UPC_EAN_COUPON_CODE                  ((USAGE) 0x8B)
#define HID_USAGE_BAR_CODE_UPC_EAN_PERIODICALS                  ((USAGE) 0x8C)
#define HID_USAGE_BAR_CODE_UPC_A                                ((USAGE) 0x8D)
#define HID_USAGE_BAR_CODE_UPC_A_WITH_128_MANDATORY             ((USAGE) 0x8E)
#define HID_USAGE_BAR_CODE_UPC_A_WITH_128_OPTIONAL              ((USAGE) 0x8F)
#define HID_USAGE_BAR_CODE_UPC_A_WITH_P5_OPTIONAL               ((USAGE) 0x90)
#define HID_USAGE_BAR_CODE_UPC_E                                ((USAGE) 0x91)
#define HID_USAGE_BAR_CODE_UPC_E1                               ((USAGE) 0x92)
#define HID_USAGE_BAR_CODE_AUTO_DISCRIMINATE_PLUS_2_PERIODICALS ((USAGE) 0x9A)
#define HID_USAGE_BAR_CODE_AUTO_DECODE_PLUS_2_PERIODICALS       ((USAGE) 0x9B)
#define HID_USAGE_BAR_CODE_IGNORE_PLUS_2_PERIODICALS            ((USAGE) 0x9C)
#define HID_USAGE_BAR_CODE_AUTO_DISCRIMINATE_PLUS_5_PERIODICALS ((USAGE) 0x9D)
#define HID_USAGE_BAR_CODE_AUTO_DECODE_PLUS_5_PERIODICALS       ((USAGE) 0x9E)
#define HID_USAGE_BAR_CODE_IGNORE_PLUS_5_PERIODICALS            ((USAGE) 0x9F)
#define HID_USAGE_BAR_CODE_DISABLE_PRICE_CHECK                  ((USAGE) 0xA0)
#define HID_USAGE_BAR_CODE_ENABLE_4_DIGIT_PRICE_CHECK           ((USAGE) 0xA1)
#define HID_USAGE_BAR_CODE_ENABLE_5_DIGIT_PRICE_CHECK           ((USAGE) 0xA2)
#define HID_USAGE_BAR_CODE_ENABLE_EURO_4_DIGIT_PRICE_CHECK      ((USAGE) 0xA3)
#define HID_USAGE_BAR_CODE_ENABLE_EURO_5_DIGIT_PRICE_CHECK      ((USAGE) 0xA4)
#define HID_USAGE_BAR_CODE_DISABLE_TWO_LABEL                    ((USAGE) 0xA5)
#define HID_USAGE_BAR_CODE_TWO_LABEL_WITH_EAN_13_2_AND_EAN_8_1  ((USAGE) 0xA6)
#define HID_USAGE_BAR_CODE_TWO_LABEL_WITH_EAN_13_1_AND_EAN_8_1  ((USAGE) 0xA7)
#define HID_USAGE_BAR_CODE_TWO_LABEL_WITH_EAN_13_2_FLAG_DIGITS  ((USAGE) 0xA8)
#define HID_USAGE_BAR_CODE_VERIFY_CODABAR_CHECK_DIGIT           ((USAGE) 0xB0)
#define HID_USAGE_BAR_CODE_XMIT_CODE_39_CHECK_DIGIT             ((USAGE) 0xB1)
#define HID_USAGE_BAR_CODE_VERIFY_CODE39_CHECK_DIGIT            ((USAGE) 0xB2)
#define HID_USAGE_BAR_CODE_CODABAR                              ((USAGE) 0xB3)
#define HID_USAGE_BAR_CODE_CODE_128                             ((USAGE) 0xB4)
#define HID_USAGE_BAR_CODE_CODE_128_AIM_PREFIX                  ((USAGE) 0xB5)
#define HID_USAGE_BAR_CODE_CODE_128_MIN_ELEMENTS                ((USAGE) 0xB6)
#define HID_USAGE_BAR_CODE_CODE_39                              ((USAGE) 0xB7)
#define HID_USAGE_BAR_CODE_CODE_93                              ((USAGE) 0xB8)
#define HID_USAGE_BAR_CODE_FULL_ASCII_CONVERSION                ((USAGE) 0xB9)
#define HID_USAGE_BAR_CODE_INTERLEAVED_2_OF_5                   ((USAGE) 0xBA)
#define HID_USAGE_BAR_CODE_ITALIAN_PHARMACY_CODE                ((USAGE) 0xBB)
#define HID_USAGE_BAR_CODE_MSI_PLESSEY                          ((USAGE) 0xBC)
#define HID_USAGE_BAR_CODE_STANDARD_2_OF_5_1ATA                 ((USAGE) 0xBD)
#define HID_USAGE_BAR_CODE_STANDARD_2_OF_5                      ((USAGE) 0xBE)
#define HID_USAGE_BAR_CODE_XMIT_CODABAR_CHECK_DIGIT             ((USAGE) 0xBF)
#define HID_USAGE_BAR_CODE_XMIT_I2_OF_5_DIGIT_CHECK             ((USAGE) 0xC0)
#define HID_USAGE_BAR_CODE_XMIT_MSI_PLESSEY_CHECK_DIGIT         ((USAGE) 0xC1)
#define HID_USAGE_BAR_CODE_XMIT_S2_OF_5_CHECK_DIGIT             ((USAGE) 0xC2)
#define HID_USAGE_BAR_CODE_XMIT_START_STOP                      ((USAGE) 0xC3)
#define HID_USAGE_BAR_CODE_TRIOPTIC                             ((USAGE) 0xC4)
#define HID_USAGE_BAR_CODE_UCC_EAN_128                          ((USAGE) 0xC5)
#define HID_USAGE_BAR_CODE_DISABLE_INTERLEAVED_2_OF_5_CHECK_DIGIT       ((USAGE) 0xC6)
#define HID_USAGE_BAR_CODE_ENABLE_INTERLEAVED_2_OF_5_OPCC_CHECK_DIGIT   ((USAGE) 0xC7)
#define HID_USAGE_BAR_CODE_ENABLE_INTERLEAVED_2_OF_5_USS_CHECK_DIGIT    ((USAGE) 0xC8)
#define HID_USAGE_BAR_CODE_DISABLE_STANDARD_2_OF_5_CHECK_DIGIT          ((USAGE) 0xC9)
#define HID_USAGE_BAR_CODE_DISABLE_STANDARD_2_OF_5_OPCC_CHECK_DIGIT     ((USAGE) 0xCA)
#define HID_USAGE_BAR_CODE_ENABLE_STANDARD_2_OF_5_USS_CHECK_DIGIT       ((USAGE) 0xCB)
#define HID_USAGE_BAR_CODE_DISABLE_MSI_PLESSEY_CHECK_DIGIT              ((USAGE) 0xCC)
#define HID_USAGE_BAR_CODE_ENABLE_ONE_MSI_PLESSEY_CHECK_DIGIT           ((USAGE) 0xCD)
#define HID_USAGE_BAR_CODE_ENABLE_TWO_MSI_PLESSEY_CHECK_DIGITS          ((USAGE) 0xCE)
#define HID_USAGE_BAR_CODE_AZTEC_CODE                                   ((USAGE) 0xD3)
#define HID_USAGE_BAR_CODE_BC412                                        ((USAGE) 0xD4)
#define HID_USAGE_BAR_CODE_CHANNEL_CODE                                 ((USAGE) 0xD5)
#define HID_USAGE_BAR_CODE_CODE_16                                      ((USAGE) 0xD6)
#define HID_USAGE_BAR_CODE_CODE_32                                      ((USAGE) 0xD7)
#define HID_USAGE_BAR_CODE_CODE_49                                      ((USAGE) 0xD8)
#define HID_USAGE_BAR_CODE_CODE_ONE                                     ((USAGE) 0xD9)
#define HID_USAGE_BAR_CODE_COLOR_CODE                                   ((USAGE) 0xDA)
#define HID_USAGE_BAR_CODE_DATA_MATRIX                                  ((USAGE) 0xDB)
#define HID_USAGE_BAR_CODE_MAXICODE                                     ((USAGE) 0xDC)
#define HID_USAGE_BAR_CODE_MICRO_PDF                                    ((USAGE) 0xDD)
#define HID_USAGE_BAR_CODE_PDF_417                                      ((USAGE) 0xDE)
#define HID_USAGE_BAR_CODE_POSICODE                                     ((USAGE) 0xDF)
#define HID_USAGE_BAR_CODE_QR_CODE                                      ((USAGE) 0xE0)
#define HID_USAGE_BAR_CODE_SUPERCODE                                    ((USAGE) 0xE1)
#define HID_USAGE_BAR_CODE_ULTRACODE                                    ((USAGE) 0xE2)
#define HID_USAGE_BAR_CODE_USD_5_SLUG_CODE                              ((USAGE) 0xE3)
#define HID_USAGE_BAR_CODE_VERICODE                                     ((USAGE) 0xE4)
#define HID_USAGE_BAR_CODE_AIM_IDENTIFIER_1                             ((USAGE) 0xEB)
#define HID_USAGE_BAR_CODE_AIM_IDENTIFIER_2                             ((USAGE) 0xEC)
#define HID_USAGE_BAR_CODE_AIM_IDENTIFIER_3                             ((USAGE) 0xED)
#define HID_USAGE_BAR_CODE_DECODED_DATA                                 ((USAGE) 0xEE)
#define HID_USAGE_BAR_CODE_DECODE_DATA_CONTINUED                        ((USAGE) 0xEF)
#define HID_USAGE_BAR_CODE_BAR_SPACE_DATA                               ((USAGE) 0xF0)
#define HID_USAGE_BAR_CODE_SCANNER_DATA_ACCURACY                        ((USAGE) 0xF1)
#define HID_USAGE_BAR_CODE_INVERTED_BAR_CODE                            ((USAGE) 0xF2)
#define HID_USAGE_BAR_CODE_NORMAL_BAR_CODE                              ((USAGE) 0xF3)
#define HID_USAGE_BAR_CODE_MIN_LENGTH_TO_DECODE                         ((USAGE) 0xF6)
#define HID_USAGE_BAR_CODE_MAX_LENGTH_TO_DECODE                         ((USAGE) 0xF7)
#define HID_USAGE_BAR_CODE_FIRST_DISCRETE_LENGTH_TO_DECODE              ((USAGE) 0xF8)
#define HID_USAGE_BAR_CODE_SECOND_DISCRETE_LENGTH_TO_DECODE             ((USAGE) 0xF9)
#define HID_USAGE_BAR_CODE_READ_ANY_LENGTH                              ((USAGE) 0xFA)
#define HID_USAGE_BAR_CODE_CHECK_LENGTH_IN_RANGE                        ((USAGE) 0xFB)
#define HID_USAGE_BAR_CODE_CHECK_FOR_DISCRETE_LENGTHS                   ((USAGE) 0xFC)

