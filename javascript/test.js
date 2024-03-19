console.log('HIIII')

const obj = {
    name: 'anurag',
    show: function () {
        return this
    }
};

const obj2 = {
    class: '12th',
    __proto__: obj
}

console.log(obj2)