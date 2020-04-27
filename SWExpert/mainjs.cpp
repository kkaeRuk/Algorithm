//BOARD-WRITE
app.post('/board/main', function (req, res) {
    console.log(req.body);
    var bNum = req.body.bNum;
    var bTitle = req.body.bTitle;
    var spotStart = req.body.spotStart;
    var spotEnd = req.body.spotEnd;
    var sid = req.body.sid;
    var bDate = req.body.bDate;
    var bPrice = req.body.bPrice;
    var bFlag = req.body.bFlag;


    // 삽입을 수행하는 sql문.
    var sql = 'INSERT INTO Board (bNum, title, spotStart, spotEnd, sid, bDate, bPrice, bFlag) VALUES (?, ?, ?, ?, ?, ?, ?, ?)';
    var params = [bNum, bTitle, spotStart, spotEnd, sid, bDate, bPrice, bFlag];

    // sql 문의 ?는 두번째 매개변수로 넘겨진 params의 값으로 치환된다.
    connection.query(sql, params, function (err, result) {
        var resultCode = 404;
        var message = '에러가 발생했습니다';

        if (err) {
            console.log(err);
        } else {
            resultCode = 200;
            message = '게시물이 등록되었습니다.';
        }

        res.json({
            'code': resultCode,
            'message': message
        });
    });
});

//BOARD-READ
app.get('/board/main', function(req,res){
    
    var sql = 'SELECT * FROM Board';

    connection.query(sql,function(err,rows){
        
        if(err){
            console.log(rows);
        }
        res.json({
                'data' : [rows]
            });
    });

    console.log(sql);

});


[
        {
            "bNum": 1,
            "bTitle": "A4 5 pages",
            "spotStart": "engneer 7th",
            "spotEnd": "Lawson",
            "sid": "201514736"
            "bDate": "2019-11-29",
            "bPrice": 1000,
            "bFlag" : 0
        }
]



app.post('/user/join', function (req, res) {
    var sid = req.body.sid;
    var pwd = req.body.pwd;
    var name = req.body.name;
    var nickname = req.body.nickname;
    var major = req.body.major;
    var phoneNumber = req.body.phoneNumber;

    // 삽입을 수행하는 sql문.
    var sql = 'INSERT INTO Users (sid, pwd, name, nickname, major, phoneNumber) VALUES (?, ?, ?, ?, ?, ?)';
    var params = [sid, pwd, name, nickname, major, phoneNumber];

    // sql 문의 ?는 두번째 매개변수로 넘겨진 params의 값으로 치환된다.
    connection.query(sql, params, function (err, result) {
        var resultCode = 404;
        var message = '에러가 발생했습니다';

        if (err) {
            console.log(err);
        } else {
            resultCode = 200;
            message = '가입을 환영합니다^^';
        }

        res.json({
            'code': resultCode,
            'message': message
        });
    });
});