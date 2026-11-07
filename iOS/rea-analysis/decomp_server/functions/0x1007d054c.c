// rea decompile_all
// name: FUN_1007d054c
// address: 0x1007d054c
// body: available
// range: 0x1007d054c-0x1007d0737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1007d054c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007d065c);
      (*pcVar1)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007d0660);
      (*pcVar1)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar2 = param_1;
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_dynamicCastObjCProtocolConditional();
    if (uVar2 != 0) {
LAB_1007d0638:
      _swift_unknownObjectRelease(param_1);
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    uVar3 = 0xd000000000000043;
    pcVar4 = "Down-casted Array element failed to match the target type\nExpected ";
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar2 = param_2;
    }
    _swift_bridgeObjectRetain(param_2);
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar2);
    _swift_bridgeObjectRelease(param_2);
    uVar2 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastObjCProtocolConditional();
    if (uVar2 != 0) goto LAB_1007d0638;
    __ss11_StringGutsV4growyySiF(0x55);
    uVar3 = 0xd000000000000046;
    pcVar4 = "NSArray element failed to match the Swift Array Element type\nExpected ";
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar4 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(&DAT_d000000000000018,0x80000001008db960);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  uVar2 = param_1;
  _swift_getObjectType(param_1);
  _swift_unknownObjectRelease(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(uVar2,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007d0738);
  (*pcVar1)();
}

