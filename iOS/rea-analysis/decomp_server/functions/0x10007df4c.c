// rea decompile_all
// name: FUN_10007df4c
// address: 0x10007df4c
// body: available
// range: 0x10007df4c-0x10007e787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007df4c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,
                  long param_11,code *param_12,undefined8 param_13)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long alStack_230 [6];
  undefined1 auStack_200 [8];
  undefined8 local_1f8;
  undefined1 *local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  long local_1c8;
  undefined *local_1c0;
  code *local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long local_188;
  undefined8 local_180;
  long local_178;
  undefined4 local_170 [2];
  undefined *local_168;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined3 local_83;
  undefined5 uStack_80;
  undefined8 uStack_7b;
  
  lVar5 = 0;
  local_1b0 = param_4;
  local_1a8 = param_3;
  local_1a0 = param_5;
  uStack_198 = param_8;
  local_188 = param_2;
  __s10Foundation4DateVMa();
  local_1e8 = *(long *)(lVar5 + -8);
  local_1d8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1e8 + 0x40));
  local_1f0 = auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = (long)(auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar6 = &DAT_1009987d8;
  local_1e0 = lVar12;
  _swift_allocObject(&DAT_1009987d8,0x28,7);
  local_180 = param_13;
  local_178 = param_11;
  *(long *)(puVar6 + 0x10) = param_11;
  *(code **)(puVar6 + 0x18) = param_12;
  local_1b8 = param_12;
  *(undefined8 *)(puVar6 + 0x20) = param_13;
  puVar7 = &DAT_100998800;
  _swift_allocObject(&DAT_100998800,0x48,7);
  uVar3 = uStack_198;
  lVar5 = local_1a0;
  *(long *)(puVar7 + 0x10) = param_6;
  *(undefined8 *)(puVar7 + 0x18) = param_7;
  *(undefined8 *)(puVar7 + 0x20) = uStack_198;
  *(undefined8 *)(puVar7 + 0x28) = param_9;
  local_1d0 = param_9;
  *(undefined8 *)(puVar7 + 0x30) = param_10;
  *(code **)(puVar7 + 0x38) = thunk_FUN_10007eeec;
  *(undefined **)(puVar7 + 0x40) = puVar6;
  local_1c8 = param_1;
  local_190 = param_7;
  if ((local_188 < *(long *)(param_1 + 0x10)) && (*(long *)(local_1a0 + 0xb8) == local_1b0)) {
    if (local_188 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10007e770);
      (*pcVar4)();
    }
    lVar16 = *(long *)(param_1 + local_188 * 8 + 0x20);
    puVar11 = local_170;
    local_1c0 = puVar6;
    _swift_beginAccess(local_1a0 + 0x70,puVar11,0x20,0);
    lVar13 = *(long *)(lVar5 + 0x70);
    if ((*(long *)(lVar13 + 0x10) == 0) ||
       (lVar8 = lVar16, thunk_FUN_1001a2e54(), ((ulong)puVar11 & 1) == 0)) {
      _swift_endAccess(local_170);
      _swift_retain_n(param_6,3);
      uVar17 = local_190;
      _swift_bridgeObjectRetain_n(local_190,3);
      _swift_bridgeObjectRetain_n(uVar3,3);
      _swift_bridgeObjectRetain_n(param_10,3);
      lVar13 = local_178;
      _swift_retain_n(local_178,2);
      uVar14 = local_180;
      _swift_retain_n(local_180,2);
      puVar6 = local_1c0;
      _swift_retain_n(local_1c0,2);
      *(undefined8 *)(lVar12 + -0x10) = uVar14;
      pcVar4 = local_1b8;
      lVar16 = local_188 + 1;
      *(long *)(lVar12 + -0x20) = lVar13;
      *(code **)(lVar12 + -0x18) = pcVar4;
      *(undefined8 *)(lVar12 + -0x28) = param_10;
      *(undefined8 *)(lVar12 + -0x30) = local_1d0;
      FUN_10007df4c(local_1c8,lVar16,local_1a8,local_1b0,lVar5,param_6,uVar17,uVar3);
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar8 * 0x80);
      uStack_c8 = puVar1[5];
      local_d0 = puVar1[4];
      uStack_b8 = puVar1[7];
      uStack_c0 = puVar1[6];
      uStack_e8 = puVar1[1];
      local_f0 = *puVar1;
      uStack_d8 = puVar1[3];
      uStack_e0 = puVar1[2];
      uStack_a8 = puVar1[9];
      local_b0 = puVar1[8];
      uStack_98 = puVar1[0xb];
      local_a0 = puVar1[10];
      uStack_90 = puVar1[0xc];
      uStack_7b = *(undefined8 *)((long)puVar1 + 0x75);
      uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0x6d) >> 0x18);
      uStack_88 = (undefined5)puVar1[0xd];
      local_83 = (undefined3)((ulong)puVar1[0xd] >> 0x28);
      _swift_endAccess(local_170);
      _swift_retain_n(param_6,2);
      _swift_bridgeObjectRetain_n(local_190,2);
      _swift_bridgeObjectRetain_n(uVar3,2);
      local_1f8 = param_10;
      _swift_bridgeObjectRetain_n(param_10,2);
      _swift_retain_n(local_178,2);
      _swift_retain_n(local_180,2);
      _swift_retain_n(local_1c0,2);
      FUN_10007eca0(&local_f0,local_170);
      puVar2 = local_1f0;
      __s10Foundation4DateVACycfC(local_1f0);
      __s10Foundation4DateV18addingTimeIntervalyACSdF(local_1e0,0x4014000000000000);
      local_1b8 = *(code **)(local_1e8 + 8);
      (*local_1b8)(puVar2,local_1d8);
      puVar6 = &DAT_1009985d0;
      puVar9 = puVar6;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar9 + 0x10,lVar5);
      puVar10 = &DAT_100998828;
      _swift_allocObject(&DAT_100998828,0x95,7);
      *(undefined8 *)(puVar10 + 0x60) = uStack_a8;
      *(undefined8 *)(puVar10 + 0x58) = local_b0;
      *(undefined8 *)(puVar10 + 0x70) = uStack_98;
      *(undefined8 *)(puVar10 + 0x68) = local_a0;
      *(ulong *)(puVar10 + 0x80) = CONCAT35(local_83,uStack_88);
      *(undefined8 *)(puVar10 + 0x78) = uStack_90;
      *(undefined8 *)(puVar10 + 0x8d) = uStack_7b;
      *(ulong *)(puVar10 + 0x85) = CONCAT53(uStack_80,local_83);
      *(undefined8 *)(puVar10 + 0x20) = uStack_e8;
      *(undefined8 *)(puVar10 + 0x18) = local_f0;
      *(undefined8 *)(puVar10 + 0x30) = uStack_d8;
      *(undefined8 *)(puVar10 + 0x28) = uStack_e0;
      *(undefined8 *)(puVar10 + 0x40) = uStack_c8;
      *(undefined8 *)(puVar10 + 0x38) = local_d0;
      *(undefined **)(puVar10 + 0x10) = puVar9;
      *(undefined8 *)(puVar10 + 0x50) = uStack_b8;
      *(undefined8 *)(puVar10 + 0x48) = uStack_c0;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar6 + 0x10,lVar5);
      puVar9 = &DAT_100998850;
      _swift_allocObject(&DAT_100998850,0xd0,7);
      lVar8 = local_1a8;
      lVar13 = local_1b0;
      lVar5 = local_1c8;
      *(undefined8 *)(puVar9 + 0x70) = uStack_a8;
      *(undefined8 *)(puVar9 + 0x68) = local_b0;
      *(undefined8 *)(puVar9 + 0x80) = uStack_98;
      *(undefined8 *)(puVar9 + 0x78) = local_a0;
      *(ulong *)(puVar9 + 0x90) = CONCAT35(local_83,uStack_88);
      *(undefined8 *)(puVar9 + 0x88) = uStack_90;
      *(undefined8 *)(puVar9 + 0x9d) = uStack_7b;
      *(ulong *)(puVar9 + 0x95) = CONCAT53(uStack_80,local_83);
      *(undefined8 *)(puVar9 + 0x30) = uStack_e8;
      *(undefined8 *)(puVar9 + 0x28) = local_f0;
      *(undefined8 *)(puVar9 + 0x40) = uStack_d8;
      *(undefined8 *)(puVar9 + 0x38) = uStack_e0;
      *(undefined8 *)(puVar9 + 0x50) = uStack_c8;
      *(undefined8 *)(puVar9 + 0x48) = local_d0;
      *(undefined **)(puVar9 + 0x10) = puVar6;
      *(long *)(puVar9 + 0x18) = local_1b0;
      *(long *)(puVar9 + 0x20) = lVar16;
      *(undefined8 *)(puVar9 + 0x60) = uStack_b8;
      *(undefined8 *)(puVar9 + 0x58) = uStack_c0;
      *(long *)(puVar9 + 0xa8) = local_1c8;
      *(long *)(puVar9 + 0xb0) = local_188;
      *(long *)(puVar9 + 0xb8) = local_1a8;
      *(code **)(puVar9 + 0xc0) = FUN_10007ed18;
      *(undefined **)(puVar9 + 200) = puVar7;
      FUN_10007eca0(&local_f0,local_170);
      FUN_10007eca0(&local_f0,local_170);
      param_10 = local_1f8;
      _swift_bridgeObjectRetain(lVar5);
      _swift_bridgeObjectRetain(lVar8);
      _swift_retain(puVar7);
      *(undefined **)(lVar12 + -0x10) = &DAT_100998890;
      lVar5 = local_1e0;
      FUN_100058d1c(lVar13,local_1e0,FUN_10007ed3c,puVar10,thunk_FUN_10007edd8,puVar9,&DAT_100998878
                    ,FUN_10007ed80);
      lVar13 = local_178;
      puVar6 = local_1c0;
      _swift_release(puVar10);
      uVar14 = local_180;
      _swift_release(puVar9);
      FUN_10007ed50(&local_f0);
      (*local_1b8)(lVar5,local_1d8);
      uVar17 = local_190;
    }
    _swift_bridgeObjectRelease(param_10);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar17);
    _swift_release(param_6);
  }
  else {
    _swift_beginAccess(param_6 + 0x10,&local_f0,0,0);
    puVar10 = (undefined *)(param_6 + 0x10);
    _swift_weakLoadStrong();
    uVar17 = local_190;
    if (puVar10 == (undefined *)0x0) {
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain_n(param_10,2);
      lVar13 = local_178;
      _swift_retain_n(local_178,2);
      uVar14 = local_180;
      _swift_retain_n(local_180,2);
      _swift_retain_n(puVar6,2);
      _swift_retain(param_6);
      uVar17 = local_190;
      _swift_bridgeObjectRetain(local_190);
      _swift_bridgeObjectRelease(param_10);
    }
    else {
      pcVar4 = *(code **)(puVar10 + 0x78);
      if (pcVar4 == (code *)0x0) {
        local_1c0 = puVar6;
        _swift_retain_n(param_6,2);
        _swift_bridgeObjectRetain_n(uVar17,2);
        _swift_bridgeObjectRetain_n(uVar3,2);
        _swift_bridgeObjectRetain_n(param_10,2);
        _swift_retain_n(local_178,2);
        _swift_retain_n(local_180,2);
        _swift_retain_n(puVar6,2);
      }
      else {
        uVar14 = *(undefined8 *)(puVar10 + 0x80);
        local_1c0 = puVar6;
        _swift_retain_n(param_6,2);
        _swift_bridgeObjectRetain_n(uVar17,2);
        _swift_bridgeObjectRetain_n(uVar3,2);
        _swift_bridgeObjectRetain_n(param_10,2);
        _swift_retain_n(local_178,2);
        _swift_retain_n(local_180,2);
        _swift_retain_n(puVar6,2);
        FUN_10004090c(pcVar4,uVar14);
        (*pcVar4)(local_1d0,param_10,4);
        FUN_10007ed2c(pcVar4,uVar14);
      }
      FUN_100075dc8(uVar3);
      FUN_10005d508();
      FUN_10005dad4(0x65766f6d6572,0xe600000000000000,uVar17,uVar3,0);
      pcVar4 = *(code **)(puVar10 + 0x78);
      if (pcVar4 != (code *)0x0) {
        uVar14 = *(undefined8 *)(puVar10 + 0x80);
        _swift_retain(uVar14);
        (*pcVar4)(0x65766f6d6572,0xe600000000000000,5);
        FUN_10007ed2c(pcVar4,uVar14);
      }
      uVar14 = local_180;
      if (*(long *)(local_1a8 + 0x10) == 0) {
        if (DAT_100a73b10 != -1) {
          _swift_once(&DAT_100a73b10,FUN_100041da4);
        }
        local_170[0] = DAT_100b36060;
        local_168 = DAT_100b36068;
      }
      else {
        pcVar4 = *(code **)(puVar10 + 0x78);
        if (pcVar4 != (code *)0x0) {
          uVar15 = *(undefined8 *)(puVar10 + 0x80);
          _swift_retain(uVar15);
          (*pcVar4)(local_1a8,0,3);
          FUN_10007ed2c(pcVar4,uVar15);
        }
        local_170[0] = 0x2715;
        local_168 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar13 = local_178;
      if ((*(byte *)(local_178 + 0x10) & 1) == 0) {
        *(undefined1 *)(local_178 + 0x10) = 1;
        (**(code **)(local_178 + 0x18))(local_170);
      }
      (*local_1b8)();
      _swift_bridgeObjectRelease(param_10);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar17);
      _swift_release(param_6);
      _swift_release(puVar7);
      puVar6 = local_1c0;
      puVar7 = puVar10;
    }
  }
  _swift_release(puVar7);
  _swift_release(uVar14);
  _swift_release(lVar13);
  _swift_bridgeObjectRelease(param_10);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar17);
  _swift_release(param_6);
  _swift_release_n(puVar6,2);
  return;
}

