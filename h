/* Estilos base para dispositivos móviles */
.contenedor {
  width: 100%;
  padding: 10px;
  background-color: #f0f0f0;
}

.titulo {
  font-size: 18px;
  color: #333;
  text-align: center;
}

.imagen {
  width: 100%;
  height: auto;
}

/* Media query para pantallas de hasta 480px */
@media only screen and (max-width: 480px) {
  .contenedor {
    padding: 5px;
    background-color: #e0e0e0;
  }

  .titulo {
    font-size: 16px;
    color: #555;
  }

  .imagen {
    width: 90%;
  }
}

/* Media query para pantallas de hasta 768px */
@media only screen and (max-width: 768px) {
  .contenedor {
    padding: 15px;
    background-color: #d0d0d0;
  }

  .titulo {
    font-size: 20px;
    color: #444;
  }

  .imagen {
    width: 80%;
  }
}

/* Media query para pantallas de hasta 1024px */
@media only screen and (max-width: 1024px) {
  .contenedor {
    padding: 20px;
    background-color: #c0c0c0;
  }

  .titulo {
    font-size: 22px;
    color: #333;
  }

  .imagen {
    width: 70%;
  }
}