// rea decompile_all
// name: FUN_1002d8c04
// address: 0x1002d8c04
// body: available
// range: 0x1002d8c04-0x1002d8db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002d8c04(long param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  plVar8 = unaff_x20 + 2;
  lVar9 = *plVar8;
  if (*(long *)(lVar9 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar9);
    lVar6 = param_1;
    FUN_100280258();
    if ((param_2 & 1) != 0) {
      pbVar1 = (byte *)(*(long *)(lVar9 + 0x38) + lVar6 * 2);
      bVar2 = *pbVar1;
      bVar3 = pbVar1[1];
      _swift_bridgeObjectRelease(lVar9);
      if ((bVar3 & 1) != 0) {
        return 0;
      }
      if ((bVar2 & 1) == 0) {
        lVar9 = *plVar8;
        _swift_isUniquelyReferenced_nonNull_native(lVar9);
        lVar6 = *plVar8;
        FUN_1002ece30(0x100,param_1,lVar9);
        *plVar8 = lVar6;
        return 0;
      }
      lVar9 = param_1;
      FUN_1002dfba0(param_1,*unaff_x20);
      if (lVar9 != 0) {
        FUN_1002d905c(param_1);
        _swift_release();
        FUN_1002d91d0(lVar9);
        FUN_1002d8f90(param_1);
        _swift_release(lVar9);
        return 1;
      }
      pcVar7 = "esponding to task found.";
      uVar10 = 0x49;
      uVar5 = 0xd000000000000049;
      goto LAB_1002d8d60;
    }
    _swift_bridgeObjectRelease(lVar9);
  }
  pcVar7 = "Alamofire/RequestTaskMap.swift";
  uVar10 = 0x75;
  uVar5 = 0xd000000000000048;
LAB_1002d8d60:
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,uVar5,(ulong)pcVar7 | 0x8000000000000000,
             "Alamofire/RequestTaskMap.swift",0x1e,2,uVar10,0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002d8d70);
  (*pcVar4)();
}

