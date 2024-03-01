/*******************************************************************************
 * 					Human Machine Interface Micro-controller				   *
 *																			   *
 * 					Author: Abdelrhman Khaled Sobhi			     			   *
 *																			   *
 * 								Group : 79								       *
 *																			   *
 *******************************************************************************/
#ifndef FLAGS_COMMAND_H_
#define FLAGS_COMMAND_H_

//#define ADDRESS_FOR_SAVING_DATA_IN_EEPROM                     0x0311

#define MATCHED                                               	1

#define NOT_MATCHED                                             0

#define PASSWORD_ONE_IS_RESIVED_Q								'O'

#define PASSWORD_TWO_IS_RESIVED_Q								'T'

#define ASK_UART_ABOUT_MATCHING_PASSWORDS					    'A'

#define SENDED_DATA_MATCHES_EEPROM                              'D'

#define UNLOCKING_DOOR                                          'U'

#define PASS_FETCH_IS_CORRECT                                   'P'

#define PASS_FETCH_IS_NOT_CORRECT                               'S'

#define DOOR_IS_OPEN                                            'E'

#define CHANGE_PASSWORD                                         'C'

#define CONFIRME_CHANGE_PASS                                    'H'

#define FAILD_TO_CHANGE                                         'F'

#define RECEIVE_NEW_PASSWORD                                    'W'

#define CORRECT_PASSWORD            				  		    'K'

#define WRONG_PASSWORD          							    'L'

#define EQUALITY_OF_TWO_NEW_PASSWORDS                            'Q'

#define CHECK_FIRST_NEW_PASSWORD                                'I'

#define CHECK_SECONDE_NEW_PASSWORD                              'Q'

#define CHECK_TWO_NEW_PASSWORD_ARE_EQUAL                        'V'

#define ATTENTION_MODE                                         'X'

#define PROGRAM_LAG                                             'G'
#endif /* FLAGS_COMMAND_H_ */
