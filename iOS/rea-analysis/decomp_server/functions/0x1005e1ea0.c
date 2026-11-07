// rea decompile_all
// name: FUN_1005e1ea0
// address: 0x1005e1ea0
// body: available
// range: 0x1005e1ea0-0x1005e224f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005e1ea0(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_e0 [8];
  undefined1 *local_d8;
  long local_d0;
  undefined *puStack_c8;
  undefined1 *local_c0;
  long local_b8;
  undefined *puStack_b0;
  undefined1 *local_a8;
  long local_a0;
  undefined *puStack_98;
  undefined *local_90;
  uint local_84;
  long local_80;
  long local_78;
  undefined *local_70;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar4 = &DAT_100aae338;
  local_84 = param_2;
  FUN_100004bb4(&DAT_100aae338,&DAT_1008409d8);
  local_a0 = *(long *)(puVar4 + -8);
  puStack_98 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_e0 + -extraout_x8;
  puVar4 = &DAT_100aae340;
  local_a8 = puVar9;
  FUN_100004bb4(&DAT_100aae340,&DAT_1008409e0);
  local_b8 = *(long *)(puVar4 + -8);
  puStack_b0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar9 + -extraout_x8_00;
  puVar4 = &DAT_100aae348;
  local_c0 = puVar9;
  FUN_100004bb4(&DAT_100aae348,&DAT_1008409e8);
  local_d0 = *(long *)(puVar4 + -8);
  puStack_c8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100aae350;
  local_d8 = puVar9 + -extraout_x8_01;
  FUN_100004bb4(&DAT_100aae350,&DAT_1008409f0);
  lVar13 = *(long *)(puVar4 + -8);
  local_90 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar9 + -extraout_x8_01 + -extraout_x8_02;
  puVar4 = &DAT_100aae358;
  FUN_100004bb4(&DAT_100aae358,&USHORT_1008409f8);
  lVar11 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar9 - extraout_x8_03;
  puVar5 = &DAT_100aae360;
  FUN_100004bb4(&DAT_100aae360,&USHORT_100840a00);
  local_78 = *(long *)(puVar5 + -8);
  local_70 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar2);
  FUN_1005e2250();
  puVar5 = &DAT_1009dbb90;
  local_80 = lVar12 - extraout_x8_04;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar12 - extraout_x8_04,&DAT_1009dbb90,&DAT_1009dbb90,param_1,uVar2,uVar3);
  puVar7 = local_90;
  uVar1 = local_84 & 0xff;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      local_55 = 0;
      FUN_1005e2390();
      puVar8 = local_70;
      lVar6 = local_80;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (lVar12,&DAT_1009dbbb0,&local_55,local_70,&DAT_1009dbbb0,puVar5);
      (**(code **)(lVar11 + 8))(lVar12,puVar4);
      pcVar10 = *(code **)(local_78 + 8);
      goto LAB_1005e2228;
    }
    local_54 = 1;
    FUN_1005e2350();
    puVar8 = local_70;
    lVar6 = local_80;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (puVar9,&DAT_1009dbbd0,&local_54,local_70,&DAT_1009dbbd0,puVar5);
    pcVar10 = *(code **)(lVar13 + 8);
  }
  else {
    if (uVar1 == 2) {
      local_53 = (char)local_84;
      FUN_1005e2310();
      puVar8 = local_70;
      lVar6 = local_80;
      puVar9 = local_d8;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (local_d8,&DAT_1009dbbf0,&local_53,local_70,&DAT_1009dbbf0,puVar5);
      puVar7 = puStack_c8;
      lVar11 = local_d0;
    }
    else if (uVar1 == 3) {
      local_52 = (char)local_84;
      FUN_1005e22d0();
      puVar8 = local_70;
      lVar6 = local_80;
      puVar9 = local_c0;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (local_c0,&DAT_1009dbc10,&local_52,local_70,&DAT_1009dbc10,puVar5);
      puVar7 = puStack_b0;
      lVar11 = local_b8;
    }
    else {
      local_51 = 4;
      FUN_1005e2290();
      puVar8 = local_70;
      lVar6 = local_80;
      puVar9 = local_a8;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (local_a8,&DAT_1009dbc30,&local_51,local_70,&DAT_1009dbc30,puVar5);
      puVar7 = puStack_98;
      lVar11 = local_a0;
    }
    pcVar10 = *(code **)(lVar11 + 8);
  }
  (*pcVar10)(puVar9,puVar7);
  pcVar10 = *(code **)(local_78 + 8);
LAB_1005e2228:
  (*pcVar10)(lVar6,puVar8);
  return;
}

