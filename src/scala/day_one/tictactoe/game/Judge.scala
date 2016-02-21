package tictactoe.game

import tictactoe.board.Board

object Judge {
	def apply(board: Board) = {
		(board.rows ++ board.columes ++ board.diagonals)
		.filter(allCellsFilled)
		.find(bySamePlayer)
		.flatMap(_.head)
	}

	private def allCellsFilled: (Seq[Option[Char]]) => Boolean = {
		_.collect {
			case x: Some
