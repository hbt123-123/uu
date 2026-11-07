// rea decompile_all
// name: FUN_100010764
// address: 0x100010764
// body: available
// range: 0x100010764-0x1000107b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100010764(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  long unaff_x21;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  bVar3 = (byte)param_3;
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  FUN_10003cbe8();
  uStack_30 = (undefined4)param_4;
  uStack_2c = (undefined4)((ulong)param_4 >> 0x20);
  uStack_28 = (undefined4)param_5;
  if (unaff_x21 == 0) {
    uStack_24 = (undefined1)((ulong)param_5 >> 0x20);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(byte *)(param_1 + 2) = bVar3 & 1;
    *(ulong *)(param_1 + 5) = CONCAT44(uStack_28,uStack_2c);
    *(ulong *)(param_1 + 3) = CONCAT44(uStack_30,uVar4);
    *(undefined1 *)(param_1 + 7) = uStack_24;
  }
  return;
}

