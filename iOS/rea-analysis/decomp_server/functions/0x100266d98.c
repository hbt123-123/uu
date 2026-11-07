// rea decompile_all
// name: FUN_100266d98
// address: 0x100266d98
// body: available
// range: 0x100266d98-0x1002673b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100266d98(long *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long *unaff_x20;
  ulong uVar12;
  ID IVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long local_100;
  undefined8 local_f8;
  code *local_f0;
  code *local_e8;
  undefined *local_e0;
  ulong local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a8;
  long local_a0;
  long local_98;
  long *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar17 = *unaff_x20;
  lVar19 = *(long *)(lVar17 + 0x50);
  lVar18 = *(long *)(lVar19 + -8);
  lVar16 = *(long *)(lVar18 + 0x40);
  uVar7 = (long)&local_100 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  puVar1 = param_2;
  local_c0 = param_3;
  local_b8 = param_4;
  local_b0 = param_5;
  local_a8 = param_6;
  local_90 = param_1;
  (**(code **)(lVar17 + 0xd0))();
  uVar8 = (undefined4)param_3;
  puVar2 = param_2;
  local_88 = puVar1;
  (*(code *)unaff_x20[6])();
  lVar3 = 0;
  local_cc = uVar8;
  local_c8 = puVar2;
  FUN_100260be8();
  local_a0 = lVar3;
  _swift_allocObject();
  lVar4 = 0;
  FUN_100260d38();
  lVar11 = lVar4;
  _swift_allocObject();
  *(undefined1 *)(lVar11 + 0x10) = 0;
  *(long *)(lVar3 + 0x28) = lVar4;
  *(undefined ***)(lVar3 + 0x30) = &PTR_PTR_1009a8b90;
  *(long *)(lVar3 + 0x10) = lVar11;
  local_f0 = *(code **)(lVar18 + 0x10);
  local_e0 = param_2;
  local_98 = lVar3;
  (*local_f0)(uVar7,param_2,lVar19);
  uVar9 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar12 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
  local_100 = lVar16 + 7;
  uVar20 = local_100 + uVar12 & 0xfffffffffffffff8;
  puVar1 = &DAT_1009a8f60;
  _swift_allocObject(&DAT_1009a8f60,uVar20 + 0x10,uVar9 | 7);
  *(long *)(puVar1 + 0x10) = lVar19;
  local_f8 = *(undefined8 *)(lVar17 + 0x58);
  *(undefined8 *)(puVar1 + 0x18) = local_f8;
  *(long **)(puVar1 + 0x20) = unaff_x20;
  local_e8 = *(code **)(lVar18 + 0x20);
  local_d8 = uVar7;
  (*local_e8)(puVar1 + uVar12,uVar7,lVar19);
  *(ulong *)(puVar1 + uVar20) = local_a8;
  *(ulong *)((long)(puVar1 + uVar20) + 8) = param_7;
  local_80 = puVar1;
  if ((char)unaff_x20[10] == '\x01') {
    pcVar10 = *(code **)(*unaff_x20 + 0xa8);
    local_a8 = uVar9;
    _swift_retain();
    _swift_retain();
    (*pcVar10)();
    if (*(long *)(param_7 + 0x10) == 0) {
      _swift_bridgeObjectRelease(param_7);
      uVar9 = 0;
      puVar1 = local_88;
    }
    else {
      _swift_bridgeObjectRetain(param_7);
      puVar1 = local_88;
      puVar2 = local_88;
      FUN_10026ae5c();
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease_n(param_7,2);
        uVar9 = 0;
      }
      else {
        uVar12 = *(ulong *)(*(long *)(param_7 + 0x38) + (long)puVar2 * 8);
        _swift_bridgeObjectRetain(uVar12);
        _swift_bridgeObjectRelease_n(param_7,2);
        puVar2 = &DAT_1009a8fd8;
        _swift_allocObject(&DAT_1009a8fd8,0x20,7);
        *(code **)(puVar2 + 0x10) = FUN_1002674cc;
        *(undefined **)(puVar2 + 0x18) = local_80;
        _swift_retain();
        uVar9 = uVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar7 = uVar12;
        if ((uVar9 & 1) == 0) {
          uVar7 = 0;
          FUN_10026afa8(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
        }
        uVar12 = *(ulong *)(uVar7 + 0x10);
        uVar9 = uVar7;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar12) {
          uVar9 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
          FUN_10026afa8(uVar9,uVar12 + 1,1,uVar7);
        }
        *(ulong *)(uVar9 + 0x10) = uVar12 + 1;
        lVar11 = uVar9 + uVar12 * 0x10;
        *(code **)(lVar11 + 0x20) = thunk_FUN_10026af6c;
        *(undefined **)(lVar11 + 0x28) = puVar2;
      }
    }
    lVar11 = unaff_x20[0xb];
    IVar13 = *(ID *)(lVar11 + 0x10);
    _swift_bridgeObjectRetain(uVar9);
    _swift_retain(puVar1);
    _swift_retain(lVar11);
    _objc_msgSend(IVar13,"lock");
    IVar13 = *(ID *)(lVar11 + 0x10);
    uVar14 = *(undefined8 *)(lVar11 + 0x18);
    _swift_bridgeObjectRetain(uVar14);
    _objc_msgSend(IVar13,"unlock");
    local_70 = uVar14;
    if (uVar9 == 0) {
      puVar2 = puVar1;
      FUN_100265918(puVar1);
      _swift_release(puVar1);
      _swift_bridgeObjectRelease(puVar2);
      uVar14 = local_70;
    }
    else {
      uVar5 = uVar14;
      _swift_isUniquelyReferenced_nonNull_native(uVar14);
      local_78 = uVar14;
      FUN_100265af4(uVar9,puVar1,uVar5);
      _swift_release(puVar1);
      uVar14 = local_78;
    }
    _objc_msgSend(*(ID *)(lVar11 + 0x10),"lock");
    uVar5 = *(undefined8 *)(lVar11 + 0x18);
    *(undefined8 *)(lVar11 + 0x18) = uVar14;
    _swift_bridgeObjectRelease(uVar5);
    _objc_msgSend(*(ID *)(lVar11 + 0x10),"unlock");
    _swift_release(lVar11);
    plVar15 = local_90;
    if (uVar9 != 0) {
      local_90[3] = local_a0;
      local_90[4] = (long)&PTR_PTR_1009a8b78;
      _swift_bridgeObjectRelease(uVar9);
      puVar6 = local_80;
      lVar11 = local_98;
      goto LAB_100267344;
    }
    puVar2 = &DAT_100a81360;
    FUN_100004bb4(&DAT_100a81360,&DAT_1008154f8);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    puVar6 = &DAT_1009a8fb0;
    _swift_allocObject(&DAT_1009a8fb0,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_1002674cc;
    *(undefined **)(puVar6 + 0x18) = local_80;
    *(code **)(puVar2 + 0x20) = thunk_FUN_10026af6c;
    *(undefined **)(puVar2 + 0x28) = puVar6;
    lVar11 = unaff_x20[0xb];
    IVar13 = *(ID *)(lVar11 + 0x10);
    _swift_retain(local_80);
    _swift_retain(puVar1);
    _swift_retain(lVar11);
    _objc_msgSend(IVar13,"lock");
    IVar13 = *(ID *)(lVar11 + 0x10);
    uVar14 = *(undefined8 *)(lVar11 + 0x18);
    _swift_bridgeObjectRetain(uVar14);
    _objc_msgSend(IVar13,"unlock");
    uVar5 = uVar14;
    _swift_isUniquelyReferenced_nonNull_native(uVar14);
    local_70 = uVar14;
    FUN_100265af4(puVar2,puVar1,uVar5);
    _swift_release(puVar1);
    uVar14 = local_70;
    _objc_msgSend(*(ID *)(lVar11 + 0x10),"lock");
    uVar5 = *(undefined8 *)(lVar11 + 0x18);
    *(undefined8 *)(lVar11 + 0x18) = uVar14;
    _swift_bridgeObjectRelease(uVar5);
    _objc_msgSend(*(ID *)(lVar11 + 0x10),"unlock");
    _swift_release(lVar11);
    uVar9 = local_a8;
  }
  else {
    _swift_retain();
    _swift_retain(param_7);
  }
  uVar7 = local_d8;
  (*local_f0)(local_d8,local_e0,lVar19);
  uVar12 = uVar9 + 0x40 & ~uVar9;
  uVar20 = local_100 + uVar12 & 0xfffffffffffffff8;
  local_a8 = uVar20 + 0x20;
  puVar1 = &DAT_1009a8f88;
  _swift_allocObject(&DAT_1009a8f88,uVar20 + 0x29,uVar9 | 7);
  puVar6 = local_80;
  lVar11 = local_98;
  *(long *)(puVar1 + 0x10) = lVar19;
  *(undefined8 *)(puVar1 + 0x18) = local_f8;
  *(long *)(puVar1 + 0x20) = local_98;
  *(long **)(puVar1 + 0x28) = unaff_x20;
  *(code **)(puVar1 + 0x30) = FUN_1002674cc;
  *(undefined **)(puVar1 + 0x38) = local_80;
  (*local_e8)(puVar1 + uVar12,uVar7,lVar19);
  puVar2 = local_88;
  uVar5 = local_b0;
  uVar14 = local_b8;
  *(undefined **)(puVar1 + uVar20) = local_88;
  *(undefined8 *)(puVar1 + uVar20 + 8) = local_c0;
  *(undefined8 *)(puVar1 + uVar20 + 0x10) = local_b8;
  *(undefined8 *)((long)(puVar1 + uVar20 + 0x10) + 8) = local_b0;
  *(undefined **)(puVar1 + local_a8) = local_c8;
  *(byte *)((long)(puVar1 + local_a8) + 8) = (byte)local_cc & 1;
  pcVar10 = (code *)unaff_x20[4];
  _swift_retain();
  _swift_retain(puVar6);
  _swift_retain(puVar2);
  _swift_retain(lVar11);
  FUN_10004090c(uVar14,uVar5);
  (*pcVar10)(puVar2,FUN_100267c48,puVar1);
  plVar15 = local_90;
  local_90[3] = local_a0;
  local_90[4] = (long)&PTR_PTR_1009a8b78;
  _swift_release(puVar2);
LAB_100267344:
  _swift_release(puVar6);
  _swift_release(puVar1);
  *plVar15 = lVar11;
  return;
}

