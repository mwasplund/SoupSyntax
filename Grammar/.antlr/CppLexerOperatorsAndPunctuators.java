// Generated from d:\Repos\SoupSyntax\Grammar\CppLexerOperatorsAndPunctuators.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CppLexerOperatorsAndPunctuators extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		LeftBrace=1, RightBrace=2, LeftBracket=3, RightBracket=4, LeftParenthesis=5, 
		RightParenthesis=6, Semicolon=7, Colon=8, Ellipsis=9, New=10, Delete=11, 
		QuestionMark=12, DoubleColon=13, Period=14, PeriodAsterisk=15, Plus=16, 
		Minus=17, Asterisk=18, ForwardSlash=19, Percent=20, Caret=21, Ampersand=22, 
		VerticalBar=23, Tilde=24, ExclamationMark=25, Equal=26, LessThan=27, GreaterThan=28, 
		PlusEqual=29, MinusEqual=30, AsteriskEqual=31, ForwardSlashEqual=32, PercentEqual=33, 
		CaretEqual=34, AmpersandEqual=35, VerticalBarEqual=36, DoubleLessThan=37, 
		DoubleGreaterThan=38, DoubleLessThanEqual=39, DoubleGreaterThanEqual=40, 
		DoubleEqual=41, ExclamationMarkEqual=42, LessThanEqual=43, GreaterThanEqual=44, 
		DoubleAmpersand=45, DoubleVerticalBar=46, DoublePlus=47, DoubleMinus=48, 
		Comma=49, ArrowAsterisk=50, Arrow=51;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"LeftBrace", "RightBrace", "LeftBracket", "RightBracket", "LeftParenthesis", 
		"RightParenthesis", "Semicolon", "Colon", "Ellipsis", "New", "Delete", 
		"QuestionMark", "DoubleColon", "Period", "PeriodAsterisk", "Plus", "Minus", 
		"Asterisk", "ForwardSlash", "Percent", "Caret", "Ampersand", "VerticalBar", 
		"Tilde", "ExclamationMark", "Equal", "LessThan", "GreaterThan", "PlusEqual", 
		"MinusEqual", "AsteriskEqual", "ForwardSlashEqual", "PercentEqual", "CaretEqual", 
		"AmpersandEqual", "VerticalBarEqual", "DoubleLessThan", "DoubleGreaterThan", 
		"DoubleLessThanEqual", "DoubleGreaterThanEqual", "DoubleEqual", "ExclamationMarkEqual", 
		"LessThanEqual", "GreaterThanEqual", "DoubleAmpersand", "DoubleVerticalBar", 
		"DoublePlus", "DoubleMinus", "Comma", "ArrowAsterisk", "Arrow"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'{'", "'}'", "'['", "']'", "'('", "')'", "';'", "':'", "'...'", 
		"'new'", "'delete'", "'?'", "'::'", "'.'", "'.*'", "'+'", "'-'", "'*'", 
		"'/'", "'%'", "'^'", "'&'", "'|'", "'~'", "'!'", "'='", "'<'", "'>'", 
		"'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'&='", "'|='", "'<<'", 
		"'>>'", "'<<='", "'>>='", "'=='", "'!='", "'<='", "'>='", "'&&'", "'||'", 
		"'++'", "'--'", "','", "'->*'", "'->'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "LeftBrace", "RightBrace", "LeftBracket", "RightBracket", "LeftParenthesis", 
		"RightParenthesis", "Semicolon", "Colon", "Ellipsis", "New", "Delete", 
		"QuestionMark", "DoubleColon", "Period", "PeriodAsterisk", "Plus", "Minus", 
		"Asterisk", "ForwardSlash", "Percent", "Caret", "Ampersand", "VerticalBar", 
		"Tilde", "ExclamationMark", "Equal", "LessThan", "GreaterThan", "PlusEqual", 
		"MinusEqual", "AsteriskEqual", "ForwardSlashEqual", "PercentEqual", "CaretEqual", 
		"AmpersandEqual", "VerticalBarEqual", "DoubleLessThan", "DoubleGreaterThan", 
		"DoubleLessThanEqual", "DoubleGreaterThanEqual", "DoubleEqual", "ExclamationMarkEqual", 
		"LessThanEqual", "GreaterThanEqual", "DoubleAmpersand", "DoubleVerticalBar", 
		"DoublePlus", "DoubleMinus", "Comma", "ArrowAsterisk", "Arrow"
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


	public CppLexerOperatorsAndPunctuators(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "CppLexerOperatorsAndPunctuators.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\65\u00f3\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64"+
		"\t\64\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t"+
		"\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3"+
		"\r\3\16\3\16\3\16\3\17\3\17\3\20\3\20\3\20\3\21\3\21\3\22\3\22\3\23\3"+
		"\23\3\24\3\24\3\25\3\25\3\26\3\26\3\27\3\27\3\30\3\30\3\31\3\31\3\32\3"+
		"\32\3\33\3\33\3\34\3\34\3\35\3\35\3\36\3\36\3\36\3\37\3\37\3\37\3 \3 "+
		"\3 \3!\3!\3!\3\"\3\"\3\"\3#\3#\3#\3$\3$\3$\3%\3%\3%\3&\3&\3&\3\'\3\'\3"+
		"\'\3(\3(\3(\3(\3)\3)\3)\3)\3*\3*\3*\3+\3+\3+\3,\3,\3,\3-\3-\3-\3.\3.\3"+
		".\3/\3/\3/\3\60\3\60\3\60\3\61\3\61\3\61\3\62\3\62\3\63\3\63\3\63\3\63"+
		"\3\64\3\64\3\64\2\2\65\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27"+
		"\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33"+
		"\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\63"+
		"e\64g\65\3\2\2\2\u00f2\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2"+
		"\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25"+
		"\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2"+
		"\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2"+
		"\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3"+
		"\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2"+
		"\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2"+
		"Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]\3"+
		"\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2\2\2g\3\2\2\2\3i\3\2\2"+
		"\2\5k\3\2\2\2\7m\3\2\2\2\to\3\2\2\2\13q\3\2\2\2\rs\3\2\2\2\17u\3\2\2\2"+
		"\21w\3\2\2\2\23y\3\2\2\2\25}\3\2\2\2\27\u0081\3\2\2\2\31\u0088\3\2\2\2"+
		"\33\u008a\3\2\2\2\35\u008d\3\2\2\2\37\u008f\3\2\2\2!\u0092\3\2\2\2#\u0094"+
		"\3\2\2\2%\u0096\3\2\2\2\'\u0098\3\2\2\2)\u009a\3\2\2\2+\u009c\3\2\2\2"+
		"-\u009e\3\2\2\2/\u00a0\3\2\2\2\61\u00a2\3\2\2\2\63\u00a4\3\2\2\2\65\u00a6"+
		"\3\2\2\2\67\u00a8\3\2\2\29\u00aa\3\2\2\2;\u00ac\3\2\2\2=\u00af\3\2\2\2"+
		"?\u00b2\3\2\2\2A\u00b5\3\2\2\2C\u00b8\3\2\2\2E\u00bb\3\2\2\2G\u00be\3"+
		"\2\2\2I\u00c1\3\2\2\2K\u00c4\3\2\2\2M\u00c7\3\2\2\2O\u00ca\3\2\2\2Q\u00ce"+
		"\3\2\2\2S\u00d2\3\2\2\2U\u00d5\3\2\2\2W\u00d8\3\2\2\2Y\u00db\3\2\2\2["+
		"\u00de\3\2\2\2]\u00e1\3\2\2\2_\u00e4\3\2\2\2a\u00e7\3\2\2\2c\u00ea\3\2"+
		"\2\2e\u00ec\3\2\2\2g\u00f0\3\2\2\2ij\7}\2\2j\4\3\2\2\2kl\7\177\2\2l\6"+
		"\3\2\2\2mn\7]\2\2n\b\3\2\2\2op\7_\2\2p\n\3\2\2\2qr\7*\2\2r\f\3\2\2\2s"+
		"t\7+\2\2t\16\3\2\2\2uv\7=\2\2v\20\3\2\2\2wx\7<\2\2x\22\3\2\2\2yz\7\60"+
		"\2\2z{\7\60\2\2{|\7\60\2\2|\24\3\2\2\2}~\7p\2\2~\177\7g\2\2\177\u0080"+
		"\7y\2\2\u0080\26\3\2\2\2\u0081\u0082\7f\2\2\u0082\u0083\7g\2\2\u0083\u0084"+
		"\7n\2\2\u0084\u0085\7g\2\2\u0085\u0086\7v\2\2\u0086\u0087\7g\2\2\u0087"+
		"\30\3\2\2\2\u0088\u0089\7A\2\2\u0089\32\3\2\2\2\u008a\u008b\7<\2\2\u008b"+
		"\u008c\7<\2\2\u008c\34\3\2\2\2\u008d\u008e\7\60\2\2\u008e\36\3\2\2\2\u008f"+
		"\u0090\7\60\2\2\u0090\u0091\7,\2\2\u0091 \3\2\2\2\u0092\u0093\7-\2\2\u0093"+
		"\"\3\2\2\2\u0094\u0095\7/\2\2\u0095$\3\2\2\2\u0096\u0097\7,\2\2\u0097"+
		"&\3\2\2\2\u0098\u0099\7\61\2\2\u0099(\3\2\2\2\u009a\u009b\7\'\2\2\u009b"+
		"*\3\2\2\2\u009c\u009d\7`\2\2\u009d,\3\2\2\2\u009e\u009f\7(\2\2\u009f."+
		"\3\2\2\2\u00a0\u00a1\7~\2\2\u00a1\60\3\2\2\2\u00a2\u00a3\7\u0080\2\2\u00a3"+
		"\62\3\2\2\2\u00a4\u00a5\7#\2\2\u00a5\64\3\2\2\2\u00a6\u00a7\7?\2\2\u00a7"+
		"\66\3\2\2\2\u00a8\u00a9\7>\2\2\u00a98\3\2\2\2\u00aa\u00ab\7@\2\2\u00ab"+
		":\3\2\2\2\u00ac\u00ad\7-\2\2\u00ad\u00ae\7?\2\2\u00ae<\3\2\2\2\u00af\u00b0"+
		"\7/\2\2\u00b0\u00b1\7?\2\2\u00b1>\3\2\2\2\u00b2\u00b3\7,\2\2\u00b3\u00b4"+
		"\7?\2\2\u00b4@\3\2\2\2\u00b5\u00b6\7\61\2\2\u00b6\u00b7\7?\2\2\u00b7B"+
		"\3\2\2\2\u00b8\u00b9\7\'\2\2\u00b9\u00ba\7?\2\2\u00baD\3\2\2\2\u00bb\u00bc"+
		"\7`\2\2\u00bc\u00bd\7?\2\2\u00bdF\3\2\2\2\u00be\u00bf\7(\2\2\u00bf\u00c0"+
		"\7?\2\2\u00c0H\3\2\2\2\u00c1\u00c2\7~\2\2\u00c2\u00c3\7?\2\2\u00c3J\3"+
		"\2\2\2\u00c4\u00c5\7>\2\2\u00c5\u00c6\7>\2\2\u00c6L\3\2\2\2\u00c7\u00c8"+
		"\7@\2\2\u00c8\u00c9\7@\2\2\u00c9N\3\2\2\2\u00ca\u00cb\7>\2\2\u00cb\u00cc"+
		"\7>\2\2\u00cc\u00cd\7?\2\2\u00cdP\3\2\2\2\u00ce\u00cf\7@\2\2\u00cf\u00d0"+
		"\7@\2\2\u00d0\u00d1\7?\2\2\u00d1R\3\2\2\2\u00d2\u00d3\7?\2\2\u00d3\u00d4"+
		"\7?\2\2\u00d4T\3\2\2\2\u00d5\u00d6\7#\2\2\u00d6\u00d7\7?\2\2\u00d7V\3"+
		"\2\2\2\u00d8\u00d9\7>\2\2\u00d9\u00da\7?\2\2\u00daX\3\2\2\2\u00db\u00dc"+
		"\7@\2\2\u00dc\u00dd\7?\2\2\u00ddZ\3\2\2\2\u00de\u00df\7(\2\2\u00df\u00e0"+
		"\7(\2\2\u00e0\\\3\2\2\2\u00e1\u00e2\7~\2\2\u00e2\u00e3\7~\2\2\u00e3^\3"+
		"\2\2\2\u00e4\u00e5\7-\2\2\u00e5\u00e6\7-\2\2\u00e6`\3\2\2\2\u00e7\u00e8"+
		"\7/\2\2\u00e8\u00e9\7/\2\2\u00e9b\3\2\2\2\u00ea\u00eb\7.\2\2\u00ebd\3"+
		"\2\2\2\u00ec\u00ed\7/\2\2\u00ed\u00ee\7@\2\2\u00ee\u00ef\7,\2\2\u00ef"+
		"f\3\2\2\2\u00f0\u00f1\7/\2\2\u00f1\u00f2\7@\2\2\u00f2h\3\2\2\2\3\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}