// Generated from d:\Repos\SoupSyntax\Grammar/CppLexerCharacterLiterals.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CppLexerCharacterLiterals extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		CharacterLiteral=1;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"CCharacter", "CharacterLiteral", "BinaryDigit", "NonZeroDecimalDigit", 
		"DecimalDigit", "OctalDigit", "HexadecimalDigit", "LowerCaseLetter", "UpperCaseLetter", 
		"Letter", "NonDigit", "Sign", "HexadecimalPrefix", "BinaryPrefix", "UnsignedSuffix", 
		"LongSuffix", "LongLongSuffix", "SingleQuote", "DoubleQuote", "EscapeSequence", 
		"SimpleEscapeSequence", "OctalEscapeSequence", "HexadecimalEscapeSequence", 
		"HexadecimalQuad", "UniversalCharacterName"
	};

	private static final String[] _LITERAL_NAMES = {
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "CharacterLiteral"
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


	public CppLexerCharacterLiterals(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "CppLexerCharacterLiterals.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\3\u00d6\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\3\2\3\2\3\2\5\29\n\2\3\3\3\3\6\3=\n\3\r\3\16\3>\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\6\3H\n\3\r\3\16\3I\3\3\3\3\3\3\3\3\3\3\6\3Q\n\3\r\3\16"+
		"\3R\3\3\3\3\3\3\3\3\3\3\6\3Z\n\3\r\3\16\3[\3\3\3\3\5\3`\n\3\3\4\3\4\3"+
		"\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\5\13r\n\13\3"+
		"\f\3\f\5\fv\n\f\3\r\3\r\3\16\3\16\3\16\3\16\5\16~\n\16\3\17\3\17\3\17"+
		"\3\17\5\17\u0084\n\17\3\20\3\20\3\21\3\21\3\22\3\22\3\22\3\22\5\22\u008e"+
		"\n\22\3\23\3\23\3\24\3\24\3\25\3\25\3\25\5\25\u0097\n\25\3\26\3\26\3\26"+
		"\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26"+
		"\3\26\3\26\3\26\3\26\3\26\5\26\u00af\n\26\3\27\3\27\3\27\3\27\3\27\3\27"+
		"\3\27\3\27\3\27\3\27\3\27\5\27\u00bc\n\27\3\30\3\30\3\30\3\30\6\30\u00c2"+
		"\n\30\r\30\16\30\u00c3\3\31\3\31\3\31\3\31\3\31\3\32\3\32\3\32\3\32\3"+
		"\32\3\32\3\32\3\32\3\32\3\32\5\32\u00d5\n\32\2\2\33\3\2\5\3\7\2\t\2\13"+
		"\2\r\2\17\2\21\2\23\2\25\2\27\2\31\2\33\2\35\2\37\2!\2#\2%\2\'\2)\2+\2"+
		"-\2/\2\61\2\63\2\3\2\7\6\2\f\f\17\17))^^\4\2WWww\5\2\62;CHch\4\2--//\4"+
		"\2NNnn\2\u00db\2\5\3\2\2\2\38\3\2\2\2\5_\3\2\2\2\7a\3\2\2\2\tc\3\2\2\2"+
		"\13e\3\2\2\2\rg\3\2\2\2\17i\3\2\2\2\21k\3\2\2\2\23m\3\2\2\2\25q\3\2\2"+
		"\2\27u\3\2\2\2\31w\3\2\2\2\33}\3\2\2\2\35\u0083\3\2\2\2\37\u0085\3\2\2"+
		"\2!\u0087\3\2\2\2#\u008d\3\2\2\2%\u008f\3\2\2\2\'\u0091\3\2\2\2)\u0096"+
		"\3\2\2\2+\u00ae\3\2\2\2-\u00bb\3\2\2\2/\u00bd\3\2\2\2\61\u00c5\3\2\2\2"+
		"\63\u00d4\3\2\2\2\659\n\2\2\2\669\5)\25\2\679\5\63\32\28\65\3\2\2\28\66"+
		"\3\2\2\28\67\3\2\2\29\4\3\2\2\2:<\5%\23\2;=\5\3\2\2<;\3\2\2\2=>\3\2\2"+
		"\2><\3\2\2\2>?\3\2\2\2?@\3\2\2\2@A\5%\23\2A`\3\2\2\2BC\7w\2\2CD\7:\2\2"+
		"DE\3\2\2\2EG\5%\23\2FH\5\3\2\2GF\3\2\2\2HI\3\2\2\2IG\3\2\2\2IJ\3\2\2\2"+
		"JK\3\2\2\2KL\5%\23\2L`\3\2\2\2MN\t\3\2\2NP\5%\23\2OQ\5\3\2\2PO\3\2\2\2"+
		"QR\3\2\2\2RP\3\2\2\2RS\3\2\2\2ST\3\2\2\2TU\5%\23\2U`\3\2\2\2VW\7N\2\2"+
		"WY\5%\23\2XZ\5\3\2\2YX\3\2\2\2Z[\3\2\2\2[Y\3\2\2\2[\\\3\2\2\2\\]\3\2\2"+
		"\2]^\5%\23\2^`\3\2\2\2_:\3\2\2\2_B\3\2\2\2_M\3\2\2\2_V\3\2\2\2`\6\3\2"+
		"\2\2ab\4\62\63\2b\b\3\2\2\2cd\4\63;\2d\n\3\2\2\2ef\4\62;\2f\f\3\2\2\2"+
		"gh\4\629\2h\16\3\2\2\2ij\t\4\2\2j\20\3\2\2\2kl\4c|\2l\22\3\2\2\2mn\4C"+
		"\\\2n\24\3\2\2\2or\5\21\t\2pr\5\23\n\2qo\3\2\2\2qp\3\2\2\2r\26\3\2\2\2"+
		"sv\5\25\13\2tv\7a\2\2us\3\2\2\2ut\3\2\2\2v\30\3\2\2\2wx\t\5\2\2x\32\3"+
		"\2\2\2yz\7\62\2\2z~\7z\2\2{|\7\62\2\2|~\7Z\2\2}y\3\2\2\2}{\3\2\2\2~\34"+
		"\3\2\2\2\177\u0080\7\62\2\2\u0080\u0084\7d\2\2\u0081\u0082\7\62\2\2\u0082"+
		"\u0084\7D\2\2\u0083\177\3\2\2\2\u0083\u0081\3\2\2\2\u0084\36\3\2\2\2\u0085"+
		"\u0086\t\3\2\2\u0086 \3\2\2\2\u0087\u0088\t\6\2\2\u0088\"\3\2\2\2\u0089"+
		"\u008a\7n\2\2\u008a\u008e\7n\2\2\u008b\u008c\7N\2\2\u008c\u008e\7N\2\2"+
		"\u008d\u0089\3\2\2\2\u008d\u008b\3\2\2\2\u008e$\3\2\2\2\u008f\u0090\7"+
		")\2\2\u0090&\3\2\2\2\u0091\u0092\7$\2\2\u0092(\3\2\2\2\u0093\u0097\5+"+
		"\26\2\u0094\u0097\5-\27\2\u0095\u0097\5/\30\2\u0096\u0093\3\2\2\2\u0096"+
		"\u0094\3\2\2\2\u0096\u0095\3\2\2\2\u0097*\3\2\2\2\u0098\u0099\7^\2\2\u0099"+
		"\u00af\7)\2\2\u009a\u009b\7^\2\2\u009b\u00af\7$\2\2\u009c\u009d\7^\2\2"+
		"\u009d\u00af\7A\2\2\u009e\u009f\7^\2\2\u009f\u00af\7^\2\2\u00a0\u00a1"+
		"\7^\2\2\u00a1\u00af\7c\2\2\u00a2\u00a3\7^\2\2\u00a3\u00af\7d\2\2\u00a4"+
		"\u00a5\7^\2\2\u00a5\u00af\7h\2\2\u00a6\u00a7\7^\2\2\u00a7\u00af\7p\2\2"+
		"\u00a8\u00a9\7^\2\2\u00a9\u00af\7t\2\2\u00aa\u00ab\7^\2\2\u00ab\u00af"+
		"\7v\2\2\u00ac\u00ad\7^\2\2\u00ad\u00af\7x\2\2\u00ae\u0098\3\2\2\2\u00ae"+
		"\u009a\3\2\2\2\u00ae\u009c\3\2\2\2\u00ae\u009e\3\2\2\2\u00ae\u00a0\3\2"+
		"\2\2\u00ae\u00a2\3\2\2\2\u00ae\u00a4\3\2\2\2\u00ae\u00a6\3\2\2\2\u00ae"+
		"\u00a8\3\2\2\2\u00ae\u00aa\3\2\2\2\u00ae\u00ac\3\2\2\2\u00af,\3\2\2\2"+
		"\u00b0\u00b1\7^\2\2\u00b1\u00bc\5\r\7\2\u00b2\u00b3\7^\2\2\u00b3\u00b4"+
		"\5\r\7\2\u00b4\u00b5\5\r\7\2\u00b5\u00bc\3\2\2\2\u00b6\u00b7\7^\2\2\u00b7"+
		"\u00b8\5\r\7\2\u00b8\u00b9\5\r\7\2\u00b9\u00ba\5\r\7\2\u00ba\u00bc\3\2"+
		"\2\2\u00bb\u00b0\3\2\2\2\u00bb\u00b2\3\2\2\2\u00bb\u00b6\3\2\2\2\u00bc"+
		".\3\2\2\2\u00bd\u00be\7^\2\2\u00be\u00bf\7z\2\2\u00bf\u00c1\3\2\2\2\u00c0"+
		"\u00c2\5\17\b\2\u00c1\u00c0\3\2\2\2\u00c2\u00c3\3\2\2\2\u00c3\u00c1\3"+
		"\2\2\2\u00c3\u00c4\3\2\2\2\u00c4\60\3\2\2\2\u00c5\u00c6\5\17\b\2\u00c6"+
		"\u00c7\5\17\b\2\u00c7\u00c8\5\17\b\2\u00c8\u00c9\5\17\b\2\u00c9\62\3\2"+
		"\2\2\u00ca\u00cb\7^\2\2\u00cb\u00cc\7w\2\2\u00cc\u00cd\3\2\2\2\u00cd\u00d5"+
		"\5\61\31\2\u00ce\u00cf\7^\2\2\u00cf\u00d0\7W\2\2\u00d0\u00d1\3\2\2\2\u00d1"+
		"\u00d2\5\61\31\2\u00d2\u00d3\5\61\31\2\u00d3\u00d5\3\2\2\2\u00d4\u00ca"+
		"\3\2\2\2\u00d4\u00ce\3\2\2\2\u00d5\64\3\2\2\2\23\28>IR[_qu}\u0083\u008d"+
		"\u0096\u00ae\u00bb\u00c3\u00d4\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}