\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzo"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 4" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key g \major

		\partial 2 r2

		d' 4 d' 8 d' 4 d' 4.  |
		d' 4 d' 8 d' ~ d' 2  |
		b 4 b 8 b 4 b 4.  |
		%% 5
		b 4 d' 8 fis' ~ fis' 2  |
		c' 4 c' 8 c' 4 c' 4.  |
		a 4 a 8 a 4 a 4.  |
		c' 2 d' 4 d'  |
		b 1  |
		%% 10
		R1*7  |
		d' 4 d' 8 d' 4 d' 4.  |
		d' 4 d' 8 d' ~ d' 2  |
		b 4 b 8 b 4 b 4.  |
		%% 20
		b 4 d' 8 fis' ~ fis' 2  |
		c' 4 c' 8 c' 4 c' 4.  |
		a 4 a 8 a 4 a 4.  |
		c' 2 d' 4 d'  |
		b 1  |
		\bar "|."
	} % Voice
	\lyricsto "voice 4" \new Lyrics \lyricmode {
		¡A -- le -- lu -- ya al crea -- dor,
		a -- le -- lu -- "ya al" sal -- va -- dor,
		a -- le -- lu -- ya, a -- le -- lu -- ya,
		a -- le -- lu -- ya!

		¡A -- le -- lu -- ya al crea -- dor,
		a -- le -- lu -- "ya al" sal -- va -- dor,
		a -- le -- lu -- ya, a -- le -- lu -- ya,
		a -- le -- lu -- ya!
	}
>> % Staff ends
