/*
 * php_libreSense.h
 *
 * part of libreSense (https://www.libreSense.org)
 * Copyright (c) 2004-2025 Rubicon Communications, LLC (Netgate)
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PHP_LIBRESENSE_H
# define PHP_LIBRESENSE_H

extern zend_module_entry libresense_module_entry;
# define phpext_libresense_ptr &libresense_module_entry

# ifndef PHP_LIBRESENSE_VERSION
#  define PHP_LIBRESENSE_VERSION "0.1.0"
# endif

# if defined(ZTS) && defined(COMPILE_DL_LIBRESENSE)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_LIBRESENSE_H */
