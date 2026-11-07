// rea decompile_all
// name: FUN_100416e84
// address: 0x100416e84
// body: available
// range: 0x100416e84-0x100416f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100416e84(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xb06c);
  }
  *param_1 = puVar1;
  puVar1[4] = unaff_x20;
  if ((*(ulong *)(unaff_x20 + 0x30) >> 0x3d & 1) == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    FUN_10012ac6c(uVar2,uVar5,uVar4,uVar3);
  }
  else {
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0xc000000000000000;
    uVar5 = 0xe000000000000000;
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar4;
  puVar1[3] = uVar3;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = FUN_100416f28;
  return auVar6;
}

