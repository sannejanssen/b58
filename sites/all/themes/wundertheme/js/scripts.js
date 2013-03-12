;(function($) {

    // Responsive menu
  Drupal.behaviors.responsiveMainNav = {
    attach: function(context) {

      // NAVIGATION MENU
      var $navigation = $('header nav.main');

      // Add extra menu item
      $('header nav.main > .menu > li.first').before('<li id="navigationtoggle"><a href="#"></a></li>');
      // $navigation.find('li.first').before('<li id="navigationtoggle"><a href="#"></a></li>');

      // verberg niet actieve elementen
      $('header nav.main > .menu > li:not(#navigationtoggle)').hide();

      // disable first element
      $navigation.find('#navigationtoggle a').click(function(e) {
        e.preventDefault();
      });

      // slideToggle
      $navigation.find('#navigationtoggle').click(function() {
        $('header nav.main > .menu > li:not(#navigationtoggle)').slideToggle();

        // $navigation.find("li:not(#navigationtoggle)").slideToggle();
      });
    }
  };

  /*
  // Responsive menu
  Drupal.behaviors.language = {
    attach: function(context) {

      // NAVIGATION MENU
      var $navigation = $('.main-nav');

      // Add extra menu item
      $navigation.find('li.first').before('<li id="navigationtoggle"><a href="#"></a></li>');

      // verberg niet actieve elementen
      $navigation.find('li:not(#navigationtoggle)').hide();

      // disable first element
      $navigation.find('#navigationtoggle a').click(function(e) {
        e.preventDefault();
      });

      // slideToggle
      $navigation.find('#navigationtoggle').click(function() {
        $navigation.find("li:not(#navigationtoggle)").slideToggle();
      });
    }
  };
  */

})(jQuery);