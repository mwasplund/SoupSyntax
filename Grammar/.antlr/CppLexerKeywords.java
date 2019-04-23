// Generated from d:\Repos\SoupSyntax\Grammar/CppLexerKeywords.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CppLexerKeywords extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		AlignAs=1, AlignOf=2, Asm=3, Auto=4, Bool=5, Break=6, Case=7, Catch=8, 
		Char=9, Char8=10, Char16=11, Char32=12, Class=13, Const=14, ConstExpr=15, 
		ConstCast=16, Continue=17, DeclType=18, Default=19, Delete=20, Do=21, 
		Double=22, DynamicCast=23, Else=24, Enum=25, Explicit=26, Export=27, Extern=28, 
		False=29, Float=30, For=31, Friend=32, GoTo=33, If=34, Inline=35, Int=36, 
		Long=37, Mutable=38, Namespace=39, New=40, NoExcept=41, Nullptr=42, Operator=43, 
		Private=44, Protected=45, Public=46, Register=47, ReinterpretCast=48, 
		Return=49, Short=50, Signed=51, SizeOf=52, Static=53, StaticAssert=54, 
		StaticCast=55, Struct=56, Switch=57, Template=58, This=59, ThreadLocal=60, 
		Throw=61, True=62, Try=63, TypeDef=64, TypeId=65, TypeName=66, Union=67, 
		Unsigned=68, Using=69, Virtual=70, Void=71, Volatile=72, WChar=73, While=74, 
		Override=75, Final=76;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"AlignAs", "AlignOf", "Asm", "Auto", "Bool", "Break", "Case", "Catch", 
		"Char", "Char8", "Char16", "Char32", "Class", "Const", "ConstExpr", "ConstCast", 
		"Continue", "DeclType", "Default", "Delete", "Do", "Double", "DynamicCast", 
		"Else", "Enum", "Explicit", "Export", "Extern", "False", "Float", "For", 
		"Friend", "GoTo", "If", "Inline", "Int", "Long", "Mutable", "Namespace", 
		"New", "NoExcept", "Nullptr", "Operator", "Private", "Protected", "Public", 
		"Register", "ReinterpretCast", "Return", "Short", "Signed", "SizeOf", 
		"Static", "StaticAssert", "StaticCast", "Struct", "Switch", "Template", 
		"This", "ThreadLocal", "Throw", "True", "Try", "TypeDef", "TypeId", "TypeName", 
		"Union", "Unsigned", "Using", "Virtual", "Void", "Volatile", "WChar", 
		"While", "Override", "Final"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'alignas'", "'alignof'", "'asm'", "'auto'", "'bool'", "'break'", 
		"'case'", "'catch'", "'char'", "'char8_t'", "'char16_t'", "'char32_t'", 
		"'class'", "'const'", "'constexpr'", "'const_cast'", "'continue'", "'decltype'", 
		"'default'", "'delete'", "'do'", "'double'", "'dynamic_cast'", "'else'", 
		"'enum'", "'explicit'", "'export'", "'extern'", "'false'", "'float'", 
		"'for'", "'friend'", "'goto'", "'if'", "'inline'", "'int'", "'long'", 
		"'mutable'", "'namespace'", "'new'", "'noexcept'", "'nullptr'", "'operator'", 
		"'private'", "'protected'", "'public'", "'register'", "'reinterpret_cast'", 
		"'return'", "'short'", "'signed'", "'sizeof'", "'static'", "'static_assert'", 
		"'static_cast'", "'struct'", "'switch'", "'template'", "'this'", "'thread_local'", 
		"'throw'", "'true'", "'try'", "'typedef'", "'typeid'", "'typename'", "'union'", 
		"'unsigned'", "'using'", "'virtual'", "'void'", "'volatile'", "'wchar_t'", 
		"'while'", "'override'", "'final'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "AlignAs", "AlignOf", "Asm", "Auto", "Bool", "Break", "Case", "Catch", 
		"Char", "Char8", "Char16", "Char32", "Class", "Const", "ConstExpr", "ConstCast", 
		"Continue", "DeclType", "Default", "Delete", "Do", "Double", "DynamicCast", 
		"Else", "Enum", "Explicit", "Export", "Extern", "False", "Float", "For", 
		"Friend", "GoTo", "If", "Inline", "Int", "Long", "Mutable", "Namespace", 
		"New", "NoExcept", "Nullptr", "Operator", "Private", "Protected", "Public", 
		"Register", "ReinterpretCast", "Return", "Short", "Signed", "SizeOf", 
		"Static", "StaticAssert", "StaticCast", "Struct", "Switch", "Template", 
		"This", "ThreadLocal", "Throw", "True", "Try", "TypeDef", "TypeId", "TypeName", 
		"Union", "Unsigned", "Using", "Virtual", "Void", "Volatile", "WChar", 
		"While", "Override", "Final"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public CppLexerKeywords(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "CppLexerKeywords.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2N\u02c9\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6"+
		"\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3"+
		"\t\3\t\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\f"+
		"\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3"+
		"\16\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3"+
		"\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21\3\21\3\21\3"+
		"\21\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3"+
		"\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\3\24\3"+
		"\24\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\27\3"+
		"\27\3\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3"+
		"\30\3\30\3\30\3\30\3\30\3\31\3\31\3\31\3\31\3\31\3\32\3\32\3\32\3\32\3"+
		"\32\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3"+
		"\34\3\34\3\34\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\36\3\36\3\36\3\36\3"+
		"\36\3\36\3\37\3\37\3\37\3\37\3\37\3\37\3 \3 \3 \3 \3!\3!\3!\3!\3!\3!\3"+
		"!\3\"\3\"\3\"\3\"\3\"\3#\3#\3#\3$\3$\3$\3$\3$\3$\3$\3%\3%\3%\3%\3&\3&"+
		"\3&\3&\3&\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3(\3(\3(\3(\3(\3(\3(\3(\3(\3"+
		"(\3)\3)\3)\3)\3*\3*\3*\3*\3*\3*\3*\3*\3*\3+\3+\3+\3+\3+\3+\3+\3+\3,\3"+
		",\3,\3,\3,\3,\3,\3,\3,\3-\3-\3-\3-\3-\3-\3-\3-\3.\3.\3.\3.\3.\3.\3.\3"+
		".\3.\3.\3/\3/\3/\3/\3/\3/\3/\3\60\3\60\3\60\3\60\3\60\3\60\3\60\3\60\3"+
		"\60\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\63\3\63\3\63\3"+
		"\63\3\63\3\63\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\65\3\65\3\65\3\65\3"+
		"\65\3\65\3\65\3\66\3\66\3\66\3\66\3\66\3\66\3\66\3\67\3\67\3\67\3\67\3"+
		"\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\38\38\38\38\38\38\38"+
		"\38\38\38\38\38\39\39\39\39\39\39\39\3:\3:\3:\3:\3:\3:\3:\3;\3;\3;\3;"+
		"\3;\3;\3;\3;\3;\3<\3<\3<\3<\3<\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3="+
		"\3>\3>\3>\3>\3>\3>\3?\3?\3?\3?\3?\3@\3@\3@\3@\3A\3A\3A\3A\3A\3A\3A\3A"+
		"\3B\3B\3B\3B\3B\3B\3B\3C\3C\3C\3C\3C\3C\3C\3C\3C\3D\3D\3D\3D\3D\3D\3E"+
		"\3E\3E\3E\3E\3E\3E\3E\3E\3F\3F\3F\3F\3F\3F\3G\3G\3G\3G\3G\3G\3G\3G\3H"+
		"\3H\3H\3H\3H\3I\3I\3I\3I\3I\3I\3I\3I\3I\3J\3J\3J\3J\3J\3J\3J\3J\3K\3K"+
		"\3K\3K\3K\3K\3L\3L\3L\3L\3L\3L\3L\3L\3L\3M\3M\3M\3M\3M\3M\2\2N\3\3\5\4"+
		"\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22"+
		"#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C"+
		"#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\63e\64g\65i\66k\67m8o9q:s;u<w"+
		"=y>{?}@\177A\u0081B\u0083C\u0085D\u0087E\u0089F\u008bG\u008dH\u008fI\u0091"+
		"J\u0093K\u0095L\u0097M\u0099N\3\2\2\2\u02c8\2\3\3\2\2\2\2\5\3\2\2\2\2"+
		"\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2"+
		"\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2"+
		"\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2"+
		"\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2"+
		"\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2"+
		"\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2"+
		"M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3"+
		"\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2"+
		"\2\2g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2\2\2"+
		"s\3\2\2\2\2u\3\2\2\2\2w\3\2\2\2\2y\3\2\2\2\2{\3\2\2\2\2}\3\2\2\2\2\177"+
		"\3\2\2\2\2\u0081\3\2\2\2\2\u0083\3\2\2\2\2\u0085\3\2\2\2\2\u0087\3\2\2"+
		"\2\2\u0089\3\2\2\2\2\u008b\3\2\2\2\2\u008d\3\2\2\2\2\u008f\3\2\2\2\2\u0091"+
		"\3\2\2\2\2\u0093\3\2\2\2\2\u0095\3\2\2\2\2\u0097\3\2\2\2\2\u0099\3\2\2"+
		"\2\3\u009b\3\2\2\2\5\u00a3\3\2\2\2\7\u00ab\3\2\2\2\t\u00af\3\2\2\2\13"+
		"\u00b4\3\2\2\2\r\u00b9\3\2\2\2\17\u00bf\3\2\2\2\21\u00c4\3\2\2\2\23\u00ca"+
		"\3\2\2\2\25\u00cf\3\2\2\2\27\u00d7\3\2\2\2\31\u00e0\3\2\2\2\33\u00e9\3"+
		"\2\2\2\35\u00ef\3\2\2\2\37\u00f5\3\2\2\2!\u00ff\3\2\2\2#\u010a\3\2\2\2"+
		"%\u0113\3\2\2\2\'\u011c\3\2\2\2)\u0124\3\2\2\2+\u012b\3\2\2\2-\u012e\3"+
		"\2\2\2/\u0135\3\2\2\2\61\u0142\3\2\2\2\63\u0147\3\2\2\2\65\u014c\3\2\2"+
		"\2\67\u0155\3\2\2\29\u015c\3\2\2\2;\u0163\3\2\2\2=\u0169\3\2\2\2?\u016f"+
		"\3\2\2\2A\u0173\3\2\2\2C\u017a\3\2\2\2E\u017f\3\2\2\2G\u0182\3\2\2\2I"+
		"\u0189\3\2\2\2K\u018d\3\2\2\2M\u0192\3\2\2\2O\u019a\3\2\2\2Q\u01a4\3\2"+
		"\2\2S\u01a8\3\2\2\2U\u01b1\3\2\2\2W\u01b9\3\2\2\2Y\u01c2\3\2\2\2[\u01ca"+
		"\3\2\2\2]\u01d4\3\2\2\2_\u01db\3\2\2\2a\u01e4\3\2\2\2c\u01f5\3\2\2\2e"+
		"\u01fc\3\2\2\2g\u0202\3\2\2\2i\u0209\3\2\2\2k\u0210\3\2\2\2m\u0217\3\2"+
		"\2\2o\u0225\3\2\2\2q\u0231\3\2\2\2s\u0238\3\2\2\2u\u023f\3\2\2\2w\u0248"+
		"\3\2\2\2y\u024d\3\2\2\2{\u025a\3\2\2\2}\u0260\3\2\2\2\177\u0265\3\2\2"+
		"\2\u0081\u0269\3\2\2\2\u0083\u0271\3\2\2\2\u0085\u0278\3\2\2\2\u0087\u0281"+
		"\3\2\2\2\u0089\u0287\3\2\2\2\u008b\u0290\3\2\2\2\u008d\u0296\3\2\2\2\u008f"+
		"\u029e\3\2\2\2\u0091\u02a3\3\2\2\2\u0093\u02ac\3\2\2\2\u0095\u02b4\3\2"+
		"\2\2\u0097\u02ba\3\2\2\2\u0099\u02c3\3\2\2\2\u009b\u009c\7c\2\2\u009c"+
		"\u009d\7n\2\2\u009d\u009e\7k\2\2\u009e\u009f\7i\2\2\u009f\u00a0\7p\2\2"+
		"\u00a0\u00a1\7c\2\2\u00a1\u00a2\7u\2\2\u00a2\4\3\2\2\2\u00a3\u00a4\7c"+
		"\2\2\u00a4\u00a5\7n\2\2\u00a5\u00a6\7k\2\2\u00a6\u00a7\7i\2\2\u00a7\u00a8"+
		"\7p\2\2\u00a8\u00a9\7q\2\2\u00a9\u00aa\7h\2\2\u00aa\6\3\2\2\2\u00ab\u00ac"+
		"\7c\2\2\u00ac\u00ad\7u\2\2\u00ad\u00ae\7o\2\2\u00ae\b\3\2\2\2\u00af\u00b0"+
		"\7c\2\2\u00b0\u00b1\7w\2\2\u00b1\u00b2\7v\2\2\u00b2\u00b3\7q\2\2\u00b3"+
		"\n\3\2\2\2\u00b4\u00b5\7d\2\2\u00b5\u00b6\7q\2\2\u00b6\u00b7\7q\2\2\u00b7"+
		"\u00b8\7n\2\2\u00b8\f\3\2\2\2\u00b9\u00ba\7d\2\2\u00ba\u00bb\7t\2\2\u00bb"+
		"\u00bc\7g\2\2\u00bc\u00bd\7c\2\2\u00bd\u00be\7m\2\2\u00be\16\3\2\2\2\u00bf"+
		"\u00c0\7e\2\2\u00c0\u00c1\7c\2\2\u00c1\u00c2\7u\2\2\u00c2\u00c3\7g\2\2"+
		"\u00c3\20\3\2\2\2\u00c4\u00c5\7e\2\2\u00c5\u00c6\7c\2\2\u00c6\u00c7\7"+
		"v\2\2\u00c7\u00c8\7e\2\2\u00c8\u00c9\7j\2\2\u00c9\22\3\2\2\2\u00ca\u00cb"+
		"\7e\2\2\u00cb\u00cc\7j\2\2\u00cc\u00cd\7c\2\2\u00cd\u00ce\7t\2\2\u00ce"+
		"\24\3\2\2\2\u00cf\u00d0\7e\2\2\u00d0\u00d1\7j\2\2\u00d1\u00d2\7c\2\2\u00d2"+
		"\u00d3\7t\2\2\u00d3\u00d4\7:\2\2\u00d4\u00d5\7a\2\2\u00d5\u00d6\7v\2\2"+
		"\u00d6\26\3\2\2\2\u00d7\u00d8\7e\2\2\u00d8\u00d9\7j\2\2\u00d9\u00da\7"+
		"c\2\2\u00da\u00db\7t\2\2\u00db\u00dc\7\63\2\2\u00dc\u00dd\78\2\2\u00dd"+
		"\u00de\7a\2\2\u00de\u00df\7v\2\2\u00df\30\3\2\2\2\u00e0\u00e1\7e\2\2\u00e1"+
		"\u00e2\7j\2\2\u00e2\u00e3\7c\2\2\u00e3\u00e4\7t\2\2\u00e4\u00e5\7\65\2"+
		"\2\u00e5\u00e6\7\64\2\2\u00e6\u00e7\7a\2\2\u00e7\u00e8\7v\2\2\u00e8\32"+
		"\3\2\2\2\u00e9\u00ea\7e\2\2\u00ea\u00eb\7n\2\2\u00eb\u00ec\7c\2\2\u00ec"+
		"\u00ed\7u\2\2\u00ed\u00ee\7u\2\2\u00ee\34\3\2\2\2\u00ef\u00f0\7e\2\2\u00f0"+
		"\u00f1\7q\2\2\u00f1\u00f2\7p\2\2\u00f2\u00f3\7u\2\2\u00f3\u00f4\7v\2\2"+
		"\u00f4\36\3\2\2\2\u00f5\u00f6\7e\2\2\u00f6\u00f7\7q\2\2\u00f7\u00f8\7"+
		"p\2\2\u00f8\u00f9\7u\2\2\u00f9\u00fa\7v\2\2\u00fa\u00fb\7g\2\2\u00fb\u00fc"+
		"\7z\2\2\u00fc\u00fd\7r\2\2\u00fd\u00fe\7t\2\2\u00fe \3\2\2\2\u00ff\u0100"+
		"\7e\2\2\u0100\u0101\7q\2\2\u0101\u0102\7p\2\2\u0102\u0103\7u\2\2\u0103"+
		"\u0104\7v\2\2\u0104\u0105\7a\2\2\u0105\u0106\7e\2\2\u0106\u0107\7c\2\2"+
		"\u0107\u0108\7u\2\2\u0108\u0109\7v\2\2\u0109\"\3\2\2\2\u010a\u010b\7e"+
		"\2\2\u010b\u010c\7q\2\2\u010c\u010d\7p\2\2\u010d\u010e\7v\2\2\u010e\u010f"+
		"\7k\2\2\u010f\u0110\7p\2\2\u0110\u0111\7w\2\2\u0111\u0112\7g\2\2\u0112"+
		"$\3\2\2\2\u0113\u0114\7f\2\2\u0114\u0115\7g\2\2\u0115\u0116\7e\2\2\u0116"+
		"\u0117\7n\2\2\u0117\u0118\7v\2\2\u0118\u0119\7{\2\2\u0119\u011a\7r\2\2"+
		"\u011a\u011b\7g\2\2\u011b&\3\2\2\2\u011c\u011d\7f\2\2\u011d\u011e\7g\2"+
		"\2\u011e\u011f\7h\2\2\u011f\u0120\7c\2\2\u0120\u0121\7w\2\2\u0121\u0122"+
		"\7n\2\2\u0122\u0123\7v\2\2\u0123(\3\2\2\2\u0124\u0125\7f\2\2\u0125\u0126"+
		"\7g\2\2\u0126\u0127\7n\2\2\u0127\u0128\7g\2\2\u0128\u0129\7v\2\2\u0129"+
		"\u012a\7g\2\2\u012a*\3\2\2\2\u012b\u012c\7f\2\2\u012c\u012d\7q\2\2\u012d"+
		",\3\2\2\2\u012e\u012f\7f\2\2\u012f\u0130\7q\2\2\u0130\u0131\7w\2\2\u0131"+
		"\u0132\7d\2\2\u0132\u0133\7n\2\2\u0133\u0134\7g\2\2\u0134.\3\2\2\2\u0135"+
		"\u0136\7f\2\2\u0136\u0137\7{\2\2\u0137\u0138\7p\2\2\u0138\u0139\7c\2\2"+
		"\u0139\u013a\7o\2\2\u013a\u013b\7k\2\2\u013b\u013c\7e\2\2\u013c\u013d"+
		"\7a\2\2\u013d\u013e\7e\2\2\u013e\u013f\7c\2\2\u013f\u0140\7u\2\2\u0140"+
		"\u0141\7v\2\2\u0141\60\3\2\2\2\u0142\u0143\7g\2\2\u0143\u0144\7n\2\2\u0144"+
		"\u0145\7u\2\2\u0145\u0146\7g\2\2\u0146\62\3\2\2\2\u0147\u0148\7g\2\2\u0148"+
		"\u0149\7p\2\2\u0149\u014a\7w\2\2\u014a\u014b\7o\2\2\u014b\64\3\2\2\2\u014c"+
		"\u014d\7g\2\2\u014d\u014e\7z\2\2\u014e\u014f\7r\2\2\u014f\u0150\7n\2\2"+
		"\u0150\u0151\7k\2\2\u0151\u0152\7e\2\2\u0152\u0153\7k\2\2\u0153\u0154"+
		"\7v\2\2\u0154\66\3\2\2\2\u0155\u0156\7g\2\2\u0156\u0157\7z\2\2\u0157\u0158"+
		"\7r\2\2\u0158\u0159\7q\2\2\u0159\u015a\7t\2\2\u015a\u015b\7v\2\2\u015b"+
		"8\3\2\2\2\u015c\u015d\7g\2\2\u015d\u015e\7z\2\2\u015e\u015f\7v\2\2\u015f"+
		"\u0160\7g\2\2\u0160\u0161\7t\2\2\u0161\u0162\7p\2\2\u0162:\3\2\2\2\u0163"+
		"\u0164\7h\2\2\u0164\u0165\7c\2\2\u0165\u0166\7n\2\2\u0166\u0167\7u\2\2"+
		"\u0167\u0168\7g\2\2\u0168<\3\2\2\2\u0169\u016a\7h\2\2\u016a\u016b\7n\2"+
		"\2\u016b\u016c\7q\2\2\u016c\u016d\7c\2\2\u016d\u016e\7v\2\2\u016e>\3\2"+
		"\2\2\u016f\u0170\7h\2\2\u0170\u0171\7q\2\2\u0171\u0172\7t\2\2\u0172@\3"+
		"\2\2\2\u0173\u0174\7h\2\2\u0174\u0175\7t\2\2\u0175\u0176\7k\2\2\u0176"+
		"\u0177\7g\2\2\u0177\u0178\7p\2\2\u0178\u0179\7f\2\2\u0179B\3\2\2\2\u017a"+
		"\u017b\7i\2\2\u017b\u017c\7q\2\2\u017c\u017d\7v\2\2\u017d\u017e\7q\2\2"+
		"\u017eD\3\2\2\2\u017f\u0180\7k\2\2\u0180\u0181\7h\2\2\u0181F\3\2\2\2\u0182"+
		"\u0183\7k\2\2\u0183\u0184\7p\2\2\u0184\u0185\7n\2\2\u0185\u0186\7k\2\2"+
		"\u0186\u0187\7p\2\2\u0187\u0188\7g\2\2\u0188H\3\2\2\2\u0189\u018a\7k\2"+
		"\2\u018a\u018b\7p\2\2\u018b\u018c\7v\2\2\u018cJ\3\2\2\2\u018d\u018e\7"+
		"n\2\2\u018e\u018f\7q\2\2\u018f\u0190\7p\2\2\u0190\u0191\7i\2\2\u0191L"+
		"\3\2\2\2\u0192\u0193\7o\2\2\u0193\u0194\7w\2\2\u0194\u0195\7v\2\2\u0195"+
		"\u0196\7c\2\2\u0196\u0197\7d\2\2\u0197\u0198\7n\2\2\u0198\u0199\7g\2\2"+
		"\u0199N\3\2\2\2\u019a\u019b\7p\2\2\u019b\u019c\7c\2\2\u019c\u019d\7o\2"+
		"\2\u019d\u019e\7g\2\2\u019e\u019f\7u\2\2\u019f\u01a0\7r\2\2\u01a0\u01a1"+
		"\7c\2\2\u01a1\u01a2\7e\2\2\u01a2\u01a3\7g\2\2\u01a3P\3\2\2\2\u01a4\u01a5"+
		"\7p\2\2\u01a5\u01a6\7g\2\2\u01a6\u01a7\7y\2\2\u01a7R\3\2\2\2\u01a8\u01a9"+
		"\7p\2\2\u01a9\u01aa\7q\2\2\u01aa\u01ab\7g\2\2\u01ab\u01ac\7z\2\2\u01ac"+
		"\u01ad\7e\2\2\u01ad\u01ae\7g\2\2\u01ae\u01af\7r\2\2\u01af\u01b0\7v\2\2"+
		"\u01b0T\3\2\2\2\u01b1\u01b2\7p\2\2\u01b2\u01b3\7w\2\2\u01b3\u01b4\7n\2"+
		"\2\u01b4\u01b5\7n\2\2\u01b5\u01b6\7r\2\2\u01b6\u01b7\7v\2\2\u01b7\u01b8"+
		"\7t\2\2\u01b8V\3\2\2\2\u01b9\u01ba\7q\2\2\u01ba\u01bb\7r\2\2\u01bb\u01bc"+
		"\7g\2\2\u01bc\u01bd\7t\2\2\u01bd\u01be\7c\2\2\u01be\u01bf\7v\2\2\u01bf"+
		"\u01c0\7q\2\2\u01c0\u01c1\7t\2\2\u01c1X\3\2\2\2\u01c2\u01c3\7r\2\2\u01c3"+
		"\u01c4\7t\2\2\u01c4\u01c5\7k\2\2\u01c5\u01c6\7x\2\2\u01c6\u01c7\7c\2\2"+
		"\u01c7\u01c8\7v\2\2\u01c8\u01c9\7g\2\2\u01c9Z\3\2\2\2\u01ca\u01cb\7r\2"+
		"\2\u01cb\u01cc\7t\2\2\u01cc\u01cd\7q\2\2\u01cd\u01ce\7v\2\2\u01ce\u01cf"+
		"\7g\2\2\u01cf\u01d0\7e\2\2\u01d0\u01d1\7v\2\2\u01d1\u01d2\7g\2\2\u01d2"+
		"\u01d3\7f\2\2\u01d3\\\3\2\2\2\u01d4\u01d5\7r\2\2\u01d5\u01d6\7w\2\2\u01d6"+
		"\u01d7\7d\2\2\u01d7\u01d8\7n\2\2\u01d8\u01d9\7k\2\2\u01d9\u01da\7e\2\2"+
		"\u01da^\3\2\2\2\u01db\u01dc\7t\2\2\u01dc\u01dd\7g\2\2\u01dd\u01de\7i\2"+
		"\2\u01de\u01df\7k\2\2\u01df\u01e0\7u\2\2\u01e0\u01e1\7v\2\2\u01e1\u01e2"+
		"\7g\2\2\u01e2\u01e3\7t\2\2\u01e3`\3\2\2\2\u01e4\u01e5\7t\2\2\u01e5\u01e6"+
		"\7g\2\2\u01e6\u01e7\7k\2\2\u01e7\u01e8\7p\2\2\u01e8\u01e9\7v\2\2\u01e9"+
		"\u01ea\7g\2\2\u01ea\u01eb\7t\2\2\u01eb\u01ec\7r\2\2\u01ec\u01ed\7t\2\2"+
		"\u01ed\u01ee\7g\2\2\u01ee\u01ef\7v\2\2\u01ef\u01f0\7a\2\2\u01f0\u01f1"+
		"\7e\2\2\u01f1\u01f2\7c\2\2\u01f2\u01f3\7u\2\2\u01f3\u01f4\7v\2\2\u01f4"+
		"b\3\2\2\2\u01f5\u01f6\7t\2\2\u01f6\u01f7\7g\2\2\u01f7\u01f8\7v\2\2\u01f8"+
		"\u01f9\7w\2\2\u01f9\u01fa\7t\2\2\u01fa\u01fb\7p\2\2\u01fbd\3\2\2\2\u01fc"+
		"\u01fd\7u\2\2\u01fd\u01fe\7j\2\2\u01fe\u01ff\7q\2\2\u01ff\u0200\7t\2\2"+
		"\u0200\u0201\7v\2\2\u0201f\3\2\2\2\u0202\u0203\7u\2\2\u0203\u0204\7k\2"+
		"\2\u0204\u0205\7i\2\2\u0205\u0206\7p\2\2\u0206\u0207\7g\2\2\u0207\u0208"+
		"\7f\2\2\u0208h\3\2\2\2\u0209\u020a\7u\2\2\u020a\u020b\7k\2\2\u020b\u020c"+
		"\7|\2\2\u020c\u020d\7g\2\2\u020d\u020e\7q\2\2\u020e\u020f\7h\2\2\u020f"+
		"j\3\2\2\2\u0210\u0211\7u\2\2\u0211\u0212\7v\2\2\u0212\u0213\7c\2\2\u0213"+
		"\u0214\7v\2\2\u0214\u0215\7k\2\2\u0215\u0216\7e\2\2\u0216l\3\2\2\2\u0217"+
		"\u0218\7u\2\2\u0218\u0219\7v\2\2\u0219\u021a\7c\2\2\u021a\u021b\7v\2\2"+
		"\u021b\u021c\7k\2\2\u021c\u021d\7e\2\2\u021d\u021e\7a\2\2\u021e\u021f"+
		"\7c\2\2\u021f\u0220\7u\2\2\u0220\u0221\7u\2\2\u0221\u0222\7g\2\2\u0222"+
		"\u0223\7t\2\2\u0223\u0224\7v\2\2\u0224n\3\2\2\2\u0225\u0226\7u\2\2\u0226"+
		"\u0227\7v\2\2\u0227\u0228\7c\2\2\u0228\u0229\7v\2\2\u0229\u022a\7k\2\2"+
		"\u022a\u022b\7e\2\2\u022b\u022c\7a\2\2\u022c\u022d\7e\2\2\u022d\u022e"+
		"\7c\2\2\u022e\u022f\7u\2\2\u022f\u0230\7v\2\2\u0230p\3\2\2\2\u0231\u0232"+
		"\7u\2\2\u0232\u0233\7v\2\2\u0233\u0234\7t\2\2\u0234\u0235\7w\2\2\u0235"+
		"\u0236\7e\2\2\u0236\u0237\7v\2\2\u0237r\3\2\2\2\u0238\u0239\7u\2\2\u0239"+
		"\u023a\7y\2\2\u023a\u023b\7k\2\2\u023b\u023c\7v\2\2\u023c\u023d\7e\2\2"+
		"\u023d\u023e\7j\2\2\u023et\3\2\2\2\u023f\u0240\7v\2\2\u0240\u0241\7g\2"+
		"\2\u0241\u0242\7o\2\2\u0242\u0243\7r\2\2\u0243\u0244\7n\2\2\u0244\u0245"+
		"\7c\2\2\u0245\u0246\7v\2\2\u0246\u0247\7g\2\2\u0247v\3\2\2\2\u0248\u0249"+
		"\7v\2\2\u0249\u024a\7j\2\2\u024a\u024b\7k\2\2\u024b\u024c\7u\2\2\u024c"+
		"x\3\2\2\2\u024d\u024e\7v\2\2\u024e\u024f\7j\2\2\u024f\u0250\7t\2\2\u0250"+
		"\u0251\7g\2\2\u0251\u0252\7c\2\2\u0252\u0253\7f\2\2\u0253\u0254\7a\2\2"+
		"\u0254\u0255\7n\2\2\u0255\u0256\7q\2\2\u0256\u0257\7e\2\2\u0257\u0258"+
		"\7c\2\2\u0258\u0259\7n\2\2\u0259z\3\2\2\2\u025a\u025b\7v\2\2\u025b\u025c"+
		"\7j\2\2\u025c\u025d\7t\2\2\u025d\u025e\7q\2\2\u025e\u025f\7y\2\2\u025f"+
		"|\3\2\2\2\u0260\u0261\7v\2\2\u0261\u0262\7t\2\2\u0262\u0263\7w\2\2\u0263"+
		"\u0264\7g\2\2\u0264~\3\2\2\2\u0265\u0266\7v\2\2\u0266\u0267\7t\2\2\u0267"+
		"\u0268\7{\2\2\u0268\u0080\3\2\2\2\u0269\u026a\7v\2\2\u026a\u026b\7{\2"+
		"\2\u026b\u026c\7r\2\2\u026c\u026d\7g\2\2\u026d\u026e\7f\2\2\u026e\u026f"+
		"\7g\2\2\u026f\u0270\7h\2\2\u0270\u0082\3\2\2\2\u0271\u0272\7v\2\2\u0272"+
		"\u0273\7{\2\2\u0273\u0274\7r\2\2\u0274\u0275\7g\2\2\u0275\u0276\7k\2\2"+
		"\u0276\u0277\7f\2\2\u0277\u0084\3\2\2\2\u0278\u0279\7v\2\2\u0279\u027a"+
		"\7{\2\2\u027a\u027b\7r\2\2\u027b\u027c\7g\2\2\u027c\u027d\7p\2\2\u027d"+
		"\u027e\7c\2\2\u027e\u027f\7o\2\2\u027f\u0280\7g\2\2\u0280\u0086\3\2\2"+
		"\2\u0281\u0282\7w\2\2\u0282\u0283\7p\2\2\u0283\u0284\7k\2\2\u0284\u0285"+
		"\7q\2\2\u0285\u0286\7p\2\2\u0286\u0088\3\2\2\2\u0287\u0288\7w\2\2\u0288"+
		"\u0289\7p\2\2\u0289\u028a\7u\2\2\u028a\u028b\7k\2\2\u028b\u028c\7i\2\2"+
		"\u028c\u028d\7p\2\2\u028d\u028e\7g\2\2\u028e\u028f\7f\2\2\u028f\u008a"+
		"\3\2\2\2\u0290\u0291\7w\2\2\u0291\u0292\7u\2\2\u0292\u0293\7k\2\2\u0293"+
		"\u0294\7p\2\2\u0294\u0295\7i\2\2\u0295\u008c\3\2\2\2\u0296\u0297\7x\2"+
		"\2\u0297\u0298\7k\2\2\u0298\u0299\7t\2\2\u0299\u029a\7v\2\2\u029a\u029b"+
		"\7w\2\2\u029b\u029c\7c\2\2\u029c\u029d\7n\2\2\u029d\u008e\3\2\2\2\u029e"+
		"\u029f\7x\2\2\u029f\u02a0\7q\2\2\u02a0\u02a1\7k\2\2\u02a1\u02a2\7f\2\2"+
		"\u02a2\u0090\3\2\2\2\u02a3\u02a4\7x\2\2\u02a4\u02a5\7q\2\2\u02a5\u02a6"+
		"\7n\2\2\u02a6\u02a7\7c\2\2\u02a7\u02a8\7v\2\2\u02a8\u02a9\7k\2\2\u02a9"+
		"\u02aa\7n\2\2\u02aa\u02ab\7g\2\2\u02ab\u0092\3\2\2\2\u02ac\u02ad\7y\2"+
		"\2\u02ad\u02ae\7e\2\2\u02ae\u02af\7j\2\2\u02af\u02b0\7c\2\2\u02b0\u02b1"+
		"\7t\2\2\u02b1\u02b2\7a\2\2\u02b2\u02b3\7v\2\2\u02b3\u0094\3\2\2\2\u02b4"+
		"\u02b5\7y\2\2\u02b5\u02b6\7j\2\2\u02b6\u02b7\7k\2\2\u02b7\u02b8\7n\2\2"+
		"\u02b8\u02b9\7g\2\2\u02b9\u0096\3\2\2\2\u02ba\u02bb\7q\2\2\u02bb\u02bc"+
		"\7x\2\2\u02bc\u02bd\7g\2\2\u02bd\u02be\7t\2\2\u02be\u02bf\7t\2\2\u02bf"+
		"\u02c0\7k\2\2\u02c0\u02c1\7f\2\2\u02c1\u02c2\7g\2\2\u02c2\u0098\3\2\2"+
		"\2\u02c3\u02c4\7h\2\2\u02c4\u02c5\7k\2\2\u02c5\u02c6\7p\2\2\u02c6\u02c7"+
		"\7c\2\2\u02c7\u02c8\7n\2\2\u02c8\u009a\3\2\2\2\3\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}