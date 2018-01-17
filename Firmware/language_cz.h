/**
 * English
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */
#define WELCOME_MSG                         CUSTOM_MENDEL_NAME " ok"
#define MSG_SD_INSERTED                     "Karta vlozena"
#define MSG_SD_REMOVED                      "Karta vyjmuta"
#define MSG_MAIN                            "Hlavni nabidka"
#define MSG_DISABLE_STEPPERS                "Vypnout motory"
#define MSG_AUTO_HOME                       "Auto home"
#define MSG_SET_HOME_OFFSETS                "Nastav pocatek home"
#define MSG_SET_ORIGIN                      "Nastav pocatek"
#define MSG_COOLDOWN                        "Zchladit"
#define MSG_SWITCH_PS_ON                    "Vypnout zdroj"
#define MSG_SWITCH_PS_OFF                   "Zapnout zdroj"
#define MSG_MOVE_AXIS                       "Posunout osu"
#define MSG_MOVE_X                          "Posunout X"
#define MSG_MOVE_Y                          "Posunout Y"
#define MSG_MOVE_Z                          "Posunout Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_SPEED                           "Rychlost"
#define MSG_NOZZLE                          "Tryska"
#define MSG_NOZZLE1                         "Tryska2"
#define MSG_NOZZLE2                         "Tryska3"
#define MSG_BED                             "Bed"
#define MSG_FAN_SPEED                       "Rychlost vent."
#define MSG_FLOW                            "Prutok"
#define MSG_FLOW0                           "Prutok 0"
#define MSG_FLOW1                           "Prutok 1"
#define MSG_FLOW2                           "Prutok 2"
#define MSG_CONTROL                         "Kontrola"
#define MSG_MIN                             " \002 Min"
#define MSG_MAX                             " \002 Max"
#define MSG_FACTOR                          " \002 Fact"
#define MSG_TEMPERATURE                     "Teplota"
#define MSG_MOTION                          "Pohyb"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED		        "E in mm3"
#define MSG_STORE_EPROM                     "Store memory"
#define MSG_LOAD_EPROM                      "Ulozit pamet"
#define MSG_RESTORE_FAILSAFE                "Obnovit vychozi"
#define MSG_REFRESH                         "\xF8" "Obnovit"
#define MSG_WATCH                           "Informace"
#define MSG_TUNE                            "Ladit"
#define MSG_PAUSE_PRINT                     "Pozastavit tisk"
#define MSG_RESUME_PRINT                    "Pokracovat"
#define MSG_STOP_PRINT                      "Zastavit tisk"
#define MSG_CARD_MENU                       "Tisk z SD"
#define MSG_NO_CARD                         "Zadna SD karta"
#define MSG_DWELL                           "Sleep..."
#define MSG_USERWAIT                        "Wait for user..."
#define MSG_RESUMING                        "Obnoveni tisku"
#define MSG_PRINT_ABORTED                   "Tisk prerusen"
#define MSG_NO_MOVE                         "No move."
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "STOPPED. "
#define MSG_FILAMENTCHANGE                  "Vymenit filament"
#define MSG_INIT_SDCARD                     "Inic. SD"
#define MSG_CNG_SDCARD                      "Vymenit SD"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Doladeni osy Z"
#define MSG_ADJUSTZ							"Auto doladit Z ?"
#define MSG_PICK_Z							"Vyberte vytisk"

#define MSG_HOMEYZ                          "Kalibrovat Z"
#define MSG_HOMEYZ_PROGRESS                 "Kalibruji Z"
#define MSG_HOMEYZ_DONE		                "Kalibrace OK"

#define MSG_SETTINGS                         "Nastaveni"
#define MSG_PREHEAT                         "Predehrev"
#define MSG_UNLOAD_FILAMENT                 "Vyjmout filament"
#define MSG_LOAD_FILAMENT					"Zavest filament"
#define(length=17) MSG_AUTOLOAD_FILAMENT    "AutoZavedeni fil."
#define MSG_LOAD_FILAMENT_1					"Zavest filament 1"
#define MSG_LOAD_FILAMENT_2					"Zavest filament 2"
#define MSG_LOAD_FILAMENT_3					"Zavest filament 3"
#define MSG_LOAD_FILAMENT_4					"Zavest filament 4"
#define MSG_UNLOAD_FILAMENT_1				"Vyjmout filam. 1"
#define MSG_UNLOAD_FILAMENT_2				"Vyjmout filam. 2"
#define MSG_UNLOAD_FILAMENT_3				"Vyjmout filam. 3"
#define MSG_UNLOAD_FILAMENT_4				"Vyjmout filam. 4"
#define MSG_UNLOAD_ALL						"Vyjmout vse"
#define MSG_LOAD_ALL						"Zavest vse"

#define MSG_RECTRACT                        "Rectract"
#define MSG_ERROR                       "CHYBA:"
#define MSG_PREHEAT_NOZZLE              "Predehrejte trysku!"
#define MSG_SUPPORT                     "Podpora"
#define MSG_CORRECTLY			"Vymena ok?"
#define MSG_YES					"Ano"
#define MSG_NO					"Ne"
#define MSG_NOT_LOADED 			"Filament nezaveden"
#define MSG_NOT_COLOR 			"Barva neni cista"
#define MSG_LOADING_FILAMENT	        "Zavadeni filamentu"
#define MSG_PLEASE_WAIT			"Prosim cekejte"
#define MSG_LOADING_COLOR		"Cisteni barvy"
#define MSG_CHANGE_SUCCESS		"Zmena uspesna!"
#define MSG_PRESS				"a stisknete tlacitko"
#define MSG_INSERT_FILAMENT		"Vlozte filament"
#define MSG_CHANGING_FILAMENT	"Vymena filamentu!"

#define MSG_SILENT_MODE_ON					"Mod     [Stealth]"
#define MSG_SILENT_MODE_OFF					"Mod      [Normal]" 
#define MSG_REBOOT							"Restartujte tiskarnu"
#define MSG_TAKE_EFFECT						" pro projeveni zmen"	

#define MSG_Enqueing                        "enqueing \""
#define MSG_POWERUP                         "PowerUp"
#define MSG_CONFIGURATION_VER               " Last Updated: "
#define MSG_FREE_MEMORY                     " Free Memory: "
#define MSG_PLANNER_BUFFER_BYTES            "  PlannerBufferBytes: "
#define MSG_OK                              "ok"
#define MSG_ERR_CHECKSUM_MISMATCH           "checksum mismatch, Last Line: "
#define MSG_ERR_NO_CHECKSUM                 "No Checksum with line number, Last Line: "
#define MSG_BEGIN_FILE_LIST                 "Begin file list"
#define MSG_END_FILE_LIST                   "End file list"
#define MSG_M104_INVALID_EXTRUDER           "M104 Invalid extruder "
#define MSG_M105_INVALID_EXTRUDER           "M105 Invalid extruder "
#define MSG_M200_INVALID_EXTRUDER           "M200 Invalid extruder "
#define MSG_M218_INVALID_EXTRUDER           "M218 Invalid extruder "
#define MSG_M221_INVALID_EXTRUDER           "M221 Invalid extruder "
#define MSG_ERR_NO_THERMISTORS              "No thermistors - no temperature"
#define MSG_M109_INVALID_EXTRUDER           "M109 Invalid extruder "
#define MSG_HEATING                         "Zahrivani"
#define MSG_HEATING_COMPLETE                "Zahrivani OK."
#define MSG_BED_HEATING                     "Zahrivani bed"
#define MSG_BED_DONE                        "Bed OK."
#define MSG_M115_REPORT                     "FIRMWARE_NAME:Marlin V1.0.2; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" CUSTOM_MENDEL_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
#define MSG_ERR_KILLED                      "Printer halted. kill() called!"
#define MSG_ERR_STOPPED                     "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
#define MSG_RESEND                          "Resend: "
#define MSG_M119_REPORT                     "Reporting endstop status"
#define MSG_ENDSTOP_HIT                     "TRIGGERED"
#define MSG_ENDSTOP_OPEN                    "open"

#define MSG_SD_CANT_OPEN_SUBDIR             "Cannot open subdir"
#define MSG_SD_INIT_FAIL                    "SD init fail"
#define MSG_SD_VOL_INIT_FAIL                "volume.init failed"
#define MSG_SD_OPENROOT_FAIL                "openRoot failed"
#define MSG_SD_CARD_OK                      "SD card ok"
#define MSG_SD_WORKDIR_FAIL                 "workDir open failed"
#define MSG_SD_OPEN_FILE_FAIL               "open failed, File: "
#define MSG_SD_FILE_OPENED                  "File opened: "
#define MSG_SD_FILE_SELECTED                "File selected"
#define MSG_SD_WRITE_TO_FILE                "Writing to file: "
#define MSG_SD_PRINTING_BYTE                "SD printing byte "
#define MSG_SD_NOT_PRINTING                 "Not SD printing"
#define MSG_SD_ERR_WRITE_TO_FILE            "error writing to file"
#define MSG_SD_CANT_ENTER_SUBDIR            "Cannot enter subdir: "

#define MSG_STEPPER_TOO_HIGH                "Steprate too high: "
#define MSG_ENDSTOPS_HIT                    "endstops hit: "
#define MSG_ERR_COLD_EXTRUDE_STOP           " cold extrusion prevented"
#define MSG_BABYSTEPPING_X                  "Babystepping X"
#define MSG_BABYSTEPPING_Y                  "Babystepping Y"
#define MSG_BABYSTEPPING_Z                  "Dostavovani Z"
#define MSG_SERIAL_ERROR_MENU_STRUCTURE     "Error in menu structure"

#define MSG_LANGUAGE_NAME					"Cestina"
#define MSG_LANGUAGE_SELECT					"Vyber jazyka"
 #define MSG_PRUSA3D						"prusa3d.cz"
 #define MSG_PRUSA3D_FORUM					"forum.prusa3d.cz"
 #define MSG_PRUSA3D_HOWTO					"howto.prusa3d.cz"

#define MSG_HOMEYZ                          "Kalibrovat Z"
#define MSG_HOMEYZ_PROGRESS                 "Kalibruji Z"
#define MSG_HOMEYZ_DONE		                "Kalibrace OK"

#define MSG_SELFTEST_ERROR					"Selftest error !"
#define MSG_SELFTEST_PLEASECHECK			"Zkontrolujte :"	
#define MSG_SELFTEST_NOTCONNECTED			"Nezapojeno    "
#define MSG_SELFTEST_HEATERTHERMISTOR		"Heater/Thermistor"
#define MSG_SELFTEST_BEDHEATER				"Bed / Heater"
#define MSG_SELFTEST_WIRINGERROR			"Chyba zapojeni"
#define MSG_SELFTEST_ENDSTOPS				"Endstops"
#define MSG_SELFTEST_MOTOR					"Motor"
#define MSG_SELFTEST_ENDSTOP				"Endstop"
#define MSG_SELFTEST_ENDSTOP_NOTHIT			"Endstop not hit"
#define MSG_SELFTEST_OK						"Self test OK"
#define MSG_SELFTEST_FANS					"Predni/levy vent."
#define MSG_SELFTEST_SWAPPED				"Prohozene"

#define MSG_SELFTEST_FAN					"Test ventilatoru"
#define MSG_SELFTEST_COOLING_FAN			"Predni tiskovy vent?"
#define MSG_SELFTEST_EXTRUDER_FAN			"Levy vent na trysce?"
#define MSG_SELFTEST_FAN_YES				"Toci se"
#define MSG_SELFTEST_FAN_NO					"Netoci se"

#define MSG_STATS_TOTALFILAMENT				"Filament celkem :"
#define MSG_STATS_TOTALPRINTTIME			"Celkovy cas :"
#define MSG_STATS_FILAMENTUSED				"Filament :  "
#define MSG_STATS_PRINTTIME					"Cas tisku :  "

#define MSG_SELFTEST_START					"Self test start  "
#define MSG_SELFTEST_CHECK_ENDSTOPS			"Kontrola endstops"
#define MSG_SELFTEST_CHECK_HOTEND			"Kontrola hotend  "  
#define MSG_SELFTEST_CHECK_X				"Kontrola X axis  "
#define MSG_SELFTEST_CHECK_Y				"Kontrola Y axis  "
#define MSG_SELFTEST_CHECK_Z				"Kontrola Z axis  "
#define MSG_SELFTEST_CHECK_BED				"Kontrola bed     "
#define MSG_SELFTEST_CHECK_ALLCORRECT		"Vse OK           "
#define MSG_SELFTEST						"Selftest         "
#define MSG_SELFTEST_FAILED					"Selftest selhal  "
#define MSG_SELFTEST_EXTRUDER_FAN_SPEED		"Levy vent.:"
#define MSG_SELFTEST_PRINT_FAN_SPEED		"Tiskovy vent.:"
#define MSG_SELFTEST_FILAMENT_SENSOR		"Senzor filamentu:"
#define MSG_SELFTEST_CHECK_FSENSOR			"Kontrola senzoru"
#define MSG_FILAMENT_SENSOR					"Senzor filamentu"

#define MSG_STATISTICS						"Statistika  "
#define MSG_USB_PRINTING					"Tisk z USB  "

#define MSG_SHOW_END_STOPS					"Stav konc. spin."
#define MSG_CALIBRATE_BED					"Kalibrace XYZ"
#define MSG_CALIBRATE_BED_RESET				"Reset XYZ kalibr."

#define MSG_MOVE_CARRIAGE_TO_THE_TOP		"Kalibrace XYZ. Otacenim tlacitka posunte Z osu az k~hornimu dorazu. Potvrdte tlacitkem."
#define MSG_MOVE_CARRIAGE_TO_THE_TOP_Z		"Kalibrace Z. Otacenim tlacitka posunte Z osu az k~hornimu dorazu. Potvrdte tlacitkem."

#define MSG_CONFIRM_NOZZLE_CLEAN			"Pro uspesnou kalibraci ocistete prosim tiskovou trysku. Potvrdte tlacitkem."
#define MSG_CONFIRM_CARRIAGE_AT_THE_TOP		"Dojely oba Z voziky k~hornimu dorazu?"

#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE1	"Hledam kalibracni bod podlozky"
#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE2	" z 4"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1	"Zlepsuji presnost kalibracniho bodu"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2	" z 4"
#define MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1	"Merim referencni vysku kalibracniho bodu"
#define MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2	" z 9"
#define MSG_FIND_BED_OFFSET_AND_SKEW_ITERATION	"Iterace "

#define MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND			"Kalibrace XYZ selhala. Kalibracni bod podlozky nenalezen."
#define MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED			"Kalibrace XYZ selhala. Nahlednete do manualu."
#define MSG_BED_SKEW_OFFSET_DETECTION_PERFECT					"Kalibrace XYZ v poradku. X/Y osy jsou kolme. Gratuluji!"
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD					"Kalibrace XYZ v poradku. X/Y osy mirne zkosene. Dobra prace!"
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME				"Kalibrace XYZ v poradku. Zkoseni bude automaticky vyrovnano pri tisku."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR		"Kalibrace XYZ selhala. Levy predni bod moc vpredu. Srovnejte tiskarnu."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR	"Kalibrace XYZ selhala. Pravy predni bod moc vpredu. Srovnejte tiskarnu."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR		"Kalibrace XYZ selhala. Predni kalibracni body moc vpredu. Srovnejte tiskarnu."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR	"Kalibrace XYZ nepresna. Levy predni bod moc vpredu."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR	"Kalibrace XYZ nepresna. Pravy predni bod moc vpredu."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR	"Kalibrace XYZ nepresna. Predni kalibracni body moc vpredu."

#define MSG_BED_LEVELING_FAILED_POINT_LOW						"Kalibrace Z selhala. Sensor nesepnul. Znecistena tryska? Cekam na reset."
#define MSG_BED_LEVELING_FAILED_POINT_HIGH						"Kalibrace Z selhala. Sensor sepnul prilis vysoko. Cekam na reset."
#define MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED				"Kalibrace Z selhala. Sensor je odpojeny nebo preruseny kabel. Cekam na reset."

#define MSG_NEW_FIRMWARE_AVAILABLE								"Vysla nova verze firmware:"
#define MSG_NEW_FIRMWARE_PLEASE_UPGRADE							"Prosim aktualizujte."
#define MSG_FOLLOW_CALIBRATION_FLOW                        		"Tiskarna nebyla jeste zkalibrovana. Postupujte prosim podle manualu, kapitola Zaciname, odstavec Postup kalibrace."
#define MSG_BABYSTEP_Z_NOT_SET                          		"Neni zkalibrovana vzdalenost trysky od tiskove podlozky. Postupujte prosim podle manualu, kapitola Zaciname, odstavec Nastaveni prvni vrstvy."

#define MSG_BED_CORRECTION_MENU									"Korekce podlozky"
#define MSG_BED_CORRECTION_LEFT									"Vlevo  [um]"
#define MSG_BED_CORRECTION_RIGHT								"Vpravo [um]"
#define MSG_BED_CORRECTION_FRONT								"Vpredu [um]"
#define MSG_BED_CORRECTION_REAR									"Vzadu  [um]"
#define MSG_BED_CORRECTION_RESET								"Reset"

#define MSG_MESH_BED_LEVELING									"Mesh Bed Leveling"
#define MSG_MENU_CALIBRATION									"Kalibrace"
#define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF					"SD card  [normal]"
#define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON					"SD card [FlshAir]"

#define(length=20, lines=4) MSG_STACK_ERROR                     "Chyba - Doslo k prepisu staticke pameti!"

#define MSG_LOOSE_PULLEY								"Uvolnena remenicka"
#define MSG_FILAMENT_LOADING_T0							"Vlozte filament do extruderu 1. Potvrdte tlacitkem."
#define MSG_FILAMENT_LOADING_T1							"Vlozte filament do extruderu 2. Potvrdte tlacitkem."
#define MSG_FILAMENT_LOADING_T2							"Vlozte filament do extruderu 3. Potvrdte tlacitkem."
#define MSG_FILAMENT_LOADING_T3							"Vlozte filament do extruderu 4. Potvrdte tlacitkem."
#define MSG_CHANGE_EXTR									"Zmenit extruder"

#define MSG_FIL_ADJUSTING								"Probiha srovnani filamentu. Prosim cekejte."
#define MSG_CONFIRM_NOZZLE_CLEAN_FIL_ADJ				"Filamenty jsou srovnany. Pro uspesnou kalibraci prosim ocistete trysku. Po te potvrdte tlacitkem."
#define MSG_CALIBRATE_E									"Kalibrovat E"
#define MSG_E_CAL_KNOB									"Otacejte tlacitkem dokud znacka nedosahne tela extruderu. Potvrdte tlacitkem."
#define MSG_MARK_FIL									"Oznacte filament 100 mm od tela extruderu a po te potvrdte tlacitkem."
#define MSG_CLEAN_NOZZLE_E								"E kalibrace ukoncena. Prosim ocistete trysku. Po te potvrdte tlacitkem."
#define MSG_WAITING_TEMP								"Cekani na zchladnuti trysky a podlozky."
#define MSG_FILAMENT_CLEAN								"Filament vytlacen a spravne barvy?" 
#define MSG_UNLOADING_FILAMENT							"Vysouvam filament"

#define MSG_PAPER										"Umistete list papiru na podlozku a udrzujte jej pod tryskou behem mereni prvnich 4 bodu. Pokud tryska zachyti papir, vypnete tiskarnu."

#define MSG_FINISHING_MOVEMENTS							"Dokoncovani pohybu"
#define MSG_PRINT_PAUSED								"Tisk pozastaven"
#define MSG_RESUMING_PRINT								"Obnovovani tisku"
#define MSG_PID_EXTRUDER								"PID kalibrace"
#define MSG_SET_TEMPERATURE								"Nastavte teplotu:"
#define MSG_PID_FINISHED								"PID kal. ukoncena"
#define MSG_PID_RUNNING									"PID kal.           "

#define MSG_CALIBRATE_PINDA								"Zkalibrovat"
#define MSG_CALIBRATION_PINDA_MENU						"Teplot. kalibrace"
#define MSG_PINDA_NOT_CALIBRATED						"Tiskarna nebyla teplotne zkalibrovana"
#define MSG_PINDA_PREHEAT								"Nahrivani PINDA"
#define MSG_TEMP_CALIBRATION							"Tepl. kal.          "
#define MSG_TEMP_CALIBRATION_DONE						"Teplotni kalibrace dokoncena. Pokracujte stiskem tlacitka."
#define MSG_TEMP_CALIBRATION_ON							"Tepl. kal.  [zap]"
#define MSG_TEMP_CALIBRATION_OFF						"Tepl. kal.  [vyp]"
#define MSG_PREPARE_FILAMENT							"Pripravte filament"
#define MSG_ALL											"Vse"
#define MSG_USED										"Pouzite behem tisku"
#define MSG_CURRENT										"Pouze aktualni"
#define MSG_CHOOSE_EXTRUDER								"Vyberte extruder:"
#define MSG_EXTRUDER									"Extruder"
#define MSG_EXTRUDER_1									"Extruder 1"
#define MSG_EXTRUDER_2									"Extruder 2"
#define MSG_EXTRUDER_3									"Extruder 3"
#define MSG_EXTRUDER_4									"Extruder 4"

#define MSG_WIZARD							"Wizard"
#define MSG_WIZARD_WELCOME					"Dobry den, jsem vase tiskarna Original Prusa i3. Chcete abych Vas provedla kalibracnim procesem?"
#define MSG_WIZARD_QUIT						"Wizarda muzete kdykoliv znovu spustit z menu Calibration -> Wizard"
#define MSG_WIZARD_SELFTEST					"Nejdriv pomoci selftestu zkontoluji nejcastejsi chyby vznikajici pri sestaveni tiskarny."
#define MSG_WIZARD_CALIBRATION_FAILED		"Prosim nahlednete do manualu a opravte problem. Po te obnovte Wizarda rebootovanim tiskarny."
#define MSG_WIZARD_XYZ_CAL					"Nyni provedu xyz kalibraci. Zabere to priblizne 12 min."
#define MSG_WIZARD_FILAMENT_LOADED			"Je filament zaveden?"
#define MSG_WIZARD_Z_CAL					"Nyni provedu z kalibraci."
#define MSG_WIZARD_WILL_PREHEAT				"Nyni predehreji trysku pro PLA."
#define MSG_WIZARD_V2_CAL					"Nyni zkalibruji vzdalenost mezi koncem trysky a povrchem heatbedu."
#define MSG_WIZARD_V2_CAL_2					"Zacnu tisknout linku a Vy budete postupne snizovat trysku otacenim tlacitka dokud nedosahnete optimalni vysky. Prohlednete si obrazky v nasi prirucce v kapitole Kalibrace"
#define MSG_V2_CALIBRATION					"Kal. prvni vrstvy"
#define MSG_WIZARD_DONE						"Vse je hotovo."
#define MSG_WIZARD_LOAD_FILAMENT			"Prosim vlozte PLA filament do extruderu, po te stisknete tlacitko pro zavedeni filamentu."
#define MSG_WIZARD_RERUN					"Spusteni Wizarda vymaze ulozene vysledky vsech kalibraci a spusti kalibracni proces od zacatku. Pokracovat?"
#define MSG_WIZARD_REPEAT_V2_CAL			"Chcete opakovat posledni krok a pozmenit vzdalenost mezi tryskou a heatbed?"
#define MSG_WIZARD_CLEAN_HEATBED			"Prosim ocistete heatbed a stisknete tlacitko."
#define MSG_WIZARD_PLA_FILAMENT				"Je to PLA filament?"		
#define MSG_WIZARD_INSERT_CORRECT_FILAMENT	"Prosim zavedte PLA filament a po te obnovte Wizarda stisknutim reset tlacitka."
#define MSG_PLA_FILAMENT_LOADED				"Je PLA filament zaveden?"
#define MSG_PLEASE_LOAD_PLA					"Nejdrive zavedte PLA filament prosim."
#define MSG_WIZARD_HEATING					"Predehrivam trysku. Prosim cekejte."
#define MSG_M117_V2_CALIBRATION				"M117 Kal. prvni vrstvy"

#define MSG_DATE							"Datum:"
#define MSG_XYZ_DETAILS						"Detaily XYZ kal."
#define	MSG_Y_DISTANCE_FROM_MIN				"Y vzdalenost od min:"
#define	MSG_LEFT							"Levy:"
#define MSG_RIGHT							"Pravy:"
#define MSG_MEASURED_SKEW					"Merene zkoseni:"
#define MSG_SLIGHT_SKEW						"Lehke zkoseni:"
#define MSG_SEVERE_SKEW						"Tezke zkoseni:"
ve
#define MSG_CALIBRATE_Z_AUTO				"Kalibruji Z"
#define MSG_FSENSOR_OFF						"Fil. senzor [vyp]"
#define MSG_FSENSOR_NA						"Fil. senzor [N/A]"
#define MSG_FSENSOR_ON						"Fil. senzor [zap]" 
#define MSG_CRASHDETECT_ON					"Crash det.  [zap]"
#define MSG_CRASHDETECT_NA					"Crash det.  [N/A]"
#define MSG_CRASHDETECT_OFF					"Crash det.  [vyp]"
#define MSG_FANS_CHECK_ON					"Kontr. vent.[zap]"
#define MSG_FANS_CHECK_OFF					        "Kontr. vent.[vyp]"
#define(length=17, lines=1) MSG_FSENS_AUTOLOAD_ON   "F. autozav. [zap]"
#define(length=17, lines=1) MSG_FSENS_AUTOLOAD_OFF  "F. autozav. [vyp]"
#define(length=17, lines=1) MSG_FSENS_AUTOLOAD_NA  "F. autozav. [N/A]"
#define MSG_RECOVERING_PRINT				"Obnovovani tisku    "
#define(length=20, lines=1) MSG_CRASH_DETECTED   "Detekovan naraz."
#define(length=20, lines=2) MSG_CRASH_DETECTED2   "Naraz detekovan, pokracovat v tisku?"

#define MSG_SELFTEST_AXIS					"Osa"
#define MSG_SELFTEST_AXIS_LENGTH			"Delka osy"
#define MSG_STEEL_SHEET_CHECK				"Je tiskovy plat na heatbed?"
#define MSG_REMOVE_STEEL_SHEET				"Odstrante tiskovy plat z heatbed prosim."
#define MSG_PLACE_STEEL_SHEET				"Umistete prosim tiskovy plat na heatbed"
#define MSG_RECOVER_PRINT					"Detekovan vypadek proudu.Obnovit tisk?"
#define MSG_PRESS_TO_UNLOAD					"Pro vysunuti filamentu stisknete prosim tlacitko"	
#define MSG_UNLOAD_SUCCESSFUL				"Bylo vysunuti filamentu uspesne?"
#define MSG_PRESS_TO_PREHEAT				"Pro nahrati trysky a pokracovani stisknete tlacitko."
#define MSG_PULL_OUT_FILAMENT				"Prosim vyjmete urychlene filament"
#define MSG_CHECK_IDLER						"Prosim otevrete idler a manualne odstrante filament."
#define MSG_FILE_INCOMPLETE					"Soubor nekompletni. Pokracovat?"
#define MSG_FILE_CNT						"Nektere soubory nebudou setrideny. Maximalni pocet souboru pro setrideni je 100."
#define MSG_SORT_TIME						"Trideni     [Cas]"
#define MSG_SORT_ALPHA						"Trideni [Abeceda]"
#define MSG_SORT_NONE						"Trideni   [Zadne]"
#define(length=20, lines=1) MSG_SORTING                            "Trideni souboru"


#define(length=12, lines=1) MSG_INFO_NOZZLE_FAN                 "Trysk. vent:"
#define(length=12, lines=1) MSG_INFO_PRINT_FAN                  "Tisk. vent:"


#define(length=17, lines=1) MSG_SECOND_SERIAL_ON                 "RPi port    [zap]"
#define(length=17, lines=1) MSG_SECOND_SERIAL_OFF                "RPi port    [vyp]"

#define(length=15, lines=1) MSG_INFO_EXTRUDER                "Extruder info"
#define(length=15, lines=1) MSG_MENU_VOLTAGES               "Napeti"
#define(length=15, lines=1) MSG_MENU_TEMPERATURES           "Teploty"
#define(length=15, lines=1) MSG_MENU_BELT_STATUS            "Stav remenu"

#define(length=20, lines=4) MSG_CRASH_DET_ONLY_IN_NORMAL        "\x1b[2JCrash detekce muze\x1b[1;0Hbyt zapnuta pouze v\x1b[2;0HNormal modu"
#define(length=20, lines=4) MSG_CRASH_DET_STEALTH_FORCE_OFF     "\x1b[2JPOZOR:\x1b[1;0HCrash detekce\x1b[2;0Hdeaktivovana ve\x1b[3;0HStealth modu"

#define(length=20, lines=4) MSG_AUTOLOADING_ENABLED             "Automaticke zavadeni filamentu aktivni, stisknete tlacitko a vlozte filament..."
#define(length=20, lines=4) MSG_AUTOLOADING_ONLY_IF_FSENS_ON    "Automaticke zavadeni filamentu dostupne pouze pri zapnutem filament senzoru..."

#define(length=20, lines=4) MSG_FSENS_NOT_RESPONDING     "CHYBA: Filament senzor nereaguje, zkontrolujte zapojeni."

#define(length=20, lines=8) MSG_FW_VERSION_UNKNOWN		 "VAROVANI: Neznama verze firmware"
#define(length=20, lines=8) MSG_FW_VERSION_ALPHA		 "Pouzivate alpha verzi firmwaru. Jedna se o vyvojovou verzi. Pouzivani teto verze firmware neni doporuceno a muze zpusobit poskozeni tiskarny." 
#define(length=20, lines=8) MSG_FW_VERSION_BETA			 "Pouzivate beta verzi firmwaru. Jedna se o vyvojovou verzi. Pouzivani teto verze firmware neni doporuceno a muze zpusobit poskozeni tiskarny."
#define(length=20, lines=8) MSG_FW_VERSION_RC			 "Tato verze firmware je release candidate. Nektere z funkci nemusi pracovat spolehlive."

