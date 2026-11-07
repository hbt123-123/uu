// rea decompile_all
// name: FUN_10021083c
// address: 0x10021083c
// body: available
// range: 0x10021083c-0x100210f4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10021083c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  uint *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined4 extraout_w13;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long alStack_210 [2];
  uint auStack_200 [2];
  long alStack_1f8 [2];
  uint auStack_1e8 [2];
  undefined *local_1e0;
  long local_1d8;
  ulong *local_1d0;
  long local_1c8;
  ulong local_1c0;
  long local_1b8;
  long *local_1b0;
  undefined4 local_1a4;
  long local_198;
  undefined8 local_190;
  ulong local_188;
  undefined8 local_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined8 local_168;
  undefined8 uStack_160;
  ulong local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar5 = &DAT_100a77e70;
  FUN_100004bb4(&DAT_100a77e70,&DAT_10080cca0);
  local_1e0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_1d8 = (long)&local_1e0 - extraout_x8;
  FUN_1000e984c();
  local_1c8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1c8 + 0x40));
  lVar13 = ((long)&local_1e0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a7dc98;
  FUN_100004bb4(&DAT_100a7dc98,&DAT_100812f48);
  local_198 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_198 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar7 = &DAT_100a7dca0;
  local_1d0 = (ulong *)(lVar13 - extraout_x8_01);
  FUN_100004bb4(&DAT_100a7dca0,&DAT_100812f50);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar15 = (lVar13 - extraout_x8_01) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  plVar16 = (long *)(lVar15 - extraout_x12);
  lVar6 = 0;
  FUN_1000e49dc();
  local_1b8 = *(long *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  local_1c0 = *(ulong *)(local_1b8 + 0x10);
  uVar14 = 0;
  uVar12 = 0;
  local_1b0 = plVar16;
  if (local_1c0 != 0) goto LAB_1002109c0;
LAB_1002109b4:
  uVar10 = 1;
  plVar17 = local_1b0;
  local_188 = local_1c0;
  do {
    lVar6 = local_198;
    (**(code **)(local_198 + 0x38))(lVar15,uVar10,1,puVar5);
    FUN_1000a00a8(lVar15,plVar17,&DAT_100a7dca0,&DAT_100812f50);
    plVar8 = plVar17;
    (**(code **)(lVar6 + 0x30))(plVar17,1,puVar5);
    if ((int)plVar8 == 1) {
      uVar1 = *param_1;
      uVar12 = *(undefined8 *)(param_1 + 2);
      uVar14 = (ulong)uVar1 | 0xffffffff00000000;
      switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
      local_178 = 1;
      uStack_170 = 1;
      uStack_160 = 0xc000000000000000;
      local_168 = 0;
      uStack_148 = 0xc000000000000000;
      uStack_150 = 0;
      local_158 = uVar14;
      FUN_100217a54(&local_178);
      uStack_88 = uStack_110;
      local_90 = local_118;
      uStack_78 = uStack_100;
      uStack_80 = local_108;
      local_70 = local_f8;
      uStack_c8 = uStack_150;
      local_d0 = local_158;
      uStack_b8 = uStack_140;
      uStack_c0 = uStack_148;
      uStack_a8 = uStack_130;
      local_b0 = local_138;
      uStack_98 = uStack_120;
      uStack_a0 = local_128;
      uStack_e8 = CONCAT71(uStack_16f,uStack_170);
      local_f0 = local_178;
      uStack_d8 = uStack_160;
      uStack_e0 = local_168;
      FUN_100008184(0,0xc000000000000000);
      FUN_100040b80(uVar14,0,0xc000000000000000);
      FUN_100215344(&local_f0,uVar12,1);
      FUN_100006cdc(0,0xc000000000000000);
      switchD_10004048c::caseD_6d(uVar14,0,0xc000000000000000);
      FUN_100186040((ulong)uVar1,0xffffffff,1);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(uint *)(plVar16 + -4) = uVar1;
      *(undefined4 *)((long)plVar16 + -0x1c) = 0xffffffff;
      plVar16[-3] = 1;
      *(undefined1 *)(plVar16 + -2) = 1;
      FUN_1003fb48c(FUN_100217a6c,plVar16 + -6,0xd0000000000000b2,0x8000000100885c70,
                    0xd000000000000037,0x80000001008a4530,0x1cc,0);
      FUN_100006cdc(0,0xc000000000000000);
      switchD_10004048c::caseD_6d(uVar14,0,0xc000000000000000);
      (*(code *)PTR____chkstk_darwin_100995498)();
      plVar16[-2] = extraout_x8_03;
      *(uint *)(plVar16 + -1) = uVar1;
      lVar6 = local_1d8;
      __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                (local_1d8,FUN_1002188e4,plVar16 + -4,local_1e0);
      goto LAB_100210f00;
    }
    lVar11 = *plVar17;
    FUN_1000823d8((long)plVar17 + (long)*(int *)(puVar5 + 0x30),lVar13,FUN_1000e984c);
    lVar6 = lVar11 + 1;
    if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100210f3c);
      (*pcVar4)();
    }
    if (lVar6 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100210f40);
      (*pcVar4)();
    }
    if (0x7fffffff < lVar6) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100210f44);
      (*pcVar4)();
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    plVar16[-2] = extraout_x12_00;
    local_1a4 = extraout_w13;
    *(undefined4 *)(plVar16 + -1) = extraout_w13;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&local_f0,FUN_10020d27c,plVar16 + -4,PTR___sSbN_1009958c8);
    if ((char)local_f0 != '\x01') {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      plVar16[-4] = (long)param_1;
      *(int *)(plVar16 + -3) = (int)lVar6;
      plVar16[-2] = lVar13;
      FUN_1003fb4ec(FUN_100217a78,plVar16 + -6,0xd0000000000000b2,0x8000000100885c70,
                    0xd00000000000001c,0x80000001008a4570,0x138,0);
      FUN_1000d27dc(lVar13,FUN_1000e984c);
      (*(code *)PTR____chkstk_darwin_100995498)();
      plVar16[-2] = extraout_x12_01;
      *(undefined4 *)(plVar16 + -1) = local_1a4;
LAB_100210ef8:
      lVar6 = local_1d8;
      __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                (local_1d8,FUN_1002188e4,plVar16 + -4,local_1e0);
LAB_100210f00:
      FUN_100040bb4(lVar6,&DAT_100a77e70,&DAT_10080cca0);
      return;
    }
    puVar9 = param_1;
    local_190 = uVar12;
    FUN_100211688(param_1,lVar13,lVar6);
    if (((ulong)puVar9 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      plVar16[-4] = (long)param_1;
      *(int *)(plVar16 + -3) = (int)lVar6;
      plVar16[-2] = lVar13;
      FUN_1003fb4ec(FUN_100217a88,plVar16 + -6,0xd0000000000000b2,0x8000000100885c70,
                    0xd00000000000001c,0x80000001008a4570,0x13c,0);
      FUN_1000d27dc(lVar13,FUN_1000e984c);
      (*(code *)PTR____chkstk_darwin_100995498)();
      plVar16[-2] = extraout_x12_02;
      *(undefined4 *)(plVar16 + -1) = local_1a4;
      goto LAB_100210ef8;
    }
    FUN_1000d27dc(lVar13,FUN_1000e984c);
    uVar14 = local_188;
    uVar12 = local_190;
    if (local_188 == local_1c0) goto LAB_1002109b4;
LAB_1002109c0:
    plVar17 = local_1b0;
    puVar3 = local_1d0;
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100210f48);
      (*pcVar4)();
    }
    if (*(ulong *)(local_1b8 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100210f4c);
      (*pcVar4)();
    }
    lVar6 = local_1b8 +
            ((ulong)*(byte *)(local_1c8 + 0x50) + 0x20 &
            ((ulong)*(byte *)(local_1c8 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(local_1c8 + 0x48);
    iVar2 = *(int *)(puVar5 + 0x30);
    *local_1d0 = uVar14;
    FUN_100082394(lVar6 + lVar11 * uVar14,(long)puVar3 + (long)iVar2,FUN_1000e984c);
    FUN_1000a00a8(puVar3,lVar15,&DAT_100a7dc98,&DAT_100812f48);
    uVar10 = 0;
    local_188 = uVar14 + 1;
  } while( true );
}

