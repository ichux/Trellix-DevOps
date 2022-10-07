FROM python:3-slim

COPY venv /opt/venv

ENV PATH="/opt/venv/bin:$PATH"

WORKDIR /src

# docker build -t oneoff .
# docker run -it --rm --name offo oneoff bash
CMD ["/bin/bash"]
