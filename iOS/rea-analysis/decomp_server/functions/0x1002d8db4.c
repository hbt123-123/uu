// rea decompile_all
// name: FUN_1002d8db4
// address: 0x1002d8db4
// body: available
// range: 0x1002d8db4-0x1002d8f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

byte FUN_1002d8db4(long param_1,ulong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  plVar8 = unaff_x20 + 2;
  lVar9 = *plVar8;
  if (*(long *)(lVar9 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar9);
    lVar7 = param_1;
    FUN_100280258();
    if ((param_2 & 1) != 0) {
      pbVar2 = (byte *)(*(long *)(lVar9 + 0x38) + lVar7 * 2);
      bVar3 = *pbVar2;
      bVar4 = pbVar2[1];
      _swift_bridgeObjectRelease(lVar9);
      if ((bVar3 & 1) == 0) {
        if ((bVar4 & 1) == 0) {
          lVar9 = *plVar8;
          _swift_isUniquelyReferenced_nonNull_native(lVar9);
          lVar7 = *plVar8;
          FUN_1002ece30(1,param_1,lVar9);
          *plVar8 = lVar7;
        }
        else {
          lVar9 = param_1;
          FUN_1002dfba0(param_1,*unaff_x20);
          if (lVar9 == 0) {
            pcVar1 = "RequestTaskMap consistency error: no request corresponding to task found.";
            uVar10 = 0x49;
            uVar6 = 0xd000000000000049;
            goto LAB_1002d8f80;
          }
          FUN_1002d905c(param_1);
          _swift_release();
          FUN_1002d91d0(lVar9);
          FUN_1002d8f90(param_1);
          _swift_release(lVar9);
        }
        return bVar4;
      }
      pcVar1 = "RequestTaskMap consistency error: duplicate completionReceivedForTask call.";
      uVar10 = 0x89;
      uVar6 = 0xd00000000000004b;
      goto LAB_1002d8f80;
    }
    _swift_bridgeObjectRelease(lVar9);
  }
  pcVar1 = "RequestTaskMap consistency error: no events corresponding to task found.";
  uVar10 = 0x85;
  uVar6 = 0xd000000000000048;
LAB_1002d8f80:
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,uVar6,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
             "Alamofire/RequestTaskMap.swift",0x1e,2,uVar10,0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1002d8f90);
  (*pcVar5)();
}

