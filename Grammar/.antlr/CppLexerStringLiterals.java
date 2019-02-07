// Generated from d:\Repos\SoupSyntax\Grammar/CppLexerStringLiterals.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CppLexerStringLiterals extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		StringLiteral=1;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"StringCharacter", "StringPrefix", "RawString", "StringLiteral", "BinaryDigit", 
		"NonZeroDecimalDigit", "DecimalDigit", "OctalDigit", "HexadecimalDigit", 
		"LowerCaseLetter", "UpperCaseLetter", "Letter", "NonDigit", "Sign", "HexadecimalPrefix", 
		"BinaryPrefix", "UnsignedSuffix", "LongSuffix", "LongLongSuffix", "SingleQuote", 
		"DoubleQuote", "EscapeSequence", "SimpleEscapeSequence", "OctalEscapeSequence", 
		"HexadecimalEscapeSequence", "HexadecimalQuad", "UniversalCharacterName"
	};

	private static final String[] _LITERAL_NAMES = {
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "StringLiteral"
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


	public CppLexerStringLiterals(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "CppLexerStringLiterals.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\3\u00f0\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\3\2\3\2\3\2\5\2=\n\2\3\3\3\3\3\3\3\3\5"+
		"\3C\n\3\3\4\3\4\7\4G\n\4\f\4\16\4J\13\4\3\4\3\4\7\4N\n\4\f\4\16\4Q\13"+
		"\4\3\4\3\4\7\4U\n\4\f\4\16\4X\13\4\3\4\3\4\3\5\5\5]\n\5\3\5\3\5\7\5a\n"+
		"\5\f\5\16\5d\13\5\3\5\3\5\3\5\3\5\3\5\5\5k\n\5\3\5\3\5\7\5o\n\5\f\5\16"+
		"\5r\13\5\3\5\3\5\3\5\5\5w\n\5\3\5\5\5z\n\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t"+
		"\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\5\r\u008c\n\r\3\16\3\16\5\16\u0090"+
		"\n\16\3\17\3\17\3\20\3\20\3\20\3\20\5\20\u0098\n\20\3\21\3\21\3\21\3\21"+
		"\5\21\u009e\n\21\3\22\3\22\3\23\3\23\3\24\3\24\3\24\3\24\5\24\u00a8\n"+
		"\24\3\25\3\25\3\26\3\26\3\27\3\27\3\27\5\27\u00b1\n\27\3\30\3\30\3\30"+
		"\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30"+
		"\3\30\3\30\3\30\3\30\3\30\5\30\u00c9\n\30\3\31\3\31\3\31\3\31\3\31\3\31"+
		"\3\31\3\31\3\31\3\31\3\31\5\31\u00d6\n\31\3\32\3\32\3\32\3\32\6\32\u00dc"+
		"\n\32\r\32\16\32\u00dd\3\33\3\33\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3"+
		"\34\3\34\3\34\3\34\3\34\3\34\5\34\u00ef\n\34\5HOV\2\35\3\2\5\2\7\2\t\3"+
		"\13\2\r\2\17\2\21\2\23\2\25\2\27\2\31\2\33\2\35\2\37\2!\2#\2%\2\'\2)\2"+
		"+\2-\2/\2\61\2\63\2\65\2\67\2\3\2\7\6\2\f\f\17\17))^^\4\2WWww\5\2\62;"+
		"CHch\4\2--//\4\2NNnn\2\u00f8\2\t\3\2\2\2\3<\3\2\2\2\5B\3\2\2\2\7D\3\2"+
		"\2\2\ty\3\2\2\2\13{\3\2\2\2\r}\3\2\2\2\17\177\3\2\2\2\21\u0081\3\2\2\2"+
		"\23\u0083\3\2\2\2\25\u0085\3\2\2\2\27\u0087\3\2\2\2\31\u008b\3\2\2\2\33"+
		"\u008f\3\2\2\2\35\u0091\3\2\2\2\37\u0097\3\2\2\2!\u009d\3\2\2\2#\u009f"+
		"\3\2\2\2%\u00a1\3\2\2\2\'\u00a7\3\2\2\2)\u00a9\3\2\2\2+\u00ab\3\2\2\2"+
		"-\u00b0\3\2\2\2/\u00c8\3\2\2\2\61\u00d5\3\2\2\2\63\u00d7\3\2\2\2\65\u00df"+
		"\3\2\2\2\67\u00ee\3\2\2\29=\n\2\2\2:=\5-\27\2;=\5\67\34\2<9\3\2\2\2<:"+
		"\3\2\2\2<;\3\2\2\2=\4\3\2\2\2>C\7N\2\2?@\7w\2\2@C\7:\2\2AC\t\3\2\2B>\3"+
		"\2\2\2B?\3\2\2\2BA\3\2\2\2C\6\3\2\2\2DH\5+\26\2EG\13\2\2\2FE\3\2\2\2G"+
		"J\3\2\2\2HI\3\2\2\2HF\3\2\2\2IK\3\2\2\2JH\3\2\2\2KO\7*\2\2LN\13\2\2\2"+
		"ML\3\2\2\2NQ\3\2\2\2OP\3\2\2\2OM\3\2\2\2PR\3\2\2\2QO\3\2\2\2RV\7+\2\2"+
		"SU\13\2\2\2TS\3\2\2\2UX\3\2\2\2VW\3\2\2\2VT\3\2\2\2WY\3\2\2\2XV\3\2\2"+
		"\2YZ\5+\26\2Z\b\3\2\2\2[]\7N\2\2\\[\3\2\2\2\\]\3\2\2\2]^\3\2\2\2^b\5+"+
		"\26\2_a\5\3\2\2`_\3\2\2\2ad\3\2\2\2b`\3\2\2\2bc\3\2\2\2ce\3\2\2\2db\3"+
		"\2\2\2ef\5+\26\2fz\3\2\2\2gh\7w\2\2hk\7:\2\2ik\t\3\2\2jg\3\2\2\2ji\3\2"+
		"\2\2kl\3\2\2\2lp\5+\26\2mo\5\3\2\2nm\3\2\2\2or\3\2\2\2pn\3\2\2\2pq\3\2"+
		"\2\2qs\3\2\2\2rp\3\2\2\2st\5+\26\2tz\3\2\2\2uw\5\5\3\2vu\3\2\2\2vw\3\2"+
		"\2\2wx\3\2\2\2xz\5\7\4\2y\\\3\2\2\2yj\3\2\2\2yv\3\2\2\2z\n\3\2\2\2{|\4"+
		"\62\63\2|\f\3\2\2\2}~\4\63;\2~\16\3\2\2\2\177\u0080\4\62;\2\u0080\20\3"+
		"\2\2\2\u0081\u0082\4\629\2\u0082\22\3\2\2\2\u0083\u0084\t\4\2\2\u0084"+
		"\24\3\2\2\2\u0085\u0086\4c|\2\u0086\26\3\2\2\2\u0087\u0088\4C\\\2\u0088"+
		"\30\3\2\2\2\u0089\u008c\5\25\13\2\u008a\u008c\5\27\f\2\u008b\u0089\3\2"+
		"\2\2\u008b\u008a\3\2\2\2\u008c\32\3\2\2\2\u008d\u0090\5\31\r\2\u008e\u0090"+
		"\7a\2\2\u008f\u008d\3\2\2\2\u008f\u008e\3\2\2\2\u0090\34\3\2\2\2\u0091"+
		"\u0092\t\5\2\2\u0092\36\3\2\2\2\u0093\u0094\7\62\2\2\u0094\u0098\7z\2"+
		"\2\u0095\u0096\7\62\2\2\u0096\u0098\7Z\2\2\u0097\u0093\3\2\2\2\u0097\u0095"+
		"\3\2\2\2\u0098 \3\2\2\2\u0099\u009a\7\62\2\2\u009a\u009e\7d\2\2\u009b"+
		"\u009c\7\62\2\2\u009c\u009e\7D\2\2\u009d\u0099\3\2\2\2\u009d\u009b\3\2"+
		"\2\2\u009e\"\3\2\2\2\u009f\u00a0\t\3\2\2\u00a0$\3\2\2\2\u00a1\u00a2\t"+
		"\6\2\2\u00a2&\3\2\2\2\u00a3\u00a4\7n\2\2\u00a4\u00a8\7n\2\2\u00a5\u00a6"+
		"\7N\2\2\u00a6\u00a8\7N\2\2\u00a7\u00a3\3\2\2\2\u00a7\u00a5\3\2\2\2\u00a8"+
		"(\3\2\2\2\u00a9\u00aa\7)\2\2\u00aa*\3\2\2\2\u00ab\u00ac\7$\2\2\u00ac,"+
		"\3\2\2\2\u00ad\u00b1\5/\30\2\u00ae\u00b1\5\61\31\2\u00af\u00b1\5\63\32"+
		"\2\u00b0\u00ad\3\2\2\2\u00b0\u00ae\3\2\2\2\u00b0\u00af\3\2\2\2\u00b1."+
		"\3\2\2\2\u00b2\u00b3\7^\2\2\u00b3\u00c9\7)\2\2\u00b4\u00b5\7^\2\2\u00b5"+
		"\u00c9\7$\2\2\u00b6\u00b7\7^\2\2\u00b7\u00c9\7A\2\2\u00b8\u00b9\7^\2\2"+
		"\u00b9\u00c9\7^\2\2\u00ba\u00bb\7^\2\2\u00bb\u00c9\7c\2\2\u00bc\u00bd"+
		"\7^\2\2\u00bd\u00c9\7d\2\2\u00be\u00bf\7^\2\2\u00bf\u00c9\7h\2\2\u00c0"+
		"\u00c1\7^\2\2\u00c1\u00c9\7p\2\2\u00c2\u00c3\7^\2\2\u00c3\u00c9\7t\2\2"+
		"\u00c4\u00c5\7^\2\2\u00c5\u00c9\7v\2\2\u00c6\u00c7\7^\2\2\u00c7\u00c9"+
		"\7x\2\2\u00c8\u00b2\3\2\2\2\u00c8\u00b4\3\2\2\2\u00c8\u00b6\3\2\2\2\u00c8"+
		"\u00b8\3\2\2\2\u00c8\u00ba\3\2\2\2\u00c8\u00bc\3\2\2\2\u00c8\u00be\3\2"+
		"\2\2\u00c8\u00c0\3\2\2\2\u00c8\u00c2\3\2\2\2\u00c8\u00c4\3\2\2\2\u00c8"+
		"\u00c6\3\2\2\2\u00c9\60\3\2\2\2\u00ca\u00cb\7^\2\2\u00cb\u00d6\5\21\t"+
		"\2\u00cc\u00cd\7^\2\2\u00cd\u00ce\5\21\t\2\u00ce\u00cf\5\21\t\2\u00cf"+
		"\u00d6\3\2\2\2\u00d0\u00d1\7^\2\2\u00d1\u00d2\5\21\t\2\u00d2\u00d3\5\21"+
		"\t\2\u00d3\u00d4\5\21\t\2\u00d4\u00d6\3\2\2\2\u00d5\u00ca\3\2\2\2\u00d5"+
		"\u00cc\3\2\2\2\u00d5\u00d0\3\2\2\2\u00d6\62\3\2\2\2\u00d7\u00d8\7^\2\2"+
		"\u00d8\u00d9\7z\2\2\u00d9\u00db\3\2\2\2\u00da\u00dc\5\23\n\2\u00db\u00da"+
		"\3\2\2\2\u00dc\u00dd\3\2\2\2\u00dd\u00db\3\2\2\2\u00dd\u00de\3\2\2\2\u00de"+
		"\64\3\2\2\2\u00df\u00e0\5\23\n\2\u00e0\u00e1\5\23\n\2\u00e1\u00e2\5\23"+
		"\n\2\u00e2\u00e3\5\23\n\2\u00e3\66\3\2\2\2\u00e4\u00e5\7^\2\2\u00e5\u00e6"+
		"\7w\2\2\u00e6\u00e7\3\2\2\2\u00e7\u00ef\5\65\33\2\u00e8\u00e9\7^\2\2\u00e9"+
		"\u00ea\7W\2\2\u00ea\u00eb\3\2\2\2\u00eb\u00ec\5\65\33\2\u00ec\u00ed\5"+
		"\65\33\2\u00ed\u00ef\3\2\2\2\u00ee\u00e4\3\2\2\2\u00ee\u00e8\3\2\2\2\u00ef"+
		"8\3\2\2\2\30\2<BHOV\\bjpvy\u008b\u008f\u0097\u009d\u00a7\u00b0\u00c8\u00d5"+
		"\u00dd\u00ee\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}