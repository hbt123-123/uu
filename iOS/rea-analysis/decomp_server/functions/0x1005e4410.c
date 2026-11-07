// rea decompile_all
// name: FUN_1005e4410
// address: 0x1005e4410
// body: available
// range: 0x1005e4410-0x1005e4ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005e4410(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  undefined8 *unaff_x20;
  undefined1 auStack_810 [8];
  long local_808;
  long local_800;
  long local_7f8;
  long local_7f0;
  undefined *local_7e8;
  undefined *local_7e0;
  long local_7d8;
  long local_7d0;
  long local_7c8;
  long local_7c0;
  long local_7b8;
  undefined *local_7b0;
  long local_7a8;
  undefined *local_7a0;
  undefined *local_798;
  long local_790;
  long local_788;
  undefined *puStack_780;
  long local_778;
  long local_770;
  undefined *puStack_768;
  long local_760;
  long local_758;
  undefined *puStack_750;
  long local_748;
  long local_740;
  long local_738;
  long local_730;
  long local_728;
  undefined *local_720;
  undefined *local_718;
  long local_710;
  long local_708;
  long local_700;
  undefined *local_6f8;
  long local_6f0;
  long local_6e8;
  long local_6e0;
  long local_6d8;
  long local_6d0;
  undefined *local_6c8;
  undefined *local_6c0;
  undefined *local_6b8;
  long local_6b0;
  undefined *puStack_6a8;
  long local_6a0;
  long local_698;
  undefined *puStack_690;
  long local_688;
  long local_680;
  undefined *puStack_678;
  long local_670;
  long local_668;
  long local_660;
  undefined *local_658;
  long local_650;
  long local_648;
  undefined *local_640;
  long local_638;
  undefined *puStack_630;
  long local_628;
  long local_620;
  undefined *puStack_618;
  long local_610;
  long local_608;
  long local_600;
  long local_5f8;
  undefined *local_5f0;
  undefined *local_5e8;
  long local_5e0;
  long local_5d8;
  undefined *local_5d0;
  long local_5c8;
  long local_5c0;
  long local_5b8;
  long local_5b0;
  undefined *local_5a8;
  undefined *local_5a0;
  long local_598;
  long local_590;
  undefined *local_588;
  long local_580;
  long local_578;
  long local_570;
  long local_568;
  undefined *local_560;
  undefined *local_558;
  long local_550;
  long local_548;
  undefined *local_540;
  long local_538;
  long local_530;
  undefined *local_528;
  long local_520;
  long local_518;
  undefined *local_510;
  undefined1 *local_508;
  long local_500;
  undefined *local_4f8;
  long local_4f0;
  long local_4e8;
  undefined *local_4e0;
  long local_4d8;
  undefined *local_4d0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  
  puVar3 = &DAT_100aae408;
  FUN_100004bb4(&DAT_100aae408,&USHORT_100840a40);
  local_500 = *(long *)(puVar3 + -8);
  local_4f8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_500 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar3 = &DAT_100aae410;
  local_508 = auStack_810 + -extraout_x8;
  FUN_100004bb4(&DAT_100aae410,&USHORT_100840a48);
  local_4e8 = *(long *)(puVar3 + -8);
  local_4e0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_4e8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = (long)(auStack_810 + -extraout_x8) - extraout_x8_00;
  puVar3 = &DAT_100aae418;
  local_4f0 = lVar5;
  FUN_100004bb4(&DAT_100aae418,&USHORT_100840a50);
  local_518 = *(long *)(puVar3 + -8);
  local_510 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_518 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_01;
  puVar3 = &DAT_100aae420;
  local_520 = lVar5;
  FUN_100004bb4(&DAT_100aae420,&USHORT_100840a58);
  local_530 = *(long *)(puVar3 + -8);
  local_528 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_530 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_02;
  puVar3 = &DAT_100aae428;
  local_538 = lVar5;
  FUN_100004bb4(&DAT_100aae428,&USHORT_100840a60);
  local_548 = *(long *)(puVar3 + -8);
  local_540 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_548 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_03;
  puVar3 = &DAT_100aae430;
  local_550 = lVar5;
  FUN_100004bb4(&DAT_100aae430,&USHORT_100840a68);
  local_568 = *(long *)(puVar3 + -8);
  local_558 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_568 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_04;
  puVar3 = &DAT_100aae438;
  local_578 = lVar5;
  FUN_100004bb4(&DAT_100aae438,&USHORT_100840a70);
  local_570 = *(long *)(puVar3 + -8);
  local_560 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_570 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_05;
  puVar3 = &DAT_100aae440;
  local_580 = lVar5;
  FUN_100004bb4(&DAT_100aae440,&USHORT_100840a78);
  local_590 = *(long *)(puVar3 + -8);
  local_588 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_590 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_06;
  puVar3 = &DAT_100aae448;
  local_598 = lVar5;
  FUN_100004bb4(&DAT_100aae448,&USHORT_100840a80);
  local_5b8 = *(long *)(puVar3 + -8);
  local_5a8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_5b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_07;
  puVar3 = &DAT_100aae450;
  local_5c8 = lVar5;
  FUN_100004bb4(&DAT_100aae450,&USHORT_100840a88);
  local_5b0 = *(long *)(puVar3 + -8);
  local_5a0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_5b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_08;
  puVar3 = &DAT_100aae458;
  local_5c0 = lVar5;
  FUN_100004bb4(&DAT_100aae458,&USHORT_100840a90);
  local_5f8 = *(long *)(puVar3 + -8);
  local_5e8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_5f8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_09;
  puVar3 = &DAT_100aae460;
  local_608 = lVar5;
  FUN_100004bb4(&DAT_100aae460,&USHORT_100840a98);
  local_5d8 = *(long *)(puVar3 + -8);
  local_5d0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_5d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_10;
  puVar3 = &DAT_100aae468;
  local_5e0 = lVar5;
  FUN_100004bb4(&DAT_100aae468,&USHORT_100840aa0);
  local_600 = *(long *)(puVar3 + -8);
  local_5f0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_600 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_11;
  puVar3 = &DAT_100aae470;
  local_610 = lVar5;
  FUN_100004bb4(&DAT_100aae470,&USHORT_100840aa8);
  local_620 = *(long *)(puVar3 + -8);
  puStack_618 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_620 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_12;
  puVar3 = &DAT_100aae478;
  local_628 = lVar5;
  FUN_100004bb4(&DAT_100aae478,&USHORT_100840ab0);
  local_650 = *(long *)(puVar3 + -8);
  local_640 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_650 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_13;
  puVar3 = &DAT_100aae480;
  local_660 = lVar5;
  FUN_100004bb4(&DAT_100aae480,&USHORT_100840ab8);
  local_638 = *(long *)(puVar3 + -8);
  puStack_630 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_638 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_14;
  puVar3 = &DAT_100aae488;
  local_648 = lVar5;
  FUN_100004bb4(&DAT_100aae488,&USHORT_100840ac0);
  local_668 = *(long *)(puVar3 + -8);
  local_658 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_668 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_15;
  puVar3 = &DAT_100aae490;
  local_670 = lVar5;
  FUN_100004bb4(&DAT_100aae490,&USHORT_100840ac8);
  local_680 = *(long *)(puVar3 + -8);
  puStack_678 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_680 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_16;
  puVar3 = &DAT_100aae498;
  local_688 = lVar5;
  FUN_100004bb4(&DAT_100aae498,&USHORT_100840ad0);
  local_698 = *(long *)(puVar3 + -8);
  puStack_690 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_698 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_17;
  puVar3 = &DAT_100aae4a0;
  local_6a0 = lVar5;
  FUN_100004bb4(&DAT_100aae4a0,&USHORT_100840ad8);
  local_6b0 = *(long *)(puVar3 + -8);
  puStack_6a8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_6b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_18;
  puVar3 = &DAT_100aae4a8;
  local_6d0 = lVar5;
  FUN_100004bb4(&DAT_100aae4a8,&USHORT_100840ae0);
  local_710 = *(long *)(puVar3 + -8);
  local_6f8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_710 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_19;
  puVar3 = &DAT_100aae4b0;
  local_728 = lVar5;
  FUN_100004bb4(&DAT_100aae4b0,&USHORT_100840ae8);
  local_6d8 = *(long *)(puVar3 + -8);
  local_6c0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_6d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_20;
  puVar3 = &DAT_100aae4b8;
  local_6e8 = lVar5;
  FUN_100004bb4(&DAT_100aae4b8,&USHORT_100840af0);
  local_730 = *(long *)(puVar3 + -8);
  local_720 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_730 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_21;
  puVar3 = &DAT_100aae4c0;
  local_740 = lVar5;
  FUN_100004bb4(&DAT_100aae4c0,&USHORT_100840af8);
  local_738 = *(long *)(puVar3 + -8);
  local_718 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_738 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_22;
  puVar3 = &DAT_100aae4c8;
  local_748 = lVar5;
  FUN_100004bb4(&DAT_100aae4c8,&USHORT_100840b00);
  local_6e0 = *(long *)(puVar3 + -8);
  local_6c8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_6e0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_23;
  puVar3 = &DAT_100aae4d0;
  local_6f0 = lVar5;
  FUN_100004bb4(&DAT_100aae4d0,&USHORT_100840b08);
  local_758 = *(long *)(puVar3 + -8);
  puStack_750 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_758 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_24;
  puVar3 = &DAT_100aae4d8;
  local_760 = lVar5;
  FUN_100004bb4(&DAT_100aae4d8,&USHORT_100840b10);
  local_708 = *(long *)(puVar3 + -8);
  local_6b8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_708 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_25;
  puVar3 = &DAT_100aae4e0;
  local_700 = lVar5;
  FUN_100004bb4(&DAT_100aae4e0,&USHORT_100840b18);
  local_770 = *(long *)(puVar3 + -8);
  puStack_768 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_770 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_26;
  puVar3 = &DAT_100aae4e8;
  local_778 = lVar5;
  FUN_100004bb4(&DAT_100aae4e8,&USHORT_100840b20);
  local_788 = *(long *)(puVar3 + -8);
  puStack_780 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_788 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_27;
  puVar3 = &DAT_100aae4f0;
  local_790 = lVar5;
  FUN_100004bb4(&DAT_100aae4f0,&USHORT_100840b28);
  local_7b8 = *(long *)(puVar3 + -8);
  local_7a0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_7b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_28;
  puVar3 = &DAT_100aae4f8;
  local_7d0 = lVar5;
  FUN_100004bb4(&DAT_100aae4f8,&USHORT_100840b30);
  local_7a8 = *(long *)(puVar3 + -8);
  local_798 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_7a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_29;
  puVar3 = &DAT_100aae500;
  local_7c0 = lVar5;
  FUN_100004bb4(&DAT_100aae500,&USHORT_100840b38);
  local_7c8 = *(long *)(puVar3 + -8);
  local_7b0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_7c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_30;
  puVar3 = &DAT_100aae508;
  local_7d8 = lVar5;
  FUN_100004bb4(&DAT_100aae508,&USHORT_100840b40);
  local_7f8 = *(long *)(puVar3 + -8);
  local_7e8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_7f8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_31;
  puVar3 = &DAT_100aae510;
  local_808 = lVar5;
  FUN_100004bb4(&DAT_100aae510,&USHORT_100840b48);
  local_7f0 = *(long *)(puVar3 + -8);
  local_7e0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_7f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar5 - extraout_x8_32;
  puVar3 = &DAT_100aae518;
  local_800 = lVar5;
  FUN_100004bb4(&DAT_100aae518,&USHORT_100840b50);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100aae520;
  FUN_100004bb4(&DAT_100aae520,&USHORT_100840b58);
  local_4d8 = *(long *)(puVar3 + -8);
  local_4d0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_4d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1005e808c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((lVar5 - extraout_x8_33) - extraout_x8_34,&DAT_1009daa60,&DAT_1009daa60,param_1,uVar1,
             uVar2);
  uStack_208 = unaff_x20[0x19];
  local_210 = unaff_x20[0x18];
  uStack_1f8 = unaff_x20[0x1b];
  uStack_200 = unaff_x20[0x1a];
  uStack_1e8 = unaff_x20[0x1d];
  local_1f0 = unaff_x20[0x1c];
  local_1e0 = *(undefined1 *)(unaff_x20 + 0x1e);
  uStack_248 = unaff_x20[0x11];
  local_250 = unaff_x20[0x10];
  uStack_238 = unaff_x20[0x13];
  uStack_240 = unaff_x20[0x12];
  uStack_228 = unaff_x20[0x15];
  local_230 = unaff_x20[0x14];
  uStack_218 = unaff_x20[0x17];
  uStack_220 = unaff_x20[0x16];
  uStack_288 = unaff_x20[9];
  local_290 = unaff_x20[8];
  uStack_278 = unaff_x20[0xb];
  uStack_280 = unaff_x20[10];
  uStack_268 = unaff_x20[0xd];
  local_270 = unaff_x20[0xc];
  uStack_258 = unaff_x20[0xf];
  uStack_260 = unaff_x20[0xe];
  uStack_2c8 = unaff_x20[1];
  local_2d0 = *unaff_x20;
  uStack_2b8 = unaff_x20[3];
  uStack_2c0 = unaff_x20[2];
  uStack_2a8 = unaff_x20[5];
  local_2b0 = unaff_x20[4];
  uStack_298 = unaff_x20[7];
  uStack_2a0 = unaff_x20[6];
  puVar4 = &local_2d0;
  FUN_100102590();
                    /* WARNING: Could not recover jumptable at 0x0001005e4ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1005e4ee4 +
            (ulong)*(ushort *)(&BYTE_10084091a + ((ulong)puVar4 & 0xffffffff) * 2) * 4))();
  return;
}

