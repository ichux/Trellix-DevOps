FROM alpine:latest AS builder
RUN apk --no-cache add build-base

COPY hw.c source.c
RUN gcc -static -o /binary source.c

FROM scratch
COPY --from=builder /binary /hw

# trellixc
# docker run -it --rm --name tc trellixc
CMD ["/hw"]
