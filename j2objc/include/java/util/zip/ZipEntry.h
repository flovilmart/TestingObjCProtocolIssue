//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/zip/ZipEntry.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipZipEntry")
#ifdef RESTRICT_JavaUtilZipZipEntry
#define INCLUDE_ALL_JavaUtilZipZipEntry 0
#else
#define INCLUDE_ALL_JavaUtilZipZipEntry 1
#endif
#undef RESTRICT_JavaUtilZipZipEntry

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipZipEntry_) && (INCLUDE_ALL_JavaUtilZipZipEntry || defined(INCLUDE_JavaUtilZipZipEntry))
#define JavaUtilZipZipEntry_

#define RESTRICT_JavaUtilZipZipConstants 1
#define INCLUDE_JavaUtilZipZipConstants 1
#include "java/util/zip/ZipConstants.h"

@class IOSByteArray;

/*!
 @brief This class is used to represent a ZIP file entry.
 @author David Connelly
 */
@interface JavaUtilZipZipEntry : NSObject < JavaUtilZipZipConstants, NSCopying > {
 @public
  NSString *name_;
  jlong time_;
  jlong crc_;
  jlong size_;
  jlong csize_;
  jint method_;
  jint flag_;
  IOSByteArray *extra_;
  NSString *comment_;
  jlong dataOffset_;
}

+ (jint)STORED;

+ (jint)DEFLATED;

#pragma mark Public

/*!
 @brief Creates a new zip entry with the specified name.
 @param name the entry name
 @throw NullPointerExceptionif the entry name is null
 @throw IllegalArgumentExceptionif the entry name is longer than
             0xFFFF bytes
 */
- (instancetype)initWithNSString:(NSString *)name;

/*!
 */
- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)comment
                        withLong:(jlong)crc
                        withLong:(jlong)compressedSize
                        withLong:(jlong)size
                         withInt:(jint)compressionMethod
                         withInt:(jint)time
                   withByteArray:(IOSByteArray *)extra
                        withLong:(jlong)dataOffset;

/*!
 @brief Creates a new zip entry with fields taken from the specified
  zip entry.
 @param e a zip Entry object
 */
- (instancetype)initWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)e;

/*!
 @brief Returns a copy of this entry.
 */
- (id)java_clone;

/*!
 @brief Returns the comment string for the entry, or null if none.
 @return the comment string for the entry, or null if none
 - seealso: #setComment(String)
 */
- (NSString *)getComment;

/*!
 @brief Returns the size of the compressed entry data, or -1 if not known.
 In the case of a stored entry, the compressed size will be the same
  as the uncompressed size of the entry.
 @return the size of the compressed entry data, or -1 if not known
 - seealso: #setCompressedSize(long)
 */
- (jlong)getCompressedSize;

/*!
 @brief Returns the CRC-32 checksum of the uncompressed entry data, or -1 if
  not known.
 @return the CRC-32 checksum of the uncompressed entry data, or -1 if
  not known
 - seealso: #setCrc(long)
 */
- (jlong)getCrc;

/*!
 */
- (jlong)getDataOffset;

/*!
 @brief Returns the extra field data for the entry, or null if none.
 @return the extra field data for the entry, or null if none
 - seealso: #setExtra(byte[])
 */
- (IOSByteArray *)getExtra;

/*!
 @brief Returns the compression method of the entry, or -1 if not specified.
 @return the compression method of the entry, or -1 if not specified
 - seealso: #setMethod(int)
 */
- (jint)getMethod;

/*!
 @brief Returns the name of the entry.
 @return the name of the entry
 */
- (NSString *)getName;

/*!
 @brief Returns the uncompressed size of the entry data, or -1 if not known.
 @return the uncompressed size of the entry data, or -1 if not known
 - seealso: #setSize(long)
 */
- (jlong)getSize;

/*!
 @brief Returns the modification time of the entry, or -1 if not specified.
 @return the modification time of the entry, or -1 if not specified
 - seealso: #setTime(long)
 */
- (jlong)getTime;

/*!
 @brief Returns the hash code value for this entry.
 */
- (NSUInteger)hash;

/*!
 @brief Returns true if this is a directory entry.A directory entry is
  defined to be one whose name ends with a '/'.
 @return true if this is a directory entry
 */
- (jboolean)isDirectory;

/*!
 @brief Sets the optional comment string for the entry.
 <p>ZIP entry comments have maximum length of 0xffff. If the length of the
  specified comment string is greater than 0xFFFF bytes after encoding, only
  the first 0xFFFF bytes are output to the ZIP file entry.
 @param comment the comment string
 - seealso: #getComment()
 */
- (void)setCommentWithNSString:(NSString *)comment;

/*!
 @brief Sets the size of the compressed entry data.
 @param csize the compressed size to set to
 - seealso: #getCompressedSize()
 */
- (void)setCompressedSizeWithLong:(jlong)csize;

/*!
 @brief Sets the CRC-32 checksum of the uncompressed entry data.
 @param crc the CRC-32 value
 @throw IllegalArgumentExceptionif the specified CRC-32 value is
             less than 0 or greater than 0xFFFFFFFF
 - seealso: #getCrc()
 */
- (void)setCrcWithLong:(jlong)crc;

/*!
 @brief Sets the optional extra field data for the entry.
 @param extra the extra field data bytes
 @throw IllegalArgumentExceptionif the length of the specified
             extra field data is greater than 0xFFFF bytes
 - seealso: #getExtra()
 */
- (void)setExtraWithByteArray:(IOSByteArray *)extra;

/*!
 @brief Sets the compression method for the entry.
 @param method the compression method, either STORED or DEFLATED
 @throw IllegalArgumentExceptionif the specified compression
             method is invalid
 - seealso: #getMethod()
 */
- (void)setMethodWithInt:(jint)method;

/*!
 @brief Sets the uncompressed size of the entry data.
 @param size the uncompressed size in bytes
 @throw IllegalArgumentExceptionif the specified size is less
             than 0, is greater than 0xFFFFFFFF when            
 <a href="package-summary.html#zip64">ZIP64 format</a> is not supported,
             or is less than 0 when ZIP64 is supported
 - seealso: #getSize()
 */
- (void)setSizeWithLong:(jlong)size;

/*!
 @brief Sets the modification time of the entry.
 @param time the entry modification time in number of milliseconds              since the epoch
 - seealso: #getTime()
 */
- (void)setTimeWithLong:(jlong)time;

/*!
 @brief Returns a string representation of the ZIP entry.
 */
- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipEntry)

J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, name_, NSString *)
J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, extra_, IOSByteArray *)
J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, comment_, NSString *)

/*!
 @brief Compression method for uncompressed entries.
 */
inline jint JavaUtilZipZipEntry_get_STORED(void);
#define JavaUtilZipZipEntry_STORED 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipZipEntry, STORED, jint)

/*!
 @brief Compression method for compressed (deflated) entries.
 */
inline jint JavaUtilZipZipEntry_get_DEFLATED(void);
#define JavaUtilZipZipEntry_DEFLATED 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipZipEntry, DEFLATED, jint)

FOUNDATION_EXPORT void JavaUtilZipZipEntry_initWithNSString_withNSString_withLong_withLong_withLong_withInt_withInt_withByteArray_withLong_(JavaUtilZipZipEntry *self, NSString *name, NSString *comment, jlong crc, jlong compressedSize, jlong size, jint compressionMethod, jint time, IOSByteArray *extra, jlong dataOffset);

FOUNDATION_EXPORT JavaUtilZipZipEntry *new_JavaUtilZipZipEntry_initWithNSString_withNSString_withLong_withLong_withLong_withInt_withInt_withByteArray_withLong_(NSString *name, NSString *comment, jlong crc, jlong compressedSize, jlong size, jint compressionMethod, jint time, IOSByteArray *extra, jlong dataOffset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipEntry *create_JavaUtilZipZipEntry_initWithNSString_withNSString_withLong_withLong_withLong_withInt_withInt_withByteArray_withLong_(NSString *name, NSString *comment, jlong crc, jlong compressedSize, jlong size, jint compressionMethod, jint time, IOSByteArray *extra, jlong dataOffset);

FOUNDATION_EXPORT void JavaUtilZipZipEntry_initWithNSString_(JavaUtilZipZipEntry *self, NSString *name);

FOUNDATION_EXPORT JavaUtilZipZipEntry *new_JavaUtilZipZipEntry_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipEntry *create_JavaUtilZipZipEntry_initWithNSString_(NSString *name);

FOUNDATION_EXPORT void JavaUtilZipZipEntry_initWithJavaUtilZipZipEntry_(JavaUtilZipZipEntry *self, JavaUtilZipZipEntry *e);

FOUNDATION_EXPORT JavaUtilZipZipEntry *new_JavaUtilZipZipEntry_initWithJavaUtilZipZipEntry_(JavaUtilZipZipEntry *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipEntry *create_JavaUtilZipZipEntry_initWithJavaUtilZipZipEntry_(JavaUtilZipZipEntry *e);

FOUNDATION_EXPORT void JavaUtilZipZipEntry_init(JavaUtilZipZipEntry *self);

FOUNDATION_EXPORT JavaUtilZipZipEntry *new_JavaUtilZipZipEntry_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipEntry *create_JavaUtilZipZipEntry_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipEntry)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipZipEntry")
