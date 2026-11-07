// rea decompile_all
// name: FUN_1001864fc
// address: 0x1001864fc
// body: available
// range: 0x1001864fc-0x1001869cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001864fc(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,byte param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_140 [16];
  undefined4 local_130 [2];
  long local_128;
  int local_120;
  uint local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined1 auStack_f8 [24];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar13 = &local_e0;
  _swift_beginAccess(param_2 + 0x18,puVar13,0x20,0);
  lVar14 = *(long *)(param_2 + 0x18);
  uVar15 = (undefined4)param_3;
  iVar17 = (int)param_4;
  if ((*(long *)(lVar14 + 0x10) == 0) ||
     (lVar11 = param_3, thunk_FUN_1001a2c34(), ((ulong)puVar13 & 1) == 0)) {
    _swift_endAccess(&local_e0);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_118 = CONCAT71(local_118._1_7_,param_5) & 0xffffffffffffff01;
    local_118._0_2_ = CONCAT11((char)param_6,(undefined1)local_118);
    local_120 = uVar15;
    local_11c = iVar17;
    FUN_1003fb4bc(FUN_1001875a8,local_130,0xd0000000000000b6,0x8000000100897ca0,0xd000000000000039,
                  0x8000000100897e80,0xb7,0);
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + lVar11 * 8);
  _swift_endAccess(&local_e0);
  bVar10 = *(char *)(lVar14 + 0x10) == '\0';
  uVar12 = 0x646e6573;
  if (bVar10) {
    uVar12 = 0x65766965636572;
  }
  lVar11 = -0x1c00000000000000;
  if (bVar10) {
    lVar11 = -0x1900000000000000;
  }
  bVar10 = (param_5 & 1) == 0;
  uVar1 = 0x646e6573;
  if (bVar10) {
    uVar1 = 0x65766965636572;
  }
  lVar2 = -0x1c00000000000000;
  if (bVar10) {
    lVar2 = -0x1900000000000000;
  }
  local_100 = lVar14;
  if (uVar12 == uVar1 && lVar11 == lVar2) {
    _swift_retain(lVar14);
    _swift_bridgeObjectRelease(lVar11);
    _swift_bridgeObjectRelease(lVar2);
LAB_100186754:
    lVar14 = local_100;
    uVar16 = (uint)param_6;
    if ((uVar16 & 0xfe) == 8) {
      _swift_beginAccess(param_2 + 0x18,&local_e0,0x21,0);
      FUN_1001de290(param_3);
      _swift_endAccess(&local_e0);
      _swift_release(param_3);
      lVar14 = local_100;
      uVar9 = *(undefined1 *)(local_100 + 0x10);
      uVar3 = *(undefined8 *)(local_100 + 0x18);
      uVar5 = *(undefined8 *)(local_100 + 0x20);
      uVar4 = *(undefined8 *)(local_100 + 0x28);
      uVar6 = *(undefined8 *)(local_100 + 0x30);
      uVar15 = *(undefined4 *)(local_100 + 0x14);
      uStack_108 = *(undefined8 *)(local_100 + 0x38);
      uVar7 = *(undefined8 *)(local_100 + 0x40);
      local_110 = *(undefined8 *)(local_100 + 0x48);
      uVar8 = *(undefined8 *)(local_100 + 0x50);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
      _swift_release(lVar14);
      *(undefined1 *)param_1 = uVar9;
      *(undefined1 *)((long)param_1 + 1) = 2;
      param_1[1] = uVar3;
      param_1[2] = uVar5;
      param_1[3] = uVar4;
      param_1[4] = uVar6;
      *(undefined4 *)(param_1 + 5) = uVar15;
      param_1[6] = uStack_108;
      param_1[7] = uVar7;
      param_1[8] = local_110;
      param_1[9] = uVar8;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *(undefined1 *)(param_1 + 0xc) = 1;
      param_1[0xd] = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return;
    }
    if (iVar17 != -1) {
      if ((uVar16 & 0xff) == 1) {
        _swift_beginAccess(local_100 + 0x60,&local_e0,0x21,0);
      }
      else {
        _swift_beginAccess(local_100 + 0x68,&local_e0,0x21,0);
      }
      FUN_10006daa4(auStack_f8,param_4);
      _swift_endAccess(&local_e0);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_128 = lVar14;
      local_11c = CONCAT31(local_11c._1_3_,(char)param_6);
      local_130[0] = uVar15;
      local_120 = iVar17;
      FUN_1003fb48c(FUN_1001875c8,auStack_140,0xd0000000000000b6,0x8000000100897ca0,
                    0xd000000000000039,0x8000000100897e80,0xd9,0);
      if ((uVar16 & 0xff) == 1) {
        _swift_release(lVar14);
        goto LAB_100186918;
      }
    }
    FUN_1001875dc(&local_e0,lVar14,param_6);
    _swift_beginAccess(param_2 + 0x18,auStack_f8,0x21,0);
    FUN_1001de290(param_3);
    _swift_endAccess(auStack_f8);
    _swift_release(lVar14);
    _swift_release(param_3);
    param_1[9] = uStack_98;
    param_1[8] = local_a0;
    param_1[0xb] = uStack_88;
    param_1[10] = uStack_90;
    param_1[0xd] = uStack_78;
    param_1[0xc] = local_80;
    *(undefined1 *)(param_1 + 0xe) = local_70;
    param_1[1] = uStack_d8;
    *param_1 = local_e0;
    param_1[3] = uStack_c8;
    param_1[2] = uStack_d0;
    param_1[5] = uStack_b8;
    param_1[4] = local_c0;
    param_1[7] = uStack_a8;
    param_1[6] = uStack_b0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar12,lVar11,uVar1,lVar2,0);
    _swift_retain(lVar14);
    _swift_bridgeObjectRelease(lVar11);
    _swift_bridgeObjectRelease(lVar2);
    if ((uVar12 & 1) != 0) goto LAB_100186754;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar14 = local_100;
    local_11c = CONCAT31(local_11c._1_3_,param_5) & 0xffffff01;
    local_118 = local_100;
    local_120 = uVar15;
    FUN_1003fb4bc(FUN_1001875b8,local_130,0xd0000000000000b6,0x8000000100897ca0,0xd000000000000039,
                  0x8000000100897e80,0xbb,0);
    _swift_release(lVar14);
LAB_100186918:
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}

