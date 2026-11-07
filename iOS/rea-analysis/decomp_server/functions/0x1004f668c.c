// rea decompile_all
// name: FUN_1004f668c
// address: 0x1004f668c
// body: available
// range: 0x1004f668c-0x1004f6773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004f668c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 *puVar4;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  puVar3 = (undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x28) = 0xc000000000000000;
  *puVar3 = 0;
  *(undefined1 *)(unaff_x20 + 0x48) = 0;
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar4,auStack_70,1,0);
  *puVar4 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  _swift_beginAccess(param_1 + 0x20,auStack_b8,0,0);
  FUN_1004f75cc(param_1 + 0x20,auStack_a0);
  _swift_bridgeObjectRetain(uVar2);
  _swift_release(param_1);
  _swift_beginAccess(puVar3,auStack_d0,0x21,0);
  FUN_1004f99e8(auStack_a0,puVar3);
  _swift_endAccess(auStack_d0);
  return;
}

