//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: openjdk/src/share/classes/java/text/DecimalFormat.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextDecimalFormat")
#ifdef RESTRICT_JavaTextDecimalFormat
#define INCLUDE_ALL_JavaTextDecimalFormat 0
#else
#define INCLUDE_ALL_JavaTextDecimalFormat 1
#endif
#undef RESTRICT_JavaTextDecimalFormat

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaTextDecimalFormat_) && (INCLUDE_ALL_JavaTextDecimalFormat || defined(INCLUDE_JavaTextDecimalFormat))
#define JavaTextDecimalFormat_

#define RESTRICT_JavaTextNumberFormat 1
#define INCLUDE_JavaTextNumberFormat 1
#include "java/text/NumberFormat.h"

@class JavaLangStringBuffer;
@class JavaMathRoundingMode;
@class JavaTextDecimalFormatSymbols;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;
@class JavaUtilCurrency;
@protocol JavaTextAttributedCharacterIterator;

/*!
 @brief <code>DecimalFormat</code> is a concrete subclass of 
 <code>NumberFormat</code> that formats decimal numbers.It has a variety of
  features designed to make it possible to parse and format numbers in any
  locale, including support for Western, Arabic, and Indic digits.
 It also
  supports different kinds of numbers, including integers (123), fixed-point
  numbers (123.4), scientific notation (1.23E4), percentages (12%), and
  currency amounts ($123).  All of these can be localized. 
 <p>To obtain a <code>NumberFormat</code> for a specific locale, including the
  default locale, call one of <code>NumberFormat</code>'s factory methods, such
  as <code>getInstance()</code>.  In general, do not call the 
 <code>DecimalFormat</code> constructors directly, since the 
 <code>NumberFormat</code> factory methods may return subclasses other than 
 <code>DecimalFormat</code>. If you need to customize the format object, do
  something like this: 
 <blockquote>@code

  NumberFormat f = NumberFormat.getInstance(loc);
  if (f instanceof DecimalFormat) {
      ((DecimalFormat) f).setDecimalSeparatorAlwaysShown(true);
  } 
  
@endcode</blockquote>
  
 <p>A <code>DecimalFormat</code> comprises a <em>pattern</em> and a set of 
 <em>symbols</em>.  The pattern may be set directly using 
 <code>applyPattern()</code>, or indirectly using the API methods.  The
  symbols are stored in a <code>DecimalFormatSymbols</code> object.  When using
  the <code>NumberFormat</code> factory methods, the pattern and symbols are
  read from localized <code>ResourceBundle</code>s.
  
 <h3>Patterns</h3>
  
 <code>DecimalFormat</code> patterns have the following syntax: 
 <blockquote>@code

   <i>Pattern:</i>
                  <i>PositivePattern</i>
                  <i>PositivePattern</i> ; <i>NegativePattern</i>
   <i>PositivePattern:</i>
                  <i>Prefix<sub>opt</sub></i> <i>Number</i> <i>Suffix<sub>opt</sub></i>
   <i>NegativePattern:</i>
                  <i>Prefix<sub>opt</sub></i> <i>Number</i> <i>Suffix<sub>opt</sub></i>
   <i>Prefix:</i>
          any Unicode characters except &#92;uFFFE, &#92;uFFFF, and special characters 
  <i>Suffix:</i>
          any Unicode characters except &#92;uFFFE, &#92;uFFFF, and special characters 
  <i>Number:</i>
                  <i>Integer</i> <i>Exponent<sub>opt</sub></i>
                  <i>Integer</i> . <i>Fraction</i> <i>Exponent<sub>opt</sub></i>
   <i>Integer:</i>
                  <i>MinimumInteger</i>
          #
          # <i>Integer</i>
          # , <i>Integer</i>
   <i>MinimumInteger:</i>
          0
          0 <i>MinimumInteger</i>
          0 , <i>MinimumInteger</i>
   <i>Fraction:</i>
                  <i>MinimumFraction<sub>opt</sub></i> <i>OptionalFraction<sub>opt</sub></i>
   <i>MinimumFraction:</i>
          0 <i>MinimumFraction<sub>opt</sub></i>
   <i>OptionalFraction:</i>
          # <i>OptionalFraction<sub>opt</sub></i>
   <i>Exponent:</i>
          E <i>MinimumExponent</i>
   <i>MinimumExponent:</i>
          0 <i>MinimumExponent<sub>opt</sub></i>
   
@endcode</blockquote>
  
 <p>A <code>DecimalFormat</code> pattern contains a positive and negative
  subpattern, for example, <code>"#,##0.00;(#,##0.00)"</code>.  Each
  subpattern has a prefix, numeric part, and suffix. The negative subpattern
  is optional; if absent, then the positive subpattern prefixed with the
  localized minus sign (<code>'-'</code> in most locales) is used as the
  negative subpattern. That is, <code>"0.00"</code> alone is equivalent to 
 <code>"0.00;-0.00"</code>.  If there is an explicit negative subpattern, it
  serves only to specify the negative prefix and suffix; the number of digits,
  minimal digits, and other characteristics are all the same as the positive
  pattern. That means that <code>"#,##0.0#;(#)"</code> produces precisely
  the same behavior as <code>"#,##0.0#;(#,##0.0#)"</code>.
  
 <p>The prefixes, suffixes, and various symbols used for infinity, digits,
  thousands separators, decimal separators, etc. may be set to arbitrary
  values, and they will appear properly during formatting.  However, care must
  be taken that the symbols and strings do not conflict, or parsing will be
  unreliable.  For example, either the positive and negative prefixes or the
  suffixes must be distinct for <code>DecimalFormat.parse()</code> to be able
  to distinguish positive from negative values.  (If they are identical, then 
 <code>DecimalFormat</code> will behave as if no negative subpattern was
  specified.)  Another example is that the decimal separator and thousands
  separator should be distinct characters, or parsing will be impossible. 
 <p>The grouping separator is commonly used for thousands, but in some
  countries it separates ten-thousands. The grouping size is a constant number
  of digits between the grouping characters, such as 3 for 100,000,000 or 4 for
  1,0000,0000.  If you supply a pattern with multiple grouping characters, the
  interval between the last one and the end of the integer is the one that is
  used. So <code>"#,##,###,####"</code> == <code>"######,####"</code> == 
 <code>"##,####,####"</code>.
  
 <h4>Special Pattern Characters</h4>
  
 <p>Many characters in a pattern are taken literally; they are matched during
  parsing and output unchanged during formatting.  Special characters, on the
  other hand, stand for other characters, strings, or classes of characters.
  They must be quoted, unless noted otherwise, if they are to appear in the
  prefix or suffix as literals. 
 <p>The characters listed here are used in non-localized patterns.  Localized
  patterns use the corresponding characters taken from this formatter's 
 <code>DecimalFormatSymbols</code> object instead, and these characters lose
  their special status.  Two exceptions are the currency sign and quote, which
  are not localized. 
 <blockquote>
  <table border=0 cellspacing=3 cellpadding=0 summary="Chart showing symbol,
  location, localized, and meaning.">
      <tr style="background-color: rgb(204, 204, 255);">
           <th align=left>Symbol
           <th align=left>Location
           <th align=left>Localized?
           <th align=left>Meaning
      <tr valign=top>
           <td><code>0</code>
           <td>Number
           <td>Yes
           <td>Digit
      <tr style="vertical-align: top; background-color: rgb(238, 238, 255);">
           <td><code>#</code>
           <td>Number
           <td>Yes
           <td>Digit, zero shows as absent
      <tr valign=top>
           <td><code>.</code>
           <td>Number
           <td>Yes
           <td>Decimal separator or monetary decimal separator
      <tr style="vertical-align: top; background-color: rgb(238, 238, 255);">
           <td><code>-</code>
           <td>Number
           <td>Yes
           <td>Minus sign
      <tr valign=top>
           <td><code>,</code>
           <td>Number
           <td>Yes
           <td>Grouping separator
      <tr style="vertical-align: top; background-color: rgb(238, 238, 255);">
           <td><code>E</code>
           <td>Number
           <td>Yes
           <td>Separates mantissa and exponent in scientific notation.
               <em>Need not be quoted in prefix or suffix.</em>
      <tr valign=top>
           <td><code>;</code>
           <td>Subpattern boundary
           <td>Yes
           <td>Separates positive and negative subpatterns
      <tr style="vertical-align: top; background-color: rgb(238, 238, 255);">
           <td><code>%</code>
           <td>Prefix or suffix
           <td>Yes
           <td>Multiply by 100 and show as percentage
      <tr valign=top>
           <td><code>&#92;u2030</code>
           <td>Prefix or suffix
           <td>Yes
           <td>Multiply by 1000 and show as per mille value
      <tr style="vertical-align: top; background-color: rgb(238, 238, 255);">
           <td><code>&#164;</code> (<code>&#92;u00A4</code>)
           <td>Prefix or suffix
           <td>No
           <td>Currency sign, replaced by currency symbol.  If
               doubled, replaced by international currency symbol.
               If present in a pattern, the monetary decimal separator
               is used instead of the decimal separator.     
 <tr valign=top>
           <td><code>'</code>
           <td>Prefix or suffix
           <td>No
           <td>Used to quote special characters in a prefix or suffix,
               for example, <code>"'#'#"</code> formats 123 to
               <code>"#123"</code>.  To create a single quote
               itself, use two in a row: <code>"# o''clock"</code>.
  </table>
  </blockquote>
  
 <h4>Scientific Notation</h4>
  
 <p>Numbers in scientific notation are expressed as the product of a mantissa
  and a power of ten, for example, 1234 can be expressed as 1.234 x 10^3.  The
  mantissa is often in the range 1.0 &le; x &lt; 10.0, but it need not
  be. 
 <code>DecimalFormat</code> can be instructed to format and parse scientific
  notation <em>only via a pattern</em>; there is currently no factory method
  that creates a scientific notation format.  In a pattern, the exponent
  character immediately followed by one or more digit characters indicates
  scientific notation.  Example: <code>"0.###E0"</code> formats the number
  1234 as <code>"1.234E3"</code>.
  
 <ul>
  <li>The number of digit characters after the exponent character gives the
  minimum exponent digit count.  There is no maximum.  Negative exponents are
  formatted using the localized minus sign, <em>not</em> the prefix and suffix
  from the pattern.  This allows patterns such as <code>"0.###E0 m/s"</code>.
  
 <li>The minimum and maximum number of integer digits are interpreted
  together: 
 <ul>
  <li>If the maximum number of integer digits is greater than their minimum number
  and greater than 1, it forces the exponent to be a multiple of the maximum
  number of integer digits, and the minimum number of integer digits to be
  interpreted as 1.  The most common use of this is to generate 
 <em>engineering notation</em>, in which the exponent is a multiple of three,
  e.g., <code>"##0.#####E0"</code>. Using this pattern, the number 12345
  formats to <code>"12.345E3"</code>, and 123456 formats to 
 <code>"123.456E3"</code>.
  
 <li>Otherwise, the minimum number of integer digits is achieved by adjusting the
  exponent.  Example: 0.00123 formatted with <code>"00.###E0"</code> yields 
 <code>"12.3E-4"</code>.
  </ul>
  
 <li>The number of significant digits in the mantissa is the sum of the 
 <em>minimum integer</em> and <em>maximum fraction</em> digits, and is
  unaffected by the maximum integer digits.  For example, 12345 formatted with 
 <code>"##0.##E0"</code> is <code>"12.3E3"</code>. To show all digits, set
  the significant digits count to zero.  The number of significant digits
  does not affect parsing. 
 <li>Exponential patterns may not contain grouping separators. 
 </ul>
  
 <h4>Rounding</h4>
  
 <code>DecimalFormat</code> provides rounding modes defined in 
 <code>java.math.RoundingMode</code> for formatting.  By default, it uses 
 <code>RoundingMode.HALF_EVEN</code>.
  
 <h4>Digits</h4>
  For formatting, <code>DecimalFormat</code> uses the ten consecutive
  characters starting with the localized zero digit defined in the 
 <code>DecimalFormatSymbols</code> object as digits. For parsing, these
  digits as well as all Unicode decimal digits, as defined by 
 <code>Character.digit</code>, are recognized. 
 <h4>Special Values</h4>
  
 <p><code>NaN</code> is formatted as a string, which typically has a single character 
 <code>&#92;uFFFD</code>.  This string is determined by the 
 <code>DecimalFormatSymbols</code> object.  This is the only value for which
  the prefixes and suffixes are not used. 
 <p>Infinity is formatted as a string, which typically has a single character 
 <code>&#92;u221E</code>, with the positive or negative prefixes and suffixes
  applied.  The infinity string is determined by the 
 <code>DecimalFormatSymbols</code> object. 
 <p>Negative zero (<code>"-0"</code>) parses to 
 <ul>
  <li><code>BigDecimal(0)</code> if <code>isParseBigDecimal()</code> is
  true, 
 <li><code>Long(0)</code> if <code>isParseBigDecimal()</code> is false
      and <code>isParseIntegerOnly()</code> is true, 
 <li><code>Double(-0.0)</code> if both <code>isParseBigDecimal()</code>
  and <code>isParseIntegerOnly()</code> are false. 
 </ul>
  
 <h4><a name="synchronization">Synchronization</a></h4>
  
 <p>
  Decimal formats are generally not synchronized.
  It is recommended to create separate format instances for each thread.
  If multiple threads access a format concurrently, it must be synchronized
  externally. 
 <h4>Example</h4>
  
 <blockquote>@code
 <strong>// Print out a number using the localized number, integer, currency,
  // and percent format for each locale</strong>
  Locale[] locales = NumberFormat.getAvailableLocales();
  double myNumber = -1234.56;
  NumberFormat form;
  for (int j = 0; j < 4; ++j) {
      System.out.println("FORMAT");
      for (int i = 0; i < locales.length; ++i) {
          if (locales[i].getCountry().length() == 0) {
             continue; // Skip language-only locales
          }
          System.out.print(locales[i].getDisplayName());
          switch (j) {
          case 0:
              form = NumberFormat.getInstance(locales[i]); break;
          case 1:
              form = NumberFormat.getIntegerInstance(locales[i]); break;
          case 2:
              form = NumberFormat.getCurrencyInstance(locales[i]); break;
          default:
              form = NumberFormat.getPercentInstance(locales[i]); break;
          }
          if (form instanceof DecimalFormat) {
              System.out.print(": " + ((DecimalFormat) form).toPattern());
          }
          System.out.print(" -> " + form.format(myNumber));
          try {
              System.out.println(" -> " + form.parse(form.format(myNumber)));
          } catch (ParseException e) {}        }        }        
 
@endcode</blockquote>
 - seealso: <a href="http://docs.oracle.com/javase/tutorial/i18n/format/decimalFormat.html">Java Tutorial</a>
 - seealso: NumberFormat
 - seealso: DecimalFormatSymbols
 - seealso: ParsePosition
 @author Mark Davis
 @author Alan Liu
 */
@interface JavaTextDecimalFormat : JavaTextNumberFormat

+ (jint)currentSerialVersion;

+ (jint)DOUBLE_INTEGER_DIGITS;

+ (jint)DOUBLE_FRACTION_DIGITS;

+ (jint)MAXIMUM_INTEGER_DIGITS;

+ (jint)MAXIMUM_FRACTION_DIGITS;

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Creates a DecimalFormat using the default pattern and symbols
  for the default <code>FORMAT</code> locale.
 This is a convenient way to obtain a
  DecimalFormat when internationalization is not the main concern. 
 <p>
  To obtain standard formats for a given locale, use the factory methods
  on NumberFormat such as getNumberInstance. These factories will
  return the most appropriate sub-class of NumberFormat for a given
  locale.
 - seealso: java.text.NumberFormat
 - seealso: java.text.NumberFormat
 - seealso: java.text.NumberFormat
 - seealso: java.text.NumberFormat
 */
- (instancetype)init;

/*!
 @brief Creates a DecimalFormat using the given pattern and the symbols
  for the default <code>FORMAT</code> locale.
 This is a convenient way to obtain a
  DecimalFormat when internationalization is not the main concern. 
 <p>
  To obtain standard formats for a given locale, use the factory methods
  on NumberFormat such as getNumberInstance. These factories will
  return the most appropriate sub-class of NumberFormat for a given
  locale.
 @param pattern a non-localized pattern string.
 @throw NullPointerExceptionif <code>pattern</code> is null
 @throw IllegalArgumentExceptionif the given pattern is invalid.
 - seealso: java.text.NumberFormat
 - seealso: java.text.NumberFormat
 - seealso: java.text.NumberFormat
 - seealso: java.text.NumberFormat
 */
- (instancetype)initWithNSString:(NSString *)pattern;

/*!
 @brief Creates a DecimalFormat using the given pattern and symbols.
 Use this constructor when you need to completely customize the
  behavior of the format. 
 <p>
  To obtain standard formats for a given
  locale, use the factory methods on NumberFormat such as
  getInstance or getCurrencyInstance. If you need only minor adjustments
  to a standard format, you can modify the format returned by
  a NumberFormat factory method.
 @param pattern a non-localized pattern string
 @param symbols the set of symbols to be used
 @throw NullPointerExceptionif any of the given arguments is null
 @throw IllegalArgumentExceptionif the given pattern is invalid
 - seealso: java.text.NumberFormat
 - seealso: java.text.NumberFormat
 - seealso: java.text.NumberFormat
 - seealso: java.text.NumberFormat
 - seealso: java.text.DecimalFormatSymbols
 */
- (instancetype)initWithNSString:(NSString *)pattern
withJavaTextDecimalFormatSymbols:(JavaTextDecimalFormatSymbols *)symbols;

/*!
 @brief Apply the given pattern to this Format object.The pattern
  is assumed to be in a localized notation.
 A pattern is a
  short-hand specification for the various formatting properties.
  These properties can also be changed individually through the
  various setter methods. 
 <p>
  There is no limit to integer digits set
  by this routine, since that is the typical end-user desire;
  use setMaximumInteger if you want to set a real value.
  For negative numbers, use a second pattern, separated by a semicolon 
 <P>Example <code>"#,#00.0#"</code> &rarr; 1,234.56 
 <P>This means a minimum of 2 integer digits, 1 fraction digit, and
  a maximum of 2 fraction digits. 
 <p>Example: <code>"#,#00.0#;(#,#00.0#)"</code> for negatives in
  parentheses. 
 <p>In negative patterns, the minimum and maximum counts are ignored;
  these are presumed to be set in the positive pattern.
 @param pattern a new pattern
 @throw NullPointerExceptionif <code>pattern</code> is null
 @throw IllegalArgumentExceptionif the given pattern is invalid.
 */
- (void)applyLocalizedPatternWithNSString:(NSString *)pattern;

/*!
 @brief Apply the given pattern to this Format object.A pattern is a
  short-hand specification for the various formatting properties.
 These properties can also be changed individually through the
  various setter methods. 
 <p>
  There is no limit to integer digits set
  by this routine, since that is the typical end-user desire;
  use setMaximumInteger if you want to set a real value.
  For negative numbers, use a second pattern, separated by a semicolon 
 <P>Example <code>"#,#00.0#"</code> &rarr; 1,234.56 
 <P>This means a minimum of 2 integer digits, 1 fraction digit, and
  a maximum of 2 fraction digits. 
 <p>Example: <code>"#,#00.0#;(#,#00.0#)"</code> for negatives in
  parentheses. 
 <p>In negative patterns, the minimum and maximum counts are ignored;
  these are presumed to be set in the positive pattern.
 @param pattern a new pattern
 @throw NullPointerExceptionif <code>pattern</code> is null
 @throw IllegalArgumentExceptionif the given pattern is invalid.
 */
- (void)applyPatternWithNSString:(NSString *)pattern;

/*!
 @brief Standard override; no change in semantics.
 */
- (id)java_clone;

/*!
 @brief Overrides equals
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Formats a double to produce a string.
 @param number The double to format
 @param result where the text is to be appended
 @param fieldPosition On input: an alignment field, if desired.  On output: the offsets of the alignment field.
 @throw ArithmeticExceptionif rounding is needed with rounding
             mode being set to RoundingMode.UNNECESSARY
 @return The formatted number string
 - seealso: java.text.FieldPosition
 */
- (JavaLangStringBuffer *)formatWithDouble:(jdouble)number
                  withJavaLangStringBuffer:(JavaLangStringBuffer *)result
                 withJavaTextFieldPosition:(JavaTextFieldPosition *)fieldPosition;

/*!
 @brief Format a long to produce a string.
 @param number The long to format
 @param result where the text is to be appended
 @param fieldPosition On input: an alignment field, if desired.  On output: the offsets of the alignment field.
 @throw ArithmeticExceptionif rounding is needed with rounding
                   mode being set to RoundingMode.UNNECESSARY
 @return The formatted number string
 - seealso: java.text.FieldPosition
 */
- (JavaLangStringBuffer *)formatWithLong:(jlong)number
                withJavaLangStringBuffer:(JavaLangStringBuffer *)result
               withJavaTextFieldPosition:(JavaTextFieldPosition *)fieldPosition;

/*!
 @brief Formats a number and appends the resulting text to the given string
  buffer.
 The number can be of any subclass of <code>java.lang.Number</code>.
  <p>
  This implementation uses the maximum precision permitted.
 @param number the number to format
 @param toAppendTo the  <code> StringBuffer </code>  to which the formatted
                     text is to be appended
 @param pos On input: an alignment field, if desired.                    On output: the offsets of the alignment field.
 @return the value passed in as <code>toAppendTo</code>
 @throw IllegalArgumentExceptionif <code>number</code> is
                    null or not an instance of <code>Number</code>.
 @throw NullPointerExceptionif <code>toAppendTo</code> or
                    <code>pos</code> is null
 @throw ArithmeticExceptionif rounding is needed with rounding
                    mode being set to RoundingMode.UNNECESSARY
 - seealso: java.text.FieldPosition
 */
- (JavaLangStringBuffer *)formatWithId:(id)number
              withJavaLangStringBuffer:(JavaLangStringBuffer *)toAppendTo
             withJavaTextFieldPosition:(JavaTextFieldPosition *)pos;

/*!
 @brief Formats an Object producing an <code>AttributedCharacterIterator</code>.
 You can use the returned <code>AttributedCharacterIterator</code>
  to build the resulting String, as well as to determine information
  about the resulting String. 
 <p>
  Each attribute key of the AttributedCharacterIterator will be of type 
 <code>NumberFormat.Field</code>, with the attribute value being the
  same as the attribute key.
 @throw NullPointerExceptionif obj is null.
 @throw IllegalArgumentExceptionwhen the Format cannot format the
             given object.
 @throw ArithmeticExceptionif rounding is needed with rounding
                    mode being set to RoundingMode.UNNECESSARY
 @param obj The object to format
 @return AttributedCharacterIterator describing the formatted value.
 @since 1.4
 */
- (id<JavaTextAttributedCharacterIterator>)formatToCharacterIteratorWithId:(id)obj;

/*!
 @brief Gets the currency used by this decimal format when formatting
  currency values.
 The currency is obtained by calling 
 <code>DecimalFormatSymbols.getCurrency</code>
  on this number format's symbols.
 @return the currency used by this decimal format, or <code>null</code>
 @since 1.4
 */
- (JavaUtilCurrency *)getCurrency;

/*!
 @brief Returns a copy of the decimal format symbols, which is generally not
  changed by the programmer or user.
 @return a copy of the desired DecimalFormatSymbols
 - seealso: java.text.DecimalFormatSymbols
 */
- (JavaTextDecimalFormatSymbols *)getDecimalFormatSymbols;

/*!
 @brief Return the grouping size.Grouping size is the number of digits between
  grouping separators in the integer portion of a number.
 For example,
  in the number "123,456.78", the grouping size is 3.
 @return the grouping size
 - seealso: #setGroupingSize
 - seealso: java.text.NumberFormat
 - seealso: java.text.DecimalFormatSymbols
 */
- (jint)getGroupingSize;

/*!
 @brief Gets the maximum number of digits allowed in the fraction portion of a
  number.
 For formatting numbers other than <code>BigInteger</code> and 
 <code>BigDecimal</code> objects, the lower of the return value and
  340 is used.
 - seealso: #setMaximumFractionDigits
 */
- (jint)getMaximumFractionDigits;

/*!
 @brief Gets the maximum number of digits allowed in the integer portion of a
  number.
 For formatting numbers other than <code>BigInteger</code> and 
 <code>BigDecimal</code> objects, the lower of the return value and
  309 is used.
 - seealso: #setMaximumIntegerDigits
 */
- (jint)getMaximumIntegerDigits;

/*!
 @brief Gets the minimum number of digits allowed in the fraction portion of a
  number.
 For formatting numbers other than <code>BigInteger</code> and 
 <code>BigDecimal</code> objects, the lower of the return value and
  340 is used.
 - seealso: #setMinimumFractionDigits
 */
- (jint)getMinimumFractionDigits;

/*!
 @brief Gets the minimum number of digits allowed in the integer portion of a
  number.
 For formatting numbers other than <code>BigInteger</code> and 
 <code>BigDecimal</code> objects, the lower of the return value and
  309 is used.
 - seealso: #setMinimumIntegerDigits
 */
- (jint)getMinimumIntegerDigits;

/*!
 @brief Gets the multiplier for use in percent, per mille, and similar
  formats.
 @return the multiplier
 - seealso: #setMultiplier(int)
 */
- (jint)getMultiplier;

/*!
 @brief Get the negative prefix.
 <P>Examples: -123, ($123) (with negative suffix), sFr-123
 @return the negative prefix
 */
- (NSString *)getNegativePrefix;

/*!
 @brief Get the negative suffix.
 <P>Examples: -123%, ($123) (with positive suffixes)
 @return the negative suffix
 */
- (NSString *)getNegativeSuffix;

/*!
 @brief Get the positive prefix.
 <P>Examples: +123, $123, sFr123
 @return the positive prefix
 */
- (NSString *)getPositivePrefix;

/*!
 @brief Get the positive suffix.
 <P>Example: 123%
 @return the positive suffix
 */
- (NSString *)getPositiveSuffix;

/*!
 @brief Gets the <code>java.math.RoundingMode</code> used in this DecimalFormat.
 @return The <code>RoundingMode</code> used for this DecimalFormat.
 - seealso: #setRoundingMode(RoundingMode)
 @since 1.6
 */
- (JavaMathRoundingMode *)getRoundingMode;

/*!
 @brief Overrides hashCode
 */
- (NSUInteger)hash;

/*!
 @brief Allows you to get the behavior of the decimal separator with integers.
 (The decimal separator will always appear with decimals.) 
 <P>Example: Decimal ON: 12345 &rarr; 12345.; OFF: 12345 &rarr; 12345
 @return <code>true</code> if the decimal separator is always shown;
          <code>false</code> otherwise
 */
- (jboolean)isDecimalSeparatorAlwaysShown;

/*!
 @brief Returns whether the <code>java.text.ParsePosition)</code>
  method returns <code>BigDecimal</code>.The default value is false.
 @return <code>true</code> if the parse method returns BigDecimal;
          <code>false</code> otherwise
 - seealso: #setParseBigDecimal
 @since 1.5
 */
- (jboolean)isParseBigDecimal;

/*!
 @brief Parses text from a string to produce a <code>Number</code>.
 <p>
  The method attempts to parse text starting at the index given by 
 <code>pos</code>.
  If parsing succeeds, then the index of <code>pos</code> is updated
  to the index after the last character used (parsing does not necessarily
  use all characters up to the end of the string), and the parsed
  number is returned. The updated <code>pos</code> can be used to
  indicate the starting point for the next call to this method.
  If an error occurs, then the index of <code>pos</code> is not
  changed, the error index of <code>pos</code> is set to the index of
  the character where the error occurred, and null is returned. 
 <p>
  The subclass returned depends on the value of <code>isParseBigDecimal</code>
  as well as on the string being parsed. 
 <ul>
    <li>If <code>isParseBigDecimal()</code> is false (the default),
        most integer values are returned as <code>Long</code>
        objects, no matter how they are written: <code>"17"</code> and
        <code>"17.000"</code> both parse to <code>Long(17)</code>.
        Values that cannot fit into a <code>Long</code> are returned as
        <code>Double</code>s. This includes values with a fractional part,
        infinite values, <code>NaN</code>, and the value -0.0.
        <code>DecimalFormat</code> does <em>not</em> decide whether to
        return a <code>Double</code> or a <code>Long</code> based on the
        presence of a decimal separator in the source string. Doing so
        would prevent integers that overflow the mantissa of a double,
        such as <code>"-9,223,372,036,854,775,808.00"</code>, from being
        parsed accurately.       
 <p>
        Callers may use the <code>Number</code> methods
        <code>doubleValue</code>, <code>longValue</code>, etc., to obtain
        the type they want.   
 <li>If <code>isParseBigDecimal()</code> is true, values are returned
        as <code>BigDecimal</code> objects. The values are the ones
        constructed by <code>java.math.BigDecimal</code>
        for corresponding strings in locale-independent format. The
        special cases negative and positive infinity and NaN are returned
        as <code>Double</code> instances holding the values of the
        corresponding <code>Double</code> constants. 
 </ul>
  <p>
  <code>DecimalFormat</code> parses all Unicode characters that represent
  decimal digits, as defined by <code>Character.digit()</code>. In
  addition, <code>DecimalFormat</code> also recognizes as digits the ten
  consecutive characters starting with the localized zero digit defined in the 
 <code>DecimalFormatSymbols</code> object.
 @param text the string to be parsed
 @param pos A  <code> ParsePosition </code>  object with index and error
               index information as described above.
 @return the parsed value, or <code>null</code> if the parse fails
 @throw NullPointerExceptionif <code>text</code> or
              <code>pos</code> is null.
 */
- (NSNumber *)parseWithNSString:(NSString *)text
      withJavaTextParsePosition:(JavaTextParsePosition *)pos;

/*!
 @brief Sets the currency used by this number format when formatting
  currency values.This does not update the minimum or maximum
  number of fraction digits used by the number format.
 The currency is set by calling 
 <code>DecimalFormatSymbols.setCurrency</code>
  on this number format's symbols.
 @param currency the new currency to be used by this decimal format
 @throw NullPointerExceptionif <code>currency</code> is null
 @since 1.4
 */
- (void)setCurrencyWithJavaUtilCurrency:(JavaUtilCurrency *)currency;

/*!
 @brief Sets the decimal format symbols, which is generally not changed
  by the programmer or user.
 @param newSymbols desired DecimalFormatSymbols
 - seealso: java.text.DecimalFormatSymbols
 */
- (void)setDecimalFormatSymbolsWithJavaTextDecimalFormatSymbols:(JavaTextDecimalFormatSymbols *)newSymbols;

/*!
 @brief Allows you to set the behavior of the decimal separator with integers.
 (The decimal separator will always appear with decimals.) 
 <P>Example: Decimal ON: 12345 &rarr; 12345.; OFF: 12345 &rarr; 12345
 @param newValue<code>true</code>  if the decimal separator is always shown;                  
 <code>false</code>  otherwise
 */
- (void)setDecimalSeparatorAlwaysShownWithBoolean:(jboolean)newValue;

/*!
 @brief Set the grouping size.Grouping size is the number of digits between
  grouping separators in the integer portion of a number.
 For example,
  in the number "123,456.78", the grouping size is 3. 
 <br>
  The value passed in is converted to a byte, which may lose information.
 @param newValue the new grouping size
 - seealso: #getGroupingSize
 - seealso: java.text.NumberFormat
 - seealso: java.text.DecimalFormatSymbols
 */
- (void)setGroupingSizeWithInt:(jint)newValue;

/*!
 */
- (void)setGroupingUsedWithBoolean:(jboolean)newValue;

/*!
 @brief Sets the maximum number of digits allowed in the fraction portion of a
  number.
 For formatting numbers other than <code>BigInteger</code> and 
 <code>BigDecimal</code> objects, the lower of <code>newValue</code> and
  340 is used. Negative input values are replaced with 0.
 - seealso: NumberFormat#setMaximumFractionDigits
 */
- (void)setMaximumFractionDigitsWithInt:(jint)newValue;

/*!
 @brief Sets the maximum number of digits allowed in the integer portion of a
  number.
 For formatting numbers other than <code>BigInteger</code> and 
 <code>BigDecimal</code> objects, the lower of <code>newValue</code> and
  309 is used. Negative input values are replaced with 0.
 - seealso: NumberFormat#setMaximumIntegerDigits
 */
- (void)setMaximumIntegerDigitsWithInt:(jint)newValue;

/*!
 @brief Sets the minimum number of digits allowed in the fraction portion of a
  number.
 For formatting numbers other than <code>BigInteger</code> and 
 <code>BigDecimal</code> objects, the lower of <code>newValue</code> and
  340 is used. Negative input values are replaced with 0.
 - seealso: NumberFormat#setMinimumFractionDigits
 */
- (void)setMinimumFractionDigitsWithInt:(jint)newValue;

/*!
 @brief Sets the minimum number of digits allowed in the integer portion of a
  number.
 For formatting numbers other than <code>BigInteger</code> and 
 <code>BigDecimal</code> objects, the lower of <code>newValue</code> and
  309 is used. Negative input values are replaced with 0.
 - seealso: NumberFormat#setMinimumIntegerDigits
 */
- (void)setMinimumIntegerDigitsWithInt:(jint)newValue;

/*!
 @brief Sets the multiplier for use in percent, per mille, and similar
  formats.
 For a percent format, set the multiplier to 100 and the suffixes to
  have '%' (for Arabic, use the Arabic percent sign).
  For a per mille format, set the multiplier to 1000 and the suffixes to
  have '&#92;u2030'.
  
 <P>Example: with multiplier 100, 1.23 is formatted as "123", and
  "123" is parsed into 1.23.
 @param newValue the new multiplier
 - seealso: #getMultiplier
 */
- (void)setMultiplierWithInt:(jint)newValue;

/*!
 @brief Set the negative prefix.
 <P>Examples: -123, ($123) (with negative suffix), sFr-123
 @param newValue the new negative prefix
 */
- (void)setNegativePrefixWithNSString:(NSString *)newValue;

/*!
 @brief Set the negative suffix.
 <P>Examples: 123%
 @param newValue the new negative suffix
 */
- (void)setNegativeSuffixWithNSString:(NSString *)newValue;

/*!
 @brief Sets whether the <code>java.text.ParsePosition)</code>
  method returns <code>BigDecimal</code>.
 @param newValue<code>true</code>  if the parse method returns BigDecimal;                  
 <code>false</code>  otherwise
 - seealso: #isParseBigDecimal
 @since 1.5
 */
- (void)setParseBigDecimalWithBoolean:(jboolean)newValue;

/*!
 @brief Set the positive prefix.
 <P>Examples: +123, $123, sFr123
 @param newValue the new positive prefix
 */
- (void)setPositivePrefixWithNSString:(NSString *)newValue;

/*!
 @brief Set the positive suffix.
 <P>Example: 123%
 @param newValue the new positive suffix
 */
- (void)setPositiveSuffixWithNSString:(NSString *)newValue;

/*!
 @brief Sets the <code>java.math.RoundingMode</code> used in this DecimalFormat.
 @param roundingMode The  <code> RoundingMode </code>  to be used
 - seealso: #getRoundingMode()
 @throw NullPointerExceptionif <code>roundingMode</code> is null.
 @since 1.6
 */
- (void)setRoundingModeWithJavaMathRoundingMode:(JavaMathRoundingMode *)roundingMode;

/*!
 @brief Synthesizes a localized pattern string that represents the current
  state of this Format object.
 @return a localized pattern string
 - seealso: #applyPattern
 */
- (NSString *)toLocalizedPattern;

/*!
 @brief Synthesizes a pattern string that represents the current state
  of this Format object.
 @return a pattern string
 - seealso: #applyPattern
 */
- (NSString *)toPattern;

#pragma mark Package-Private

/*!
 @brief A fast-path shortcut of format(double) to be called by NumberFormat, or by
  format(double, ...) public methods.
 If instance can be applied fast-path and passed double is not NaN or
  Infinity, is in the integer range, we call <code>fastDoubleFormat</code>
  after changing <code>d</code> to its positive value if necessary.
  Otherwise returns null by convention since fast-path can't be exercized.
 @param d The double value to be formatted
 @return the formatted result for <code>d</code> as a string.
 */
- (NSString *)fastFormatWithDouble:(jdouble)d;

@end

J2OBJC_STATIC_INIT(JavaTextDecimalFormat)

inline jint JavaTextDecimalFormat_get_currentSerialVersion(void);
#define JavaTextDecimalFormat_currentSerialVersion 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextDecimalFormat, currentSerialVersion, jint)

inline jint JavaTextDecimalFormat_get_DOUBLE_INTEGER_DIGITS(void);
#define JavaTextDecimalFormat_DOUBLE_INTEGER_DIGITS 309
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextDecimalFormat, DOUBLE_INTEGER_DIGITS, jint)

inline jint JavaTextDecimalFormat_get_DOUBLE_FRACTION_DIGITS(void);
#define JavaTextDecimalFormat_DOUBLE_FRACTION_DIGITS 340
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextDecimalFormat, DOUBLE_FRACTION_DIGITS, jint)

inline jint JavaTextDecimalFormat_get_MAXIMUM_INTEGER_DIGITS(void);
#define JavaTextDecimalFormat_MAXIMUM_INTEGER_DIGITS 2147483647
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextDecimalFormat, MAXIMUM_INTEGER_DIGITS, jint)

inline jint JavaTextDecimalFormat_get_MAXIMUM_FRACTION_DIGITS(void);
#define JavaTextDecimalFormat_MAXIMUM_FRACTION_DIGITS 2147483647
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextDecimalFormat, MAXIMUM_FRACTION_DIGITS, jint)

inline jlong JavaTextDecimalFormat_get_serialVersionUID(void);
#define JavaTextDecimalFormat_serialVersionUID 864413376551465018LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextDecimalFormat, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaTextDecimalFormat_init(JavaTextDecimalFormat *self);

FOUNDATION_EXPORT JavaTextDecimalFormat *new_JavaTextDecimalFormat_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextDecimalFormat *create_JavaTextDecimalFormat_init(void);

FOUNDATION_EXPORT void JavaTextDecimalFormat_initWithNSString_(JavaTextDecimalFormat *self, NSString *pattern);

FOUNDATION_EXPORT JavaTextDecimalFormat *new_JavaTextDecimalFormat_initWithNSString_(NSString *pattern) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextDecimalFormat *create_JavaTextDecimalFormat_initWithNSString_(NSString *pattern);

FOUNDATION_EXPORT void JavaTextDecimalFormat_initWithNSString_withJavaTextDecimalFormatSymbols_(JavaTextDecimalFormat *self, NSString *pattern, JavaTextDecimalFormatSymbols *symbols);

FOUNDATION_EXPORT JavaTextDecimalFormat *new_JavaTextDecimalFormat_initWithNSString_withJavaTextDecimalFormatSymbols_(NSString *pattern, JavaTextDecimalFormatSymbols *symbols) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextDecimalFormat *create_JavaTextDecimalFormat_initWithNSString_withJavaTextDecimalFormatSymbols_(NSString *pattern, JavaTextDecimalFormatSymbols *symbols);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextDecimalFormat)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextDecimalFormat")