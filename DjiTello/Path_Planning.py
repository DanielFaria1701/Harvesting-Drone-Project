#!/usr/bin/python

import pygame
import math
import json

MAP_SIZE_COEFF = 1.0

pygame.init()
screen = pygame.display.set_mode([720,720])
screen.fill((0,0,0))
running = True

# Get the distance between two points
def get_distance(pos0, pos1):
    x = abs(pos0[0] - pos1[0])
    y = abs(pos0[1] - pos1[1])

    dist_px = math.hypot(x,y)
    dist_cm = dist_px * MAP_SIZE_COEFF

    return int(dist_cm), int(dist_px)

# Get the angle between two lines
def get_angle(pos0, pos1, posref):
    ax = posref[0] - pos0[0]
    ay = posref[1] - pos0[1]
    bx = posref[0] - pos1[0]
    by = posref[1] - pos1[1]

    dot = (ax * bx) + (ay * by)

    magA = math.sqrt(ax**2 + ay**2)
    magB = math.sqrt(bx**2 + by**2)  

    rad = math.acos(dot / (magA * magB))

    angle = (rad * 180) / math.pi

    return int(angle)  

# Main capturing mouse program
path_wp = []
index = 0
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.MOUSEBUTTONDOWN:
            pos = pygame.mouse.get_pos()
            path_wp.append(pos)
            if index > 0:
                pygame.draw.line(screen, (255,255,255), path_wp[index-1], pos, 2)
            index += 1
    pygame.display.update()

# Compute the waypoints (distance and angle)

path_dist_cm = []
path_dist_px = []
path_angle = []

for index in range(len(path_wp)):
    if index > 0:
        dist_cm, dist_px = get_distance(path_wp[index-1], path_wp[index])
        path_dist_cm.append(dist_cm)
        path_dist_px.append(dist_px)

    if index > 0 and index < (len(path_wp) - 1):
        angle = get_angle(path_wp[index-1], path_wp[index+1], path_wp[index])
        path_angle.append(angle)


print('Path Wp: {}'.format(path_wp))
print('Distance cm: {}'.format(path_dist_cm))
print('Distance px: {}'.format(path_dist_px))
print('Angle: {}'.format(path_angle))
