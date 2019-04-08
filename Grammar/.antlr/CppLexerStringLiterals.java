// Generated from d:\Repos\SoupSyntax\Grammar\CppLexerStringLiterals.g4 by ANTLR 4.7.1
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
		"StringCharacter", "StringPrefix", "DelimiterCharacter", "RawCharacter", 
		"StringLiteral", "BinaryDigit", "NonZeroDecimalDigit", "DecimalDigit", 
		"OctalDigit", "HexadecimalDigit", "LowerCaseLetter", "UpperCaseLetter", 
		"Letter", "NonDigit", "Sign", "HexadecimalPrefix", "BinaryPrefix", "UnsignedSuffix", 
		"LongSuffix", "LongLongSuffix", "SingleQuote", "DoubleQuote", "EscapeSequence", 
		"SimpleEscapeSequence", "OctalEscapeSequence", "HexadecimalEscapeSequence", 
		"HexadecimalQuad", "UniversalCharacterName"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\3\u00f6\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\3\2\3\2\3\2\5\2?\n\2\3\3\3\3"+
		"\3\3\3\3\5\3E\n\3\3\4\3\4\3\5\3\5\3\6\5\6L\n\6\3\6\3\6\7\6P\n\6\f\6\16"+
		"\6S\13\6\3\6\3\6\3\6\3\6\3\6\5\6Z\n\6\3\6\3\6\7\6^\n\6\f\6\16\6a\13\6"+
		"\3\6\3\6\3\6\5\6f\n\6\3\6\3\6\3\6\7\6k\n\6\f\6\16\6n\13\6\3\6\3\6\7\6"+
		"r\n\6\f\6\16\6u\13\6\3\6\3\6\7\6y\n\6\f\6\16\6|\13\6\3\6\3\6\5\6\u0080"+
		"\n\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3"+
		"\16\5\16\u0092\n\16\3\17\3\17\5\17\u0096\n\17\3\20\3\20\3\21\3\21\3\21"+
		"\3\21\5\21\u009e\n\21\3\22\3\22\3\22\3\22\5\22\u00a4\n\22\3\23\3\23\3"+
		"\24\3\24\3\25\3\25\3\25\3\25\5\25\u00ae\n\25\3\26\3\26\3\27\3\27\3\30"+
		"\3\30\3\30\5\30\u00b7\n\30\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31"+
		"\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\5\31"+
		"\u00cf\n\31\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\5\32"+
		"\u00dc\n\32\3\33\3\33\3\33\3\33\6\33\u00e2\n\33\r\33\16\33\u00e3\3\34"+
		"\3\34\3\34\3\34\3\34\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35"+
		"\5\35\u00f5\n\35\2\2\36\3\2\5\2\7\2\t\2\13\3\r\2\17\2\21\2\23\2\25\2\27"+
		"\2\31\2\33\2\35\2\37\2!\2#\2%\2\'\2)\2+\2-\2/\2\61\2\63\2\65\2\67\29\2"+
		"\3\2\t\5\2\f\f$$^^\4\2WWww\7\2\13\f\16\17\"\"*+^^\3\2++\5\2\62;CHch\4"+
		"\2--//\4\2NNnn\2\u00fd\2\13\3\2\2\2\3>\3\2\2\2\5D\3\2\2\2\7F\3\2\2\2\t"+
		"H\3\2\2\2\13\177\3\2\2\2\r\u0081\3\2\2\2\17\u0083\3\2\2\2\21\u0085\3\2"+
		"\2\2\23\u0087\3\2\2\2\25\u0089\3\2\2\2\27\u008b\3\2\2\2\31\u008d\3\2\2"+
		"\2\33\u0091\3\2\2\2\35\u0095\3\2\2\2\37\u0097\3\2\2\2!\u009d\3\2\2\2#"+
		"\u00a3\3\2\2\2%\u00a5\3\2\2\2\'\u00a7\3\2\2\2)\u00ad\3\2\2\2+\u00af\3"+
		"\2\2\2-\u00b1\3\2\2\2/\u00b6\3\2\2\2\61\u00ce\3\2\2\2\63\u00db\3\2\2\2"+
		"\65\u00dd\3\2\2\2\67\u00e5\3\2\2\29\u00f4\3\2\2\2;?\n\2\2\2<?\5/\30\2"+
		"=?\59\35\2>;\3\2\2\2><\3\2\2\2>=\3\2\2\2?\4\3\2\2\2@E\7N\2\2AB\7w\2\2"+
		"BE\7:\2\2CE\t\3\2\2D@\3\2\2\2DA\3\2\2\2DC\3\2\2\2E\6\3\2\2\2FG\n\4\2\2"+
		"G\b\3\2\2\2HI\n\5\2\2I\n\3\2\2\2JL\7N\2\2KJ\3\2\2\2KL\3\2\2\2LM\3\2\2"+
		"\2MQ\5-\27\2NP\5\3\2\2ON\3\2\2\2PS\3\2\2\2QO\3\2\2\2QR\3\2\2\2RT\3\2\2"+
		"\2SQ\3\2\2\2TU\5-\27\2U\u0080\3\2\2\2VW\7w\2\2WZ\7:\2\2XZ\t\3\2\2YV\3"+
		"\2\2\2YX\3\2\2\2Z[\3\2\2\2[_\5-\27\2\\^\5\3\2\2]\\\3\2\2\2^a\3\2\2\2_"+
		"]\3\2\2\2_`\3\2\2\2`b\3\2\2\2a_\3\2\2\2bc\5-\27\2c\u0080\3\2\2\2df\5\5"+
		"\3\2ed\3\2\2\2ef\3\2\2\2fg\3\2\2\2gh\7T\2\2hl\5-\27\2ik\5\7\4\2ji\3\2"+
		"\2\2kn\3\2\2\2lj\3\2\2\2lm\3\2\2\2mo\3\2\2\2nl\3\2\2\2os\7*\2\2pr\5\t"+
		"\5\2qp\3\2\2\2ru\3\2\2\2sq\3\2\2\2st\3\2\2\2tv\3\2\2\2us\3\2\2\2vz\7+"+
		"\2\2wy\5\7\4\2xw\3\2\2\2y|\3\2\2\2zx\3\2\2\2z{\3\2\2\2{}\3\2\2\2|z\3\2"+
		"\2\2}~\5-\27\2~\u0080\3\2\2\2\177K\3\2\2\2\177Y\3\2\2\2\177e\3\2\2\2\u0080"+
		"\f\3\2\2\2\u0081\u0082\4\62\63\2\u0082\16\3\2\2\2\u0083\u0084\4\63;\2"+
		"\u0084\20\3\2\2\2\u0085\u0086\4\62;\2\u0086\22\3\2\2\2\u0087\u0088\4\62"+
		"9\2\u0088\24\3\2\2\2\u0089\u008a\t\6\2\2\u008a\26\3\2\2\2\u008b\u008c"+
		"\4c|\2\u008c\30\3\2\2\2\u008d\u008e\4C\\\2\u008e\32\3\2\2\2\u008f\u0092"+
		"\5\27\f\2\u0090\u0092\5\31\r\2\u0091\u008f\3\2\2\2\u0091\u0090\3\2\2\2"+
		"\u0092\34\3\2\2\2\u0093\u0096\5\33\16\2\u0094\u0096\7a\2\2\u0095\u0093"+
		"\3\2\2\2\u0095\u0094\3\2\2\2\u0096\36\3\2\2\2\u0097\u0098\t\7\2\2\u0098"+
		" \3\2\2\2\u0099\u009a\7\62\2\2\u009a\u009e\7z\2\2\u009b\u009c\7\62\2\2"+
		"\u009c\u009e\7Z\2\2\u009d\u0099\3\2\2\2\u009d\u009b\3\2\2\2\u009e\"\3"+
		"\2\2\2\u009f\u00a0\7\62\2\2\u00a0\u00a4\7d\2\2\u00a1\u00a2\7\62\2\2\u00a2"+
		"\u00a4\7D\2\2\u00a3\u009f\3\2\2\2\u00a3\u00a1\3\2\2\2\u00a4$\3\2\2\2\u00a5"+
		"\u00a6\t\3\2\2\u00a6&\3\2\2\2\u00a7\u00a8\t\b\2\2\u00a8(\3\2\2\2\u00a9"+
		"\u00aa\7n\2\2\u00aa\u00ae\7n\2\2\u00ab\u00ac\7N\2\2\u00ac\u00ae\7N\2\2"+
		"\u00ad\u00a9\3\2\2\2\u00ad\u00ab\3\2\2\2\u00ae*\3\2\2\2\u00af\u00b0\7"+
		")\2\2\u00b0,\3\2\2\2\u00b1\u00b2\7$\2\2\u00b2.\3\2\2\2\u00b3\u00b7\5\61"+
		"\31\2\u00b4\u00b7\5\63\32\2\u00b5\u00b7\5\65\33\2\u00b6\u00b3\3\2\2\2"+
		"\u00b6\u00b4\3\2\2\2\u00b6\u00b5\3\2\2\2\u00b7\60\3\2\2\2\u00b8\u00b9"+
		"\7^\2\2\u00b9\u00cf\7)\2\2\u00ba\u00bb\7^\2\2\u00bb\u00cf\7$\2\2\u00bc"+
		"\u00bd\7^\2\2\u00bd\u00cf\7A\2\2\u00be\u00bf\7^\2\2\u00bf\u00cf\7^\2\2"+
		"\u00c0\u00c1\7^\2\2\u00c1\u00cf\7c\2\2\u00c2\u00c3\7^\2\2\u00c3\u00cf"+
		"\7d\2\2\u00c4\u00c5\7^\2\2\u00c5\u00cf\7h\2\2\u00c6\u00c7\7^\2\2\u00c7"+
		"\u00cf\7p\2\2\u00c8\u00c9\7^\2\2\u00c9\u00cf\7t\2\2\u00ca\u00cb\7^\2\2"+
		"\u00cb\u00cf\7v\2\2\u00cc\u00cd\7^\2\2\u00cd\u00cf\7x\2\2\u00ce\u00b8"+
		"\3\2\2\2\u00ce\u00ba\3\2\2\2\u00ce\u00bc\3\2\2\2\u00ce\u00be\3\2\2\2\u00ce"+
		"\u00c0\3\2\2\2\u00ce\u00c2\3\2\2\2\u00ce\u00c4\3\2\2\2\u00ce\u00c6\3\2"+
		"\2\2\u00ce\u00c8\3\2\2\2\u00ce\u00ca\3\2\2\2\u00ce\u00cc\3\2\2\2\u00cf"+
		"\62\3\2\2\2\u00d0\u00d1\7^\2\2\u00d1\u00dc\5\23\n\2\u00d2\u00d3\7^\2\2"+
		"\u00d3\u00d4\5\23\n\2\u00d4\u00d5\5\23\n\2\u00d5\u00dc\3\2\2\2\u00d6\u00d7"+
		"\7^\2\2\u00d7\u00d8\5\23\n\2\u00d8\u00d9\5\23\n\2\u00d9\u00da\5\23\n\2"+
		"\u00da\u00dc\3\2\2\2\u00db\u00d0\3\2\2\2\u00db\u00d2\3\2\2\2\u00db\u00d6"+
		"\3\2\2\2\u00dc\64\3\2\2\2\u00dd\u00de\7^\2\2\u00de\u00df\7z\2\2\u00df"+
		"\u00e1\3\2\2\2\u00e0\u00e2\5\25\13\2\u00e1\u00e0\3\2\2\2\u00e2\u00e3\3"+
		"\2\2\2\u00e3\u00e1\3\2\2\2\u00e3\u00e4\3\2\2\2\u00e4\66\3\2\2\2\u00e5"+
		"\u00e6\5\25\13\2\u00e6\u00e7\5\25\13\2\u00e7\u00e8\5\25\13\2\u00e8\u00e9"+
		"\5\25\13\2\u00e98\3\2\2\2\u00ea\u00eb\7^\2\2\u00eb\u00ec\7w\2\2\u00ec"+
		"\u00ed\3\2\2\2\u00ed\u00f5\5\67\34\2\u00ee\u00ef\7^\2\2\u00ef\u00f0\7"+
		"W\2\2\u00f0\u00f1\3\2\2\2\u00f1\u00f2\5\67\34\2\u00f2\u00f3\5\67\34\2"+
		"\u00f3\u00f5\3\2\2\2\u00f4\u00ea\3\2\2\2\u00f4\u00ee\3\2\2\2\u00f5:\3"+
		"\2\2\2\30\2>DKQY_elsz\177\u0091\u0095\u009d\u00a3\u00ad\u00b6\u00ce\u00db"+
		"\u00e3\u00f4\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}