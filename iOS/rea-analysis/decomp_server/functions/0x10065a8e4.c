// rea decompile_all
// name: FUN_10065a8e4
// address: 0x10065a8e4
// body: available
// range: 0x10065a8e4-0x10065a9b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065a8e4(undefined8 *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *unaff_x20;
  ulong uVar9;
  
  uVar8 = *param_2;
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  uVar9 = param_2[3];
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar4 = *(undefined1 *)(unaff_x20 + 2);
  uVar7 = unaff_x20[3];
  if ((char)param_2[4] == '\x01') {
    _swift_bridgeObjectRetain();
    FUN_10065eb84(uVar8,uVar2,(char)uVar5,uVar9,0);
    if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10065a958);
      (*pcVar6)();
    }
  }
  else {
    _swift_bridgeObjectRetain();
    FUN_100642874(uVar8,uVar2,(char)uVar5,uVar9,0);
  }
  param_1[1] = uVar3;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = uVar4;
  param_1[3] = uVar7;
  return;
}

