// Generated from d:\Repos\SoupSyntax\Grammar/CppLexerIntegerLiterals.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CppLexerIntegerLiterals extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Zero=1, IntegerLiteral=2;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"IntegerSuffix", "Zero", "DecimalLiteral", "OctalLiteral", "HexadecimalLiteral", 
		"BinaryLiteral", "IntegerLiteral", "BinaryDigit", "NonZeroDecimalDigit", 
		"DecimalDigit", "OctalDigit", "HexadecimalDigit", "LowerCaseLetter", "UpperCaseLetter", 
		"Letter", "NonDigit", "Sign", "HexadecimalPrefix", "BinaryPrefix", "UnsignedSuffix", 
		"LongSuffix", "LongLongSuffix", "SingleQuote", "DoubleQuote", "EscapeSequence", 
		"SimpleEscapeSequence", "OctalEscapeSequence", "HexadecimalEscapeSequence", 
		"HexadecimalQuad", "UniversalCharacterName"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'0'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "Zero", "IntegerLiteral"
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


	public CppLexerIntegerLiterals(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "CppLexerIntegerLiterals.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\4\u0104\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\3\2\3\2\5"+
		"\2B\n\2\3\2\3\2\5\2F\n\2\3\2\3\2\5\2J\n\2\3\2\3\2\5\2N\n\2\5\2P\n\2\3"+
		"\3\3\3\3\4\3\4\5\4V\n\4\3\4\7\4Y\n\4\f\4\16\4\\\13\4\3\5\3\5\5\5`\n\5"+
		"\3\5\7\5c\n\5\f\5\16\5f\13\5\3\6\3\6\3\6\5\6k\n\6\3\6\7\6n\n\6\f\6\16"+
		"\6q\13\6\3\7\3\7\3\7\5\7v\n\7\3\7\7\7y\n\7\f\7\16\7|\13\7\3\b\3\b\5\b"+
		"\u0080\n\b\3\b\3\b\5\b\u0084\n\b\3\b\3\b\5\b\u0088\n\b\3\b\3\b\5\b\u008c"+
		"\n\b\5\b\u008e\n\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16"+
		"\3\17\3\17\3\20\3\20\5\20\u00a0\n\20\3\21\3\21\5\21\u00a4\n\21\3\22\3"+
		"\22\3\23\3\23\3\23\3\23\5\23\u00ac\n\23\3\24\3\24\3\24\3\24\5\24\u00b2"+
		"\n\24\3\25\3\25\3\26\3\26\3\27\3\27\3\27\3\27\5\27\u00bc\n\27\3\30\3\30"+
		"\3\31\3\31\3\32\3\32\3\32\5\32\u00c5\n\32\3\33\3\33\3\33\3\33\3\33\3\33"+
		"\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33"+
		"\3\33\3\33\5\33\u00dd\n\33\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\5\34\u00ea\n\34\3\35\3\35\3\35\3\35\6\35\u00f0\n\35\r\35\16"+
		"\35\u00f1\3\36\3\36\3\36\3\36\3\36\3\37\3\37\3\37\3\37\3\37\3\37\3\37"+
		"\3\37\3\37\3\37\5\37\u0103\n\37\2\2 \3\2\5\3\7\2\t\2\13\2\r\2\17\4\21"+
		"\2\23\2\25\2\27\2\31\2\33\2\35\2\37\2!\2#\2%\2\'\2)\2+\2-\2/\2\61\2\63"+
		"\2\65\2\67\29\2;\2=\2\3\2\6\5\2\62;CHch\4\2--//\4\2WWww\4\2NNnn\2\u0112"+
		"\2\5\3\2\2\2\2\17\3\2\2\2\3O\3\2\2\2\5Q\3\2\2\2\7S\3\2\2\2\t]\3\2\2\2"+
		"\13g\3\2\2\2\rr\3\2\2\2\17\u008d\3\2\2\2\21\u008f\3\2\2\2\23\u0091\3\2"+
		"\2\2\25\u0093\3\2\2\2\27\u0095\3\2\2\2\31\u0097\3\2\2\2\33\u0099\3\2\2"+
		"\2\35\u009b\3\2\2\2\37\u009f\3\2\2\2!\u00a3\3\2\2\2#\u00a5\3\2\2\2%\u00ab"+
		"\3\2\2\2\'\u00b1\3\2\2\2)\u00b3\3\2\2\2+\u00b5\3\2\2\2-\u00bb\3\2\2\2"+
		"/\u00bd\3\2\2\2\61\u00bf\3\2\2\2\63\u00c4\3\2\2\2\65\u00dc\3\2\2\2\67"+
		"\u00e9\3\2\2\29\u00eb\3\2\2\2;\u00f3\3\2\2\2=\u0102\3\2\2\2?A\5)\25\2"+
		"@B\5+\26\2A@\3\2\2\2AB\3\2\2\2BP\3\2\2\2CE\5)\25\2DF\5-\27\2ED\3\2\2\2"+
		"EF\3\2\2\2FP\3\2\2\2GI\5+\26\2HJ\5)\25\2IH\3\2\2\2IJ\3\2\2\2JP\3\2\2\2"+
		"KM\5-\27\2LN\5)\25\2ML\3\2\2\2MN\3\2\2\2NP\3\2\2\2O?\3\2\2\2OC\3\2\2\2"+
		"OG\3\2\2\2OK\3\2\2\2P\4\3\2\2\2QR\7\62\2\2R\6\3\2\2\2SZ\5\23\n\2TV\5/"+
		"\30\2UT\3\2\2\2UV\3\2\2\2VW\3\2\2\2WY\5\25\13\2XU\3\2\2\2Y\\\3\2\2\2Z"+
		"X\3\2\2\2Z[\3\2\2\2[\b\3\2\2\2\\Z\3\2\2\2]d\5\5\3\2^`\5/\30\2_^\3\2\2"+
		"\2_`\3\2\2\2`a\3\2\2\2ac\5\27\f\2b_\3\2\2\2cf\3\2\2\2db\3\2\2\2de\3\2"+
		"\2\2e\n\3\2\2\2fd\3\2\2\2gh\5%\23\2ho\5\31\r\2ik\5/\30\2ji\3\2\2\2jk\3"+
		"\2\2\2kl\3\2\2\2ln\5\31\r\2mj\3\2\2\2nq\3\2\2\2om\3\2\2\2op\3\2\2\2p\f"+
		"\3\2\2\2qo\3\2\2\2rs\5\'\24\2sz\5\21\t\2tv\5/\30\2ut\3\2\2\2uv\3\2\2\2"+
		"vw\3\2\2\2wy\5\21\t\2xu\3\2\2\2y|\3\2\2\2zx\3\2\2\2z{\3\2\2\2{\16\3\2"+
		"\2\2|z\3\2\2\2}\177\5\7\4\2~\u0080\5\3\2\2\177~\3\2\2\2\177\u0080\3\2"+
		"\2\2\u0080\u008e\3\2\2\2\u0081\u0083\5\t\5\2\u0082\u0084\5\3\2\2\u0083"+
		"\u0082\3\2\2\2\u0083\u0084\3\2\2\2\u0084\u008e\3\2\2\2\u0085\u0087\5\13"+
		"\6\2\u0086\u0088\5\3\2\2\u0087\u0086\3\2\2\2\u0087\u0088\3\2\2\2\u0088"+
		"\u008e\3\2\2\2\u0089\u008b\5\r\7\2\u008a\u008c\5\3\2\2\u008b\u008a\3\2"+
		"\2\2\u008b\u008c\3\2\2\2\u008c\u008e\3\2\2\2\u008d}\3\2\2\2\u008d\u0081"+
		"\3\2\2\2\u008d\u0085\3\2\2\2\u008d\u0089\3\2\2\2\u008e\20\3\2\2\2\u008f"+
		"\u0090\4\62\63\2\u0090\22\3\2\2\2\u0091\u0092\4\63;\2\u0092\24\3\2\2\2"+
		"\u0093\u0094\4\62;\2\u0094\26\3\2\2\2\u0095\u0096\4\629\2\u0096\30\3\2"+
		"\2\2\u0097\u0098\t\2\2\2\u0098\32\3\2\2\2\u0099\u009a\4c|\2\u009a\34\3"+
		"\2\2\2\u009b\u009c\4C\\\2\u009c\36\3\2\2\2\u009d\u00a0\5\33\16\2\u009e"+
		"\u00a0\5\35\17\2\u009f\u009d\3\2\2\2\u009f\u009e\3\2\2\2\u00a0 \3\2\2"+
		"\2\u00a1\u00a4\5\37\20\2\u00a2\u00a4\7a\2\2\u00a3\u00a1\3\2\2\2\u00a3"+
		"\u00a2\3\2\2\2\u00a4\"\3\2\2\2\u00a5\u00a6\t\3\2\2\u00a6$\3\2\2\2\u00a7"+
		"\u00a8\7\62\2\2\u00a8\u00ac\7z\2\2\u00a9\u00aa\7\62\2\2\u00aa\u00ac\7"+
		"Z\2\2\u00ab\u00a7\3\2\2\2\u00ab\u00a9\3\2\2\2\u00ac&\3\2\2\2\u00ad\u00ae"+
		"\7\62\2\2\u00ae\u00b2\7d\2\2\u00af\u00b0\7\62\2\2\u00b0\u00b2\7D\2\2\u00b1"+
		"\u00ad\3\2\2\2\u00b1\u00af\3\2\2\2\u00b2(\3\2\2\2\u00b3\u00b4\t\4\2\2"+
		"\u00b4*\3\2\2\2\u00b5\u00b6\t\5\2\2\u00b6,\3\2\2\2\u00b7\u00b8\7n\2\2"+
		"\u00b8\u00bc\7n\2\2\u00b9\u00ba\7N\2\2\u00ba\u00bc\7N\2\2\u00bb\u00b7"+
		"\3\2\2\2\u00bb\u00b9\3\2\2\2\u00bc.\3\2\2\2\u00bd\u00be\7)\2\2\u00be\60"+
		"\3\2\2\2\u00bf\u00c0\7$\2\2\u00c0\62\3\2\2\2\u00c1\u00c5\5\65\33\2\u00c2"+
		"\u00c5\5\67\34\2\u00c3\u00c5\59\35\2\u00c4\u00c1\3\2\2\2\u00c4\u00c2\3"+
		"\2\2\2\u00c4\u00c3\3\2\2\2\u00c5\64\3\2\2\2\u00c6\u00c7\7^\2\2\u00c7\u00dd"+
		"\7)\2\2\u00c8\u00c9\7^\2\2\u00c9\u00dd\7$\2\2\u00ca\u00cb\7^\2\2\u00cb"+
		"\u00dd\7A\2\2\u00cc\u00cd\7^\2\2\u00cd\u00dd\7^\2\2\u00ce\u00cf\7^\2\2"+
		"\u00cf\u00dd\7c\2\2\u00d0\u00d1\7^\2\2\u00d1\u00dd\7d\2\2\u00d2\u00d3"+
		"\7^\2\2\u00d3\u00dd\7h\2\2\u00d4\u00d5\7^\2\2\u00d5\u00dd\7p\2\2\u00d6"+
		"\u00d7\7^\2\2\u00d7\u00dd\7t\2\2\u00d8\u00d9\7^\2\2\u00d9\u00dd\7v\2\2"+
		"\u00da\u00db\7^\2\2\u00db\u00dd\7x\2\2\u00dc\u00c6\3\2\2\2\u00dc\u00c8"+
		"\3\2\2\2\u00dc\u00ca\3\2\2\2\u00dc\u00cc\3\2\2\2\u00dc\u00ce\3\2\2\2\u00dc"+
		"\u00d0\3\2\2\2\u00dc\u00d2\3\2\2\2\u00dc\u00d4\3\2\2\2\u00dc\u00d6\3\2"+
		"\2\2\u00dc\u00d8\3\2\2\2\u00dc\u00da\3\2\2\2\u00dd\66\3\2\2\2\u00de\u00df"+
		"\7^\2\2\u00df\u00ea\5\27\f\2\u00e0\u00e1\7^\2\2\u00e1\u00e2\5\27\f\2\u00e2"+
		"\u00e3\5\27\f\2\u00e3\u00ea\3\2\2\2\u00e4\u00e5\7^\2\2\u00e5\u00e6\5\27"+
		"\f\2\u00e6\u00e7\5\27\f\2\u00e7\u00e8\5\27\f\2\u00e8\u00ea\3\2\2\2\u00e9"+
		"\u00de\3\2\2\2\u00e9\u00e0\3\2\2\2\u00e9\u00e4\3\2\2\2\u00ea8\3\2\2\2"+
		"\u00eb\u00ec\7^\2\2\u00ec\u00ed\7z\2\2\u00ed\u00ef\3\2\2\2\u00ee\u00f0"+
		"\5\31\r\2\u00ef\u00ee\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1\u00ef\3\2\2\2"+
		"\u00f1\u00f2\3\2\2\2\u00f2:\3\2\2\2\u00f3\u00f4\5\31\r\2\u00f4\u00f5\5"+
		"\31\r\2\u00f5\u00f6\5\31\r\2\u00f6\u00f7\5\31\r\2\u00f7<\3\2\2\2\u00f8"+
		"\u00f9\7^\2\2\u00f9\u00fa\7w\2\2\u00fa\u00fb\3\2\2\2\u00fb\u0103\5;\36"+
		"\2\u00fc\u00fd\7^\2\2\u00fd\u00fe\7W\2\2\u00fe\u00ff\3\2\2\2\u00ff\u0100"+
		"\5;\36\2\u0100\u0101\5;\36\2\u0101\u0103\3\2\2\2\u0102\u00f8\3\2\2\2\u0102"+
		"\u00fc\3\2\2\2\u0103>\3\2\2\2\37\2AEIMOUZ_djouz\177\u0083\u0087\u008b"+
		"\u008d\u009f\u00a3\u00ab\u00b1\u00bb\u00c4\u00dc\u00e9\u00f1\u0102\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}