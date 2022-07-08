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
    program: $ => $.module_decl,

    module_decl: $ => seq('module', $.module_name_identifier, '=', '{', repeat($.declaration), '}', ';'),

    module_name_identifier: _$ => {
      const ident_letter = /[0-9a-zA-Z_#']/;
      return token(repeat1(ident_letter));
    },

    declaration: _$ => 'UNDEFINED',

    // TODO: support multiline comments
    comment: _$ => token(
      seq('--', /.*/),
    ),
  }
});
