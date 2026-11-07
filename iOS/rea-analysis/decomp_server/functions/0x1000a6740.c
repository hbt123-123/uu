// rea decompile_all
// name: FUN_1000a6740
// address: 0x1000a6740
// body: available
// range: 0x1000a6740-0x1000a6c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a6c34 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a6740(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 extraout_x12;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_210 [16];
  long alStack_200 [5];
  char *local_1d8;
  char *local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 *local_160;
  undefined *local_148 [2];
  undefined8 local_138;
  undefined8 local_128;
  int local_c8 [4];
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  int local_98 [14];
  
  lVar4 = 0;
  FUN_1000aaa7c();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_160 = (undefined8 *)((long)alStack_200 + lVar2 + 0x20);
  FUN_1000a42c4();
  lVar13 = *(long *)(lVar4 + 0x10);
  if (lVar13 != 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)((long)alStack_200 + lVar2 + 0x10) = lVar4;
    local_1d0 = "socketPath";
    FUN_1003fb48c(FUN_1000aac24,(long)alStack_200 + lVar2,0xd000000000000094,0x8000000100880950,
                  0xd000000000000019,0x8000000100881190,0x181,0);
    lVar11 = lVar4 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
    uVar5 = 0;
    alStack_200[4] = lVar4;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    local_170 = *(undefined8 *)(unaff_x20 + 0x60);
    local_178 = *(undefined8 *)(unaff_x20 + 0x68);
    local_1d8 = "TmuxController.swift";
    local_180 = *(undefined8 *)(unaff_x20 + 0x40);
    local_188 = *(undefined8 *)(unaff_x20 + 0x48);
    local_190 = *(undefined8 *)(unaff_x20 + 0x18);
    local_198 = *(long *)(lVar8 + 0x48);
    uStack_1a8 = 6;
    local_1b0 = 3;
    uStack_1b8 = 8;
    local_1c0 = 4;
    local_168 = uVar5;
    do {
      puVar3 = local_160;
      FUN_1000aac2c(lVar11,local_160);
      uVar5 = *puVar3;
      uVar1 = puVar3[1];
      _swift_bridgeObjectRetain(uVar1);
      FUN_1000aac70(puVar3);
      puVar6 = &DAT_100a750f8;
      FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
      puVar7 = puVar6;
      _swift_initStackObject();
      *(undefined8 *)(puVar7 + 0x20) = 0x7365732d6c6c696b;
      *(undefined8 *)(puVar7 + 0x18) = uStack_1a8;
      *(undefined8 *)(puVar7 + 0x10) = local_1b0;
      *(undefined8 *)(puVar7 + 0x28) = 0xec0000006e6f6973;
      *(undefined8 *)(puVar7 + 0x30) = 0x742d;
      *(undefined8 *)(puVar7 + 0x38) = 0xe200000000000000;
      *(undefined8 *)(puVar7 + 0x40) = uVar5;
      *(undefined8 *)(puVar7 + 0x48) = uVar1;
      _swift_allocObject(puVar6,0x60,7);
      uVar12 = local_178;
      uVar9 = local_188;
      *(undefined8 *)(puVar6 + 0x18) = uStack_1b8;
      *(undefined8 *)(puVar6 + 0x10) = local_1c0;
      *(undefined8 *)(puVar6 + 0x20) = 0x532d;
      *(undefined8 *)(puVar6 + 0x28) = 0xe200000000000000;
      *(undefined8 *)(puVar6 + 0x30) = local_170;
      *(undefined8 *)(puVar6 + 0x38) = local_178;
      *(undefined8 *)(puVar6 + 0x40) = 0x662d;
      *(undefined8 *)(puVar6 + 0x48) = 0xe200000000000000;
      *(undefined8 *)(puVar6 + 0x50) = local_180;
      *(undefined8 *)(puVar6 + 0x58) = local_188;
      local_148[0] = puVar6;
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(puVar7);
      FUN_10005f920();
      puVar6 = local_148[0];
      __sSo17OS_dispatch_queueC8DispatchE11getSpecific3keyxSgAC0dF3KeyCyxG_tlFZ(local_148,local_190)
      ;
      if (((ulong)local_148[0] & 0x100) == 0) {
        FUN_1000a7cf4(local_c8,puVar6);
        _swift_bridgeObjectRelease(puVar6);
        uVar9 = uStack_b8;
        uVar12 = uStack_a8;
        iVar10 = local_c8[0];
      }
      else {
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined8 *)((long)alStack_200 + lVar2 + 0x10) = extraout_x12;
        *(undefined **)((long)alStack_200 + lVar2 + 0x18) = puVar6;
        __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                  (local_148,FUN_1000ab868,(long)alStack_200 + lVar2,&DAT_10099a388);
        _swift_bridgeObjectRelease(puVar6);
        uVar9 = local_138;
        uVar12 = local_128;
        iVar10 = (int)local_148[0];
      }
      local_98[0] = iVar10;
      _swift_setDeallocating(puVar7);
      _swift_arrayDestroy(puVar7 + 0x20,*(undefined8 *)(puVar7 + 0x10),PTR___sSSN_1009957f8);
      if (iVar10 == 0) {
        _swift_bridgeObjectRelease(uVar12);
        _swift_bridgeObjectRelease(uVar9);
        _swift_bridgeObjectRelease(uVar1);
      }
      else {
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined8 *)((long)alStack_200 + lVar2) = uVar5;
        *(undefined8 *)((long)alStack_200 + lVar2 + 8) = uVar1;
        *(long *)((long)alStack_200 + lVar2 + 0x10) = unaff_x20;
        *(int **)((long)alStack_200 + lVar2 + 0x18) = local_98;
        FUN_1003fb4bc(thunk_FUN_1000a9ebc,auStack_210 + lVar2,0xd000000000000094,
                      (ulong)local_1d0 | 0x8000000000000000,0xd000000000000012,
                      (ulong)local_1d8 | 0x8000000000000000,0xf1,0);
        _swift_bridgeObjectRelease(uVar12);
        _swift_bridgeObjectRelease(uVar9);
        _swift_bridgeObjectRelease(uVar1);
      }
      lVar11 = lVar11 + local_198;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    _swift_bridgeObjectRelease(alStack_200[4]);
    return;
  }
  _swift_bridgeObjectRelease(lVar4);
  return;
}

