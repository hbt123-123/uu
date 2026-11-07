// rea decompile_all
// name: FUN_100392d54
// address: 0x100392d54
// body: available
// range: 0x100392d54-0x100392ef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100392d54(long param_1,byte *param_2,byte *param_3,ulong param_4,byte *param_5)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (param_4 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar4 = operator_new(0xf4);
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0x13] = 0;
    puVar4[0x12] = 0;
    puVar4[0x15] = 0;
    puVar4[0x14] = 0;
    puVar4[0x17] = 0;
    puVar4[0x16] = 0;
    puVar4[0x19] = 0;
    puVar4[0x18] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1c] = 0;
    *(undefined4 *)(puVar4 + 0x1e) = 0;
    FUN_10037c000(param_1 + 0x18,0x80,puVar4);
  }
  uVar2 = *(uint *)(param_1 + 4);
  uVar6 = (ulong)uVar2;
  *param_5 = (byte)uVar2;
  pbVar1 = param_5 + 1;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_5 + 9) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_5 + 1) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  if ((uVar2 & 0xff) != 0) {
    do {
      param_3 = param_3 + -1;
      param_2 = param_2 + -1;
      uVar2 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar2;
      pbVar1[uVar6 & 0xff] = *param_2 ^ *param_3;
      param_4 = param_4 - 1;
      if ((uVar2 & 0xff) == 0) break;
    } while (param_4 != 0);
    if ((uVar2 & 0xff) != 0) goto LAB_100392e38;
    FUN_10037c0e0(pbVar1,pbVar1,uVar7);
  }
  uVar6 = 0;
LAB_100392e38:
  if (param_4 < 0x10) {
    bVar5 = (byte)uVar6;
  }
  else {
    do {
      if (((uint)uVar6 & 0xff) < 0x10) {
        uVar6 = uVar6 & 0xff;
        do {
          *(ulong *)(pbVar1 + uVar6) =
               *(ulong *)(param_2 + (uVar6 - 0x10)) ^ *(ulong *)(param_3 + (uVar6 - 0x10));
          bVar3 = uVar6 < 8;
          uVar6 = uVar6 + 8;
        } while (bVar3);
      }
      param_4 = param_4 - 0x10;
      param_3 = param_3 + -0x10;
      param_2 = param_2 + -0x10;
      FUN_10037c0e0(pbVar1,pbVar1,uVar7);
      uVar6 = 0;
      bVar5 = 0;
    } while (0xf < param_4);
  }
  if (param_4 != 0) {
    bVar5 = 0x10;
    do {
      param_2 = param_2 + -1;
      param_3 = param_3 + -1;
      bVar5 = bVar5 - 1;
      pbVar1[bVar5] = *param_2 ^ *param_3;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  *param_5 = bVar5;
  return;
}

