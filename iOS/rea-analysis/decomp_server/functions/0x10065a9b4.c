// rea decompile_all
// name: FUN_10065a9b4
// address: 0x10065a9b4
// body: available
// range: 0x10065a9b4-0x10065aa8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10065a9b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,ulong *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar4 = *(undefined1 *)(param_4 + 2);
  uVar7 = param_4[3];
  uVar8 = *param_6;
  uVar3 = param_6[1];
  uVar5 = param_6[2];
  uVar9 = param_6[3];
  if ((char)param_6[4] == '\x01') {
    _swift_bridgeObjectRetain();
    FUN_10065eb84(uVar8,uVar3,(char)uVar5,uVar9,0);
    if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10065aa28);
      (*pcVar6)();
    }
  }
  else {
    _swift_bridgeObjectRetain();
    FUN_100642874(uVar8,uVar3,(char)uVar5,uVar9,0);
  }
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = uVar4;
  param_1[3] = uVar7;
  return ZEXT816(1) << 0x40;
}

