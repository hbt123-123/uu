// rea decompile_all
// name: FUN_100257df4
// address: 0x100257df4
// body: available
// range: 0x100257df4-0x100257f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100257df4(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 local_50;
  
  puVar3 = unaff_x20 + 2;
  uVar5 = *unaff_x20;
  puVar2 = puVar3;
  _swift_weakLoadStrong();
  if (puVar2 == (undefined8 *)0x0) {
    local_58 = 0;
    local_50 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2d);
    _swift_bridgeObjectRelease(local_50);
    local_58 = 0x5b726f727245;
    local_50 = 0xe600000000000000;
    uVar4 = 0;
    __ss9_typeName_9qualifiedSSypXp_SbtF(uVar5,0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar4);
    __sSS6appendyySSF(0xd000000000000025,0x80000001008a7e20);
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,local_58,local_50,"FlerkenSDKCore/LogManager.swift",0x1f,2,0x5a,0
              );
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100257f40);
    (*pcVar1)();
  }
  _swift_release();
  _swift_weakLoadStrong();
  if (puVar3 != (undefined8 *)0x0) {
    _swift_beginAccess(unaff_x20 + 6,&local_58,0,0);
    uVar5 = unaff_x20[6];
    _swift_bridgeObjectRetain(uVar5);
    FUN_10025b99c();
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100257e98);
  (*pcVar1)();
}

