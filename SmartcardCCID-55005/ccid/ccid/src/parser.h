/*
 * MUSCLE SmartCard Development ( http://www.linuxnet.com )
 *
 * Copyright (C) 2003
 *  Toni Andjelkovic <toni@soth.at>
 *  Ludovic Rousseau <ludovic.rousseau@free.fr>
 *
 * $Id: parser.h 4248 2009-06-05 08:41:19Z rousseau $
 */

/**
 * @file
 * @brief Reads lexical config files and updates database.
 */

#ifndef __parser_h__
#define __parser_h__

#ifdef __cplusplus
extern "C"
{
#endif

#define TOKEN_MAX_KEY_SIZE   200
#define TOKEN_MAX_VALUE_SIZE 200

#define TOKEN_TYPE_KEY         1
#define TOKEN_TYPE_STRING      2

int LTPBundleFindValueWithKey(const char *fileName, const char *tokenKey,
                              /*@out@*/ char *tokenValue, int tokenIndice);

int LTPBundleFindOptionalValueWithKey(const char *fileName,
	const char *tokenKey, /*@out@*/ char *tokenValue, int tokenIndice);

#ifdef __cplusplus
}
#endif

#endif
