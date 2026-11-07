// rea decompile_all
// name: FUN_100455378
// address: 0x100455378
// body: available
// range: 0x100455378-0x100455f87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100455378(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  ulong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  ulong local_1b8;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  
  _swift_beginAccess(param_1 + 0x10,auStack_108,0,0);
  iVar5 = *(int *)(param_1 + 0x10);
  _swift_beginAccess(param_2 + 0x10,auStack_120,0,0);
  if (iVar5 != *(int *)(param_2 + 0x10)) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x14,auStack_138,0,0);
  iVar5 = *(int *)(param_1 + 0x14);
  _swift_beginAccess(param_2 + 0x14,auStack_150,0,0);
  if (iVar5 != *(int *)(param_2 + 0x14)) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x18,auStack_168,0,0);
  uVar11 = *(ulong *)(param_1 + 0x18);
  _swift_beginAccess(param_2 + 0x18,auStack_180,0,0);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  _swift_retain(param_1);
  _swift_retain(param_2);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar14);
  uVar12 = uVar11;
  FUN_10042c304(uVar11,uVar14);
  _swift_bridgeObjectRelease(uVar11);
  _swift_bridgeObjectRelease(uVar14);
  if ((uVar12 & 1) == 0) goto LAB_100455f38;
  _swift_beginAccess(param_1 + 0x20,auStack_198,0,0);
  local_3c0 = *(undefined8 *)(param_1 + 0x20);
  local_3b8 = *(undefined8 *)(param_1 + 0x28);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  local_3c8 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = *(ulong *)(param_1 + 0x40);
  _swift_beginAccess(param_2 + 0x20,auStack_1b0,0,0);
  local_3e8 = *(undefined8 *)(param_2 + 0x20);
  local_3e0 = *(undefined8 *)(param_2 + 0x28);
  local_3d8 = *(undefined8 *)(param_2 + 0x30);
  local_3f0 = *(undefined8 *)(param_2 + 0x38);
  uVar12 = *(ulong *)(param_2 + 0x40);
  if (uVar11 >> 0x3c < 0xf) {
    if (uVar12 >> 0x3c < 0xf) {
      local_c8 = local_3c0;
      uStack_c0 = local_3b8;
      local_b8 = uVar14;
      uStack_b0 = local_3c8;
      local_a8 = uVar11;
      local_a0 = local_3e8;
      uStack_98 = local_3e0;
      local_90 = local_3d8;
      uStack_88 = local_3f0;
      local_80 = uVar12;
      FUN_10045eb08(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
      FUN_10045eb08(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
      FUN_10045eb08(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
      FUN_10045eb08(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
      puVar7 = &local_c8;
      FUN_10045cb94(puVar7,&local_a0);
      FUN_1004337b0(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
      FUN_1004337b0(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
      FUN_1004337b0(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
      FUN_1004337b0(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
      if (((ulong)puVar7 & 1) == 0) goto LAB_100455f38;
      goto LAB_10045575c;
    }
LAB_100455554:
    FUN_10045eb08(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
    FUN_10045eb08(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
    FUN_10045eb08(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
    FUN_10045eb08(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
    _swift_release(param_1);
    _swift_release(param_2);
    FUN_1004337b0(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
    FUN_1004337b0(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
    goto LAB_1004558ac;
  }
  FUN_10045eb08(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
  FUN_10045eb08(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
  if (uVar12 >> 0x3c < 0xf) {
LAB_10045588c:
    _swift_release(param_1);
    _swift_release(param_2);
LAB_1004558ac:
    local_200 = local_3c0;
    local_1f8 = local_3b8;
    local_1f0 = uVar14;
    local_1e8 = local_3c8;
    local_1e0 = uVar11;
    local_1d8 = local_3e8;
    local_1d0 = local_3e0;
    local_1c8 = local_3d8;
    local_1c0 = local_3f0;
    local_1b8 = uVar12;
    FUN_100040bb4(&local_200,&DAT_100aa08b8,&DAT_10082d590);
    return 0;
  }
  FUN_1004337b0(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
LAB_10045575c:
  _swift_beginAccess(param_1 + 0x48,auStack_218,0,0);
  lVar13 = *(long *)(param_1 + 0x48);
  _swift_beginAccess(param_2 + 0x48,auStack_230,0,0);
  lVar10 = *(long *)(param_2 + 0x48);
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (lVar10 == 0) {
      if (lVar13 != 0) goto LAB_100455f38;
    }
    else if (lVar10 == 1) {
      if (lVar13 != 1) goto LAB_100455f38;
    }
    else if (lVar13 != 2) goto LAB_100455f38;
  }
  else if (lVar13 != lVar10) goto LAB_100455f38;
  _swift_beginAccess(param_1 + 0x58,auStack_248,0,0);
  local_3c0 = *(undefined8 *)(param_1 + 0x58);
  local_3b8 = *(undefined8 *)(param_1 + 0x60);
  uVar14 = *(undefined8 *)(param_1 + 0x68);
  local_3c8 = *(undefined8 *)(param_1 + 0x70);
  uVar11 = *(ulong *)(param_1 + 0x78);
  _swift_beginAccess(param_2 + 0x58,auStack_260,0,0);
  local_3e8 = *(undefined8 *)(param_2 + 0x58);
  local_3e0 = *(undefined8 *)(param_2 + 0x60);
  local_3d8 = *(undefined8 *)(param_2 + 0x68);
  local_3f0 = *(undefined8 *)(param_2 + 0x70);
  uVar12 = *(ulong *)(param_2 + 0x78);
  if (uVar11 >> 0x3c < 0xf) {
    if (0xe < uVar12 >> 0x3c) goto LAB_100455554;
    local_200 = local_3e8;
    local_1f8 = local_3e0;
    local_1f0 = local_3d8;
    local_1e8 = local_3f0;
    local_1e0 = uVar12;
    local_f0 = local_3c0;
    uStack_e8 = local_3b8;
    local_e0 = uVar14;
    uStack_d8 = local_3c8;
    local_d0 = uVar11;
    FUN_10045eb08(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
    FUN_10045eb08(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
    FUN_10045eb08(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
    FUN_10045eb08(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
    puVar7 = &local_f0;
    FUN_10045cb94(puVar7,&local_200);
    FUN_1004337b0(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
    FUN_1004337b0(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
    FUN_1004337b0(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
    FUN_1004337b0(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
    if (((ulong)puVar7 & 1) == 0) goto LAB_100455f38;
  }
  else {
    FUN_10045eb08(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
    FUN_10045eb08(local_3e8,local_3e0,local_3d8,local_3f0,uVar12);
    if (uVar12 >> 0x3c < 0xf) goto LAB_10045588c;
    FUN_1004337b0(local_3c0,local_3b8,uVar14,local_3c8,uVar11);
  }
  _swift_beginAccess(param_1 + 0x80,auStack_278,0,0);
  cVar6 = *(char *)(param_1 + 0x80);
  _swift_beginAccess(param_2 + 0x80,auStack_290,0,0);
  if (cVar6 != *(char *)(param_2 + 0x80)) goto LAB_100455f38;
  _swift_beginAccess(param_1 + 0x88,auStack_2a8,0,0);
  dVar15 = *(double *)(param_1 + 0x88);
  _swift_beginAccess(param_2 + 0x88,auStack_2c0,0,0);
  if (dVar15 != *(double *)(param_2 + 0x88)) goto LAB_100455f38;
  _swift_beginAccess(param_1 + 0x90,auStack_2d8,0,0);
  uVar12 = *(ulong *)(param_1 + 0x90);
  uVar9 = *(ulong *)(param_1 + 0x98);
  uVar11 = *(ulong *)(param_1 + 0xa0);
  uVar14 = *(undefined8 *)(param_1 + 0xa8);
  _swift_beginAccess(param_2 + 0x90,auStack_2f0,0,0);
  uVar1 = *(ulong *)(param_2 + 0x90);
  uVar3 = *(ulong *)(param_2 + 0x98);
  uVar2 = *(ulong *)(param_2 + 0xa0);
  uVar4 = *(undefined8 *)(param_2 + 0xa8);
  if (uVar9 == 0) {
    FUN_10045eb50(uVar12,0,uVar11,uVar14);
    if (uVar3 == 0) {
      FUN_10045eb50(uVar1,0,uVar2,uVar4);
LAB_100455d94:
      FUN_1004338a4(uVar12,uVar9,uVar11,uVar14);
      _swift_beginAccess(param_1 + 0xb0,auStack_308,0,0);
      uVar12 = *(ulong *)(param_1 + 0xb0);
      lVar10 = *(long *)(param_1 + 0xb8);
      _swift_beginAccess(param_2 + 0xb0,auStack_320,0,0);
      if (((uVar12 == *(ulong *)(param_2 + 0xb0)) && (lVar10 == *(long *)(param_2 + 0xb8))) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar12,lVar10,*(ulong *)(param_2 + 0xb0),*(long *)(param_2 + 0xb8),0),
         (uVar12 & 1) != 0)) {
        _swift_beginAccess(param_1 + 0xc0,auStack_338,0,0);
        lVar13 = *(long *)(param_1 + 0xc0);
        _swift_beginAccess(param_2 + 0xc0,auStack_350,0,0);
        lVar10 = *(long *)(param_2 + 0xc0);
        if (*(char *)(param_2 + 200) == '\x01') {
          if (lVar10 < 2) {
            if (lVar10 == 0) {
              if (lVar13 != 0) goto LAB_100455f38;
            }
            else if (lVar13 != 1) goto LAB_100455f38;
          }
          else if (lVar10 == 2) {
            if (lVar13 != 2) goto LAB_100455f38;
          }
          else if (lVar10 == 3) {
            if (lVar13 != 3) goto LAB_100455f38;
          }
          else if (lVar13 != 4) goto LAB_100455f38;
        }
        else if (lVar13 != lVar10) goto LAB_100455f38;
        _swift_beginAccess(param_1 + 0xcc,auStack_368,0,0);
        iVar5 = *(int *)(param_1 + 0xcc);
        _swift_beginAccess(param_2 + 0xcc,auStack_380,0,0);
        if (iVar5 == *(int *)(param_2 + 0xcc)) {
          _swift_beginAccess(param_1 + 0xd0,auStack_398,0,0);
          lVar13 = *(long *)(param_1 + 0xd0);
          _swift_release(param_1);
          _swift_beginAccess(param_2 + 0xd0,auStack_3b0,0,0);
          lVar10 = *(long *)(param_2 + 0xd0);
          cVar6 = *(char *)(param_2 + 0xd8);
          _swift_release(param_2);
          if (cVar6 != '\x01') {
            if (lVar13 != lVar10) {
              return 0;
            }
            return 1;
          }
          if (lVar10 == 0) {
            if (lVar13 != 0) {
              return 0;
            }
            return 1;
          }
          if (lVar10 != 1) {
            if (lVar13 != 2) {
              return 0;
            }
            return 1;
          }
          if (lVar13 != 1) {
            return 0;
          }
          return 1;
        }
      }
LAB_100455f38:
      _swift_release(param_1);
      _swift_release(param_2);
      return 0;
    }
    FUN_10045eb50(uVar1,uVar3,uVar2,uVar4);
    _swift_release(param_1);
    _swift_release(param_2);
  }
  else {
    if (uVar3 != 0) {
      if (((int)uVar12 == (int)uVar1) && ((uVar1 ^ uVar12) >> 0x20 == 0)) {
        uVar8 = uVar9;
        FUN_1000e3c6c(uVar9,uVar3);
        FUN_10045eb50(uVar12,uVar9,uVar11,uVar14);
        FUN_10045eb50(uVar1,uVar3,uVar2,uVar4);
        FUN_10045eb50(uVar12,uVar9,uVar11,uVar14);
        FUN_10045eb50(uVar1,uVar3,uVar2,uVar4);
        if ((uVar8 & 1) != 0) {
          uVar8 = uVar11;
          FUN_1000094a4(uVar11,uVar14,uVar2,uVar4);
          FUN_1004338a4(uVar1,uVar3,uVar2,uVar4);
          FUN_1004338a4(uVar1,uVar3,uVar2,uVar4);
          FUN_1004338a4(uVar12,uVar9,uVar11,uVar14);
          if ((uVar8 & 1) == 0) {
            _swift_release(param_1);
            _swift_release(param_2);
            goto LAB_100455d78;
          }
          goto LAB_100455d94;
        }
      }
      else {
        FUN_10045eb50(uVar12,uVar9,uVar11,uVar14);
        FUN_10045eb50(uVar1,uVar3,uVar2,uVar4);
        FUN_10045eb50(uVar12,uVar9,uVar11,uVar14);
        FUN_10045eb50(uVar1,uVar3,uVar2,uVar4);
      }
      _swift_release(param_1);
      _swift_release(param_2);
      FUN_1004338a4(uVar1,uVar3,uVar2,uVar4);
      FUN_1004338a4(uVar1,uVar3,uVar2,uVar4);
      FUN_1004338a4(uVar12,uVar9,uVar11,uVar14);
      goto LAB_100455d78;
    }
    FUN_10045eb50(uVar12,uVar9,uVar11,uVar14);
    FUN_10045eb50(uVar1,0,uVar2,uVar4);
    FUN_10045eb50(uVar12,uVar9,uVar11,uVar14);
    FUN_10045eb50(uVar1,0,uVar2,uVar4);
    _swift_release(param_1);
    _swift_release(param_2);
    FUN_1004338a4(uVar1,0,uVar2,uVar4);
    FUN_1004338a4(uVar12,uVar9,uVar11,uVar14);
  }
  FUN_1004338a4(uVar12,uVar9,uVar11,uVar14);
  uVar12 = uVar1;
  uVar9 = uVar3;
  uVar11 = uVar2;
  uVar14 = uVar4;
LAB_100455d78:
  FUN_1004338a4(uVar12,uVar9,uVar11,uVar14);
  return 0;
}

