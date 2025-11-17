 var currentColor = "black"
    var rainbowMode = false
    var isDrawing = false

    function randomColor() {
        return "#" + Math.floor(Math.random()*16777215).toString(16)
    }

    var colors = document.querySelectorAll(".color")
    colors.forEach(function(c){
        c.onclick = function(){

            if (this.id === "rainbow") {
                rainbowMode = true
                return
            }

            rainbowMode = false
            currentColor = this.style.background
        }
    })

    document.getElementById("eraser").onclick = function(){
        rainbowMode = false
        currentColor = "white"
    }

    document.getElementById("clear").onclick = function(){
        document.querySelectorAll(".cell").forEach(function(cell){
            cell.style.background = "white"
        })
    }

    var grid = document.getElementById("grid")
    var total = Math.floor((innerWidth * (innerHeight - 150)) / (20 * 20))

    for(let i = 0; i < total; i++){
        let cell = document.createElement("div")
        cell.className = "cell"

        cell.onmousedown = function(){
            isDrawing = true
            this.style.background = rainbowMode ? randomColor() : currentColor
        }

        cell.onmouseover = function(){
            if(isDrawing)
                this.style.background = rainbowMode ? randomColor() : currentColor
        }

        grid.appendChild(cell)
    }

    document.onmouseup = function(){
        isDrawing = false
    }

    document.getElementById("saveBtn").onclick = function(){
        let canvas = document.createElement("canvas")
        let ctx = canvas.getContext("2d")

        let cols = Math.floor(innerWidth / 20)
        let rows = Math.floor((innerHeight - 150) / 20)

        canvas.width = cols * 20
        canvas.height = rows * 20

        let cells = document.querySelectorAll(".cell")

        let index = 0
        for(let r=0; r<rows; r++){
            for(let c=0; c<cols; c++){
                ctx.fillStyle = cells[index].style.background || "white"
                ctx.fillRect(c*20, r*20, 20, 20)
                index++
            }
        }

        let link = document.createElement("a")
        link.download = "pixel_art.png"
        link.href = canvas.toDataURL()
        link.click()
    }
  
