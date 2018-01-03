var Context = require("Modules/Context");
// var hikes = require("hikes"); // old route

function goToHike(arg) {
   var hike = arg.data;
   router.push("editHike", hike);
}

module.exports = {
   hikes: Context.hikes,

   goToHike: goToHike
};
