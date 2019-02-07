// Generated from d:\Repos\SoupSyntax\Grammar/CppLexerFragments.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CppLexerFragments extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"BinaryDigit", "NonZeroDecimalDigit", "DecimalDigit", "OctalDigit", "HexadecimalDigit", 
		"LowerCaseLetter", "UpperCaseLetter", "Letter", "NonDigit", "Sign", "HexadecimalPrefix", 
		"BinaryPrefix", "UnsignedSuffix", "LongSuffix", "LongLongSuffix", "SingleQuote", 
		"DoubleQuote", "EscapeSequence", "SimpleEscapeSequence", "OctalEscapeSequence", 
		"HexadecimalEscapeSequence", "HexadecimalQuad", "UniversalCharacterName"
	};

	private static final String[] _LITERAL_NAMES = {
	};
	private static final String[] _SYMBOLIC_NAMES = {
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


	public CppLexerFragments(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "CppLexerFragments.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\2\u00a6\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\3\2\3\2\3"+
		"\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\5\tB\n\t\3\n\3"+
		"\n\5\nF\n\n\3\13\3\13\3\f\3\f\3\f\3\f\5\fN\n\f\3\r\3\r\3\r\3\r\5\rT\n"+
		"\r\3\16\3\16\3\17\3\17\3\20\3\20\3\20\3\20\5\20^\n\20\3\21\3\21\3\22\3"+
		"\22\3\23\3\23\3\23\5\23g\n\23\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\5\24\177\n\24\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25"+
		"\5\25\u008c\n\25\3\26\3\26\3\26\3\26\6\26\u0092\n\26\r\26\16\26\u0093"+
		"\3\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30"+
		"\3\30\5\30\u00a5\n\30\2\2\31\3\2\5\2\7\2\t\2\13\2\r\2\17\2\21\2\23\2\25"+
		"\2\27\2\31\2\33\2\35\2\37\2!\2#\2%\2\'\2)\2+\2-\2/\2\3\2\6\5\2\62;CHc"+
		"h\4\2--//\4\2WWww\4\2NNnn\2\u00a3\3\61\3\2\2\2\5\63\3\2\2\2\7\65\3\2\2"+
		"\2\t\67\3\2\2\2\139\3\2\2\2\r;\3\2\2\2\17=\3\2\2\2\21A\3\2\2\2\23E\3\2"+
		"\2\2\25G\3\2\2\2\27M\3\2\2\2\31S\3\2\2\2\33U\3\2\2\2\35W\3\2\2\2\37]\3"+
		"\2\2\2!_\3\2\2\2#a\3\2\2\2%f\3\2\2\2\'~\3\2\2\2)\u008b\3\2\2\2+\u008d"+
		"\3\2\2\2-\u0095\3\2\2\2/\u00a4\3\2\2\2\61\62\4\62\63\2\62\4\3\2\2\2\63"+
		"\64\4\63;\2\64\6\3\2\2\2\65\66\4\62;\2\66\b\3\2\2\2\678\4\629\28\n\3\2"+
		"\2\29:\t\2\2\2:\f\3\2\2\2;<\4c|\2<\16\3\2\2\2=>\4C\\\2>\20\3\2\2\2?B\5"+
		"\r\7\2@B\5\17\b\2A?\3\2\2\2A@\3\2\2\2B\22\3\2\2\2CF\5\21\t\2DF\7a\2\2"+
		"EC\3\2\2\2ED\3\2\2\2F\24\3\2\2\2GH\t\3\2\2H\26\3\2\2\2IJ\7\62\2\2JN\7"+
		"z\2\2KL\7\62\2\2LN\7Z\2\2MI\3\2\2\2MK\3\2\2\2N\30\3\2\2\2OP\7\62\2\2P"+
		"T\7d\2\2QR\7\62\2\2RT\7D\2\2SO\3\2\2\2SQ\3\2\2\2T\32\3\2\2\2UV\t\4\2\2"+
		"V\34\3\2\2\2WX\t\5\2\2X\36\3\2\2\2YZ\7n\2\2Z^\7n\2\2[\\\7N\2\2\\^\7N\2"+
		"\2]Y\3\2\2\2][\3\2\2\2^ \3\2\2\2_`\7)\2\2`\"\3\2\2\2ab\7$\2\2b$\3\2\2"+
		"\2cg\5\'\24\2dg\5)\25\2eg\5+\26\2fc\3\2\2\2fd\3\2\2\2fe\3\2\2\2g&\3\2"+
		"\2\2hi\7^\2\2i\177\7)\2\2jk\7^\2\2k\177\7$\2\2lm\7^\2\2m\177\7A\2\2no"+
		"\7^\2\2o\177\7^\2\2pq\7^\2\2q\177\7c\2\2rs\7^\2\2s\177\7d\2\2tu\7^\2\2"+
		"u\177\7h\2\2vw\7^\2\2w\177\7p\2\2xy\7^\2\2y\177\7t\2\2z{\7^\2\2{\177\7"+
		"v\2\2|}\7^\2\2}\177\7x\2\2~h\3\2\2\2~j\3\2\2\2~l\3\2\2\2~n\3\2\2\2~p\3"+
		"\2\2\2~r\3\2\2\2~t\3\2\2\2~v\3\2\2\2~x\3\2\2\2~z\3\2\2\2~|\3\2\2\2\177"+
		"(\3\2\2\2\u0080\u0081\7^\2\2\u0081\u008c\5\t\5\2\u0082\u0083\7^\2\2\u0083"+
		"\u0084\5\t\5\2\u0084\u0085\5\t\5\2\u0085\u008c\3\2\2\2\u0086\u0087\7^"+
		"\2\2\u0087\u0088\5\t\5\2\u0088\u0089\5\t\5\2\u0089\u008a\5\t\5\2\u008a"+
		"\u008c\3\2\2\2\u008b\u0080\3\2\2\2\u008b\u0082\3\2\2\2\u008b\u0086\3\2"+
		"\2\2\u008c*\3\2\2\2\u008d\u008e\7^\2\2\u008e\u008f\7z\2\2\u008f\u0091"+
		"\3\2\2\2\u0090\u0092\5\13\6\2\u0091\u0090\3\2\2\2\u0092\u0093\3\2\2\2"+
		"\u0093\u0091\3\2\2\2\u0093\u0094\3\2\2\2\u0094,\3\2\2\2\u0095\u0096\5"+
		"\13\6\2\u0096\u0097\5\13\6\2\u0097\u0098\5\13\6\2\u0098\u0099\5\13\6\2"+
		"\u0099.\3\2\2\2\u009a\u009b\7^\2\2\u009b\u009c\7w\2\2\u009c\u009d\3\2"+
		"\2\2\u009d\u00a5\5-\27\2\u009e\u009f\7^\2\2\u009f\u00a0\7W\2\2\u00a0\u00a1"+
		"\3\2\2\2\u00a1\u00a2\5-\27\2\u00a2\u00a3\5-\27\2\u00a3\u00a5\3\2\2\2\u00a4"+
		"\u009a\3\2\2\2\u00a4\u009e\3\2\2\2\u00a5\60\3\2\2\2\r\2AEMS]f~\u008b\u0093"+
		"\u00a4\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}