// Generated from d:\Repos\SoupSyntax\Grammar/CppLexerFloatingPointLiterals.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CppLexerFloatingPointLiterals extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		FloatingPointLiteral=1;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"Point", "FloatSuffix", "DecimalDigitSequence", "HexidecimalDigitSequence", 
		"ExponentPart", "FractionalConstant", "FloatingPointLiteral", "BinaryDigit", 
		"NonZeroDecimalDigit", "DecimalDigit", "OctalDigit", "HexadecimalDigit", 
		"LowerCaseLetter", "UpperCaseLetter", "Letter", "NonDigit", "Sign", "HexadecimalPrefix", 
		"BinaryPrefix", "UnsignedSuffix", "LongSuffix", "LongLongSuffix", "SingleQuote", 
		"DoubleQuote", "EscapeSequence", "SimpleEscapeSequence", "OctalEscapeSequence", 
		"HexadecimalEscapeSequence", "HexadecimalQuad", "UniversalCharacterName"
	};

	private static final String[] _LITERAL_NAMES = {
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "FloatingPointLiteral"
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


	public CppLexerFloatingPointLiterals(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "CppLexerFloatingPointLiterals.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\3\u0108\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\3\2\3\2\3"+
		"\3\3\3\3\4\3\4\5\4F\n\4\3\4\7\4I\n\4\f\4\16\4L\13\4\3\5\3\5\5\5P\n\5\3"+
		"\5\7\5S\n\5\f\5\16\5V\13\5\3\6\3\6\5\6Z\n\6\3\6\3\6\3\6\5\6_\n\6\3\6\5"+
		"\6b\n\6\3\7\5\7e\n\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7m\n\7\3\b\3\b\3\b\5\b"+
		"r\n\b\3\b\3\b\5\bv\n\b\3\b\5\by\n\b\3\b\3\b\3\b\3\b\5\b\177\n\b\3\b\3"+
		"\b\3\b\3\b\3\b\5\b\u0086\n\b\3\b\3\b\5\b\u008a\n\b\3\b\3\b\3\b\3\b\5\b"+
		"\u0090\n\b\5\b\u0092\n\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16"+
		"\3\16\3\17\3\17\3\20\3\20\5\20\u00a4\n\20\3\21\3\21\5\21\u00a8\n\21\3"+
		"\22\3\22\3\23\3\23\3\23\3\23\5\23\u00b0\n\23\3\24\3\24\3\24\3\24\5\24"+
		"\u00b6\n\24\3\25\3\25\3\26\3\26\3\27\3\27\3\27\3\27\5\27\u00c0\n\27\3"+
		"\30\3\30\3\31\3\31\3\32\3\32\3\32\5\32\u00c9\n\32\3\33\3\33\3\33\3\33"+
		"\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33"+
		"\3\33\3\33\3\33\3\33\5\33\u00e1\n\33\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\5\34\u00ee\n\34\3\35\3\35\3\35\3\35\6\35\u00f4\n"+
		"\35\r\35\16\35\u00f5\3\36\3\36\3\36\3\36\3\36\3\37\3\37\3\37\3\37\3\37"+
		"\3\37\3\37\3\37\3\37\3\37\5\37\u0107\n\37\2\2 \3\2\5\2\7\2\t\2\13\2\r"+
		"\2\17\3\21\2\23\2\25\2\27\2\31\2\33\2\35\2\37\2!\2#\2%\2\'\2)\2+\2-\2"+
		"/\2\61\2\63\2\65\2\67\29\2;\2=\2\3\2\t\6\2HHNNhhnn\4\2GGgg\4\2RRrr\5\2"+
		"\62;CHch\4\2--//\4\2WWww\4\2NNnn\2\u0113\2\17\3\2\2\2\3?\3\2\2\2\5A\3"+
		"\2\2\2\7C\3\2\2\2\tM\3\2\2\2\13a\3\2\2\2\rl\3\2\2\2\17\u0091\3\2\2\2\21"+
		"\u0093\3\2\2\2\23\u0095\3\2\2\2\25\u0097\3\2\2\2\27\u0099\3\2\2\2\31\u009b"+
		"\3\2\2\2\33\u009d\3\2\2\2\35\u009f\3\2\2\2\37\u00a3\3\2\2\2!\u00a7\3\2"+
		"\2\2#\u00a9\3\2\2\2%\u00af\3\2\2\2\'\u00b5\3\2\2\2)\u00b7\3\2\2\2+\u00b9"+
		"\3\2\2\2-\u00bf\3\2\2\2/\u00c1\3\2\2\2\61\u00c3\3\2\2\2\63\u00c8\3\2\2"+
		"\2\65\u00e0\3\2\2\2\67\u00ed\3\2\2\29\u00ef\3\2\2\2;\u00f7\3\2\2\2=\u0106"+
		"\3\2\2\2?@\7\60\2\2@\4\3\2\2\2AB\t\2\2\2B\6\3\2\2\2CJ\5\25\13\2DF\5/\30"+
		"\2ED\3\2\2\2EF\3\2\2\2FG\3\2\2\2GI\5\25\13\2HE\3\2\2\2IL\3\2\2\2JH\3\2"+
		"\2\2JK\3\2\2\2K\b\3\2\2\2LJ\3\2\2\2MT\5\31\r\2NP\5/\30\2ON\3\2\2\2OP\3"+
		"\2\2\2PQ\3\2\2\2QS\5\31\r\2RO\3\2\2\2SV\3\2\2\2TR\3\2\2\2TU\3\2\2\2U\n"+
		"\3\2\2\2VT\3\2\2\2WY\t\3\2\2XZ\5#\22\2YX\3\2\2\2YZ\3\2\2\2Z[\3\2\2\2["+
		"b\5\7\4\2\\^\t\4\2\2]_\5#\22\2^]\3\2\2\2^_\3\2\2\2_`\3\2\2\2`b\5\7\4\2"+
		"aW\3\2\2\2a\\\3\2\2\2b\f\3\2\2\2ce\5\7\4\2dc\3\2\2\2de\3\2\2\2ef\3\2\2"+
		"\2fg\5\3\2\2gh\5\7\4\2hm\3\2\2\2ij\5\7\4\2jk\5\3\2\2km\3\2\2\2ld\3\2\2"+
		"\2li\3\2\2\2m\16\3\2\2\2no\5\7\4\2oq\5\13\6\2pr\5\5\3\2qp\3\2\2\2qr\3"+
		"\2\2\2r\u0092\3\2\2\2su\5\r\7\2tv\5\13\6\2ut\3\2\2\2uv\3\2\2\2vx\3\2\2"+
		"\2wy\5\5\3\2xw\3\2\2\2xy\3\2\2\2y\u0092\3\2\2\2z{\5%\23\2{|\5\t\5\2|~"+
		"\5\13\6\2}\177\5\5\3\2~}\3\2\2\2~\177\3\2\2\2\177\u0092\3\2\2\2\u0080"+
		"\u0081\5%\23\2\u0081\u0082\5\t\5\2\u0082\u0083\5\3\2\2\u0083\u0085\5\13"+
		"\6\2\u0084\u0086\5\5\3\2\u0085\u0084\3\2\2\2\u0085\u0086\3\2\2\2\u0086"+
		"\u0092\3\2\2\2\u0087\u0089\5%\23\2\u0088\u008a\5\t\5\2\u0089\u0088\3\2"+
		"\2\2\u0089\u008a\3\2\2\2\u008a\u008b\3\2\2\2\u008b\u008c\5\3\2\2\u008c"+
		"\u008d\5\t\5\2\u008d\u008f\5\13\6\2\u008e\u0090\5\5\3\2\u008f\u008e\3"+
		"\2\2\2\u008f\u0090\3\2\2\2\u0090\u0092\3\2\2\2\u0091n\3\2\2\2\u0091s\3"+
		"\2\2\2\u0091z\3\2\2\2\u0091\u0080\3\2\2\2\u0091\u0087\3\2\2\2\u0092\20"+
		"\3\2\2\2\u0093\u0094\4\62\63\2\u0094\22\3\2\2\2\u0095\u0096\4\63;\2\u0096"+
		"\24\3\2\2\2\u0097\u0098\4\62;\2\u0098\26\3\2\2\2\u0099\u009a\4\629\2\u009a"+
		"\30\3\2\2\2\u009b\u009c\t\5\2\2\u009c\32\3\2\2\2\u009d\u009e\4c|\2\u009e"+
		"\34\3\2\2\2\u009f\u00a0\4C\\\2\u00a0\36\3\2\2\2\u00a1\u00a4\5\33\16\2"+
		"\u00a2\u00a4\5\35\17\2\u00a3\u00a1\3\2\2\2\u00a3\u00a2\3\2\2\2\u00a4 "+
		"\3\2\2\2\u00a5\u00a8\5\37\20\2\u00a6\u00a8\7a\2\2\u00a7\u00a5\3\2\2\2"+
		"\u00a7\u00a6\3\2\2\2\u00a8\"\3\2\2\2\u00a9\u00aa\t\6\2\2\u00aa$\3\2\2"+
		"\2\u00ab\u00ac\7\62\2\2\u00ac\u00b0\7z\2\2\u00ad\u00ae\7\62\2\2\u00ae"+
		"\u00b0\7Z\2\2\u00af\u00ab\3\2\2\2\u00af\u00ad\3\2\2\2\u00b0&\3\2\2\2\u00b1"+
		"\u00b2\7\62\2\2\u00b2\u00b6\7d\2\2\u00b3\u00b4\7\62\2\2\u00b4\u00b6\7"+
		"D\2\2\u00b5\u00b1\3\2\2\2\u00b5\u00b3\3\2\2\2\u00b6(\3\2\2\2\u00b7\u00b8"+
		"\t\7\2\2\u00b8*\3\2\2\2\u00b9\u00ba\t\b\2\2\u00ba,\3\2\2\2\u00bb\u00bc"+
		"\7n\2\2\u00bc\u00c0\7n\2\2\u00bd\u00be\7N\2\2\u00be\u00c0\7N\2\2\u00bf"+
		"\u00bb\3\2\2\2\u00bf\u00bd\3\2\2\2\u00c0.\3\2\2\2\u00c1\u00c2\7)\2\2\u00c2"+
		"\60\3\2\2\2\u00c3\u00c4\7$\2\2\u00c4\62\3\2\2\2\u00c5\u00c9\5\65\33\2"+
		"\u00c6\u00c9\5\67\34\2\u00c7\u00c9\59\35\2\u00c8\u00c5\3\2\2\2\u00c8\u00c6"+
		"\3\2\2\2\u00c8\u00c7\3\2\2\2\u00c9\64\3\2\2\2\u00ca\u00cb\7^\2\2\u00cb"+
		"\u00e1\7)\2\2\u00cc\u00cd\7^\2\2\u00cd\u00e1\7$\2\2\u00ce\u00cf\7^\2\2"+
		"\u00cf\u00e1\7A\2\2\u00d0\u00d1\7^\2\2\u00d1\u00e1\7^\2\2\u00d2\u00d3"+
		"\7^\2\2\u00d3\u00e1\7c\2\2\u00d4\u00d5\7^\2\2\u00d5\u00e1\7d\2\2\u00d6"+
		"\u00d7\7^\2\2\u00d7\u00e1\7h\2\2\u00d8\u00d9\7^\2\2\u00d9\u00e1\7p\2\2"+
		"\u00da\u00db\7^\2\2\u00db\u00e1\7t\2\2\u00dc\u00dd\7^\2\2\u00dd\u00e1"+
		"\7v\2\2\u00de\u00df\7^\2\2\u00df\u00e1\7x\2\2\u00e0\u00ca\3\2\2\2\u00e0"+
		"\u00cc\3\2\2\2\u00e0\u00ce\3\2\2\2\u00e0\u00d0\3\2\2\2\u00e0\u00d2\3\2"+
		"\2\2\u00e0\u00d4\3\2\2\2\u00e0\u00d6\3\2\2\2\u00e0\u00d8\3\2\2\2\u00e0"+
		"\u00da\3\2\2\2\u00e0\u00dc\3\2\2\2\u00e0\u00de\3\2\2\2\u00e1\66\3\2\2"+
		"\2\u00e2\u00e3\7^\2\2\u00e3\u00ee\5\27\f\2\u00e4\u00e5\7^\2\2\u00e5\u00e6"+
		"\5\27\f\2\u00e6\u00e7\5\27\f\2\u00e7\u00ee\3\2\2\2\u00e8\u00e9\7^\2\2"+
		"\u00e9\u00ea\5\27\f\2\u00ea\u00eb\5\27\f\2\u00eb\u00ec\5\27\f\2\u00ec"+
		"\u00ee\3\2\2\2\u00ed\u00e2\3\2\2\2\u00ed\u00e4\3\2\2\2\u00ed\u00e8\3\2"+
		"\2\2\u00ee8\3\2\2\2\u00ef\u00f0\7^\2\2\u00f0\u00f1\7z\2\2\u00f1\u00f3"+
		"\3\2\2\2\u00f2\u00f4\5\31\r\2\u00f3\u00f2\3\2\2\2\u00f4\u00f5\3\2\2\2"+
		"\u00f5\u00f3\3\2\2\2\u00f5\u00f6\3\2\2\2\u00f6:\3\2\2\2\u00f7\u00f8\5"+
		"\31\r\2\u00f8\u00f9\5\31\r\2\u00f9\u00fa\5\31\r\2\u00fa\u00fb\5\31\r\2"+
		"\u00fb<\3\2\2\2\u00fc\u00fd\7^\2\2\u00fd\u00fe\7w\2\2\u00fe\u00ff\3\2"+
		"\2\2\u00ff\u0107\5;\36\2\u0100\u0101\7^\2\2\u0101\u0102\7W\2\2\u0102\u0103"+
		"\3\2\2\2\u0103\u0104\5;\36\2\u0104\u0105\5;\36\2\u0105\u0107\3\2\2\2\u0106"+
		"\u00fc\3\2\2\2\u0106\u0100\3\2\2\2\u0107>\3\2\2\2\36\2EJOTY^adlqux~\u0085"+
		"\u0089\u008f\u0091\u00a3\u00a7\u00af\u00b5\u00bf\u00c8\u00e0\u00ed\u00f5"+
		"\u0106\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}