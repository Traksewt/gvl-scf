(function ($) {

  Drupal.behaviors.sbo2 = {
    attach: function (context, settings) {
      $('#slidorion').slidorion({
        speed: 1000,
        interval: 5000,
        //autoPlay: false,
        effect: 'slideLeft'
      });
    }
  };

})(jQuery);
