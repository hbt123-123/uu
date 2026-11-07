// rea decompile_all
// name: FUN_10061cdc4
// address: 0x10061cdc4
// body: available
// range: 0x10061cdc4-0x10061d16b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10061d114 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10061cdc4(undefined8 param_1,ulong *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  ulong uVar8;
  undefined8 uVar9;
  TargetProtocolConformanceDescriptor *pTVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_120;
  undefined4 auStack_118 [2];
  ulong local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar11 = *param_2;
  lVar12 = *(long *)(uVar11 + 0x50);
  lVar2 = 0xff;
  FUN_100616300(0xff,lVar12);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar3 = (long)&local_110 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar13 = lVar3 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar5 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar5 == 0) {
    *(undefined4 *)(lVar13 + -8) = 0;
    *(undefined8 *)(lVar13 + -0x10) = 0x1c;
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0xd000000000000024,0x80000001008befc0,"PromiseKit/hang.swift",
               0x15,2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061d16c);
    (*pcVar1)();
  }
  lVar6 = *(long *)PTR__kCFRunLoopDefaultMode_1009953e8;
  if (lVar6 != 0) {
    pTVar7 = &TargetProtocolConformanceDescriptor_1008488a0;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,uVar11);
    uVar8 = uVar11;
    FUN_10061a0c8(uVar11,pTVar7);
    if ((uVar8 & 1) != 0) {
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      local_f8 = lVar12;
      local_f0 = param_1;
      _CFRunLoopGetCurrent();
      uVar9 = 0;
      _CFRunLoopSourceCreate(0,0,&local_c0);
      local_108 = lVar6;
      local_100 = uVar9;
      _CFRunLoopAddSource(uVar8,uVar9);
      lVar12 = 0;
      __s8Dispatch0A13WorkItemFlagsVMa();
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar13,1,1,lVar12);
      puVar4 = &DAT_1009e0520;
      _swift_allocObject(&DAT_1009e0520,0x18,7);
      *(ulong *)(puVar4 + 0x10) = uVar8;
      local_110 = uVar8;
      if (DAT_100aafef8 != -1) {
        _swift_once(&DAT_100aafef8,FUN_10060f124);
      }
      _swift_beginAccess(&DAT_100b3a770,auStack_d8,0,0);
      uVar9 = DAT_100b3a778;
      pTVar10 = &TargetProtocolConformanceDescriptor_1008488bc;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488bc,uVar11);
      FUN_10060a75c(uVar9,lVar13,FUN_10061d190,puVar4,uVar11,pTVar10);
      _swift_release();
      _swift_release(puVar4);
      FUN_1006070b4(lVar13);
      while (uVar8 = uVar11, FUN_10061a0c8(uVar11,pTVar7), (uVar8 & 1) != 0) {
        _CFRunLoopRun();
      }
      _CFRunLoopRemoveSource(local_110,local_100,local_108);
      param_1 = local_f0;
      lVar12 = local_f8;
    }
    FUN_10061533c(lVar3);
    lVar13 = lVar3;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar3,1,lVar2);
    if ((int)lVar13 != 1) {
      lVar13 = lVar3;
      _swift_getEnumCaseMultiPayload(lVar3,lVar2);
      if ((int)lVar13 == 1) {
        _swift_willThrow();
      }
      else {
        (**(code **)(*(long *)(lVar12 + -8) + 0x20))(param_1,lVar3,lVar12);
      }
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061d114);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061d110);
  (*pcVar1)();
}

