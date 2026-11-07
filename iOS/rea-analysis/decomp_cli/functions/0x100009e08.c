// rea decompile_all
// name: FUN_100009e08
// address: 0x100009e08
// body: available
// range: 0x100009e08-0x100009eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100009e08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar3 = *unaff_x20;
  uVar7 = 0xed00007375746174;
  uVar4 = 0x536b726f7774656e;
  if (bVar3 != 4) {
    uVar7 = 0xe900000000000072;
    uVar4 = 0x6f7272457473616c;
  }
  uVar2 = 0xed00007375746174;
  uVar5 = 0x5365636976726573;
  if (bVar3 != 3) {
    uVar2 = uVar7;
    uVar5 = uVar4;
  }
  uVar7 = 0xe90000000000006e;
  uVar4 = 0x6f6973726556736f;
  if (bVar3 != 1) {
    uVar7 = 0xea00000000006e49;
    uVar4 = 0x646567676f4c7369;
  }
  uVar1 = 0xea00000000006e6f;
  uVar6 = 0x6973726556707061;
  if (bVar3 != 0) {
    uVar1 = uVar7;
    uVar6 = uVar4;
  }
  if (bVar3 < 3) {
    uVar2 = uVar1;
    uVar5 = uVar6;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = uVar5;
  return auVar8;
}

