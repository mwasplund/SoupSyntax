// Generated from d:\Repos\SoupSyntax\Grammar/CppLexerIdentifiers.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CppLexerIdentifiers extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Identifier=1;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"IdentifierNonDigit", "Identifier", "BinaryDigit", "NonZeroDecimalDigit", 
		"DecimalDigit", "OctalDigit", "HexadecimalDigit", "LowerCaseLetter", "UpperCaseLetter", 
		"Letter", "NonDigit", "Sign", "HexadecimalPrefix", "BinaryPrefix", "UnsignedSuffix", 
		"LongSuffix", "LongLongSuffix", "SingleQuote", "DoubleQuote", "EscapeSequence", 
		"SimpleEscapeSequence", "OctalEscapeSequence", "HexadecimalEscapeSequence", 
		"HexadecimalQuad", "UniversalCharacterName"
	};

	private static final String[] _LITERAL_NAMES = {
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "Identifier"
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


	public CppLexerIdentifiers(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "CppLexerIdentifiers.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\3\u00b6\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\3\2\3\2\5\28\n\2\3\3\3\3\3\3\7\3=\n\3\f\3\16\3@\13\3\3\4\3"+
		"\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\5\13R\n\13"+
		"\3\f\3\f\5\fV\n\f\3\r\3\r\3\16\3\16\3\16\3\16\5\16^\n\16\3\17\3\17\3\17"+
		"\3\17\5\17d\n\17\3\20\3\20\3\21\3\21\3\22\3\22\3\22\3\22\5\22n\n\22\3"+
		"\23\3\23\3\24\3\24\3\25\3\25\3\25\5\25w\n\25\3\26\3\26\3\26\3\26\3\26"+
		"\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26"+
		"\3\26\3\26\3\26\5\26\u008f\n\26\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27"+
		"\3\27\3\27\3\27\5\27\u009c\n\27\3\30\3\30\3\30\3\30\6\30\u00a2\n\30\r"+
		"\30\16\30\u00a3\3\31\3\31\3\31\3\31\3\31\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\5\32\u00b5\n\32\2\2\33\3\2\5\3\7\2\t\2\13\2\r\2\17"+
		"\2\21\2\23\2\25\2\27\2\31\2\33\2\35\2\37\2!\2#\2%\2\'\2)\2+\2-\2/\2\61"+
		"\2\63\2\3\2\6\5\2\62;CHch\4\2--//\4\2WWww\4\2NNnn\2\u00b5\2\5\3\2\2\2"+
		"\3\67\3\2\2\2\59\3\2\2\2\7A\3\2\2\2\tC\3\2\2\2\13E\3\2\2\2\rG\3\2\2\2"+
		"\17I\3\2\2\2\21K\3\2\2\2\23M\3\2\2\2\25Q\3\2\2\2\27U\3\2\2\2\31W\3\2\2"+
		"\2\33]\3\2\2\2\35c\3\2\2\2\37e\3\2\2\2!g\3\2\2\2#m\3\2\2\2%o\3\2\2\2\'"+
		"q\3\2\2\2)v\3\2\2\2+\u008e\3\2\2\2-\u009b\3\2\2\2/\u009d\3\2\2\2\61\u00a5"+
		"\3\2\2\2\63\u00b4\3\2\2\2\658\5\27\f\2\668\5\63\32\2\67\65\3\2\2\2\67"+
		"\66\3\2\2\28\4\3\2\2\29>\5\3\2\2:=\5\3\2\2;=\5\13\6\2<:\3\2\2\2<;\3\2"+
		"\2\2=@\3\2\2\2><\3\2\2\2>?\3\2\2\2?\6\3\2\2\2@>\3\2\2\2AB\4\62\63\2B\b"+
		"\3\2\2\2CD\4\63;\2D\n\3\2\2\2EF\4\62;\2F\f\3\2\2\2GH\4\629\2H\16\3\2\2"+
		"\2IJ\t\2\2\2J\20\3\2\2\2KL\4c|\2L\22\3\2\2\2MN\4C\\\2N\24\3\2\2\2OR\5"+
		"\21\t\2PR\5\23\n\2QO\3\2\2\2QP\3\2\2\2R\26\3\2\2\2SV\5\25\13\2TV\7a\2"+
		"\2US\3\2\2\2UT\3\2\2\2V\30\3\2\2\2WX\t\3\2\2X\32\3\2\2\2YZ\7\62\2\2Z^"+
		"\7z\2\2[\\\7\62\2\2\\^\7Z\2\2]Y\3\2\2\2][\3\2\2\2^\34\3\2\2\2_`\7\62\2"+
		"\2`d\7d\2\2ab\7\62\2\2bd\7D\2\2c_\3\2\2\2ca\3\2\2\2d\36\3\2\2\2ef\t\4"+
		"\2\2f \3\2\2\2gh\t\5\2\2h\"\3\2\2\2ij\7n\2\2jn\7n\2\2kl\7N\2\2ln\7N\2"+
		"\2mi\3\2\2\2mk\3\2\2\2n$\3\2\2\2op\7)\2\2p&\3\2\2\2qr\7$\2\2r(\3\2\2\2"+
		"sw\5+\26\2tw\5-\27\2uw\5/\30\2vs\3\2\2\2vt\3\2\2\2vu\3\2\2\2w*\3\2\2\2"+
		"xy\7^\2\2y\u008f\7)\2\2z{\7^\2\2{\u008f\7$\2\2|}\7^\2\2}\u008f\7A\2\2"+
		"~\177\7^\2\2\177\u008f\7^\2\2\u0080\u0081\7^\2\2\u0081\u008f\7c\2\2\u0082"+
		"\u0083\7^\2\2\u0083\u008f\7d\2\2\u0084\u0085\7^\2\2\u0085\u008f\7h\2\2"+
		"\u0086\u0087\7^\2\2\u0087\u008f\7p\2\2\u0088\u0089\7^\2\2\u0089\u008f"+
		"\7t\2\2\u008a\u008b\7^\2\2\u008b\u008f\7v\2\2\u008c\u008d\7^\2\2\u008d"+
		"\u008f\7x\2\2\u008ex\3\2\2\2\u008ez\3\2\2\2\u008e|\3\2\2\2\u008e~\3\2"+
		"\2\2\u008e\u0080\3\2\2\2\u008e\u0082\3\2\2\2\u008e\u0084\3\2\2\2\u008e"+
		"\u0086\3\2\2\2\u008e\u0088\3\2\2\2\u008e\u008a\3\2\2\2\u008e\u008c\3\2"+
		"\2\2\u008f,\3\2\2\2\u0090\u0091\7^\2\2\u0091\u009c\5\r\7\2\u0092\u0093"+
		"\7^\2\2\u0093\u0094\5\r\7\2\u0094\u0095\5\r\7\2\u0095\u009c\3\2\2\2\u0096"+
		"\u0097\7^\2\2\u0097\u0098\5\r\7\2\u0098\u0099\5\r\7\2\u0099\u009a\5\r"+
		"\7\2\u009a\u009c\3\2\2\2\u009b\u0090\3\2\2\2\u009b\u0092\3\2\2\2\u009b"+
		"\u0096\3\2\2\2\u009c.\3\2\2\2\u009d\u009e\7^\2\2\u009e\u009f\7z\2\2\u009f"+
		"\u00a1\3\2\2\2\u00a0\u00a2\5\17\b\2\u00a1\u00a0\3\2\2\2\u00a2\u00a3\3"+
		"\2\2\2\u00a3\u00a1\3\2\2\2\u00a3\u00a4\3\2\2\2\u00a4\60\3\2\2\2\u00a5"+
		"\u00a6\5\17\b\2\u00a6\u00a7\5\17\b\2\u00a7\u00a8\5\17\b\2\u00a8\u00a9"+
		"\5\17\b\2\u00a9\62\3\2\2\2\u00aa\u00ab\7^\2\2\u00ab\u00ac\7w\2\2\u00ac"+
		"\u00ad\3\2\2\2\u00ad\u00b5\5\61\31\2\u00ae\u00af\7^\2\2\u00af\u00b0\7"+
		"W\2\2\u00b0\u00b1\3\2\2\2\u00b1\u00b2\5\61\31\2\u00b2\u00b3\5\61\31\2"+
		"\u00b3\u00b5\3\2\2\2\u00b4\u00aa\3\2\2\2\u00b4\u00ae\3\2\2\2\u00b5\64"+
		"\3\2\2\2\20\2\67<>QU]cmv\u008e\u009b\u00a3\u00b4\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}