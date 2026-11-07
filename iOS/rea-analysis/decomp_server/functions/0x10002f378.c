// rea decompile_all
// name: FUN_10002f378
// address: 0x10002f378
// body: available
// range: 0x10002f378-0x10002f883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002f378(double param_1,uint param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined4 param_6)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  int iVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  undefined1 auStack_120 [16];
  uint auStack_110 [4];
  long alStack_100 [2];
  uint local_f0;
  undefined4 local_ec;
  long local_e8;
  undefined1 auStack_e0 [16];
  uint local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 local_a8;
  double local_a0 [3];
  undefined1 auStack_88 [24];
  
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&local_f0 + lVar3;
  FUN_100401b14(0);
  iVar9 = (int)param_4;
  uStack_bc = (undefined4)param_5;
  local_f0 = param_2;
  local_ec = param_6;
  local_e8 = param_5;
  local_d0 = param_2;
  local_c8 = param_3;
  local_c0 = iVar9;
  local_b8 = param_6;
  FUN_1003fb48c(FUN_10003fef8,auStack_e0,0xd0000000000000a9,0x8000000100877660,0xd00000000000003e,
                0x800000010087abd0,0x7f8,0);
  piVar1 = (int *)(*(long *)(unaff_x20 + 0x38) +
                  _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID);
  if (((*(byte *)(piVar1 + 1) & 1) == 0) && (*piVar1 == iVar9)) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)((long)alStack_100 + lVar3) = iVar9;
    FUN_1003fb48c(FUN_10003ff4c,(long)auStack_110 + lVar3,0xd0000000000000a9,0x8000000100877660,
                  0xd00000000000003e,0x800000010087abd0,0x7fa,0);
    return;
  }
  if (*(char *)(unaff_x20 + 0x158) == '\x01') {
    FUN_1003fb48c(FUN_10002fb54,0,0xd0000000000000a9,0x8000000100877660,0xd00000000000003e,
                  0x800000010087abd0,0x7fe,0);
    return;
  }
  _swift_beginAccess(unaff_x20 + 0xd0,auStack_88,0,0);
  uVar6 = param_4;
  thunk_FUN_100152fd0(param_4,*(undefined8 *)(unaff_x20 + 0xd0));
  if ((uVar6 & 1) != 0) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint *)((long)auStack_110 + lVar3) = local_f0;
    *(int *)((long)auStack_110 + lVar3 + 4) = iVar9;
    uVar4 = local_ec;
    *(int *)((long)auStack_110 + lVar3 + 8) = (int)local_e8;
    *(undefined4 *)((long)auStack_110 + lVar3 + 0xc) = uVar4;
    *(long *)((long)alStack_100 + lVar3) = unaff_x20;
    pcVar11 = FUN_10003ff2c;
    uVar8 = 0x802;
LAB_10002f828:
    FUN_1003fb48c(pcVar11,auStack_120 + lVar3,0xd0000000000000a9,0x8000000100877660,
                  0xd00000000000003e,0x800000010087abd0,uVar8,0);
    return;
  }
  if (((*(char *)(unaff_x20 + 0x99) == '\x01') &&
      (*(long *)(*(long *)(unaff_x20 + 0x90) + 0x10) != 0)) &&
     ((uVar6 = param_4, FUN_10002250c(), (uVar6 >> 0x20 & 1) != 0 || ((int)uVar6 != (int)local_e8)))
     ) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint *)((long)auStack_110 + lVar3) = local_f0;
    *(int *)((long)auStack_110 + lVar3 + 4) = iVar9;
    uVar4 = local_ec;
    *(int *)((long)auStack_110 + lVar3 + 8) = (int)local_e8;
    *(undefined4 *)((long)auStack_110 + lVar3 + 0xc) = uVar4;
    *(long *)((long)alStack_100 + lVar3) = unaff_x20;
    pcVar11 = FUN_10003ff20;
    uVar8 = 0x807;
    goto LAB_10002f828;
  }
  FUN_10004d12c();
  uVar7 = param_4;
  thunk_FUN_100152fd0(param_4,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  if ((uVar7 & 1) != 0) {
    uVar12 = *(undefined8 *)(unaff_x20 + 0x108);
    _swift_beginAccess(unaff_x20 + 200,local_a0,0x21,0);
    uVar8 = *(undefined8 *)(unaff_x20 + 200);
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    lVar5 = local_e8;
    uVar4 = local_ec;
    uVar2 = local_f0;
    local_a8 = *(undefined8 *)(unaff_x20 + 200);
    *(undefined8 *)(unaff_x20 + 200) = 0x8000000000000000;
    FUN_100061218(uVar12,(ulong)local_f0 | local_e8 << 0x20,local_ec,param_4,uVar8);
    *(undefined8 *)(unaff_x20 + 200) = local_a8;
    _swift_endAccess(local_a0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint *)((long)auStack_110 + lVar3) = uVar2;
    *(int *)((long)auStack_110 + lVar3 + 4) = iVar9;
    *(int *)((long)auStack_110 + lVar3 + 8) = (int)lVar5;
    *(undefined4 *)((long)auStack_110 + lVar3 + 0xc) = uVar4;
    *(long *)((long)alStack_100 + lVar3) = unaff_x20;
    pcVar11 = FUN_10003ff14;
    uVar8 = 0x812;
    goto LAB_10002f828;
  }
  local_a0[0] = 0.0;
  if (*(char *)(unaff_x20 + 0x150) == '\x01') {
    __s10Foundation4DateVACycfC(lVar13);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    pcVar11 = *(code **)(lVar10 + 8);
  }
  else {
    dVar14 = *(double *)(unaff_x20 + 0x148);
    __s10Foundation4DateVACycfC(lVar13);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    pcVar11 = *(code **)(lVar10 + 8);
    (*pcVar11)(lVar13,lVar5);
    param_1 = param_1 - dVar14;
    local_a0[0] = param_1;
    if (param_1 <= 5.0) {
      uVar2 = *(uint *)(unaff_x20 + 0x154);
      if (0xfffffffe < uVar2) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10002f884);
        (*pcVar11)();
      }
      *(uint *)(unaff_x20 + 0x154) = uVar2 + 1;
      if (2 < uVar2) {
        return;
      }
      goto LAB_10002f760;
    }
    __s10Foundation4DateVACycfC(lVar13);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  }
  (*pcVar11)(lVar13,lVar5);
  *(double *)(unaff_x20 + 0x148) = param_1;
  *(undefined1 *)(unaff_x20 + 0x150) = 0;
  *(undefined4 *)(unaff_x20 + 0x154) = 1;
LAB_10002f760:
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(long *)((long)alStack_100 + lVar3) = unaff_x20;
  *(double **)((long)alStack_100 + lVar3 + 8) = local_a0;
  FUN_1003fb48c(FUN_10003ff0c,(long)auStack_110 + lVar3,0xd0000000000000a9,0x8000000100877660,
                0xd00000000000003e,0x800000010087abd0,0x82c,0);
  FUN_100030274(local_f0,param_4,local_e8,local_ec);
  return;
}

