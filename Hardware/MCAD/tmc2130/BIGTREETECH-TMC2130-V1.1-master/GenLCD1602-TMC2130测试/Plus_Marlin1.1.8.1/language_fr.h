/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * French
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_FR_H
#define LANGUAGE_FR_H

#define MAPPER_NON
#define NOT_EXTENDED_ISO10646_1_5X7

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" prete.")
#define MSG_BACK                            _UxGT("Retour")
#define MSG_SD_INSERTED                     _UxGT("Carte inseree")
#define MSG_SD_REMOVED                      _UxGT("Carte retiree")
#define MSG_LCD_ENDSTOPS                    _UxGT("Butees") // Max length 8 characters
#define MSG_MAIN                            _UxGT("Menu principal")
#define MSG_AUTOSTART                       _UxGT("Demarrage auto")
#define MSG_DISABLE_STEPPERS                _UxGT("Arreter moteurs")
#define MSG_DEBUG_MENU                      _UxGT("Menu debug")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Test barre progress.")
#define MSG_AUTO_HOME                       _UxGT("Origine auto.")
#define MSG_AUTO_HOME_X                     _UxGT("Origine X Auto.")
#define MSG_AUTO_HOME_Y                     _UxGT("Origine Y Auto.")
#define MSG_AUTO_HOME_Z                     _UxGT("Origine Z Auto.")
#define MSG_LEVEL_BED_HOMING                _UxGT("Origine XYZ")
#define MSG_LEVEL_BED_WAITING               _UxGT("Clic pour commencer")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Point suivant")
#define MSG_LEVEL_BED_DONE                  _UxGT("Mise a niveau OK!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Adoucir hauteur")
#define MSG_SET_HOME_OFFSETS                _UxGT("Regl. decal. origine")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Decalages appliques")
#define MSG_SET_ORIGIN                      _UxGT("Regler origine")
#define MSG_PREHEAT_1                       _UxGT("Prechauffage PLA")
#define MSG_PREHEAT_1_N                     _UxGT("Prechauff. PLA ")
#define MSG_PREHEAT_1_ALL                   _UxGT("Prech. PLA Tout")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" fini")
#define MSG_PREHEAT_1_BEDONLY               _UxGT("Prech. PLA lit")
#define MSG_PREHEAT_1_SETTINGS              _UxGT("Regl. prech. PLA")
#define MSG_PREHEAT_2                       _UxGT("Prechauffage ABS")
#define MSG_PREHEAT_2_N                     _UxGT("Prechauff. ABS ")
#define MSG_PREHEAT_2_ALL                   _UxGT("Prech. ABS Tout")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" fini")
#define MSG_PREHEAT_2_BEDONLY               _UxGT("Prech. ABS lit")
#define MSG_PREHEAT_2_SETTINGS              _UxGT("Regl. prech. ABS")
#define MSG_COOLDOWN                        _UxGT("Refroidir")
#define MSG_SWITCH_PS_ON                    _UxGT("Allumer alim.")
#define MSG_SWITCH_PS_OFF                   _UxGT("eteindre alim.")
#define MSG_EXTRUDE                         _UxGT("extrusion")
#define MSG_RETRACT                         _UxGT("Retraction")
#define MSG_MOVE_AXIS                       _UxGT("Deplacer un axe")
#define MSG_BED_LEVELING                    _UxGT("Regl. Niv. lit")
#define MSG_LEVEL_BED                       _UxGT("Regl. Niv. lit")
#define MSG_EDITING_STOPPED                 _UxGT("Arret edit. maillage")
#define MSG_USER_MENU                       _UxGT("Commandes perso")

#define MSG_UBL_DOING_G29                   _UxGT("G29 en cours")
#define MSG_UBL_UNHOMED                     _UxGT("Origine XYZ d'abord")
#define MSG_UBL_TOOLS                       _UxGT("Outils UBL")
#define MSG_UBL_LEVEL_BED                   _UxGT("Niveau lit unifie")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Maillage manuel")
#define MSG_UBL_BC_INSERT                   _UxGT("Poser cale & mesurer")
#define MSG_UBL_BC_INSERT2                  _UxGT("Mesure")
#define MSG_UBL_BC_REMOVE                   _UxGT("oter et mesurer lit")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Aller au suivant")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Activer l'UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Desactiver l'UBL")
#define MSG_UBL_SET_BED_TEMP                _UxGT("Temperature lit")
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             _UxGT("Temperature buse")
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Editer maille perso")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Reglage fin maille")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Termier maille")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Creer maille perso")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Creer maille")
#define MSG_UBL_BUILD_PLA_MESH              _UxGT("Creer maille PLA")
#define MSG_UBL_BUILD_ABS_MESH              _UxGT("Creer maille ABS")
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Creer maille froide")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Ajuster haut. maille")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Hauteur")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Valider maille")
#define MSG_UBL_VALIDATE_PLA_MESH           _UxGT("Valider maille PLA")
#define MSG_UBL_VALIDATE_ABS_MESH           _UxGT("Valider maille ABS")
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Valider maille perso")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Continuer maille")
#define MSG_UBL_MESH_LEVELING               _UxGT("Niveau par maille")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("Niveau a 3 points")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Niveau grille")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Maille de niveau")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Point lateral")
#define MSG_UBL_MAP_TYPE                    _UxGT("Type de carte")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Voir maille")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Voir pour hote")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Voir pour CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Off Printer Backup")
#define MSG_UBL_INFO_UBL                    _UxGT("Voir info UBL")
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("Modifier maille")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Taux de remplissage")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Remplissage manuel")
#define MSG_UBL_SMART_FILLIN                _UxGT("Remplissage auto")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Maille remplissage")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Annuler tout")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Annuler le plus pres")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Reglage fin (tous)")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Reglage fin (proche)")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Stockage maille")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Slot memoire")
#define MSG_UBL_LOAD_MESH                   _UxGT("Charger maille")
#define MSG_UBL_SAVE_MESH                   _UxGT("Sauver maille")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Err: Enreg. UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Err: Ouvrir UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Offset Z arrete")


#define MSG_MOVING                          _UxGT("Deplacement...")
#define MSG_FREE_XY                         _UxGT("Debloquer XY")
#define MSG_MOVE_X                          _UxGT("Depl. X")
#define MSG_MOVE_Y                          _UxGT("Depl. Y")
#define MSG_MOVE_Z                          _UxGT("Depl. Z")
#define MSG_MOVE_E                          _UxGT("Extruder")
#define MSG_MOVE_01MM                       _UxGT("Depl. 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("Depl. 1mm")
#define MSG_MOVE_10MM                       _UxGT("Depl. 10mm")
#define MSG_SPEED                           _UxGT(" Vitesse")
#define MSG_BED_Z                           _UxGT("Lit Z")
#define MSG_NOZZLE                          _UxGT("Buse")
#define MSG_BED                             _UxGT("Lit")
#define MSG_FAN_SPEED                       _UxGT("Vitesse ventil.")
#define MSG_FLOW                            _UxGT("Flux")
#define MSG_CONTROL                         _UxGT("Controler")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" Facteur")
#define MSG_AUTOTEMP                        _UxGT("Temp. Auto.")
#define MSG_ON                              _UxGT("Marche")
#define MSG_OFF                             _UxGT("Arret")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Selectionner")
#define MSG_ACC                             _UxGT("Acceleration")
#define MSG_JERK                            _UxGT("Jerk")
#define MSG_VX_JERK                         _UxGT("Vx-jerk")
#define MSG_VY_JERK                         _UxGT("Vy-jerk")
#define MSG_VZ_JERK                         _UxGT("Vz-jerk")
#define MSG_VE_JERK                         _UxGT("Ve-jerk")
#define MSG_VELOCITY                        _UxGT("Velocite")
#define MSG_VMAX                            _UxGT("Vmax")
#define MSG_VMIN                            _UxGT("Vmin")
#define MSG_VTRAV_MIN                       _UxGT("Vdepl min")
#define MSG_ACCELERATION                    _UxGT("Acceleration")
#define MSG_AMAX                            _UxGT("Amax ")
#define MSG_A_RETRACT                       _UxGT("A-retract")
#define MSG_A_TRAVEL                        _UxGT("A-Depl.")
#define MSG_STEPS_PER_MM                    _UxGT("Pas/mm")
#define MSG_XSTEPS                          _UxGT("Xpas/mm")
#define MSG_YSTEPS                          _UxGT("Ypas/mm")
#define MSG_ZSTEPS                          _UxGT("Zpas/mm")
#define MSG_ESTEPS                          _UxGT("Epas/mm")
#define MSG_E1STEPS                         _UxGT("E1pas/mm")
#define MSG_E2STEPS                         _UxGT("E2pas/mm")
#define MSG_E3STEPS                         _UxGT("E3pas/mm")
#define MSG_E4STEPS                         _UxGT("E4pas/mm")
#define MSG_E5STEPS                         _UxGT("E5pas/mm")
#define MSG_TEMPERATURE                     _UxGT("Temperature")
#define MSG_MOTION                          _UxGT("Mouvement")
#define MSG_FILAMENT                        _UxGT("Filament")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E en mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Diam. Fil.")
#define MSG_ADVANCE_K                       _UxGT("Advance K")
#define MSG_CONTRAST                        _UxGT("Contraste LCD")
#define MSG_STORE_EEPROM                    _UxGT("Sauver config")
#define MSG_LOAD_EEPROM                     _UxGT("Lire config")
#define MSG_RESTORE_FAILSAFE                _UxGT("Restaurer defauts")
#define MSG_INIT_EEPROM                     _UxGT("Initialiser EEPROM")
#define MSG_REFRESH                         _UxGT("Actualiser")
#define MSG_WATCH                           _UxGT("Surveiller")
#define MSG_PREPARE                         _UxGT("Preparer")
#define MSG_TUNE                            _UxGT("Regler")
#define MSG_PAUSE_PRINT                     _UxGT("Interrompre impr.")
#define MSG_RESUME_PRINT                    _UxGT("Reprendre impr.")
#define MSG_STOP_PRINT                      _UxGT("Arreter impr.")
#define MSG_CARD_MENU                       _UxGT("Impr. depuis SD")
#define MSG_NO_CARD                         _UxGT("Pas de carte")
#define MSG_DWELL                           _UxGT("Repos...")
#define MSG_USERWAIT                        _UxGT("Atten. de l'util.")
#define MSG_PRINT_PAUSED                    _UxGT("Impr. en pause")
#define MSG_RESUMING                        _UxGT("Repri. de l'impr.")
#define MSG_PRINT_ABORTED                   _UxGT("Impr. Annulee")
#define MSG_NO_MOVE                         _UxGT("Moteurs bloques.")
#define MSG_KILLED                          _UxGT("MORT.")
#define MSG_STOPPED                         _UxGT("STOPPe.")
#define MSG_CONTROL_RETRACT                 _UxGT("Retraction mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Ech. Retr. mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Retraction V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Saut Z mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Ech. UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("Ech. UnRet V")
#define MSG_AUTORETRACT                     _UxGT("Retract. Auto.")
#define MSG_FILAMENTCHANGE                  _UxGT("Changer filament")
#define MSG_INIT_SDCARD                     _UxGT("Init. la carte SD")
#define MSG_CNG_SDCARD                      _UxGT("Changer de carte")
#define MSG_ZPROBE_OUT                      _UxGT("Z sonde exte. lit")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("Autotest BLTouch")
#define MSG_BLTOUCH_RESET                   _UxGT("RaZ BLTouch")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("Deployer BLTouch")
#define MSG_BLTOUCH_STOW                    _UxGT("Ranger BLTouch")
#define MSG_HOME                            _UxGT("Origine")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("Premier")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Decalage Z")
#define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Butee abandon")
#define MSG_HEATING_FAILED_LCD              _UxGT("Erreur de chauffe")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Err: TEMP. REDONDANT")
#define MSG_THERMAL_RUNAWAY                 _UxGT("EMBALLEMENT THERM.")
#define MSG_ERR_MAXTEMP                     _UxGT("Err: TEMP. MAX")
#define MSG_ERR_MINTEMP                     _UxGT("Err: TEMP. MIN")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Err: TEMP. MAX LIT")
#define MSG_ERR_MINTEMP_BED                 _UxGT("Err: TEMP. MIN LIT")
#define MSG_ERR_Z_HOMING                    _UxGT("G28 Z interdit")

#define MSG_HALTED                          _UxGT("IMPR. STOPPeE")
#define MSG_PLEASE_RESET                    _UxGT("RaZ. SVP")
#define MSG_SHORT_DAY                       _UxGT("j") // One character only
#define MSG_SHORT_HOUR                      _UxGT("h") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("m") // One character only

#define MSG_HEATING                         _UxGT("En chauffe...")
#define MSG_HEATING_COMPLETE                _UxGT("Chauffe terminee")
#define MSG_BED_HEATING                     _UxGT("Lit en chauffe..")
#define MSG_BED_DONE                        _UxGT("Chauffe lit terminee")
#define MSG_DELTA_CALIBRATE                 _UxGT("Calibration Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Calibrer X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Calibrer Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Calibrer Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Calibrer centre")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Calibration Auto")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Hauteur Delta")

#define MSG_INFO_MENU                       _UxGT("Infos imprimante")
#define MSG_INFO_PRINTER_MENU               _UxGT("Infos imprimante")
#define MSG_3POINT_LEVELING                 _UxGT("Niveau a 3 points")
#define MSG_LINEAR_LEVELING                 _UxGT("Niveau lineaire")
#define MSG_BILINEAR_LEVELING               _UxGT("Niveau bilineaire")
#define MSG_UBL_LEVELING                    _UxGT("Niveau lit unifie")
#define MSG_MESH_LEVELING                   _UxGT("Niveau maillage")
#define MSG_INFO_STATS_MENU                 _UxGT("Stats. imprimante")
#define MSG_INFO_BOARD_MENU                 _UxGT("Infos carte")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Thermistors")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extrudeurs")
#define MSG_INFO_BAUDRATE                   _UxGT("Baud")
#define MSG_INFO_PROTOCOL                   _UxGT("Protocole")
#define MSG_CASE_LIGHT                      _UxGT("Lumiere caisson")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Luminosite")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Nbre impressions")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Terminees")
  #define MSG_INFO_PRINT_TIME               _UxGT("Tps impr. total")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Impr. la + longue")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Total filament")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Impressions")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Terminees")
  #define MSG_INFO_PRINT_TIME               _UxGT("Total")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("+ long")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Filament")
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("Temp Min")
#define MSG_INFO_MAX_TEMP                   _UxGT("Temp Max")
#define MSG_INFO_PSU                        _UxGT("Alimentation")
#define MSG_DRIVE_STRENGTH                  _UxGT("Puiss. moteur ")
#define MSG_DAC_PERCENT                     _UxGT("Driver %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("DAC EEPROM sauv.")

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("+ extrusion")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Reprendre impr.")
#define MSG_FILAMENT_CHANGE_MINTEMP         _UxGT("La temp. minimum est ")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Buse: ")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Attente Demarrage")
  #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("du filament")
  #define MSG_FILAMENT_CHANGE_INIT_3        _UxGT("changer")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("attente de")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      _UxGT("decharger filament")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("inserer filament")
  #define MSG_FILAMENT_CHANGE_INSERT_2      _UxGT("et app. bouton")
  #define MSG_FILAMENT_CHANGE_INSERT_3      _UxGT("pour continuer...")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Presser le bouton...")
  #define MSG_FILAMENT_CHANGE_HEAT_2        _UxGT("Pr chauffer la buse")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Buse en chauffe")
  #define MSG_FILAMENT_CHANGE_HEATING_2     _UxGT("Patientez SVP...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("attente de")
  #define MSG_FILAMENT_CHANGE_LOAD_2        _UxGT("chargement filament")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     _UxGT("attente de")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2     _UxGT("extrusion filament")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("attente impression")
  #define MSG_FILAMENT_CHANGE_RESUME_2      _UxGT("pour reprendre")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Patientez...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Ejection...")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Inserer et clic")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Chargement...")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     _UxGT("Extrusion...")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Reprise...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_FR_H


