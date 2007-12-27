#ifndef foodomainutilhfoo
#define foodomainutilhfoo

/* $Id$ */

/***
  This file is part of avahi.
 
  avahi is free software; you can redistribute it and/or modify it
  under the terms of the GNU Lesser General Public License as
  published by the Free Software Foundation; either version 2.1 of the
  License, or (at your option) any later version.
 
  avahi is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
  or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General
  Public License for more details.
 
  You should have received a copy of the GNU Lesser General Public
  License along with avahi; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA.
***/

#include <inttypes.h>
#include <sys/types.h>

#include <avahi-common/cdecl.h>
#include <avahi-common/domain.h>

AVAHI_C_DECL_BEGIN

/** Return the local host name. */
char *avahi_get_host_name(char *ret_s, size_t size); 

/** Return the local host name. avahi_free() the result! */
char *avahi_get_host_name_strdup(void);

/** Do a binary comparison of to specified domain names, return -1, 0, or 1, depending on the order. */
int avahi_binary_domain_cmp(const char *a, const char *b);

/** Returns 1 if the the end labels of domain are eqal to suffix */
int avahi_domain_ends_with(const char *domain, const char *suffix);

/** returns canonical DNS representation of C string representing a domain */
char * c_to_canonical_string(char* input);

/** returns canonical wire representation of uint16 */
char * uint16_to_canonical_string(uint16_t v);

/** returns canonical wire representation of uint32 */
char * uint32_to_canonical_string(uint32_t v);

AVAHI_C_DECL_END

#endif
