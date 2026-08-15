\context Staff = "cello" <<
	\set Staff.instrumentName = "Cello"
	\set Staff.shortInstrumentName = "Clo."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-cello" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\clef "alto"
		\key g \major
		r2.  |
		r4 g' fis' g'  |
		fis' 4 e' 8 d' ~ d' 2  |
		r4 e' d' e'  |
%% 5
		d' 4 c' 8 b ~ b 2  |
		r4 c' d' e'  |
		d' 2 e' 4 fis'  |
		g' 2 a' 4 fis'  |
		g' 1  |
%% 10
		r2 g' 4 fis'  |
		e' 1  |
		d' 2. d' 4  |
		e' 1 ~  |
		e' 2. e' 4  |
%% 15
		fis' 4 e' 8 d' ~ d' 2 ~  |
		d' 2 r  |
		r4 g' fis' g'  |
		fis' 4 e' 8 d' ~ d' 2  |
		r4 e' d' e'  |
%% 20
		d' 4 c' 8 b ~ b 2  |
		r4 c' d' e'  |
		d' 2 e' 4 fis'  |
		g' 2 a' 4 fis'  |
		g' 1
		\bar "|."
	}
>>
