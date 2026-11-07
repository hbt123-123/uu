// rea decompile_all
// name: FUN_1005f5218
// address: 0x1005f5218
// body: available
// range: 0x1005f5218-0x1005f5643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005f5218(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined1 *local_e0;
  long local_d8;
  undefined *puStack_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined *puStack_b8;
  undefined1 *local_b0;
  long local_a8;
  undefined *puStack_a0;
  undefined1 *local_98;
  long local_90;
  undefined *puStack_88;
  long local_80;
  undefined *local_78;
  uint local_6c;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar5 = &DAT_100aaf088;
  local_6c = param_2;
  FUN_100004bb4(&DAT_100aaf088,&BYTE_100845058);
  local_90 = *(long *)(puVar5 + -8);
  puStack_88 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_f0 + -extraout_x8;
  puVar5 = &DAT_100aaf090;
  local_98 = puVar8;
  FUN_100004bb4(&DAT_100aaf090,&BYTE_100845060);
  local_a8 = *(long *)(puVar5 + -8);
  puStack_a0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar8 + -extraout_x8_00;
  puVar5 = &DAT_100aaf098;
  local_b0 = puVar8;
  FUN_100004bb4(&DAT_100aaf098,&BYTE_100845068);
  local_c0 = *(long *)(puVar5 + -8);
  puStack_b8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar8 + -extraout_x8_01;
  puVar5 = &DAT_100aaf0a0;
  local_c8 = puVar8;
  FUN_100004bb4(&DAT_100aaf0a0,&BYTE_100845070);
  local_d8 = *(long *)(puVar5 + -8);
  puStack_d0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100aaf0a8;
  local_e0 = puVar8 + -extraout_x8_02;
  FUN_100004bb4(&DAT_100aaf0a8,&BYTE_100845078);
  lVar12 = *(long *)(puVar5 + -8);
  local_e8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(puVar8 + -extraout_x8_02) - extraout_x8_03;
  puVar5 = &DAT_100aaf0b0;
  FUN_100004bb4(&DAT_100aaf0b0,&BYTE_100845080);
  lVar13 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined1 *)(lVar10 - extraout_x8_04);
  puVar6 = &DAT_100aaf0b8;
  FUN_100004bb4(&DAT_100aaf0b8,&BYTE_100845088);
  local_80 = *(long *)(puVar6 + -8);
  local_78 = puVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)puVar8 - extraout_x8_05;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar2);
  FUN_1005f9868();
  puVar6 = &DAT_1009dc7b0;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar11,&DAT_1009dc7b0,&DAT_1009dc7b0,param_1,uVar2,uVar3);
  uVar1 = local_6c & 0xff;
  uVar4 = (undefined1)local_6c;
  if (uVar1 < 3) {
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        local_55 = uVar4;
        FUN_1005f99a8();
        puVar7 = local_78;
        __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                  (lVar10,&DAT_1009dc7f0,&local_55,local_78,&DAT_1009dc7f0,puVar6);
        (**(code **)(lVar12 + 8))(lVar10,local_e8);
        pcVar9 = *(code **)(local_80 + 8);
        goto LAB_1005f561c;
      }
      local_54 = 2;
      FUN_1005f9968();
      puVar7 = local_78;
      puVar8 = local_e0;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (local_e0,&DAT_1009dc810,&local_54,local_78,&DAT_1009dc810,puVar6);
      puVar5 = puStack_d0;
      lVar10 = local_d8;
      goto LAB_1005f5600;
    }
    local_56 = 0;
    FUN_1005f99e8();
    puVar7 = local_78;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (puVar8,&DAT_1009dc7d0,&local_56,local_78,&DAT_1009dc7d0,puVar6);
    pcVar9 = *(code **)(lVar13 + 8);
  }
  else {
    if (uVar1 == 3) {
      local_53 = uVar4;
      FUN_1005f9928();
      puVar7 = local_78;
      puVar8 = local_c8;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (local_c8,&DAT_1009dc830,&local_53,local_78,&DAT_1009dc830,puVar6);
      puVar5 = puStack_b8;
      lVar10 = local_c0;
    }
    else if (uVar1 == 4) {
      local_52 = uVar4;
      FUN_1005f98e8();
      puVar7 = local_78;
      puVar8 = local_b0;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (local_b0,&DAT_1009dc850,&local_52,local_78,&DAT_1009dc850,puVar6);
      puVar5 = puStack_a0;
      lVar10 = local_a8;
    }
    else {
      local_51 = 5;
      FUN_1005f98a8();
      puVar7 = local_78;
      puVar8 = local_98;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (local_98,&DAT_1009dc870,&local_51,local_78,&DAT_1009dc870,puVar6);
      puVar5 = puStack_88;
      lVar10 = local_90;
    }
LAB_1005f5600:
    pcVar9 = *(code **)(lVar10 + 8);
  }
  (*pcVar9)(puVar8,puVar5);
  pcVar9 = *(code **)(local_80 + 8);
LAB_1005f561c:
  (*pcVar9)(lVar11,puVar7);
  return;
}

