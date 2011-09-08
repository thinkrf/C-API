#ifndef __WSA_ERROR_H__
#define __WSA_ERROR_H__

#include "stdint.h"
#include "wsa_debug.h"

//*****************************************************************************
// Defines error parameters & and associated messages
//*****************************************************************************

// A large 16-bit negative number
#define LNEG_NUM (-10000)


// ///////////////////////////////
// WSA RELATED ERRORS			//
// ///////////////////////////////
#define WSA_ERR_NOWSA			(LNEG_NUM - 1)
#define WSA_ERR_INVIPADDRESS	(LNEG_NUM - 2)
#define WSA_ERR_NOCTRLPIPE		(LNEG_NUM - 3)
#define WSA_ERR_UNKNOWNPRODSER	(LNEG_NUM - 4)
#define WSA_ERR_UNKNOWNPRODVSN	(LNEG_NUM - 5)
#define WSA_ERR_UNKNOWNFWRVSN	(LNEG_NUM - 6)
#define WSA_ERR_UNKNOWNRFEVSN	(LNEG_NUM - 7)
#define WSA_ERR_PRODOBSOLETE	(LNEG_NUM - 8)
//#define WSA_ERR_	(LNEG_NUM - 18)


// ///////////////////////////////
// WSA SETUP ERRORS				//
// ///////////////////////////////
#define WSA_ERR_WSANOTRDY		(LNEG_NUM - 101)
#define WSA_ERR_WSAINUSE		(LNEG_NUM - 102)
#define WSA_ERR_SETFAILED		(LNEG_NUM - 103)
#define WSA_ERR_OPENFAILED		(LNEG_NUM - 104)
#define WSA_ERR_INITFAILED		(LNEG_NUM - 105)
#define WSA_ERR_INVADCCORRVALUE	(LNEG_NUM - 106)



// ///////////////////////////////
// INTERFACE/CONNECTION ERRORS  //
// ///////////////////////////////
#define WSA_ERR_INVINTFMETHOD	(LNEG_NUM - 201)
#define WSA_ERR_INVIPHOSTADDRESS	(LNEG_NUM - 202)
#define WSA_ERR_USBNOTAVBL		(LNEG_NUM - 203)
#define WSA_ERR_USBOPENFAILED	(LNEG_NUM - 204)
#define WSA_ERR_USBINITFAILED	(LNEG_NUM - 205)
#define WSA_ERR_ETHERNETNOTAVBL	(LNEG_NUM - 206)
#define WSA_ERR_ETHERNETCONNECTFAILED	(LNEG_NUM - 207)
#define WSA_ERR_ETHERNETINITFAILED	(LNEG_NUM - 209)
#define WSA_ERR_WINSOCKSTARTUPFAILED (LNEG_NUM - 210)
#define WSA_ERR_SOCKETSETFUPFAILED	(LNEG_NUM - 211)
//#define WSA_ERR_	(LNEG_NUM - 202)


// ///////////////////////////////
// AMPLITUDE ERRORS				//
// ///////////////////////////////
#define WSA_ERR_INVAMP	(LNEG_NUM - 301)


// ///////////////////////////////
// DATA ACQUISITION ERRORS		//
// ///////////////////////////////
#define WSA_ERR_NODATABUS		(LNEG_NUM - 401)
#define WSA_ERR_READFRAMEFAILED	(LNEG_NUM - 402)
#define WSA_ERR_INVSAMPLESIZE	(LNEG_NUM - 403)
//#define WSA_ERR_	(LNEG_NUM - 404)


// ///////////////////////////////
// FREQUENCY ERRORS				//
// ///////////////////////////////
#define WSA_ERR_FREQOUTOFBOUND	(LNEG_NUM - 601)
#define WSA_ERR_INVFREQRES		(LNEG_NUM - 602)
#define WSA_ERR_FREQSETFAILED	(LNEG_NUM - 603)
#define WSA_ERR_PLLLOCKFAILED	(LNEG_NUM - 604)
//#define WSA_ERR_	(LNEG_NUM - 605)


// ///////////////////////////////
// GAIN ERRORS					//
// ///////////////////////////////
#define WSA_ERR_INVRFGAIN	(LNEG_NUM - 801)
#define WSA_ERR_INVIFGAIN	(LNEG_NUM - 802)
#define WSA_ERR_IFGAINSETFAILED (LNEG_NUM - 803)
#define WSA_ERR_RFGAINSETFAILED (LNEG_NUM - 804)
//#define WSA_ERR_	(LNEG_NUM - 802)


// ///////////////////////////////
// RUNMODE ERRORS				//
// ///////////////////////////////
#define WSA_ERR_INVRUNMODE	(LNEG_NUM - 1001)
//#define WSA_ERR_	(LNEG_NUM - 1002)


// ///////////////////////////////
// TRIGGER ERRORS				//
// ///////////////////////////////
#define WSA_ERR_INVTRIGID		(LNEG_NUM - 1201)
#define WSA_ERR_INVSTOPFREQ		(LNEG_NUM - 1202)
#define WSA_ERR_STARTOOB		(LNEG_NUM - 1203)
#define WSA_ERR_STOPOOB			(LNEG_NUM - 1204)
#define WSA_ERR_INVSTARTRES		(LNEG_NUM - 1205)
#define WSA_ERR_INVSTOPRES		(LNEG_NUM - 1206)
#define WSA_ERR_INVTRIGRANGE	(LNEG_NUM - 1207)
#define WSA_ERR_INVDWELL		(LNEG_NUM - 1208)
#define WSA_ERR_INVNUMFRAMES	(LNEG_NUM - 1209)
//#define WSA_ERR_	(LNEG_NUM - 1210)


// ///////////////////////////////
// SOCKET ERRORS				//
// ///////////////////////////////
#define WSA_ERR_CMDSENDFAILED	(LNEG_NUM - 1501)
#define WSA_ERR_CMDINVALID	(LNEG_NUM - 1502)


// ///////////////////////////////
// RFE ERRORS				    //
// ///////////////////////////////
#define WSA_ERR_INVANTENNAPORT (LNEG_NUM - 1601)
#define WSA_ERR_ANTENNASETFAILED (LNEG_NUM - 1602)
#define WSA_ERR_INVFILTERMODE (LNEG_NUM - 1603)
#define WSA_ERR_FILTERSETFAILED (LNEG_NUM - 1604)
#define WSA_ERR_INVCALIBRATEMODE (LNEG_NUM - 1605)
#define WSA_ERR_CALIBRATESETFAILED (LNEG_NUM - 1606)



// ///////////////////////////////
// FILE RELATED ERRORS			//
// ///////////////////////////////
#define WSA_ERR_FILECREATEFAILED (LNEG_NUM - 1900)
#define WSA_ERR_FILEOPENFAILED (LNEG_NUM - 1901)
#define WSA_ERR_FILEREADFAILED (LNEG_NUM - 1902)
#define WSA_ERR_FILEWRITEFAILED (LNEG_NUM - 1903)



// ///////////////////////////////
// OTHERS ERRORS				//
// ///////////////////////////////
#define WSA_ERR_INVNUMBER		(LNEG_NUM - 2000)
#define WSA_ERR_INVREGADDR		(LNEG_NUM - 2001)
#define WSA_ERR_MALLOCFAILED	(LNEG_NUM - 2002)
#define WSA_ERR_UNKNOWN_ERROR	(LNEG_NUM - 2003)



static struct wsa_err_item {
	int16_t err_id;
	const char *err_msg;

	wsa_err_item(int16_t id, const char* msg = 0) : err_id(id), err_msg(msg) {}
} wsa_err_list[] = {
	wsa_err_item(0, "No error"),
	
	//*****
	// WSA Related
	//*****
	wsa_err_item(WSA_ERR_NOWSA, 
		"No WSA detected. Check the power or the connection"),
	wsa_err_item(WSA_ERR_NOCTRLPIPE, 
		"No control channel detected. Possible firmware error"),
	wsa_err_item(WSA_ERR_NODATABUS, 
		"No data channel detected. Possible firmware error"),
	wsa_err_item(WSA_ERR_UNKNOWNPRODSER, 
		"Unknown WSA product serial number detected"),
	wsa_err_item(WSA_ERR_UNKNOWNPRODVSN, 
		"Unknown WSA product version detected"),
	wsa_err_item(WSA_ERR_UNKNOWNRFEVSN, 
		"Unknown WSA RFE version detected"),
	wsa_err_item(WSA_ERR_UNKNOWNFWRVSN, 
		"Unknown WSA firmware version detected"),
	wsa_err_item(WSA_ERR_PRODOBSOLETE,
		"Product is obsolete and not supported"),

	//*****
	// WSA Setup Related
	//*****
	wsa_err_item(WSA_ERR_WSANOTRDY, 
		"WSA does not seem to be ready"),
	wsa_err_item(WSA_ERR_WSAINUSE, 
		"WSA is in use at the moment"),
	wsa_err_item(WSA_ERR_SETFAILED, 
		"Failed to set the WSA"),
	wsa_err_item(WSA_ERR_OPENFAILED,
		"Unable to open the WSA"),
	wsa_err_item(WSA_ERR_INITFAILED,
		"Unable to initialize the WSA"),
	wsa_err_item(WSA_ERR_INVADCCORRVALUE,
		"Invalid ADC correction value (use -1, 0 to 13)"),


	//*****
	// WSA Interface/Connection Related
	//*****
	wsa_err_item(WSA_ERR_INVINTFMETHOD, 
		"Invalid connection type"),
	wsa_err_item(WSA_ERR_INVIPHOSTADDRESS,
		"Invalid IP or Host Name given"),
	wsa_err_item(WSA_ERR_USBNOTAVBL, 
		"USB connection is not available with this WSA"),
	wsa_err_item(WSA_ERR_ETHERNETNOTAVBL,
		"Ethernet connection is not available with this WSA"),
	wsa_err_item(WSA_ERR_USBOPENFAILED,
		"Unable to open the WSA's USB connection"),
	wsa_err_item(WSA_ERR_USBINITFAILED,
		"Unable to initialize the WSA's USB component"),
	wsa_err_item(WSA_ERR_ETHERNETCONNECTFAILED,
		"Unable to open the WSA's Ethernet connection"),
	wsa_err_item(WSA_ERR_ETHERNETINITFAILED,
		"Unable to initialize the WSA's Ethernet component"),
	wsa_err_item(WSA_ERR_WINSOCKSTARTUPFAILED,
		"Unable to start up Windows Socket with this system"),
	wsa_err_item(WSA_ERR_SOCKETSETFUPFAILED,
		"Socket setup failed"),

	//*****
	// Amplitude related
	//*****
	wsa_err_item(WSA_ERR_INVAMP, 
		"Invalid amplitude value"),

	//*****
	// Data acquisition related
	//*****
	wsa_err_item(WSA_ERR_NODATABUS, 
		"No data bus detected. Possible firmware error"),
	wsa_err_item(WSA_ERR_READFRAMEFAILED, 
		"Failed reading a WSA frame"),
	wsa_err_item(WSA_ERR_INVSAMPLESIZE, 
		"Invalid frame size"),	// TODO: could add version maximum pkt here

	//*****
	// Frequency related
	//*****
	wsa_err_item(WSA_ERR_FREQOUTOFBOUND, 
		"The frequency input is out of bound"),
	wsa_err_item(WSA_ERR_INVFREQRES, 
		"Invalid frequency resolution"),
	wsa_err_item(WSA_ERR_FREQSETFAILED, 
		"Failed tuning the frequency in the WSA"),
	wsa_err_item(WSA_ERR_PLLLOCKFAILED, 
		"The WSA's PLL failed to lock"),
	
	//*****
	// Gain related
	//*****
	wsa_err_item(WSA_ERR_INVRFGAIN, 
		"Invalid RF gain setting"),
	wsa_err_item(WSA_ERR_INVIFGAIN, 
		"IF gain value out of range or invalid"),
	wsa_err_item(WSA_ERR_IFGAINSETFAILED,
		"Failed setting the IF gain setting to WSA"),
	wsa_err_item(WSA_ERR_RFGAINSETFAILED,
		"Failed setting the RF gain value to WSA"),

	//*****
	// Run mode related
	//*****
	wsa_err_item(WSA_ERR_INVRUNMODE, 
		"Invalide run mode"),

	//*****
	// Trigger related
	//*****
	wsa_err_item(WSA_ERR_INVTRIGID, 
		"Invalid trigger ID"),
	wsa_err_item(WSA_ERR_INVSTOPFREQ, 
		"Invalid stop frequency (ensure it is larger than "
		"the start frequency"),
	wsa_err_item(WSA_ERR_STARTOOB, 
		"Start frequency is out of bound"),
	wsa_err_item(WSA_ERR_STOPOOB, 
		"Stop frequency is out of bound"),
	wsa_err_item(WSA_ERR_INVSTARTRES, 
		"Invalid start frequency resolution"),
	wsa_err_item(WSA_ERR_INVSTOPRES, 
		"Invalid stop frequency resolution"),
	wsa_err_item(WSA_ERR_INVTRIGRANGE, 
		"Invalid trigger range between the start & stop frequencies"),
	wsa_err_item(WSA_ERR_INVDWELL, 
		"Invalid trigger dwell time"),
	wsa_err_item(WSA_ERR_INVNUMFRAMES, 
		"Invalid number of frames to capture"),

	//*****
	// SOCKET ERRORS
	//*****
	wsa_err_item(WSA_ERR_CMDSENDFAILED,
		"Sending of the command failed"),
	wsa_err_item(WSA_ERR_CMDINVALID,
		"Command is not valid or incorrectly written"),


	//*****
	// RFE SECTION
	//*****
	wsa_err_item(WSA_ERR_INVANTENNAPORT,
		"Invalid antenna switch port"),
	wsa_err_item(WSA_ERR_ANTENNASETFAILED,
		"Failed to set the antenna port"),
	wsa_err_item(WSA_ERR_INVFILTERMODE,
		"Invalid filter mode"),
	wsa_err_item(WSA_ERR_FILTERSETFAILED,
		"Failed to set the filter mode"),
	wsa_err_item(WSA_ERR_INVCALIBRATEMODE,
		"Invalid calibration mode"),
	wsa_err_item(WSA_ERR_CALIBRATESETFAILED,
		"Failed to set the calibration mode"),


	//*****
	// File related
	//*****
	wsa_err_item(WSA_ERR_FILECREATEFAILED,
		"Unable to open the file"),
	wsa_err_item(WSA_ERR_FILEOPENFAILED,
		"Unable to open the file"),
	wsa_err_item(WSA_ERR_FILEREADFAILED,
		"Unable to read the file"),
	wsa_err_item(WSA_ERR_FILEWRITEFAILED,
		"Unable to write to the file"),

	//*****
	// Others
	//*****
	wsa_err_item(WSA_ERR_INVNUMBER, 
		"Invalid number format. Check the required number type"),
	wsa_err_item(WSA_ERR_INVREGADDR, 
		"Invalid register address"),
	wsa_err_item(WSA_ERR_MALLOCFAILED, 
		"Memory allocation failed"),
	wsa_err_item(WSA_ERR_UNKNOWN_ERROR, 
		"Unknow error")
	
};

const char *wsa_get_err_msg(int16_t err_id);

#endif