// rea decompile_all
// name: FUN_1000bb868
// address: 0x1000bb868
// body: available
// range: 0x1000bb868-0x1000bb94f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bb868(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long unaff_x20;
  undefined1 auStack_50 [16];
  long local_40;
  uint local_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar1 = 0x31;
  if (param_1 != 2) {
    uVar1 = 0x32;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x78) = 0xe100000000000000;
  *(ulong *)(unaff_x20 + 0x80) = (ulong)param_2;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  uVar6 = *(undefined1 *)(unaff_x20 + 0x90);
  *(undefined1 *)(unaff_x20 + 0x90) = 1;
  FUN_1000c2050(uVar2,uVar4,uVar3,uVar5,uVar6);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  uVar6 = *(undefined1 *)(unaff_x20 + 0xb8);
  *(undefined1 *)(unaff_x20 + 0xb8) = 0xff;
  FUN_1000c2050(uVar1,uVar4,uVar2,uVar3,uVar6);
  FUN_100401b14(0);
  local_40 = param_1;
  local_38 = param_2;
  FUN_1003fb48c(FUN_1000c2138,auStack_50,0xd00000000000009f,0x8000000100882d60,0xd000000000000039,
                0x8000000100883fd0,0x17c,0);
  return;
}

