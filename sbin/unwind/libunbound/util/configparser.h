#define SPACE 257
#define LETTER 258
#define NEWLINE 259
#define COMMENT 260
#define COLON 261
#define ANY 262
#define ZONESTR 263
#define STRING_ARG 264
#define VAR_FORCE_TOPLEVEL 265
#define VAR_SERVER 266
#define VAR_VERBOSITY 267
#define VAR_NUM_THREADS 268
#define VAR_PORT 269
#define VAR_OUTGOING_RANGE 270
#define VAR_INTERFACE 271
#define VAR_PREFER_IP4 272
#define VAR_DO_IP4 273
#define VAR_DO_IP6 274
#define VAR_DO_NAT64 275
#define VAR_PREFER_IP6 276
#define VAR_DO_UDP 277
#define VAR_DO_TCP 278
#define VAR_TCP_MSS 279
#define VAR_OUTGOING_TCP_MSS 280
#define VAR_TCP_IDLE_TIMEOUT 281
#define VAR_EDNS_TCP_KEEPALIVE 282
#define VAR_EDNS_TCP_KEEPALIVE_TIMEOUT 283
#define VAR_SOCK_QUEUE_TIMEOUT 284
#define VAR_CHROOT 285
#define VAR_USERNAME 286
#define VAR_DIRECTORY 287
#define VAR_LOGFILE 288
#define VAR_PIDFILE 289
#define VAR_MSG_CACHE_SIZE 290
#define VAR_MSG_CACHE_SLABS 291
#define VAR_NUM_QUERIES_PER_THREAD 292
#define VAR_RRSET_CACHE_SIZE 293
#define VAR_RRSET_CACHE_SLABS 294
#define VAR_OUTGOING_NUM_TCP 295
#define VAR_INFRA_HOST_TTL 296
#define VAR_INFRA_LAME_TTL 297
#define VAR_INFRA_CACHE_SLABS 298
#define VAR_INFRA_CACHE_NUMHOSTS 299
#define VAR_INFRA_CACHE_LAME_SIZE 300
#define VAR_NAME 301
#define VAR_STUB_ZONE 302
#define VAR_STUB_HOST 303
#define VAR_STUB_ADDR 304
#define VAR_TARGET_FETCH_POLICY 305
#define VAR_HARDEN_SHORT_BUFSIZE 306
#define VAR_HARDEN_LARGE_QUERIES 307
#define VAR_FORWARD_ZONE 308
#define VAR_FORWARD_HOST 309
#define VAR_FORWARD_ADDR 310
#define VAR_DO_NOT_QUERY_ADDRESS 311
#define VAR_HIDE_IDENTITY 312
#define VAR_HIDE_VERSION 313
#define VAR_IDENTITY 314
#define VAR_VERSION 315
#define VAR_HARDEN_GLUE 316
#define VAR_MODULE_CONF 317
#define VAR_TRUST_ANCHOR_FILE 318
#define VAR_TRUST_ANCHOR 319
#define VAR_VAL_OVERRIDE_DATE 320
#define VAR_BOGUS_TTL 321
#define VAR_VAL_CLEAN_ADDITIONAL 322
#define VAR_VAL_PERMISSIVE_MODE 323
#define VAR_INCOMING_NUM_TCP 324
#define VAR_MSG_BUFFER_SIZE 325
#define VAR_KEY_CACHE_SIZE 326
#define VAR_KEY_CACHE_SLABS 327
#define VAR_TRUSTED_KEYS_FILE 328
#define VAR_VAL_NSEC3_KEYSIZE_ITERATIONS 329
#define VAR_USE_SYSLOG 330
#define VAR_OUTGOING_INTERFACE 331
#define VAR_ROOT_HINTS 332
#define VAR_DO_NOT_QUERY_LOCALHOST 333
#define VAR_CACHE_MAX_TTL 334
#define VAR_HARDEN_DNSSEC_STRIPPED 335
#define VAR_ACCESS_CONTROL 336
#define VAR_LOCAL_ZONE 337
#define VAR_LOCAL_DATA 338
#define VAR_INTERFACE_AUTOMATIC 339
#define VAR_STATISTICS_INTERVAL 340
#define VAR_DO_DAEMONIZE 341
#define VAR_USE_CAPS_FOR_ID 342
#define VAR_STATISTICS_CUMULATIVE 343
#define VAR_OUTGOING_PORT_PERMIT 344
#define VAR_OUTGOING_PORT_AVOID 345
#define VAR_DLV_ANCHOR_FILE 346
#define VAR_DLV_ANCHOR 347
#define VAR_NEG_CACHE_SIZE 348
#define VAR_HARDEN_REFERRAL_PATH 349
#define VAR_PRIVATE_ADDRESS 350
#define VAR_PRIVATE_DOMAIN 351
#define VAR_REMOTE_CONTROL 352
#define VAR_CONTROL_ENABLE 353
#define VAR_CONTROL_INTERFACE 354
#define VAR_CONTROL_PORT 355
#define VAR_SERVER_KEY_FILE 356
#define VAR_SERVER_CERT_FILE 357
#define VAR_CONTROL_KEY_FILE 358
#define VAR_CONTROL_CERT_FILE 359
#define VAR_CONTROL_USE_CERT 360
#define VAR_TCP_REUSE_TIMEOUT 361
#define VAR_MAX_REUSE_TCP_QUERIES 362
#define VAR_EXTENDED_STATISTICS 363
#define VAR_LOCAL_DATA_PTR 364
#define VAR_JOSTLE_TIMEOUT 365
#define VAR_STUB_PRIME 366
#define VAR_UNWANTED_REPLY_THRESHOLD 367
#define VAR_LOG_TIME_ASCII 368
#define VAR_DOMAIN_INSECURE 369
#define VAR_PYTHON 370
#define VAR_PYTHON_SCRIPT 371
#define VAR_VAL_SIG_SKEW_MIN 372
#define VAR_VAL_SIG_SKEW_MAX 373
#define VAR_VAL_MAX_RESTART 374
#define VAR_CACHE_MIN_TTL 375
#define VAR_VAL_LOG_LEVEL 376
#define VAR_AUTO_TRUST_ANCHOR_FILE 377
#define VAR_KEEP_MISSING 378
#define VAR_ADD_HOLDDOWN 379
#define VAR_DEL_HOLDDOWN 380
#define VAR_SO_RCVBUF 381
#define VAR_EDNS_BUFFER_SIZE 382
#define VAR_PREFETCH 383
#define VAR_PREFETCH_KEY 384
#define VAR_SO_SNDBUF 385
#define VAR_SO_REUSEPORT 386
#define VAR_HARDEN_BELOW_NXDOMAIN 387
#define VAR_IGNORE_CD_FLAG 388
#define VAR_LOG_QUERIES 389
#define VAR_LOG_REPLIES 390
#define VAR_LOG_LOCAL_ACTIONS 391
#define VAR_TCP_UPSTREAM 392
#define VAR_SSL_UPSTREAM 393
#define VAR_TCP_AUTH_QUERY_TIMEOUT 394
#define VAR_SSL_SERVICE_KEY 395
#define VAR_SSL_SERVICE_PEM 396
#define VAR_SSL_PORT 397
#define VAR_FORWARD_FIRST 398
#define VAR_STUB_SSL_UPSTREAM 399
#define VAR_FORWARD_SSL_UPSTREAM 400
#define VAR_TLS_CERT_BUNDLE 401
#define VAR_STUB_TCP_UPSTREAM 402
#define VAR_FORWARD_TCP_UPSTREAM 403
#define VAR_HTTPS_PORT 404
#define VAR_HTTP_ENDPOINT 405
#define VAR_HTTP_MAX_STREAMS 406
#define VAR_HTTP_QUERY_BUFFER_SIZE 407
#define VAR_HTTP_RESPONSE_BUFFER_SIZE 408
#define VAR_HTTP_NODELAY 409
#define VAR_HTTP_NOTLS_DOWNSTREAM 410
#define VAR_STUB_FIRST 411
#define VAR_MINIMAL_RESPONSES 412
#define VAR_RRSET_ROUNDROBIN 413
#define VAR_MAX_UDP_SIZE 414
#define VAR_DELAY_CLOSE 415
#define VAR_UDP_CONNECT 416
#define VAR_UNBLOCK_LAN_ZONES 417
#define VAR_INSECURE_LAN_ZONES 418
#define VAR_INFRA_CACHE_MIN_RTT 419
#define VAR_INFRA_CACHE_MAX_RTT 420
#define VAR_INFRA_KEEP_PROBING 421
#define VAR_DNS64_PREFIX 422
#define VAR_DNS64_SYNTHALL 423
#define VAR_DNS64_IGNORE_AAAA 424
#define VAR_NAT64_PREFIX 425
#define VAR_DNSTAP 426
#define VAR_DNSTAP_ENABLE 427
#define VAR_DNSTAP_SOCKET_PATH 428
#define VAR_DNSTAP_IP 429
#define VAR_DNSTAP_TLS 430
#define VAR_DNSTAP_TLS_SERVER_NAME 431
#define VAR_DNSTAP_TLS_CERT_BUNDLE 432
#define VAR_DNSTAP_TLS_CLIENT_KEY_FILE 433
#define VAR_DNSTAP_TLS_CLIENT_CERT_FILE 434
#define VAR_DNSTAP_SEND_IDENTITY 435
#define VAR_DNSTAP_SEND_VERSION 436
#define VAR_DNSTAP_BIDIRECTIONAL 437
#define VAR_DNSTAP_IDENTITY 438
#define VAR_DNSTAP_VERSION 439
#define VAR_DNSTAP_LOG_RESOLVER_QUERY_MESSAGES 440
#define VAR_DNSTAP_LOG_RESOLVER_RESPONSE_MESSAGES 441
#define VAR_DNSTAP_LOG_CLIENT_QUERY_MESSAGES 442
#define VAR_DNSTAP_LOG_CLIENT_RESPONSE_MESSAGES 443
#define VAR_DNSTAP_LOG_FORWARDER_QUERY_MESSAGES 444
#define VAR_DNSTAP_LOG_FORWARDER_RESPONSE_MESSAGES 445
#define VAR_RESPONSE_IP_TAG 446
#define VAR_RESPONSE_IP 447
#define VAR_RESPONSE_IP_DATA 448
#define VAR_HARDEN_ALGO_DOWNGRADE 449
#define VAR_IP_TRANSPARENT 450
#define VAR_IP_DSCP 451
#define VAR_DISABLE_DNSSEC_LAME_CHECK 452
#define VAR_IP_RATELIMIT 453
#define VAR_IP_RATELIMIT_SLABS 454
#define VAR_IP_RATELIMIT_SIZE 455
#define VAR_RATELIMIT 456
#define VAR_RATELIMIT_SLABS 457
#define VAR_RATELIMIT_SIZE 458
#define VAR_OUTBOUND_MSG_RETRY 459
#define VAR_MAX_SENT_COUNT 460
#define VAR_MAX_QUERY_RESTARTS 461
#define VAR_RATELIMIT_FOR_DOMAIN 462
#define VAR_RATELIMIT_BELOW_DOMAIN 463
#define VAR_IP_RATELIMIT_FACTOR 464
#define VAR_RATELIMIT_FACTOR 465
#define VAR_IP_RATELIMIT_BACKOFF 466
#define VAR_RATELIMIT_BACKOFF 467
#define VAR_SEND_CLIENT_SUBNET 468
#define VAR_CLIENT_SUBNET_ZONE 469
#define VAR_CLIENT_SUBNET_ALWAYS_FORWARD 470
#define VAR_CLIENT_SUBNET_OPCODE 471
#define VAR_MAX_CLIENT_SUBNET_IPV4 472
#define VAR_MAX_CLIENT_SUBNET_IPV6 473
#define VAR_MIN_CLIENT_SUBNET_IPV4 474
#define VAR_MIN_CLIENT_SUBNET_IPV6 475
#define VAR_MAX_ECS_TREE_SIZE_IPV4 476
#define VAR_MAX_ECS_TREE_SIZE_IPV6 477
#define VAR_CAPS_WHITELIST 478
#define VAR_CACHE_MAX_NEGATIVE_TTL 479
#define VAR_PERMIT_SMALL_HOLDDOWN 480
#define VAR_QNAME_MINIMISATION 481
#define VAR_QNAME_MINIMISATION_STRICT 482
#define VAR_IP_FREEBIND 483
#define VAR_DEFINE_TAG 484
#define VAR_LOCAL_ZONE_TAG 485
#define VAR_ACCESS_CONTROL_TAG 486
#define VAR_LOCAL_ZONE_OVERRIDE 487
#define VAR_ACCESS_CONTROL_TAG_ACTION 488
#define VAR_ACCESS_CONTROL_TAG_DATA 489
#define VAR_VIEW 490
#define VAR_ACCESS_CONTROL_VIEW 491
#define VAR_VIEW_FIRST 492
#define VAR_SERVE_EXPIRED 493
#define VAR_SERVE_EXPIRED_TTL 494
#define VAR_SERVE_EXPIRED_TTL_RESET 495
#define VAR_SERVE_EXPIRED_REPLY_TTL 496
#define VAR_SERVE_EXPIRED_CLIENT_TIMEOUT 497
#define VAR_EDE_SERVE_EXPIRED 498
#define VAR_SERVE_ORIGINAL_TTL 499
#define VAR_FAKE_DSA 500
#define VAR_FAKE_SHA1 501
#define VAR_LOG_IDENTITY 502
#define VAR_HIDE_TRUSTANCHOR 503
#define VAR_HIDE_HTTP_USER_AGENT 504
#define VAR_HTTP_USER_AGENT 505
#define VAR_TRUST_ANCHOR_SIGNALING 506
#define VAR_AGGRESSIVE_NSEC 507
#define VAR_USE_SYSTEMD 508
#define VAR_SHM_ENABLE 509
#define VAR_SHM_KEY 510
#define VAR_ROOT_KEY_SENTINEL 511
#define VAR_DNSCRYPT 512
#define VAR_DNSCRYPT_ENABLE 513
#define VAR_DNSCRYPT_PORT 514
#define VAR_DNSCRYPT_PROVIDER 515
#define VAR_DNSCRYPT_SECRET_KEY 516
#define VAR_DNSCRYPT_PROVIDER_CERT 517
#define VAR_DNSCRYPT_PROVIDER_CERT_ROTATED 518
#define VAR_DNSCRYPT_SHARED_SECRET_CACHE_SIZE 519
#define VAR_DNSCRYPT_SHARED_SECRET_CACHE_SLABS 520
#define VAR_DNSCRYPT_NONCE_CACHE_SIZE 521
#define VAR_DNSCRYPT_NONCE_CACHE_SLABS 522
#define VAR_PAD_RESPONSES 523
#define VAR_PAD_RESPONSES_BLOCK_SIZE 524
#define VAR_PAD_QUERIES 525
#define VAR_PAD_QUERIES_BLOCK_SIZE 526
#define VAR_IPSECMOD_ENABLED 527
#define VAR_IPSECMOD_HOOK 528
#define VAR_IPSECMOD_IGNORE_BOGUS 529
#define VAR_IPSECMOD_MAX_TTL 530
#define VAR_IPSECMOD_WHITELIST 531
#define VAR_IPSECMOD_STRICT 532
#define VAR_CACHEDB 533
#define VAR_CACHEDB_BACKEND 534
#define VAR_CACHEDB_SECRETSEED 535
#define VAR_CACHEDB_REDISHOST 536
#define VAR_CACHEDB_REDISPORT 537
#define VAR_CACHEDB_REDISTIMEOUT 538
#define VAR_CACHEDB_REDISEXPIRERECORDS 539
#define VAR_CACHEDB_REDISPATH 540
#define VAR_CACHEDB_REDISPASSWORD 541
#define VAR_UDP_UPSTREAM_WITHOUT_DOWNSTREAM 542
#define VAR_FOR_UPSTREAM 543
#define VAR_AUTH_ZONE 544
#define VAR_ZONEFILE 545
#define VAR_MASTER 546
#define VAR_URL 547
#define VAR_FOR_DOWNSTREAM 548
#define VAR_FALLBACK_ENABLED 549
#define VAR_TLS_ADDITIONAL_PORT 550
#define VAR_LOW_RTT 551
#define VAR_LOW_RTT_PERMIL 552
#define VAR_FAST_SERVER_PERMIL 553
#define VAR_FAST_SERVER_NUM 554
#define VAR_ALLOW_NOTIFY 555
#define VAR_TLS_WIN_CERT 556
#define VAR_TCP_CONNECTION_LIMIT 557
#define VAR_ANSWER_COOKIE 558
#define VAR_COOKIE_SECRET 559
#define VAR_IP_RATELIMIT_COOKIE 560
#define VAR_FORWARD_NO_CACHE 561
#define VAR_STUB_NO_CACHE 562
#define VAR_LOG_SERVFAIL 563
#define VAR_DENY_ANY 564
#define VAR_UNKNOWN_SERVER_TIME_LIMIT 565
#define VAR_LOG_TAG_QUERYREPLY 566
#define VAR_STREAM_WAIT_SIZE 567
#define VAR_TLS_CIPHERS 568
#define VAR_TLS_CIPHERSUITES 569
#define VAR_TLS_USE_SNI 570
#define VAR_IPSET 571
#define VAR_IPSET_NAME_V4 572
#define VAR_IPSET_NAME_V6 573
#define VAR_TLS_SESSION_TICKET_KEYS 574
#define VAR_RPZ 575
#define VAR_TAGS 576
#define VAR_RPZ_ACTION_OVERRIDE 577
#define VAR_RPZ_CNAME_OVERRIDE 578
#define VAR_RPZ_LOG 579
#define VAR_RPZ_LOG_NAME 580
#define VAR_DYNLIB 581
#define VAR_DYNLIB_FILE 582
#define VAR_EDNS_CLIENT_STRING 583
#define VAR_EDNS_CLIENT_STRING_OPCODE 584
#define VAR_NSID 585
#define VAR_ZONEMD_PERMISSIVE_MODE 586
#define VAR_ZONEMD_CHECK 587
#define VAR_ZONEMD_REJECT_ABSENCE 588
#define VAR_RPZ_SIGNAL_NXDOMAIN_RA 589
#define VAR_INTERFACE_AUTOMATIC_PORTS 590
#define VAR_EDE 591
#define VAR_INTERFACE_ACTION 592
#define VAR_INTERFACE_VIEW 593
#define VAR_INTERFACE_TAG 594
#define VAR_INTERFACE_TAG_ACTION 595
#define VAR_INTERFACE_TAG_DATA 596
#define VAR_PROXY_PROTOCOL_PORT 597
#define VAR_STATISTICS_INHIBIT_ZERO 598
#define VAR_HARDEN_UNKNOWN_ADDITIONAL 599
#ifndef YYSTYPE_DEFINED
#define YYSTYPE_DEFINED
typedef union {
	char*	str;
} YYSTYPE;
#endif /* YYSTYPE_DEFINED */
extern YYSTYPE yylval;
