from djitellopy import Tello
import cv2
import numpy as np

# Inicialização do drone Tello
tello = Tello()
tello.connect()
tello.streamon()

# Constantes de controlo
velocidade = 10
altura_voo = 60

# Função para controlar o drone
def controlar_drone(x, y):
    if x < 150:
        tello.rotate_counter_clockwise(velocidade)
    elif x > 170:
        tello.rotate_clockwise(velocidade)
    else:
        if y < 100:
            tello.move_up(velocidade)
        elif y > 120:
            tello.move_down(velocidade)
        else:
            tello.move_forward(velocidade)

try:
    while True:
        # Capturar imagem do fluxo de vídeo
        frame = tello.get_frame_read().frame
        # Pré-processamento de imagem
        gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        edges = cv2.Canny(gray, 50, 150)
        # Detecção da linha branca
        lines = cv2.HoughLinesP(edges, 1, np.pi/180, threshold=50, minLineLength=50, maxLineGap=10)

        # Detecção do círculo branco
        circles = cv2.HoughCircles(gray, cv2.HOUGH_GRADIENT, dp=1, minDist=100, param1=50, param2=30, minRadius=10, maxRadius=100)

        # Desenhar as linhas detectadas
        if lines is not None:
            for line in lines:
                x1, y1, x2, y2 = line[0]
                cv2.line(frame, (x1, y1), (x2, y2), (0, 255, 0), 2)

        # Desenhar os círculos detectados e calcular o centro
        if circles is not None:
            circles = np.round(circles[0, :]).astype("int")
            for (x, y, r) in circles:
                cv2.circle(frame, (x, y), r, (0, 0, 255), 2)
                
                # Calcular o centro do círculo
                centro = (x, y)
                # Controle do drone
                controlar_drone(x, y)

                # Aterrar o drone
                tello.land()

        # Exibir o frame capturado
        cv2.imshow("Tello", frame)

        # Verificar pressionamento de tecla
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

except KeyboardInterrupt:
    pass

# Limpar
tello.streamoff()
cv2.destroyAllWindows()