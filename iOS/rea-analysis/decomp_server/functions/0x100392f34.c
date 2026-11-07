// rea decompile_all
// name: FUN_100392f34
// address: 0x100392f34
// body: available
// range: 0x100392f34-0x100393067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100392f34(byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,long param_5,
                  uint *param_6)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  
  uVar7 = *param_6;
  uVar3 = param_3;
  pbVar5 = param_2;
  pbVar6 = param_1;
  if (uVar7 != 0 && param_3 != 0) {
    do {
      param_1 = pbVar6 + 1;
      bVar1 = *(byte *)(param_5 + (ulong)uVar7) ^ *pbVar6;
      *(byte *)(param_5 + (ulong)uVar7) = bVar1;
      param_2 = pbVar5 + 1;
      *pbVar5 = bVar1;
      param_3 = uVar3 - 1;
      uVar7 = uVar7 + 1 & 0xf;
      if (uVar7 == 0) break;
      bVar2 = uVar3 != 1;
      uVar3 = param_3;
      pbVar5 = param_2;
      pbVar6 = param_1;
    } while (bVar2);
  }
  for (; 0xf < param_3; param_3 = param_3 - 0x10) {
    FUN_10037c080(param_5,param_5,param_4);
    if (uVar7 < 0x10) {
      uVar3 = (ulong)uVar7;
      do {
        uVar4 = *(ulong *)(param_5 + uVar3) ^ *(ulong *)(param_1 + uVar3);
        *(ulong *)(param_5 + uVar3) = uVar4;
        *(ulong *)(param_2 + uVar3) = uVar4;
        bVar2 = uVar3 < 8;
        uVar3 = uVar3 + 8;
      } while (bVar2);
    }
    uVar7 = 0;
    param_2 = param_2 + 0x10;
    param_1 = param_1 + 0x10;
  }
  if (param_3 != 0) {
    FUN_10037c080(param_5,param_5,param_4);
    do {
      bVar1 = *(byte *)(param_5 + (ulong)uVar7) ^ param_1[uVar7];
      *(byte *)(param_5 + (ulong)uVar7) = bVar1;
      param_2[uVar7] = bVar1;
      uVar7 = uVar7 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  *param_6 = uVar7;
  return;
}

