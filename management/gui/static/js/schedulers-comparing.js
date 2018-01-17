(function ($) {
    'use strict';
    $(function () {
        var submitButt = $("button[id='comparealgos']");
        $(document).on('change', 'input[name="schedulers"]', function () {
            var checked = $("input[name='schedulers']:checked").length;
            submitButt.attr("disabled", checked < 1);
        });
    });
})(jQuery);