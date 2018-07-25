OBJ = SMtest.o SMshapes.o SMshader.o SMbbox3d.o SMtexture.o SMmeshPool.o SMmatrix.o SDLGL.o SDLwin.o SDLutils.o SMmaterial.o OBJloader.o SMmesh.o

DEPS = SDLutils.h SDLwin.h SDLGL.h SMbbox3d.h SMcontour.h SMmaterial.h SMmatrix.h SMmesh.h SMmeshPool.h SMshader.h SMshapes.h SMtexture.h Vectorf.h OBJloader.h 

ODIR = obj
LIBS = -lSDL2 -lSDL2_image -lGL
CFLAGS = -std=c++17 -Wall -pedantic `sdl2-config --cflags --libs`

OBJO = $(patsubst %,$(ODIR)/%,$(OBJ))

CC = g++-8.1.0

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
SMtest: $(OBJO)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

clean:
	rm -rf $(ODIR)/*.o SMtest
