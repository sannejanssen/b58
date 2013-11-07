;(function($) {

    // Responsive menu
  Drupal.behaviors.responsiveMainNav = {
    attach: function(context) {

      // NAVIGATION MENU
      var $navigation = $('header nav.main-responsive');

      // Add extra menu item
      $('header nav.main-responsive > .menu > li.first').before('<li id="navigationtoggle"><a href="#"></a></li>');
      // $navigation.find('li.first').before('<li id="navigationtoggle"><a href="#"></a></li>');

      // verberg niet actieve elementen
      $('header nav.main-responsive > .menu > li:not(#navigationtoggle)').hide();

      // disable first element
      $navigation.find('#navigationtoggle a').click(function(e) {
        e.preventDefault();
      });

      // slideToggle
      $navigation.find('#navigationtoggle').click(function() {
        $('header nav.main-responsive > .menu > li:not(#navigationtoggle)').slideToggle();
      });
    }
  };

  Drupal.behaviors.mapClick = {
    attach: function(context) {
      var $map = $('#i-contacts');

      $('area', $map).bind('click', function(e) {
        e.preventDefault();

        $contact = $(this);
        $contact_reference = $contact.attr('id');

        var $actual_contact = $('.' + $contact_reference);
        $("html, body").animate({ scrollTop: $actual_contact.offset().top }, "slow");
      });
    }
  };

  Drupal.behaviors.backToTop = {
    attach: function(context) {
      var $backToTop = $('a', '#back-to-top');

      $backToTop.bind('click', function(e) {
        e.preventDefault();
        $("html, body").animate({ scrollTop: 0 }, "slow");
      });
    }
  };

})(jQuery);