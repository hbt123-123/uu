// rea decompile_all
// name: FUN_10006b178
// address: 0x10006b178
// body: available
// range: 0x10006b178-0x10006b283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10006b178(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
             ulong param_6,undefined8 param_7)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_1000772e8(param_6,param_7,2,param_1,param_2,param_3);
  uVar6 = param_4 & 0xffffffffffff;
  if ((param_5 & 0x2000000000000000) != 0) {
    uVar6 = param_5 >> 0x38 & 0xf;
  }
  if ((uVar6 != 0) && (*(long *)(param_6 + 0x10) != 0)) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar3 = param_6;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar3 & 1) == 0) {
        FUN_100080f28();
      }
      if (*(ulong *)(param_6 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10006b284);
        (*pcVar2)();
      }
      lVar1 = param_6 + lVar5;
      uVar4 = *(undefined8 *)(lVar1 + 0xa8);
      *(ulong *)(lVar1 + 0xa0) = param_4;
      *(ulong *)(lVar1 + 0xa8) = param_5;
      _swift_bridgeObjectRetain(param_5);
      _swift_bridgeObjectRelease(uVar4);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xd0;
    } while (uVar6 < *(ulong *)(param_6 + 0x10));
  }
  auVar7._8_8_ = param_7;
  auVar7._0_8_ = param_6;
  return auVar7;
}

