window.innerWidth = window.width = nativeInterface.window.getWidth();
window.innerHeight = window.height = nativeInterface.window.getHeight();

window.requestAnimationFrame = function (callback) {
    nativeInterface.drawCallback = callback;
};

window.btoa = nativeInterface.window.btoa;
window.atob = nativeInterface.window.atob;

function makePerformance() {
    var start = Date.now();
    this.now = function () {
        return Date.now() - start;
    };
}

performance = new makePerformance();