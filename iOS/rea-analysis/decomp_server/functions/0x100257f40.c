// rea decompile_all
// name: FUN_100257f40
// address: 0x100257f40
// body: available
// range: 0x100257f40-0x1002580e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100257f40(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  
  puVar3 = unaff_x20 + 3;
  uVar5 = *unaff_x20;
  puVar2 = puVar3;
  _swift_weakLoadStrong();
  if (puVar2 == (undefined8 *)0x0) {
    __ss11_StringGutsV4growyySiF(0x26);
    _swift_bridgeObjectRelease(0xe000000000000000);
    uVar4 = 0;
    __ss9_typeName_9qualifiedSSypXp_SbtF(uVar5,0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar4);
    __sSS6appendyySSF(0xd00000000000001e,0x80000001008a7de0);
    uVar5 = 0x61;
  }
  else {
    _swift_release();
    _swift_weakLoadStrong();
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100257fb8);
      (*pcVar1)();
    }
    FUN_100258820();
    _swift_release(puVar3);
    if (param_1 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x27);
    _swift_bridgeObjectRelease(0xe000000000000000);
    uVar4 = 0;
    __ss9_typeName_9qualifiedSSypXp_SbtF(uVar5,0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar4);
    __sSS6appendyySSF(0xd00000000000001f,0x80000001008a7e00);
    uVar5 = 100;
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0x5b726f727245,0xe600000000000000,"FlerkenSDKCore/LogManager.swift"
             ,0x1f,2,uVar5,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002580e4);
  (*pcVar1)();
}

