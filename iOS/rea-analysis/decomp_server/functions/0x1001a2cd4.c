// rea decompile_all
// name: FUN_1001a2cd4
// address: 0x1001a2cd4
// body: available
// range: 0x1001a2cd4-0x1001a2d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a2d8c to 0x1001a31b4 FUN_1001a31b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a2cd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_a8 [72];
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar7 = param_1[4];
  bVar5 = *(byte *)(param_1 + 5);
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(unaff_x20 + 0x28));
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyySuF(uVar7);
  uVar6 = (ulong)(bVar5 & 1);
  __ss6HasherV8_combineyys5UInt8VF(uVar6);
  __ss6HasherV9_finalizeSiyF();
  FUN_1001a31b4(param_1,uVar6);
  return;
}

