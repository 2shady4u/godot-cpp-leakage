extends Control

const Leakage = preload("res://addons/leakage/bin/leakage.gdns")
var leak

func _ready():
	var texture := preload("res://icon.png")
	var tex_data := texture.get_data().save_png_to_buffer()

	leak = Leakage.new()

	leak.other_leakage({"data": tex_data})
