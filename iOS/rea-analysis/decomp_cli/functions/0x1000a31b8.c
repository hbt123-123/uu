// rea decompile_all
// name: FUN_1000a31b8
// address: 0x1000a31b8
// body: available
// range: 0x1000a31b8-0x1000a324f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a31b8(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 local_7f;
  undefined8 uStack_77;
  undefined8 local_6f;
  undefined8 uStack_67;
  undefined8 local_5f;
  undefined8 uStack_57;
  undefined8 local_4f;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x38);
  FUN_10007b098();
  _swift_allocError(&DAT_1000f9e40,param_1,0,0);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined8 *)((long)param_1 + 0x11) = uStack_77;
  *(undefined8 *)((long)param_1 + 9) = local_7f;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_67;
  *(undefined8 *)((long)param_1 + 0x19) = local_6f;
  param_1[10] = uStack_38;
  param_1[9] = CONCAT71(uStack_3f,uStack_40);
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_40,uStack_47);
  *(undefined8 *)((long)param_1 + 0x39) = local_4f;
  *(undefined8 *)((long)param_1 + 0x31) = uStack_57;
  *(undefined8 *)((long)param_1 + 0x29) = local_5f;
  *(undefined1 *)(param_1 + 0xb) = 0;
  _swift_willThrow();
  _swift_bridgeObjectRetain(uVar2);
  return;
}

