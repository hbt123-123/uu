// rea decompile_all
// name: FUN_10026efe4
// address: 0x10026efe4
// body: available
// range: 0x10026efe4-0x10026f06f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026efe4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = param_1[4];
  uVar7 = param_1[7];
  uVar6 = param_1[6];
  *(undefined8 *)(unaff_x20 + 0x38) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_1[8];
  uVar7 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x18) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x10) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar5;
  _swift_release(uVar1);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  return;
}

