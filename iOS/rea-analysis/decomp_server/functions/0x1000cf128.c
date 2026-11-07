// rea decompile_all
// name: FUN_1000cf128
// address: 0x1000cf128
// body: available
// range: 0x1000cf128-0x1000d00bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1000cf128(void)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  ID *pIVar8;
  ID IVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar15;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  code *pcVar17;
  long unaff_x20;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  long alStack_140 [3];
  undefined8 *local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 *local_f0;
  undefined *local_e8;
  long local_e0;
  code *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  long local_c0;
  undefined8 *local_b8;
  long local_b0;
  long local_a8;
  undefined8 *local_a0;
  long local_98;
  undefined *local_70;
  
  puVar6 = &DAT_100a75af8;
  FUN_100004bb4(&DAT_100a75af8,&DAT_10080ac30);
  lVar21 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  puVar15 = (undefined8 *)((long)alStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_f0 = puVar15;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar15 = (undefined8 *)((long)puVar15 - extraout_x12);
  local_c8 = puVar15;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar15 = (undefined8 *)((long)puVar15 - extraout_x12_00);
  local_a0 = puVar15;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar15 = (undefined8 *)((long)puVar15 - extraout_x12_01);
  local_d0 = puVar15;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar15 = (undefined8 *)((long)puVar15 - extraout_x12_02);
  local_b8 = puVar15;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar15 = (undefined8 *)((long)puVar15 - extraout_x12_03);
  pcVar7 = (code *)0x0;
  local_128 = puVar15;
  __s10Foundation3URLVMa();
  local_e0 = *(long *)(pcVar7 + -8);
  local_d8 = pcVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e0 + 0x40));
  lVar16 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_04;
  local_f8 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_05;
  local_108 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_06;
  local_98 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_07;
  local_110 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_08;
  local_a8 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_09;
  local_118 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_10;
  local_b0 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_11;
  local_120 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_12;
  local_c0 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_13;
  alStack_140[1] = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_14;
  alStack_140[2] = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_15;
  pIVar8 = (ID *)(unaff_x20 + 0x10);
  FUN_10003f030(pIVar8,*(undefined8 *)(unaff_x20 + 0x28));
  IVar9 = _objc_msgSend(*pIVar8,"homeDirectoryForCurrentUser");
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar16,IVar9);
  puVar14 = &DAT_100a75af0;
  FUN_100004bb4(&DAT_100a75af0,&DAT_100809b80);
  lVar19 = *(long *)(lVar21 + 0x48);
  uVar18 = (ulong)*(byte *)(lVar21 + 0x50);
  uVar20 = uVar18 + 0x20 & (uVar18 ^ 0xffffffffffffffff);
  lVar21 = uVar20 + lVar19;
  local_70 = puVar14;
  _swift_allocObject();
  *(undefined8 *)(local_70 + 0x18) = 2;
  *(undefined8 *)(local_70 + 0x10) = 1;
  puVar15 = (undefined8 *)(local_70 + uVar20);
  iVar2 = *(int *)(puVar6 + 0x30);
  iVar3 = *(int *)(puVar6 + 0x40);
  iVar4 = *(int *)(puVar6 + 0x50);
  puVar13 = local_70;
  FUN_1000d01f4();
  *puVar15 = puVar13;
  puVar15[1] = lVar21;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC
            ((long)puVar15 + (long)iVar2,uVar10,*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)((long)puVar15 + (long)iVar3) = 0x6b736964;
  ((undefined8 *)((long)puVar15 + (long)iVar3))[1] = 0xe400000000000000;
  *(undefined1 *)((long)puVar15 + (long)iVar4) = 1;
  FUN_1000d0548();
  uVar11 = uVar10;
  FUN_1000945e4();
  _swift_bridgeObjectRelease(uVar10);
  FUN_10005faf8(uVar11);
  _swift_allocObject(puVar14,uVar20 + lVar19 * 6,uVar18 | 7);
  *(undefined8 *)(puVar14 + 0x18) = 0xc;
  *(undefined8 *)(puVar14 + 0x10) = 6;
  puVar1 = (undefined8 *)(puVar14 + uVar20);
  iVar2 = *(int *)(puVar6 + 0x30);
  iVar3 = *(int *)(puVar6 + 0x40);
  iVar4 = *(int *)(puVar6 + 0x50);
  *puVar1 = 0xa29de98ca1e6;
  puVar1[1] = 0xa600000000000000;
  local_e8 = puVar14;
  __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
            ((undefined *)((long)puVar1 + (long)iVar2),0x706f746b736544,0xe700000000000000,1);
  *(undefined8 *)((long)puVar1 + (long)iVar3) = 0x706f746b736564;
  ((undefined8 *)((long)puVar1 + (long)iVar3))[1] = 0xe700000000000000;
  *(undefined1 *)((long)puVar1 + (long)iVar4) = 0;
  puVar15 = (undefined8 *)((long)puVar1 + lVar19);
  iVar2 = *(int *)(puVar6 + 0x30);
  iVar3 = *(int *)(puVar6 + 0x40);
  iVar4 = *(int *)(puVar6 + 0x50);
  *puVar15 = 0xbdbde88bb8e4;
  puVar15[1] = 0xa600000000000000;
  __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
            ((undefined *)((long)puVar15 + (long)iVar2),0x64616f6c6e776f44,0xe900000000000073,1);
  *(undefined8 *)((long)puVar15 + (long)iVar3) = 0x64616f6c6e776f64;
  ((undefined8 *)((long)puVar15 + (long)iVar3))[1] = 0xe800000000000000;
  *(undefined1 *)((long)puVar15 + (long)iVar4) = 0;
  puVar15 = (undefined8 *)((long)puVar1 + lVar19 * 2);
  iVar2 = *(int *)(puVar6 + 0x30);
  iVar3 = *(int *)(puVar6 + 0x40);
  iVar4 = *(int *)(puVar6 + 0x50);
  *puVar15 = 0x96e6849ae79188e6;
  puVar15[1] = 0xac000000a3a1e687;
  __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
            ((undefined *)((long)puVar15 + (long)iVar2),0x746e656d75636f44,0xe900000000000073,1);
  *(undefined8 *)((long)puVar15 + (long)iVar3) = 0x746e656d75636f64;
  ((undefined8 *)((long)puVar15 + (long)iVar3))[1] = 0xe800000000000000;
  *(undefined1 *)((long)puVar15 + (long)iVar4) = 0;
  puVar15 = (undefined8 *)((long)puVar1 + lVar19 * 3);
  iVar2 = *(int *)(puVar6 + 0x30);
  iVar3 = *(int *)(puVar6 + 0x40);
  iVar4 = *(int *)(puVar6 + 0x50);
  *puVar15 = 0x8789e7be9be5;
  puVar15[1] = 0xa600000000000000;
  __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
            ((undefined *)((long)puVar15 + (long)iVar2),0x7365727574636950,0xe800000000000000,1);
  *(undefined8 *)((long)puVar15 + (long)iVar3) = 0x65727574636970;
  ((undefined8 *)((long)puVar15 + (long)iVar3))[1] = 0xe700000000000000;
  *(undefined1 *)((long)puVar15 + (long)iVar4) = 0;
  puVar15 = (undefined8 *)((long)puVar1 + lVar19 * 4);
  iVar2 = *(int *)(puVar6 + 0x30);
  iVar3 = *(int *)(puVar6 + 0x40);
  iVar4 = *(int *)(puVar6 + 0x50);
  *puVar15 = 0x90b9e4b39fe9;
  puVar15[1] = 0xa600000000000000;
  __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
            ((undefined *)((long)puVar15 + (long)iVar2),0x636973754d,0xe500000000000000,1);
  *(undefined8 *)((long)puVar15 + (long)iVar3) = 0x636973756d;
  ((undefined8 *)((long)puVar15 + (long)iVar3))[1] = 0xe500000000000000;
  *(undefined1 *)((long)puVar15 + (long)iVar4) = 0;
  puVar1 = (undefined8 *)((long)puVar1 + lVar19 * 5);
  iVar2 = *(int *)(puVar6 + 0x30);
  iVar3 = *(int *)(puVar6 + 0x40);
  iVar4 = *(int *)(puVar6 + 0x50);
  *puVar1 = 0x91a2e986a7e8;
  puVar1[1] = 0xa600000000000000;
  __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
            ((undefined *)((long)puVar1 + (long)iVar2),0x736569766f4d,0xe600000000000000,1);
  *(undefined8 *)((long)puVar1 + (long)iVar3) = 0x6f65646976;
  ((undefined8 *)((long)puVar1 + (long)iVar3))[1] = 0xe500000000000000;
  *(undefined1 *)((long)puVar1 + (long)iVar4) = 0;
  FUN_10005faf8(local_e8);
  FUN_10003f030(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  pcVar23 = FUN_1000d4724;
  lVar12 = 0xc;
  FUN_1000d4724(0xc,1,&DAT_10099b990);
  pcVar7 = local_d8;
  lVar22 = local_e0;
  lVar21 = alStack_140[1];
  if (*(long *)(lVar12 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    pcVar7 = local_d8;
    lVar22 = local_e0;
  }
  else {
    pcVar17 = *(code **)(local_e0 + 0x10);
    (*pcVar17)(alStack_140[1],
               lVar12 + ((ulong)*(byte *)(local_e0 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(local_e0 + 0x50) ^ 0xffffffffffffffff)),local_d8);
    _swift_bridgeObjectRelease(lVar12);
    lVar12 = alStack_140[2];
    (**(code **)(lVar22 + 0x20))(alStack_140[2],lVar21,pcVar7);
    puVar1 = local_128;
    iVar2 = *(int *)(puVar6 + 0x30);
    puVar15 = (undefined8 *)((long)local_128 + (long)*(int *)(puVar6 + 0x40));
    iVar3 = *(int *)(puVar6 + 0x50);
    *local_128 = 0xa29de98ca1e6;
    puVar1[1] = 0xa600000000000000;
    (*pcVar17)((long)puVar1 + (long)iVar2,lVar12,pcVar7);
    *puVar15 = 0x706f746b736564;
    puVar15[1] = 0xe700000000000000;
    *(undefined1 *)((long)puVar1 + (long)iVar3) = 0;
    puVar14 = local_70;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar13 = local_70;
    if (((ulong)puVar14 & 1) == 0) {
      puVar13 = (undefined *)0x0;
      FUN_100035928(0,*(long *)(local_70 + 0x10) + 1,1,local_70);
    }
    uVar18 = *(ulong *)(puVar13 + 0x10);
    local_70 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar18) {
      local_70 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_100035928(local_70,uVar18 + 1,1,puVar13);
    }
    *(ulong *)(local_70 + 0x10) = uVar18 + 1;
    FUN_1000a00a8(puVar1,local_70 + uVar18 * lVar19 + uVar20,&DAT_100a75af8,&DAT_10080ac30);
    (**(code **)(lVar22 + 8))(lVar12,pcVar7);
  }
  FUN_10003f030(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  lVar12 = 0xf;
  FUN_1000d4724(0xf,1,&DAT_10099b990,&PTR_PTR_10099b9a8);
  puVar15 = local_d0;
  lVar21 = local_120;
  if (*(long *)(lVar12 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    local_d8 = FUN_1000d4724;
    pcVar23 = *(code **)(lVar22 + 0x10);
    (*pcVar23)(local_120,
               lVar12 + ((ulong)*(byte *)(lVar22 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar22 + 0x50) ^ 0xffffffffffffffff)),pcVar7);
    _swift_bridgeObjectRelease(lVar12);
    lVar12 = local_c0;
    (**(code **)(lVar22 + 0x20))(local_c0,lVar21,pcVar7);
    puVar5 = local_b8;
    iVar2 = *(int *)(puVar6 + 0x30);
    puVar1 = (undefined8 *)((long)local_b8 + (long)*(int *)(puVar6 + 0x40));
    iVar3 = *(int *)(puVar6 + 0x50);
    *local_b8 = 0xbdbde88bb8e4;
    puVar5[1] = 0xa600000000000000;
    (*pcVar23)((long)puVar5 + (long)iVar2,lVar12,pcVar7);
    *puVar1 = 0x64616f6c6e776f64;
    puVar1[1] = 0xe800000000000000;
    *(undefined1 *)((long)puVar5 + (long)iVar3) = 0;
    puVar14 = local_70;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar13 = local_70;
    if (((ulong)puVar14 & 1) == 0) {
      puVar13 = (undefined *)0x0;
      FUN_100035928(0,*(long *)(local_70 + 0x10) + 1,1,local_70);
    }
    pcVar23 = local_d8;
    uVar18 = *(ulong *)(puVar13 + 0x10);
    local_70 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar18) {
      local_70 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_100035928(local_70,uVar18 + 1,1,puVar13);
    }
    *(ulong *)(local_70 + 0x10) = uVar18 + 1;
    FUN_1000a00a8(local_b8,local_70 + uVar18 * lVar19 + uVar20,&DAT_100a75af8,&DAT_10080ac30);
    (**(code **)(lVar22 + 8))(local_c0,pcVar7);
  }
  FUN_10003f030(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  lVar12 = 9;
  (*pcVar23)(9,1,&DAT_10099b990,&PTR_PTR_10099b9a8);
  lVar21 = local_118;
  if (*(long *)(lVar12 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    pcVar17 = *(code **)(lVar22 + 0x10);
    (*pcVar17)(local_118,
               lVar12 + ((ulong)*(byte *)(lVar22 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar22 + 0x50) ^ 0xffffffffffffffff)),pcVar7);
    _swift_bridgeObjectRelease(lVar12);
    lVar12 = local_b0;
    (**(code **)(lVar22 + 0x20))(local_b0,lVar21,pcVar7);
    iVar2 = *(int *)(puVar6 + 0x30);
    iVar3 = *(int *)(puVar6 + 0x40);
    iVar4 = *(int *)(puVar6 + 0x50);
    *puVar15 = 0x96e6849ae79188e6;
    puVar15[1] = 0xac000000a3a1e687;
    (*pcVar17)((long)puVar15 + (long)iVar2,lVar12,pcVar7);
    *(undefined8 *)((long)puVar15 + (long)iVar3) = 0x746e656d75636f64;
    ((undefined8 *)((long)puVar15 + (long)iVar3))[1] = 0xe800000000000000;
    *(undefined1 *)((long)puVar15 + (long)iVar4) = 0;
    puVar14 = local_70;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar13 = local_70;
    if (((ulong)puVar14 & 1) == 0) {
      puVar13 = (undefined *)0x0;
      FUN_100035928(0,*(long *)(local_70 + 0x10) + 1,1,local_70);
    }
    uVar18 = *(ulong *)(puVar13 + 0x10);
    local_70 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar18) {
      local_70 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_100035928(local_70,uVar18 + 1,1,puVar13);
    }
    *(ulong *)(local_70 + 0x10) = uVar18 + 1;
    FUN_1000a00a8(puVar15,local_70 + uVar18 * lVar19 + uVar20,&DAT_100a75af8,&DAT_10080ac30);
    (**(code **)(lVar22 + 8))(local_b0,pcVar7);
  }
  FUN_10003f030(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  lVar12 = 0x13;
  (*pcVar23)(0x13,1,&DAT_10099b990,&PTR_PTR_10099b9a8);
  lVar21 = local_110;
  if (*(long *)(lVar12 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    puVar15 = local_c8;
  }
  else {
    pcVar17 = *(code **)(lVar22 + 0x10);
    (*pcVar17)(local_110,
               lVar12 + ((ulong)*(byte *)(lVar22 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar22 + 0x50) ^ 0xffffffffffffffff)),pcVar7);
    _swift_bridgeObjectRelease(lVar12);
    lVar12 = local_a8;
    (**(code **)(lVar22 + 0x20))(local_a8,lVar21,pcVar7);
    puVar1 = local_a0;
    iVar2 = *(int *)(puVar6 + 0x30);
    puVar15 = (undefined8 *)((long)local_a0 + (long)*(int *)(puVar6 + 0x40));
    iVar3 = *(int *)(puVar6 + 0x50);
    *local_a0 = 0x8789e7be9be5;
    puVar1[1] = 0xa600000000000000;
    (*pcVar17)((long)puVar1 + (long)iVar2,lVar12,pcVar7);
    *puVar15 = 0x65727574636970;
    puVar15[1] = 0xe700000000000000;
    *(undefined1 *)((long)puVar1 + (long)iVar3) = 0;
    puVar14 = local_70;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar13 = local_70;
    if (((ulong)puVar14 & 1) == 0) {
      puVar13 = (undefined *)0x0;
      FUN_100035928(0,*(long *)(local_70 + 0x10) + 1,1,local_70);
    }
    puVar15 = local_c8;
    uVar18 = *(ulong *)(puVar13 + 0x10);
    local_70 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar18) {
      local_70 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_100035928(local_70,uVar18 + 1,1,puVar13);
    }
    *(ulong *)(local_70 + 0x10) = uVar18 + 1;
    FUN_1000a00a8(local_a0,local_70 + uVar18 * lVar19 + uVar20,&DAT_100a75af8,&DAT_10080ac30);
    (**(code **)(lVar22 + 8))(local_a8,pcVar7);
  }
  FUN_10003f030(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  lVar12 = 0x12;
  (*pcVar23)(0x12,1,&DAT_10099b990,&PTR_PTR_10099b9a8);
  lVar21 = local_108;
  if (*(long *)(lVar12 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    pcVar17 = *(code **)(lVar22 + 0x10);
    (*pcVar17)(local_108,
               lVar12 + ((ulong)*(byte *)(lVar22 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar22 + 0x50) ^ 0xffffffffffffffff)),pcVar7);
    _swift_bridgeObjectRelease(lVar12);
    lVar12 = local_98;
    (**(code **)(lVar22 + 0x20))(local_98,lVar21,pcVar7);
    iVar2 = *(int *)(puVar6 + 0x30);
    iVar3 = *(int *)(puVar6 + 0x40);
    iVar4 = *(int *)(puVar6 + 0x50);
    *puVar15 = 0x90b9e4b39fe9;
    puVar15[1] = 0xa600000000000000;
    (*pcVar17)((long)puVar15 + (long)iVar2,lVar12,pcVar7);
    *(undefined8 *)((long)puVar15 + (long)iVar3) = 0x636973756d;
    ((undefined8 *)((long)puVar15 + (long)iVar3))[1] = 0xe500000000000000;
    *(undefined1 *)((long)puVar15 + (long)iVar4) = 0;
    puVar14 = local_70;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar13 = local_70;
    if (((ulong)puVar14 & 1) == 0) {
      puVar13 = (undefined *)0x0;
      FUN_100035928(0,*(long *)(local_70 + 0x10) + 1,1,local_70);
    }
    uVar18 = *(ulong *)(puVar13 + 0x10);
    local_70 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar18) {
      local_70 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_100035928(local_70,uVar18 + 1,1,puVar13);
    }
    *(ulong *)(local_70 + 0x10) = uVar18 + 1;
    FUN_1000a00a8(puVar15,local_70 + uVar18 * lVar19 + uVar20,&DAT_100a75af8,&DAT_10080ac30);
    (**(code **)(lVar22 + 8))(local_98,pcVar7);
  }
  FUN_10003f030(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  lVar12 = 0x11;
  (*pcVar23)(0x11,1,&DAT_10099b990,&PTR_PTR_10099b9a8);
  lVar21 = local_100;
  if (*(long *)(lVar12 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    pcVar23 = *(code **)(lVar22 + 0x10);
    (*pcVar23)(local_100,
               lVar12 + ((ulong)*(byte *)(lVar22 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar22 + 0x50) ^ 0xffffffffffffffff)),pcVar7);
    _swift_bridgeObjectRelease(lVar12);
    lVar12 = local_f8;
    (**(code **)(lVar22 + 0x20))(local_f8,lVar21,pcVar7);
    puVar1 = local_f0;
    iVar2 = *(int *)(puVar6 + 0x30);
    puVar15 = (undefined8 *)((long)local_f0 + (long)*(int *)(puVar6 + 0x40));
    iVar3 = *(int *)(puVar6 + 0x50);
    *local_f0 = 0x91a2e986a7e8;
    puVar1[1] = 0xa600000000000000;
    (*pcVar23)((long)puVar1 + (long)iVar2,lVar12,pcVar7);
    *puVar15 = 0x6f65646976;
    puVar15[1] = 0xe500000000000000;
    *(undefined1 *)((long)puVar1 + (long)iVar3) = 0;
    puVar6 = local_70;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar14 = local_70;
    if (((ulong)puVar6 & 1) == 0) {
      puVar14 = (undefined *)0x0;
      FUN_100035928(0,*(long *)(local_70 + 0x10) + 1,1,local_70);
    }
    uVar18 = *(ulong *)(puVar14 + 0x10);
    local_70 = puVar14;
    if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar18) {
      local_70 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
      FUN_100035928(local_70,uVar18 + 1,1,puVar14);
    }
    *(ulong *)(local_70 + 0x10) = uVar18 + 1;
    FUN_1000a00a8(puVar1,local_70 + uVar18 * lVar19 + uVar20,&DAT_100a75af8,&DAT_10080ac30);
    (**(code **)(lVar22 + 8))(lVar12,pcVar7);
  }
  puVar6 = local_70;
  FUN_100094798(local_70);
  _swift_bridgeObjectRelease(local_70);
  (**(code **)(lVar22 + 8))(lVar16,pcVar7);
  return puVar6;
}

