function squareDigits(n) {
	return parseInt(n.toString().split('').map(d => d*d).join(''));
}