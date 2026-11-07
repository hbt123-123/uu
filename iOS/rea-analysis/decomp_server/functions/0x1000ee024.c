// rea decompile_all
// name: FUN_1000ee024
// address: 0x1000ee024
// body: available
// range: 0x1000ee024-0x1000ee3a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000ee3a4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000ee1d8) */

uint FUN_1000ee024(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  long extraout_x8;
  uint uVar9;
  long unaff_x20;
  ID IVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auStack_c0 [16];
  ulong auStack_b0 [2];
  undefined1 auStack_a0 [8];
  long local_98;
  undefined8 local_90;
  ulong local_80;
  ulong uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_a0 + lVar2;
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = uVar7;
  FUN_1000d761c(uVar7,uVar1);
  if ((uVar4 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong **)((long)auStack_b0 + lVar2) = param_1;
    FUN_1003fb4ec(FUN_1000ef5fc,auStack_c0 + lVar2,0xd0000000000000a9,0x80000001008887a0,
                  0x6b636f4c65766173,0xee00293a5f286465,0x4b,0);
    iVar8 = 1;
    uVar9 = 0;
  }
  else {
    IVar10 = *(ID *)(unaff_x20 + _TtC14UURemoteServer23FileTransferResumeStore::fileManager);
    local_90 = _TtC14UURemoteServer23FileTransferResumeStore::rootURL;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    local_80 = 0;
    IVar10 = _objc_msgSend(IVar10,
                           "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                           uVar4,1,0,&local_80);
    if ((int)IVar10 == 0) {
      uVar7 = local_80;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _swift_willThrow(0);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(ulong **)((long)auStack_b0 + lVar2) = param_1;
      *(ulong *)((long)auStack_b0 + lVar2 + 8) = uVar7;
      FUN_1003fb4ec(FUN_1000ef604,auStack_c0 + lVar2,0xd0000000000000a9,0x80000001008887a0,
                    0x6b636f4c65766173,0xee00293a5f286465,0x55,0);
      _swift_errorRelease(uVar7);
      iVar8 = 1;
      uVar9 = 3;
    }
    else {
      uVar5 = 0;
      local_98 = lVar3;
      FUN_1000eb43c(0);
      puVar6 = &DAT_100a78198;
      FUN_100005c90(&DAT_100a78198,FUN_1000eb43c,&TargetProtocolConformanceDescriptor_10080d028);
      __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(param_1,uVar5,puVar6);
      local_80 = uVar7;
      uStack_78 = uVar1;
      _swift_bridgeObjectRetain(uVar1);
      __sSS6appendyySSF(0x6e6f736a2e,0xe500000000000000);
      uVar7 = uStack_78;
      __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
                (puVar12,local_80,uStack_78,0);
      _swift_bridgeObjectRelease(uVar7);
      __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
                (puVar12,1,param_1,uVar5);
      (**(code **)(lVar11 + 8))(puVar12,local_98);
      FUN_100006cdc(param_1,uVar5);
      uVar9 = 0;
      iVar8 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9 | iVar8 << 8;
}

