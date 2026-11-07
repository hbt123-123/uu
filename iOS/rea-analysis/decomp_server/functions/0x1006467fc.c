// rea decompile_all
// name: FUN_1006467fc
// address: 0x1006467fc
// body: available
// range: 0x1006467fc-0x100646897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006467fc(undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = *(undefined1 *)(param_2 + 2);
  uVar6 = param_2[3];
  uVar5 = *param_3;
  uVar1 = param_3[1];
  uVar7 = param_3[3];
  uVar3 = param_3[2];
  uVar9 = param_2[1];
  uVar8 = *param_2;
  _swift_bridgeObjectRetain(uVar6);
  FUN_10065eb84(uVar5,uVar1,(char)uVar3,uVar7,0);
  if ((uVar5 & 1) == 0) {
    param_1[1] = uVar9;
    *param_1 = uVar8;
    *(undefined1 *)(param_1 + 2) = uVar2;
    param_1[3] = uVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100646898);
  (*pcVar4)();
}

