from flask import *
app = Flask(__name__)


@app.route('/')
def index():
    return render_template('index.html')

@app.route("/video")
def video():
    id = request.values.get("id")
    return render_template('{0}.html'.format(str(id)))

@app.route('/big')
def big():
    return render_template('big.html')

@app.route("/me")
def me():
    return render_template('me.html')

@app.route("/recommand")
def recommand():
    return render_template('recommand.html')

@app.route("/workroom")
def workroom():
    return render_template('workroom.html')

@app.route("/dress")
def dress():
    return render_template('dress.html')

@app.route("/play")
def play():
    return render_template('play.html')

@app.route("/box")
def box():
    return render_template("box.html")

@app.route("/result")
def result():
    data=request.values.get("sign")
    if data=="盲盒1":
        return '<img src="/static/images/result1.png" style="width:100%">'
    if data=="盲盒2":
        return '<img src="/static/images/result2.png" style="width:100%">'
    if data=="盲盒3":
        return '<img src="/static/images/result3.png" style="width:100%">'
    if data=="盲盒4":
        return '<img src="/static/images/result4.png" style="width:100%">'
    if data=="盲盒5":
        return '<img src="/static/images/result5.png" style="width:100%">'
    if data=="盲盒6":
        return '<img src="/static/images/result6.png" style="width:100%">'
    if data=="盲盒7":
        return '<img src="/static/images/result7.png" style="width:100%">'
    if data=="盲盒8":
        return '<img src="/static/images/result8.png" style="width:100%">'


app.run()