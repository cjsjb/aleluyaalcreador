\context Staff = "tenor" \with { \consists "Ambitus_engraver" } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 5" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key g \major

		\partial 2 r2

		\transpose c'' c' {
		g' 4 g' 8 g' 4 g' 4.  |
		fis' 4 e' 8 d' ~ d' 2  |
		e' 4 e' 8 e' 4 e' 4.  |
		%% 5
		d' 4 c' 8 b ~ b 2  |
		c' 4 c' 8 c' 4 c' 4.  |
		d' 4 d' 8 d' 4 d' 4.  |
		e' 2 d' 4 c'  |
		d' 1  |
		%% 10
		R1*7  |
		g' 4 g' 8 g' 4 g' 4.  |
		fis' 4 e' 8 d' ~ d' 2  |
		e' 4 e' 8 e' 4 e' 4.  |
		%% 20
		d' 4 c' 8 b ~ b 2  |
		c' 4 c' 8 c' 4 c' 4.  |
		d' 4 d' 8 d' 4 d' 4.  |
		e' 2 d' 4 c'  |
		d' 1  |
		}
		\bar "|."
	} % Voice
	\lyricsto "voice 5" \new Lyrics \lyricmode {
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
