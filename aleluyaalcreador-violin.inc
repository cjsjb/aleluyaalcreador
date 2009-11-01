\context Staff = "violín" <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 1" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key g \major

		r8 d'' e'' fis''  |
		g'' 1  |
		R1*8  |
		r4 g' g' g'  |
		fis' 4 e' 8 d' ~ d' 2  |
		e' 1 ~  |
		e' 2 ~ e' 4 fis' 8 e'  |
		%% 15
		d' 1  |
		R1*9  |
		\bar "|."
	} % Voice
>> % Staff ends
