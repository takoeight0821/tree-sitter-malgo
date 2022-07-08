module.exports = grammar({
  name: 'malgo',

  /**
   * These tokens may appear anywhere in the language.
   */
  extras: $ => [
    /\p{Zs}/,
    /\n/,
    /\r/,
    $.comment,
  ],

  rules: {
    program: $ => $._module,

    _module: $ => seq('module', field('module_name', $.module_name_identifier), '=', '{', $.declarations, '}'),

    declarations: $ => repeat1($._declaration),

    _declaration: $ => choice(
      $.signature,
      $.function,
    ),

    signature: $ => seq(field('name', $.lower_identifier), ':', 'UNDEFINED', ';'),

    function: $ => seq(field('name', $.lower_identifier), '=', field('rhs', $._expr), ';'),

    _expr: $ => choice($.integer, $.float, $.char),

    integer: _ => {
      const decimal = /[0-9][0-9_]*/;
      return token(seq(
        decimal,
        optional(choice(
          token.immediate(/#/),
          token.immediate(/L/),
          token.immediate(/L#/)))));
    },

    float: _ => {
      const decimal = /[0-9][0-9_]*/;
      const exponent = /[eE][+-]?[0-9_]+/;
      return token(seq(
        decimal,
        choice(
          seq(/\.[0-9_]+/, optional(exponent)),
          exponent,
        ),
        optional(choice(
          token.immediate(/#/),
          token.immediate(/F/),
          token.immediate(/F#/)))));
    },

    char: _ => 
      token(seq(
        choice(/'[^']'/, /'\\[^ ]*'/),
        optional(token.immediate(/#/)),
      )),

    lower_identifier: _ => {
      const ident_start = /[a-z_]/;
      const ident_continue = /[0-9a-zA-Z_#']/;
      return token(seq(ident_start, repeat(ident_continue)));
    },

    upper_identifier: _ => {
      const ident_start = /[A-Z]/;
      const ident_continue = /[0-9a-zA-Z_#']/;
      return token(seq(ident_start, repeat(ident_continue)));
    },

    module_name_identifier: _ => {
      const ident_letter = /[0-9a-zA-Z_#']/;
      return token(repeat1(ident_letter));
    },

    // TODO: support multiline comments
    comment: _ => token(
      seq('--', /.*/),
    ),
  }
});
