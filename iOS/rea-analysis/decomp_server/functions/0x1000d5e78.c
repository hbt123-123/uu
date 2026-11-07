// rea decompile_all
// name: FUN_1000d5e78
// address: 0x1000d5e78
// body: available
// range: 0x1000d5e78-0x1000d6183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d6164 to 0x1000d5c5c FUN_1000d5c5c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d5e78(ID param_1)

{
  code *pcVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  IVar2 = _objc_msgSend(param_1,"URLsForDirectory:inDomains:",0xc,1);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar2,lVar3);
  lVar8 = *(long *)(IVar2 + 0x10);
  lVar4 = 0;
  FUN_100033f0c(0,lVar8,1,PTR___swiftEmptyArrayStorage_100995ea0);
  if (*(long *)(IVar2 + 0x10) == 0) {
    _swift_bridgeObjectRelease(IVar2);
    if (lVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d6024);
      (*pcVar1)();
    }
  }
  else {
    if ((long)((*(ulong *)(lVar4 + 0x18) >> 1) - *(long *)(lVar4 + 0x10)) < lVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d6170);
      (*pcVar1)();
    }
    uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar4 + uVar7 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * *(long *)(lVar4 + 0x10),
               IVar2 + uVar7,lVar8,lVar3);
    _swift_bridgeObjectRelease(IVar2);
    if (lVar8 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),lVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d617c);
        (*pcVar1)();
      }
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + lVar8;
    }
  }
  IVar2 = _objc_msgSend(param_1,"URLsForDirectory:inDomains:",9,1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar2,lVar3);
  lVar8 = *(long *)(IVar2 + 0x10);
  uVar6 = *(ulong *)(lVar4 + 0x10);
  uVar7 = uVar6 + lVar8;
  if (SCARRY8(uVar6,lVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d6028);
    (*pcVar1)();
  }
  lVar5 = lVar8;
  if ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < (long)uVar7) {
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    lVar5 = 1;
    FUN_100033f0c(1,uVar6,1,lVar4);
    uVar6 = *(ulong *)(lVar5 + 0x10);
    lVar4 = lVar5;
    lVar5 = *(long *)(IVar2 + 0x10);
  }
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(IVar2);
    if (lVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d6118);
      (*pcVar1)();
    }
  }
  else {
    if ((long)((*(ulong *)(lVar4 + 0x18) >> 1) - uVar6) < lVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d6174);
      (*pcVar1)();
    }
    uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar4 + uVar7 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * uVar6,IVar2 + uVar7,lVar8,
               lVar3);
    _swift_bridgeObjectRelease(IVar2);
    if (lVar8 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),lVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d6180);
        (*pcVar1)();
      }
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + lVar8;
    }
  }
  IVar2 = _objc_msgSend(param_1,"URLsForDirectory:inDomains:",0xf,1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar2,lVar3);
  lVar8 = *(long *)(IVar2 + 0x10);
  uVar6 = *(ulong *)(lVar4 + 0x10);
  uVar7 = uVar6 + lVar8;
  if (SCARRY8(uVar6,lVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d611c);
    (*pcVar1)();
  }
  lVar5 = lVar8;
  if ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < (long)uVar7) {
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    lVar5 = 1;
    FUN_100033f0c(1,uVar6,1,lVar4);
    uVar6 = *(ulong *)(lVar5 + 0x10);
    lVar4 = lVar5;
    lVar5 = *(long *)(IVar2 + 0x10);
  }
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(IVar2);
    if (lVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d616c);
      (*pcVar1)();
    }
  }
  else {
    if ((long)((*(ulong *)(lVar4 + 0x18) >> 1) - uVar6) < lVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d6178);
      (*pcVar1)();
    }
    uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar4 + uVar7 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * uVar6,IVar2 + uVar7,lVar8,
               lVar3);
    _swift_bridgeObjectRelease(IVar2);
    if (lVar8 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),lVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d6184);
        (*pcVar1)();
      }
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + lVar8;
    }
  }
  FUN_1000d5c5c(lVar4);
  return;
}

