// rea decompile_all
// name: FUN_10005cd04
// address: 0x10005cd04
// body: available
// range: 0x10005cd04-0x10005d097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005cd04(long param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 auStack_1c0 [2];
  undefined1 auStack_1b0 [8];
  long local_1a8;
  code *local_1a0;
  undefined8 local_198;
  long local_190;
  long local_188;
  long local_180;
  code *local_178;
  undefined1 auStack_170 [128];
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
  
  lVar4 = 0;
  local_178 = param_5;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar12 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = (long)puVar12 - extraout_x12;
  if ((param_2 < *(long *)(param_1 + 0x10)) && (*(long *)(unaff_x20 + 0xb8) == param_4)) {
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10005d098);
      (*pcVar3)();
    }
    local_188 = *(long *)(param_1 + param_2 * 8 + 0x20);
    puVar9 = auStack_170;
    local_190 = lVar4;
    local_180 = param_1;
    _swift_beginAccess(unaff_x20 + 0x70,puVar9,0x20,0);
    lVar4 = *(long *)(unaff_x20 + 0x70);
    if ((*(long *)(lVar4 + 0x10) != 0) &&
       (lVar5 = local_188, local_198 = param_3, thunk_FUN_1001a2e54(), uVar2 = local_198,
       param_3 = local_198, ((ulong)puVar9 & 1) != 0)) {
      puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x38) + lVar5 * 0x80);
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
      _swift_endAccess(auStack_170);
      FUN_10007eca0(&local_f0,auStack_170);
      __s10Foundation4DateVACycfC(puVar12);
      local_1a8 = lVar11;
      __s10Foundation4DateV18addingTimeIntervalyACSdF(lVar11,0x4014000000000000);
      local_1a0 = *(code **)(lVar10 + 8);
      (*local_1a0)(puVar12,local_190);
      puVar8 = &DAT_1009985d0;
      puVar6 = puVar8;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar6 + 0x10);
      puVar7 = &DAT_1009988c8;
      _swift_allocObject(&DAT_1009988c8,0x95,7);
      *(undefined8 *)(puVar7 + 0x60) = uStack_a8;
      *(undefined8 *)(puVar7 + 0x58) = local_b0;
      *(undefined8 *)(puVar7 + 0x70) = uStack_98;
      *(undefined8 *)(puVar7 + 0x68) = local_a0;
      *(ulong *)(puVar7 + 0x80) = CONCAT35(local_83,uStack_88);
      *(undefined8 *)(puVar7 + 0x78) = uStack_90;
      *(undefined8 *)(puVar7 + 0x8d) = uStack_7b;
      *(ulong *)(puVar7 + 0x85) = CONCAT53(uStack_80,local_83);
      *(undefined8 *)(puVar7 + 0x20) = uStack_e8;
      *(undefined8 *)(puVar7 + 0x18) = local_f0;
      *(undefined8 *)(puVar7 + 0x30) = uStack_d8;
      *(undefined8 *)(puVar7 + 0x28) = uStack_e0;
      *(undefined8 *)(puVar7 + 0x40) = uStack_c8;
      *(undefined8 *)(puVar7 + 0x38) = local_d0;
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x50) = uStack_b8;
      *(undefined8 *)(puVar7 + 0x48) = uStack_c0;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar8 + 0x10);
      puVar6 = &DAT_1009988f0;
      _swift_allocObject(&DAT_1009988f0,0xd0,7);
      lVar4 = local_180;
      *(undefined8 *)(puVar6 + 0x70) = uStack_a8;
      *(undefined8 *)(puVar6 + 0x68) = local_b0;
      *(undefined8 *)(puVar6 + 0x80) = uStack_98;
      *(undefined8 *)(puVar6 + 0x78) = local_a0;
      *(ulong *)(puVar6 + 0x90) = CONCAT35(local_83,uStack_88);
      *(undefined8 *)(puVar6 + 0x88) = uStack_90;
      *(undefined8 *)(puVar6 + 0x9d) = uStack_7b;
      *(ulong *)(puVar6 + 0x95) = CONCAT53(uStack_80,local_83);
      *(undefined8 *)(puVar6 + 0x30) = uStack_e8;
      *(undefined8 *)(puVar6 + 0x28) = local_f0;
      *(undefined8 *)(puVar6 + 0x40) = uStack_d8;
      *(undefined8 *)(puVar6 + 0x38) = uStack_e0;
      *(undefined8 *)(puVar6 + 0x50) = uStack_c8;
      *(undefined8 *)(puVar6 + 0x48) = local_d0;
      *(undefined **)(puVar6 + 0x10) = puVar8;
      *(long *)(puVar6 + 0x18) = param_4;
      *(long *)(puVar6 + 0x20) = local_188;
      *(undefined8 *)(puVar6 + 0x60) = uStack_b8;
      *(undefined8 *)(puVar6 + 0x58) = uStack_c0;
      *(long *)(puVar6 + 0xa8) = local_180;
      *(long *)(puVar6 + 0xb0) = param_2;
      *(undefined8 *)(puVar6 + 0xb8) = uVar2;
      *(code **)(puVar6 + 0xc0) = local_178;
      *(undefined8 *)(puVar6 + 200) = param_6;
      FUN_10007eca0(&local_f0,auStack_170);
      FUN_10007eca0(&local_f0,auStack_170);
      _swift_bridgeObjectRetain(lVar4);
      _swift_bridgeObjectRetain(uVar2);
      _swift_retain(param_6);
      *(undefined **)(lVar11 + -0x10) = &DAT_100998890;
      lVar4 = local_1a8;
      FUN_100058d1c(param_4,local_1a8,thunk_FUN_10007ed3c,puVar7,thunk_FUN_10007edd8,puVar6,
                    &DAT_100998878,FUN_10007ed80);
      _swift_release(puVar7);
      _swift_release(puVar6);
      FUN_10007ed50(&local_f0);
      (*local_1a0)(lVar4,local_190);
      return;
    }
    _swift_endAccess(auStack_170);
    FUN_10005cd04(local_180,param_2 + 1,param_3,param_4,local_178,param_6);
  }
  else {
    (*local_178)(param_3);
  }
  return;
}

