//
//  Data Conversion.h
//  SPMySQLFramework
//
//  Created by Rowan Beentje (rowan.beent.je) on May 26, 2013
//  Copyright (c) 2013 Rowan Beentje. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.
//
//  More info at <https://github.com/sequelpro/sequelpro>

@interface SPMySQLResult (Data_Conversion_Private_API)

- (id)_getObjectFromBytes:(char *)bytes ofLength:(NSUInteger)length fieldDefinitionIndex:(NSUInteger)fieldIndex previewLength:(NSUInteger)previewLength;

static inline SPMySQLResultFieldProcessor _processorForField(MYSQL_FIELD aField);

static inline NSString * _stringWithBytes(const void *dataBytes, NSUInteger dataLength, NSStringEncoding aStringEncoding, NSUInteger previewLength);
static inline NSString * _bitStringWithBytes(const char *bytes, NSUInteger length, NSUInteger padLength);
static inline NSString * _convertStringData(const void *dataBytes, NSUInteger dataLength, NSStringEncoding aStringEncoding, NSUInteger previewLength);

@end
